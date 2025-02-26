// Auto-generated file. Do not edit!
//   Template: src/qs8-vcvt/armv6simd.c.in
//   Generator: tools/xngen
//
// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <arm_acle.h>

#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/math.h>
#include <xnnpack/unaligned.h>
#include <xnnpack/vcvt.h>


void xnn_qu8_vcvt_ukernel__armv6simd_x4(
    size_t n,
    const uint8_t* x,
    uint8_t* y,
    const union xnn_qu8_cvt_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  const uint16x2_t vminus_input_zero_point = (uint16x2_t) params->armv6simd.minus_input_zero_point;
  const int32_t vbias = params->armv6simd.bias;
  const int32_t vmultiplier = params->armv6simd.multiplier;
  for (; n >= 4 * sizeof(uint8_t); n -= 4 * sizeof(uint8_t)) {
    const uint8x4_t vx0123 = (uint8x4_t) unaligned_load_u32(x);
    x += 4;

    const uint16x2_t vx02 = __uxtab16(vminus_input_zero_point, vx0123);
    const uint16x2_t vx13 = __uxtab16(vminus_input_zero_point, __ror(vx0123, 8));

    int32_t vacc0 = __smlawb(vmultiplier, vx02, vbias);
    int32_t vacc1 = __smlawb(vmultiplier, vx13, vbias);
    int32_t vacc2 = __smlawt(vmultiplier, vx02, vbias);
    int32_t vacc3 = __smlawt(vmultiplier, vx13, vbias);

    vacc0 = __usat(math_asr_s32(vacc0, 1), 8);
    vacc1 = __usat(math_asr_s32(vacc1, 1), 8);
    vacc2 = __usat(math_asr_s32(vacc2, 1), 8);
    vacc3 = __usat(math_asr_s32(vacc3, 1), 8);

    y[0] = (uint8_t) vacc0;
    y[1] = (uint8_t) vacc1;
    y[2] = (uint8_t) vacc2;
    y[3] = (uint8_t) vacc3;
    y += 4;
  }
  if XNN_UNLIKELY(n != 0) {
    const uint8x4_t vx0123 = (uint8x4_t) unaligned_load_u32(x);

    const uint16x2_t vx02 = __uxtab16(vminus_input_zero_point, vx0123);
    const uint16x2_t vx13 = __uxtab16(vminus_input_zero_point, __ror(vx0123, 8));

    int32_t vacc0 = __smlawb(vmultiplier, vx02, vbias);
    int32_t vacc1 = __smlawb(vmultiplier, vx13, vbias);
    const int32_t vacc2 = __smlawt(vmultiplier, vx02, vbias);

    vacc0 = __usat(math_asr_s32(vacc0, 1), 8);
    vacc1 = __usat(math_asr_s32(vacc1, 1), 8);

    if (n & (2 * sizeof(uint8_t))) {
      y[0] = (uint8_t) vacc0;
      y[1] = (uint8_t) vacc1;
      vacc0 = __usat(math_asr_s32(vacc2, 1), 8);
      y += 2;
    }
    if (n & (1 * sizeof(uint8_t))) {
      y[0] = (uint8_t) vacc0;
    }
  }
}
