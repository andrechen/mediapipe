# Greeting from andre :-)

It took me almost 3 weeks to make face mesh build on Visual Studio before I can test and debug easily. So I'd like to share this to anyone who is surfering bazel build and trying to port to Visual Studio like I did. Would be glad if this saves your precious time. Many thanks to mediapipe team for sharing this fantastic work.

Before open up Visual Studio 2019 and make the build, **make camera accessible** and install PowerShell if you haven't yet. Also note that all demos should be launched in Visual Studio IDE, for you can easily debug and learn. Have fun!

**Now you know everything I know.**

### History
 - 2022/04/17 init commit.
 - 2022/05/08 add **x86**(32-bit) target platform, but with few problems... (always prefer **x64** versions)
   - **[Win32 | Debug]** Application crashes after closing. Move to other opencv liibrary may fix this. (**cv::VideoCapture**)
   - **[Win32 | Release]** A suspicious Visual Studio 2019 (ver.16.11.13) bug is found when linking **tensorflow-static** library. Temporary set **tensorflow-lite** optimization level to **Disabled(/Od)** to work around this. Set **C/C++ | Optimization** back to **/O2**, the error reads like...
      ```
      1>------ Build started: Project: face_detection, Configuration: Release Win32 ------
      1> Generating code
      1>D:\git\mediapipe\third_party\tensorflow\third_party\gemmlowp\internal\output.h(176): fatal error C1001: Internal compiler error.
      1>(compiler file 'D:\a\_work\1\s\src\vctools\Compiler\Utc\src\p2\main.c', line 213)
      1> To work around this problem, try simplifying or changing the program near the locations listed above.
      1>If possible please provide a repro here: https://developercommunity.visualstudio.com
      1>Please choose the Technical Support command on the Visual C++
      1> Help menu, or open the Technical Support help file for more information
      1>
      1>Done building project "face_detection.vcxproj" -- FAILED.
      ``` 
 - 2022/05/10 Add **live_demo**, all-in-one demo. Also, mediapipe.lib now become a monolithic static library!!!
 - 2022/05/29 Add **face_effect**, **selfie_segmentation** and face_geometry test module in **face_mesh**
 - 2022/06/08 Tested on Visual Studio 2022 version 17.2.3
 - 2022/07/16 Merge v0.8.10.2
 - 2022/07/17 **face_effect** example now can export **Wavefront .obj** files (press 'o' key)
 - 2022/09/12 Merge v0.8.11
 - 2022/10/08 Merged from upstream
 - 2023/04/20 add _SILENCE_NONFLOATING_COMPLEX_DEPRECATION_WARNING CPP in tensorflow-lite to fix build break on Visual Studio 2022 v17.5.4. Also if you had had enough **C1001: Internal compiler error**, turn off CPU overclocking may help.


