//
// taken from ./mediapipe/examples/desktop/demo_run_graph_main.cc
// program entry point.
//

// Copyright 2019 The MediaPipe Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// An example of sending OpenCV webcam frames into a MediaPipe graph.
#include <cstdlib>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "mediapipe/framework/calculator_framework.h"
#include "mediapipe/framework/formats/image_frame.h"
#include "mediapipe/framework/formats/image_frame_opencv.h"
//#include "mediapipe/framework/formats/landmark.pb.h"
#include "mediapipe/framework/port/file_helpers.h"
#include "mediapipe/framework/port/opencv_highgui_inc.h"
#include "mediapipe/framework/port/opencv_imgproc_inc.h"
#include "mediapipe/framework/port/opencv_video_inc.h"
#include "mediapipe/framework/port/parse_text_proto.h"
#include "mediapipe/framework/port/status.h"

constexpr char const* kWindowName = "MediaPipe";

constexpr char const* kInputStream = "input_video";
constexpr char const* kUserInput = "user_input";
constexpr char const* kOutputStream = "output_video";

ABSL_FLAG(std::string, input_video_path, "",
          "Full path of video to load. "
          "If not provided, attempt to use a webcam.");
ABSL_FLAG(std::string, output_video_path, "",
          "Full path of where to save result (.mp4 only). "
          "If not provided, show result in a window.");

void mouse_event(int event, int x, int y, int flags, void* user_data) {
  if (user_data) {
    auto& mouse = ((UserInput*) user_data)->mouse;
    mouse.event = event;
    mouse.flags = flags;
    mouse.x = x;
    mouse.y = y;
  }
}

