// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qu8-vcvt.yaml
//   Generator: tools/generate-vcvt-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/vcvt.h>
#include "vcvt-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_VCVT__NEON_X8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VCvtMicrokernelTester()
      .batch_size(8)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
  }

  TEST(QU8_VCVT__NEON_X8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X8, scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X8, input_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
      }
    }
  }

  TEST(QU8_VCVT__NEON_X8, output_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x8, xnn_init_qu8_cvt_neon_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_VCVT__NEON_X16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
  }

  TEST(QU8_VCVT__NEON_X16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X16, scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X16, input_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
      }
    }
  }

  TEST(QU8_VCVT__NEON_X16, output_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x16, xnn_init_qu8_cvt_neon_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_VCVT__NEON_X32, batch_eq_32) {
    TEST_REQUIRES_ARM_NEON;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
  }

  TEST(QU8_VCVT__NEON_X32, batch_div_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X32, batch_lt_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X32, batch_gt_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X32, scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
    }
  }

  TEST(QU8_VCVT__NEON_X32, input_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
      }
    }
  }

  TEST(QU8_VCVT__NEON_X32, output_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__neon_x32, xnn_init_qu8_cvt_neon_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSE2_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE2;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
  }

  TEST(QU8_VCVT__SSE2_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X16, scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X16, input_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
      }
    }
  }

  TEST(QU8_VCVT__SSE2_X16, output_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse2_x16, xnn_init_qu8_cvt_sse2_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSE2_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE2;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
  }

  TEST(QU8_VCVT__SSE2_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X32, scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
    }
  }

  TEST(QU8_VCVT__SSE2_X32, input_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
      }
    }
  }

  TEST(QU8_VCVT__SSE2_X32, output_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse2_x32, xnn_init_qu8_cvt_sse2_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSSE3_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSSE3;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__SSSE3_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X16, scale) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X16, input_zero_point) {
    TEST_REQUIRES_X86_SSSE3;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__SSSE3_X16, output_zero_point) {
    TEST_REQUIRES_X86_SSSE3;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__ssse3_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSSE3_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSSE3;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__SSSE3_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X32, scale) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSSE3_X32, input_zero_point) {
    TEST_REQUIRES_X86_SSSE3;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__SSSE3_X32, output_zero_point) {
    TEST_REQUIRES_X86_SSSE3;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__ssse3_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX_X8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VCvtMicrokernelTester()
      .batch_size(8)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__AVX_X8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X8, scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X8, input_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX_X8, output_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x8, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__AVX_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X16, scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X16, input_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX_X16, output_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__AVX_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X32, scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__AVX_X32, input_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX_X32, output_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSE41_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    VCvtMicrokernelTester()
      .batch_size(8)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__SSE41_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X8, scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X8, input_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__SSE41_X8, output_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x8, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSE41_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE41;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__SSE41_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X16, scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X16, input_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__SSE41_X16, output_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x16, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__SSE41_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE41;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
  }

  TEST(QU8_VCVT__SSE41_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X32, scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
    }
  }

  TEST(QU8_VCVT__SSE41_X32, input_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }

  TEST(QU8_VCVT__SSE41_X32, output_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__sse41_x32, xnn_init_qu8_cvt_ssse3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX2_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
  }

  TEST(QU8_VCVT__AVX2_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X16, scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X16, input_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX2_X16, output_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x16, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX2_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
  }

  TEST(QU8_VCVT__AVX2_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X32, scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X32, input_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX2_X32, output_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x32, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_VCVT__AVX2_X64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX2;
    VCvtMicrokernelTester()
      .batch_size(64)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
  }

  TEST(QU8_VCVT__AVX2_X64, batch_div_64) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 65; batch_size < 128; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X64, scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
    }
  }

  TEST(QU8_VCVT__AVX2_X64, input_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }

  TEST(QU8_VCVT__AVX2_X64, output_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__avx2_x64, xnn_init_qu8_cvt_avx2_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QU8_VCVT__WASMSIMD_X8, batch_eq_8) {
    VCvtMicrokernelTester()
      .batch_size(8)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
  }

  TEST(QU8_VCVT__WASMSIMD_X8, batch_div_8) {
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X8, batch_lt_8) {
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X8, batch_gt_8) {
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X8, scale) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X8, input_zero_point) {
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X8, output_zero_point) {
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x8, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QU8_VCVT__WASMSIMD_X16, batch_eq_16) {
    VCvtMicrokernelTester()
      .batch_size(16)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
  }

  TEST(QU8_VCVT__WASMSIMD_X16, batch_div_16) {
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X16, batch_lt_16) {
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X16, batch_gt_16) {
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X16, scale) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X16, input_zero_point) {
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X16, output_zero_point) {
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x16, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QU8_VCVT__WASMSIMD_X32, batch_eq_32) {
    VCvtMicrokernelTester()
      .batch_size(32)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
  }

  TEST(QU8_VCVT__WASMSIMD_X32, batch_div_32) {
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X32, batch_lt_32) {
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X32, batch_gt_32) {
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X32, scale) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X32, input_zero_point) {
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }

  TEST(QU8_VCVT__WASMSIMD_X32, output_zero_point) {
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__wasmsimd_x32, xnn_init_qu8_cvt_wasmsimd_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_ARM
  TEST(QU8_VCVT__ARMV6SIMD_X4, batch_eq_4) {
    TEST_REQUIRES_ARM_V6_SIMD;
    VCvtMicrokernelTester()
      .batch_size(4)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, batch_div_4) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, batch_lt_4) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, batch_gt_4) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, scale) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, input_zero_point) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
      }
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X4, output_zero_point) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__armv6simd_x4, xnn_init_qu8_cvt_armv6simd_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM


