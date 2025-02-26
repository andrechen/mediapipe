# GPU executor library for data-parallel kernel launches and cross-platform
# HPC-library APIs.
#
# Throughout this file, all targets are built with the standard crosstool and
# do not link against restricted binary blobs.

# TODO(rdzhabarov): XLA should have its own tensorflow independent rule.
load("//tensorflow/core/platform:build_config_root.bzl", "if_static")
load("//tensorflow:tensorflow.bzl", "tf_cuda_library")
load("//tensorflow/core/platform:rules_cc.bzl", "cc_library")
load("//tensorflow/core/platform:build_config.bzl", "tf_proto_library")

package(
    default_visibility = [
        "//tensorflow:__subpackages__",
    ],
    licenses = ["notice"],
)

# The stream_executor_headers target does not prescribe an implementation.
# TODO(rdzhabarov): Keep populating this based on the tensorflow/stream_executor:stream_executor_headers.
cc_library(
    name = "stream_executor_headers",
    textual_hdrs = [
        "blas.h",
        "device_description.h",
        "device_memory.h",
        "device_memory_allocator.h",
        "device_options.h",
        "dnn.h",
        "event.h",
        "executor_cache.h",
        "fft.h",
        "gpu_launch_dim.h",
        "kernel.h",
        "kernel_cache_config.h",
        "kernel_spec.h",
        "launch_dim.h",
        "module_spec.h",
        "multi_platform_manager.h",
        "platform.h",
        "plugin.h",
        "plugin_registry.h",
        "rng.h",
        "stream.h",
        "stream_executor.h",
        "stream_executor_internal.h",
        "stream_executor_pimpl.h",
        "temporary_device_memory.h",
        "temporary_memory_manager.h",
        "timer.h",
        "trace_listener.h",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":allocator_stats",
        ":dnn_proto_cc",
        ":host_or_device_scalar",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
        "@com_google_absl//absl/types:span",
    ],
)