absl::Status RunMPPGraph() {
  LOG(INFO) << "Initialize the calculator graph.";
  mediapipe::CalculatorGraph graph;
  MP_RETURN_IF_ERROR(init_calculator_graph(graph));

  LOG(INFO) << "Initialize the camera or load the video.";
  cv::VideoCapture capture;
  const bool load_video = !absl::GetFlag(FLAGS_input_video_path).empty();
  if (load_video) {
    capture.open(absl::GetFlag(FLAGS_input_video_path));
  } else {
    // realsense seems have RGB camera in #1
    cv::Mat test_frame;
    for (int i=0; i<3; ++i) {
      if (capture.open(i)) {
        capture >> test_frame;
        if (!test_frame.empty() && CV_8UC3==test_frame.type()) {
          capture.release(); // reopen, since we had grab one frame...
          capture.open(i);
          break;
        } else {
          capture.release();
        }
      }
    }
  }
  RET_CHECK(capture.isOpened());

  cv::VideoWriter writer;
  const bool save_video = !absl::GetFlag(FLAGS_output_video_path).empty();
  if (!save_video) {
    cv::namedWindow(kWindowName, /*flags=WINDOW_AUTOSIZE*/ 1);
#if ((CV_MAJOR_VERSION*10+CV_MINOR_VERSION) >= 32)
    capture.set(cv::CAP_PROP_FRAME_WIDTH, 1280);
    capture.set(cv::CAP_PROP_FRAME_HEIGHT, 720);
    capture.set(cv::CAP_PROP_FPS, 30);
#endif
  }

  LOG(INFO) << "Start running the calculator graph.";
  ASSIGN_OR_RETURN(mediapipe::OutputStreamPoller poller,
                   graph.AddOutputStreamPoller(kOutputStream));
  MP_RETURN_IF_ERROR(graph.StartRun({}));

  LOG(INFO) << "Start grabbing and processing frames.";

  bool const process_key_input = graph.HasInputStream(kUserInput);
  UserInput user_input;
  if (process_key_input) {
    cv::setMouseCallback(kWindowName, mouse_event, &user_input);
  }

  for (auto const start_time=std::chrono::system_clock::now();
       user_input.wait_key!=27; user_input.wait_key=cv::waitKeyEx(1)) {
    // close window after wait key
    if (cv::getWindowProperty(kWindowName, cv::WND_PROP_VISIBLE)<1.0) {
      break;
    }

    // Capture opencv camera or video frame.
    cv::Mat camera_frame_raw;
    capture >> camera_frame_raw;
    if (!camera_frame_raw.empty()) {
      ++user_input.frame_id;
    } else {
      if (!load_video) {
        LOG(INFO) << "Ignore empty frames from camera.";
        continue;
      }
      LOG(INFO) << "Empty frame, end of video reached.";
      break;
    }
    cv::Mat camera_frame;
    cv::cvtColor(camera_frame_raw, camera_frame, cv::COLOR_BGR2RGB);
    if (!load_video) {
      cv::flip(camera_frame, camera_frame, /*flipcode=HORIZONTAL*/ 1);
    }

    // timestamp
    mediapipe::Timestamp const timestamp(get_elapsed_time_microseconds(start_time));

    // process key input
    if (process_key_input) {
      graph.AddPacketToInputStream(kUserInput, mediapipe::MakePacket<UserInput>(user_input).At(timestamp));

      // reset
      user_input.mouse.event = 0;
      user_input.mouse.flags = 0;
    }

    // Wrap Mat into an ImageFrame.
    auto input_frame = absl::make_unique<mediapipe::ImageFrame>(
        mediapipe::ImageFormat::SRGB, camera_frame.cols, camera_frame.rows,
        mediapipe::ImageFrame::kDefaultAlignmentBoundary);
    cv::Mat input_frame_mat = mediapipe::formats::MatView(input_frame.get());
    camera_frame.copyTo(input_frame_mat);

    // Send image packet into the graph.
    MP_RETURN_IF_ERROR(graph.AddPacketToInputStream(
        kInputStream, mediapipe::Adopt(input_frame.release()).At(timestamp)));

    // Get the graph result packet, or stop if that fails.
    mediapipe::Packet packet;
    if (poller.Next(&packet)) {
      auto& output_frame = packet.Get<mediapipe::ImageFrame>();

      // Convert back to opencv for display or saving.
      cv::Mat output_frame_mat = mediapipe::formats::MatView(&output_frame);
      cv::cvtColor(output_frame_mat, output_frame_mat, cv::COLOR_RGB2BGR);
      if (save_video) {
        if (!writer.isOpened()) {
          LOG(INFO) << "Prepare video writer.";
          writer.open(absl::GetFlag(FLAGS_output_video_path),
                      mediapipe::fourcc('a', 'v', 'c', '1'),  // .mp4
                      capture.get(cv::CAP_PROP_FPS), output_frame_mat.size());
          RET_CHECK(writer.isOpened());
        }
        writer.write(output_frame_mat);
      } else {
        if (0x03==user_input.wait_key) { // capture: Ctrl+C
          cv::imwrite("screen_shot.jpg", output_frame_mat);
        }

        cv::imshow(kWindowName, output_frame_mat);
      }
    } else {
      break;
    }
  }

  LOG(INFO) << "Shutting down...";
  cv::destroyAllWindows();
  if (writer.isOpened()) writer.release();
  MP_RETURN_IF_ERROR(graph.CloseAllInputStreams());
  return graph.WaitUntilDone();
}

int main(int argc, char** argv) {
  google::InitGoogleLogging(argv[0]);

  // workaround tflite model path
  if (resource_root) {
    std::vector<char*> argvv(argc);
    bool find_resource_root = false;
    char resource_root_dir[128];
    sprintf(resource_root_dir, "--resource_root_dir=%s", resource_root);
    
    for (int i=0; i<argc; ++i) {
      char* c = argvv[i] = argv[i];
      if (!find_resource_root) {
        if ('-'==*c && '-'==*++c) {
          ++c;
        }

        if (0==memcmp(c, "resource_root_dir=", 18)) {
          std::cout << "overwrite resource root: \"" << c+18 << "\" to \"" << resource_root << "\"\n";
          argvv[i] = resource_root_dir;
          find_resource_root = true;
        }
      }
    }

    if (!find_resource_root) {
      argvv.push_back(resource_root_dir);
    }
    absl::ParseCommandLine((int)argvv.size(), argvv.data());
  } else {
    absl::ParseCommandLine(argc, argv);
  }

  absl::Status run_status = RunMPPGraph();
  if (!run_status.ok()) {
    std::cout << "Failed to run the graph: " << run_status.message() << "\n";
    system("pause");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