#if XNN_ARCH_ARM
  TEST(QU8_VCVT__ARMV6SIMD_X8, batch_eq_8) {
    TEST_REQUIRES_ARM_V6_SIMD;
    VCvtMicrokernelTester()
      .batch_size(8)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, batch_div_8) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, batch_lt_8) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, batch_gt_8) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, scale) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .scale(50)
        .output_zero_point(100)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, input_zero_point) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .input_zero_point(input_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
      }
    }
  }

  TEST(QU8_VCVT__ARMV6SIMD_X8, output_zero_point) {
    TEST_REQUIRES_ARM_V6_SIMD;
    for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
      for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
        VCvtMicrokernelTester()
          .batch_size(batch_size)
          .output_zero_point(output_zero_point)
          .qmin(std::numeric_limits<uint8_t>::min())
          .qmax(std::numeric_limits<uint8_t>::max())
          .Test(xnn_qu8_vcvt_ukernel__armv6simd_x8, xnn_init_qu8_cvt_armv6simd_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM


TEST(QU8_VCVT__SCALAR_X1, batch_eq_1) {
  VCvtMicrokernelTester()
    .batch_size(1)
    .qmin(std::numeric_limits<uint8_t>::min())
    .qmax(std::numeric_limits<uint8_t>::max())
    .Test(xnn_qu8_vcvt_ukernel__scalar_x1, xnn_init_qu8_cvt_scalar_params);
}

TEST(QU8_VCVT__SCALAR_X1, batch_gt_1) {
  for (size_t batch_size = 2; batch_size < 10; batch_size++) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x1, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X1, scale) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .scale(50)
      .output_zero_point(100)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x1, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X1, input_zero_point) {
  for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .input_zero_point(input_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x1, xnn_init_qu8_cvt_scalar_params);
    }
  }
}

TEST(QU8_VCVT__SCALAR_X1, output_zero_point) {
  for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .output_zero_point(output_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x1, xnn_init_qu8_cvt_scalar_params);
    }
  }
}


TEST(QU8_VCVT__SCALAR_X2, batch_eq_2) {
  VCvtMicrokernelTester()
    .batch_size(2)
    .qmin(std::numeric_limits<uint8_t>::min())
    .qmax(std::numeric_limits<uint8_t>::max())
    .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
}

TEST(QU8_VCVT__SCALAR_X2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X2, batch_gt_2) {
  for (size_t batch_size = 3; batch_size < 4; batch_size++) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X2, scale) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .scale(50)
      .output_zero_point(100)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X2, input_zero_point) {
  for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .input_zero_point(input_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
    }
  }
}

TEST(QU8_VCVT__SCALAR_X2, output_zero_point) {
  for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .output_zero_point(output_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x2, xnn_init_qu8_cvt_scalar_params);
    }
  }
}


TEST(QU8_VCVT__SCALAR_X4, batch_eq_4) {
  VCvtMicrokernelTester()
    .batch_size(4)
    .qmin(std::numeric_limits<uint8_t>::min())
    .qmax(std::numeric_limits<uint8_t>::max())
    .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
}

TEST(QU8_VCVT__SCALAR_X4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X4, batch_gt_4) {
  for (size_t batch_size = 5; batch_size < 8; batch_size++) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X4, scale) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VCvtMicrokernelTester()
      .batch_size(batch_size)
      .scale(50)
      .output_zero_point(100)
      .qmin(std::numeric_limits<uint8_t>::min())
      .qmax(std::numeric_limits<uint8_t>::max())
      .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
  }
}

TEST(QU8_VCVT__SCALAR_X4, input_zero_point) {
  for (int16_t input_zero_point = 0; input_zero_point < 5; input_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .input_zero_point(input_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
    }
  }
}

TEST(QU8_VCVT__SCALAR_X4, output_zero_point) {
  for (int16_t output_zero_point = 0; output_zero_point < 5; output_zero_point += 2) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VCvtMicrokernelTester()
        .batch_size(batch_size)
        .output_zero_point(output_zero_point)
        .qmin(std::numeric_limits<uint8_t>::min())
        .qmax(std::numeric_limits<uint8_t>::max())
        .Test(xnn_qu8_vcvt_ukernel__scalar_x4, xnn_init_qu8_cvt_scalar_params);
    }
  }
}