cc_library(
    name = "launch_dim",
    hdrs = [
        "gpu_launch_dim.h",
        "launch_dim.h",
    ],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "trace_listener",
    hdrs = [
        "trace_listener.h",
    ],
    deps = [
        ":device_memory",
        ":kernel",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "device_description",
    srcs = ["device_description.cc"],
    hdrs = ["device_description.h"],
    deps = [
        ":launch_dim",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "kernel_spec",
    srcs = ["kernel_spec.cc"],
    hdrs = ["kernel_spec.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "kernel_cache_config",
    hdrs = ["kernel_cache_config.h"],
)

cc_library(
    name = "module_spec",
    hdrs = ["module_spec.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
    ],
)

cc_library(
    name = "allocator_stats",
    srcs = [
        "allocator_stats.cc",
    ],
    hdrs = ["allocator_stats.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/types:optional",
    ],
)

cc_library(
    name = "data_type",
    hdrs = ["data_type.h"],
    deps = [
        ":dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor/platform",
    ],
)

cc_library(
    name = "device_memory",
    hdrs = ["device_memory.h"],
    deps = ["//tensorflow/compiler/xla/stream_executor/platform"],
)

cc_library(
    name = "device_options",
    hdrs = ["device_options.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
    ],
)

tf_proto_library(
    name = "dnn_proto",
    srcs = ["dnn.proto"],
    cc_api_version = 2,
    make_default_target_header_only = True,
)

cc_library(
    name = "fft",
    hdrs = ["fft.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
    ],
)

cc_library(
    name = "platform",
    srcs = ["platform.cc"],
    hdrs = ["platform.h"],
    deps = [
        ":dnn_proto_cc",
        ":plugin",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "plugin",
    srcs = ["plugin.cc"],
    hdrs = ["plugin.h"],
)

cc_library(
    name = "rng",
    srcs = ["rng.cc"],
    hdrs = ["rng.h"],
    deps = [
        "//tensorflow/compiler/xla/stream_executor/platform",
    ],
)

cc_library(
    name = "executor_cache",
    srcs = [
        "device_description.h",
        "device_memory.h",
        "device_options.h",
        "event.h",
        "executor_cache.cc",
        "launch_dim.h",
        "plugin.h",
        "plugin_registry.h",
        "rng.h",
        "stream_executor_pimpl.h",
        "temporary_device_memory.h",
        "temporary_memory_manager.h",
    ],
    hdrs = [
        "blas.h",
        "executor_cache.h",
        "fft.h",
        "kernel.h",
        "kernel_cache_config.h",
        "kernel_spec.h",
        "platform.h",
        "stream.h",
        "stream_executor_internal.h",
        "trace_listener.h",
    ],
    deps = [
        ":allocator_stats",
        ":data_type",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor:device_description",
        "//tensorflow/compiler/xla/stream_executor:device_memory",
        "//tensorflow/compiler/xla/stream_executor:device_options",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor:fft",
        "//tensorflow/compiler/xla/stream_executor:kernel_cache_config",
        "//tensorflow/compiler/xla/stream_executor:kernel_spec",
        "//tensorflow/compiler/xla/stream_executor:launch_dim",
        "//tensorflow/compiler/xla/stream_executor:plugin",
        "//tensorflow/compiler/xla/stream_executor:rng",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
    ],
)

cc_library(
    name = "multi_platform_manager",
    srcs = ["multi_platform_manager.cc"],
    hdrs = ["multi_platform_manager.h"],
    deps = [
        ":platform",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:errors",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "stream_executor_internal",
    srcs = [
        "stream_executor_internal.cc",
    ],
    hdrs = [
        "stream_executor_internal.h",
    ],
    deps = [
        ":allocator_stats",
        ":device_description",
        ":device_memory",
        ":device_options",
        ":kernel",
        ":kernel_cache_config",
        ":kernel_spec",
        ":launch_dim",
        ":plugin_registry",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/types:optional",
        "@com_google_absl//absl/types:span",
    ],
)

cc_library(
    name = "stream_executor_pimpl_header",
    hdrs = [
        "device_description.h",
        "kernel.h",
        "kernel_cache_config.h",
        "stream_executor_pimpl.h",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":platform",
        ":stream_executor_headers",
        ":stream_executor_internal",
        "//tensorflow/compiler/xla/stream_executor:device_description",
        "//tensorflow/compiler/xla/stream_executor:kernel_cache_config",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
    ],
)

# It implements :stream_executor_pimpl_header
tf_cuda_library(
    name = "stream_executor_pimpl",
    srcs = [
        "stream.cc",
        "stream_executor_pimpl.cc",
    ],
    hdrs = ["stream_executor_pimpl.h"],
    deps = [
        ":blas",
        ":device_memory",
        ":dnn",
        ":event",
        ":executor_cache",
        ":fft",
        ":host_or_device_scalar",
        ":kernel",
        ":launch_dim",
        ":platform",
        ":rng",
        ":stream_executor_headers",
        ":stream_executor_internal",
        ":temporary_memory_manager",
        ":timer",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
        "@com_google_absl//absl/types:span",
        "//third_party/eigen3",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core:lib_internal",
        "//tensorflow/core/platform:logging",
        # TODO(rdzhabarov): dependencies below only needed until stream_executor/cuda is migrated to xla/compiler.
        "//tensorflow/stream_executor:dnn",
        "//tensorflow/stream_executor:plugin_registry",
        "//tensorflow/stream_executor:temporary_device_memory",
        "//tensorflow/stream_executor/lib",
    ],
)

cc_library(
    name = "kernel",
    srcs = [
        "fft.h",
        "kernel.cc",
        "plugin.h",
        "rng.h",
        "stream.h",
        "stream_executor_pimpl.h",
        "temporary_device_memory.h",
        "temporary_memory_manager.h",
    ],
    hdrs = [
        "blas.h",
        "device_description.h",
        "device_options.h",
        "event.h",
        "kernel.h",
        "kernel_spec.h",
        "launch_dim.h",
        "multi_platform_manager.h",
        "platform.h",
        "plugin_registry.h",
        "stream_executor.h",
        "stream_executor_internal.h",
        "timer.h",
        "trace_listener.h",
    ],
    deps = [
        ":allocator_stats",
        ":data_type",
        ":device_memory",
        ":kernel_cache_config",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor:device_description",
        "//tensorflow/compiler/xla/stream_executor:device_options",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor:fft",
        "//tensorflow/compiler/xla/stream_executor:kernel_spec",
        "//tensorflow/compiler/xla/stream_executor:launch_dim",
        "//tensorflow/compiler/xla/stream_executor:platform",
        "//tensorflow/compiler/xla/stream_executor:plugin",
        "//tensorflow/compiler/xla/stream_executor:plugin_registry",
        "//tensorflow/compiler/xla/stream_executor:rng",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
    ],
)

cc_library(
    name = "timer",
    srcs = [
        "device_description.h",
        "kernel_cache_config.h",
        "timer.cc",
    ],
    hdrs = [
        "blas.h",
        "kernel.h",
        "stream.h",
        "stream_executor.h",
        "timer.h",
    ],
    deps = [
        ":data_type",
        ":platform",
        ":stream_executor_headers",
        ":stream_executor_pimpl_header",
        "//tensorflow/compiler/xla/stream_executor:device_description",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor:kernel_cache_config",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "blas",
    srcs = ["blas.cc"],
    hdrs = ["blas.h"],
    deps = [
        ":data_type",
        ":host_or_device_scalar",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "host_or_device_scalar",
    hdrs = ["host_or_device_scalar.h"],
    deps = [
        ":data_type",
        ":device_memory",
        "//tensorflow/compiler/xla/stream_executor/platform",
    ],
)

cc_library(
    name = "event",
    srcs = [
        "blas.h",
        "device_description.h",
        "device_options.h",
        "event.cc",
        "fft.h",
        "kernel_cache_config.h",
        "launch_dim.h",
        "plugin.h",
        "plugin_registry.h",
        "rng.h",
        "stream_executor_pimpl.h",
        "temporary_device_memory.h",
        "temporary_memory_manager.h",
        "trace_listener.h",
    ],
    hdrs = [
        "device_memory.h",
        "event.h",
        "kernel.h",
        "kernel_spec.h",
        "platform.h",
        "stream.h",
        "stream_executor_internal.h",
    ],
    deps = [
        ":allocator_stats",
        ":data_type",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor:blas",
        "//tensorflow/compiler/xla/stream_executor:device_description",
        "//tensorflow/compiler/xla/stream_executor:device_memory",
        "//tensorflow/compiler/xla/stream_executor:device_options",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        "//tensorflow/compiler/xla/stream_executor:fft",
        "//tensorflow/compiler/xla/stream_executor:kernel_cache_config",
        "//tensorflow/compiler/xla/stream_executor:kernel_spec",
        "//tensorflow/compiler/xla/stream_executor:launch_dim",
        "//tensorflow/compiler/xla/stream_executor:platform",
        "//tensorflow/compiler/xla/stream_executor:plugin",
        "//tensorflow/compiler/xla/stream_executor:rng",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "//tensorflow/core/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
    ],
)

cc_library(
    name = "plugin_registry",
    srcs = ["plugin_registry.cc"],
    hdrs = ["plugin_registry.h"],
    deps = [
        ":blas",
        ":dnn",
        ":fft",
        ":multi_platform_manager",
        ":platform",
        ":plugin",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "dnn",
    srcs = ["dnn.cc"],
    hdrs = ["dnn.h"],
    deps = [
        ":data_type",
        ":device_memory",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc",
        ":stream_executor_headers",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/hash",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/types:optional",
        "@com_google_absl//absl/types:span",
        "//tensorflow/core/platform:logging",
        "//tensorflow/core/lib/strings:proto_serialization",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
    ] + if_static(["@com_google_protobuf//:protobuf"]),
)

cc_library(
    name = "temporary_memory_manager",
    srcs = ["temporary_memory_manager.cc"],
    hdrs = ["temporary_memory_manager.h"],
    deps = [
        ":device_memory",
        ":stream_executor_headers",
        ":stream_executor_pimpl_header",
        ":temporary_device_memory",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "temporary_device_memory",
    srcs = [
        "event.h",
        "temporary_device_memory.cc",
        "temporary_memory_manager.h",
    ],
    hdrs = ["temporary_device_memory.h"],
    deps = [
        ":device_memory",
        ":dnn_proto_cc",
        ":stream_executor_headers",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/compiler/xla/stream_executor/platform",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "stream_executor",
    textual_hdrs = [
        "blas.h",
        "device_description.h",
        "device_memory.h",
        "device_memory_allocator.h",
        "device_options.h",
        "dnn.h",
        "event.h",
        "executor_cache.h",
        "fft.h",
        "gpu_launch_dim.h",
        "kernel.h",
        "kernel_cache_config.h",
        "kernel_spec.h",
        "launch_dim.h",
        "module_spec.h",
        "multi_platform_manager.h",
        "platform.h",
        "plugin.h",
        "plugin_registry.h",
        "rng.h",
        "stream.h",
        "stream_executor.h",
        "stream_executor_internal.h",
        "stream_executor_pimpl.h",
        "temporary_device_memory.h",
        "temporary_memory_manager.h",
        "timer.h",
        "trace_listener.h",
    ],
    deps = [":stream_executor_headers"] + if_static([":stream_executor_impl"]),
)

cc_library(
    name = "stream_executor_impl",
    deps = [
        ":device_description",
        ":device_memory",
        ":dnn_proto_cc",
        ":event",
        ":kernel",
        ":launch_dim",
        ":multi_platform_manager",
        ":platform",
        ":stream_executor_headers",
        ":stream_executor_pimpl",
        ":timer",
        "//tensorflow/compiler/xla/stream_executor:dnn_proto_cc_impl",
    ],
)

cc_library(
    name = "device_memory_allocator",
    hdrs = ["device_memory_allocator.h"],
    deps = [
        ":device_memory",
        ":platform",
        ":stream_executor",
        "//tensorflow/compiler/xla/stream_executor/lib",
        "//tensorflow/core/platform:errors",
        "//tensorflow/core/platform:status",
        "//tensorflow/core/platform:types",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:span",
    ],
)

alias(
    name = "stream",
    actual = ":stream_executor",
)
