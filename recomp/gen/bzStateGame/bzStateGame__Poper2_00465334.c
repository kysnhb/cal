/* bzStateGame::Poper2_00465334 @ 0x00465334 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__Poper2_00465334(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12, uint64_t gh_a13)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  int param_8 = (int)gh_a7;
  int param_9 = (int)gh_a8;
  int param_10 = (int)gh_a9;
  int param_11 = (int)gh_a10;
  int param_12 = (int)gh_a11;
  int param_13 = (int)gh_a12;
  int param_14 = (int)gh_a13;

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  gh_long lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  mersenne_twister_engine *pmVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  gh_long lVar26;
  gh_long lVar27;
  undefined4 *puVar28;
  int *piVar29;
  undefined8 uVar30;
  gh_long lVar31;
  uint *puVar32;
  uint64_t gh_frame64[29] = {0};   /* 원작 스택 프레임 (SP-0xcc ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xcc;
#define local_cc (*(int *)(gh_fb - 0xcc))
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar9 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar9 + 0x28);
  if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) goto LAB_004653ac;
  piVar29 = (int *)(self + (gh_long)param_11 * 0x50 + 0xb0cbc);
  piVar2 = (int *)(self + 0x1ae8);
  piVar3 = (int *)(self + (gh_long)param_11 * 0x50 + 0xb0cb8);
  iVar14 = *piVar29 + param_9;
  iVar11 = param_5;
  bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_11), GH_ARG(param_10), GH_ARG(param_2));
  piVar4 = (int *)(self + (gh_long)param_13 * 0x288 + 0x8dac8);
  piVar5 = (int *)(self + 0x32c160);
  if ((*(uint *)(self + (gh_long)*(int *)(self + (gh_long)param_13 * 0x288 + 0x8db14) * 4 + 0x131c8) <
       0x4b) && (*piVar5 == 0)) {
    SoundClip__play_0047e570(GH_ARG((SoundClip *)
               (self + (gh_long)(int)*(uint *)(self + (gh_long)*(int *)(self + (gh_long)param_13 * 0x288 +
                                                                         0x8db14) * 4 + 0x131c8) *
                       0x18 + 0x11e8)), GH_ARG(false));
  }
  piVar1 = (int *)(self + 0xba8);
  piVar6 = (int *)(self + (gh_long)param_10 * 0x288 + 0x8db14);
  iVar12 = *piVar6;
  lVar26 = (gh_long)param_11;
  lVar31 = (gh_long)param_10;
  piVar7 = (int *)(self + (gh_long)param_10 * 0x288 + 0x8dac8);
  if ((iVar12 == 0x13) || (1.4 < *(float *)(self + lVar31 * 0x288 + 0x8db24))) {
    iVar11 = *piVar7;
    puVar32 = (uint *)(self + lVar31 * 0x288 + 0x8dad8);
    uVar21 = (uint)(*piVar4 < iVar11);
    *puVar32 = uVar21;
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(uVar21), GH_ARG(iVar11), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
    iVar11 = *(int *)(self + 0x1ae8);
    if (param_3 == 0x6d) {
      if (((iVar11 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 10;
      }
      else {
        local_b0 = 0x900000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 6;
        iVar11 = *piVar2;
      }
      uVar24 = *(undefined4 *)(self + lVar26 * 0x50 + 0xb0cc0);
      uVar30 = *(undefined8 *)piVar3;
      if (((iVar11 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 6;
      }
      else {
        local_b0 = 0x500000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        iVar13 = iVar13 + 2;
        iVar11 = *piVar2;
      }
      if (((0x3d < iVar11 - 0xdU) ||
          ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar27 = 0;
        puVar25 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar25[-5] < 1) {
            puVar25[2] = 0;
            puVar25[3] = iVar13;
            *(undefined8 *)(puVar25 + -4) = 0x100000005;
            *(undefined8 *)(puVar25 + -6) = 0x6400000085;
            *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
            *(undefined8 *)(puVar25 + -10) = uVar30;
            puVar25[-8] = uVar24;
            puVar25[4] = 0;
            puVar25[5] = -iVar12;
            *puVar25 = 0x3f800000;
            puVar25[1] = 0;
            *(undefined8 *)(puVar25 + 6) = 0xff00000000;
            *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
            break;
          }
          lVar27 = lVar27 + 1;
          puVar25 = puVar25 + 0x14;
        } while (lVar27 < *(int *)(self + 0x32b828));
      }
    }
    if (((iVar11 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar11 = 4;
    }
    else {
      local_b0 = 0x300000000;
      pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
      iVar11 = iVar11 + 100;
    }
    uVar21 = (uint)(*puVar32 == 0);
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar32 == 0)), GH_ARG(*piVar7), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar31 * 0x288 + 0x8dd30)), GH_ARG(0));
    iVar14 = *(int *)(self + lVar31 * 0x288 + 0x8dae0);
    if (1 < *(int *)(self + lVar31 * 0x288 + 0x8daec)) {
      if ((iVar14 == 3) || (*(int *)(self + lVar26 * 0x288 + 0x8dae0) - 0x46U < 0x51))
      goto LAB_004653ac;
      if (((0x3d < *piVar2 - 0xdU) ||
          ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
      {
        local_b0 = 0x6300000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        if (iVar14 < 0x33) goto LAB_004653ac;
        iVar14 = *(int *)(self + lVar31 * 0x288 + 0x8dae0);
      }
      if (iVar14 < 0x4c) {
        iVar11 = *(int *)(self + 0x32ba14);
        iVar14 = *(int *)(self + 0x32ba20) + *piVar7;
        iVar12 = 0;
        if (iVar11 != 0) {
          iVar12 = iVar14 / iVar11;
        }
        iVar13 = 0;
        if (iVar11 != 0) {
          iVar13 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar31 * 0x288 + 0x8dacc)) / iVar11;
        }
        if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar12 = 0;
          if (iVar11 != 0) {
            iVar12 = (iVar14 + -0x14) / iVar11;
          }
          if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = (iVar14 + 0x14) / iVar11;
            }
            if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) goto LAB_004653ac;
          }
        }
      }
      if (((*piVar2 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
      {
        iVar14 = 0x14;
        if (param_3 == 0x4d) goto LAB_00466198;
LAB_0046652c:
        uVar20 = *puVar32;
LAB_00466530:
        iVar14 = 0x7c;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        if (param_3 != 0x4d) goto LAB_0046652c;
LAB_00466198:
        if (5 < iVar14) {
          uVar20 = *puVar32;
          if (iVar14 < 0xc) {
            iVar14 = 0x4e;
            goto LAB_00466534;
          }
          goto LAB_00466530;
        }
        uVar20 = *puVar32;
        iVar14 = 0x4d;
      }
LAB_00466534:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar14), GH_ARG(uVar20), GH_ARG(uVar21));
      goto LAB_004653ac;
    }
    if (iVar14 < 0x4c) {
      iVar11 = *(int *)(self + 0x32ba14);
      iVar14 = *(int *)(self + 0x32ba20) + *piVar7;
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = iVar14 / iVar11;
      }
      iVar13 = 0;
      if (iVar11 != 0) {
        iVar13 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar31 * 0x288 + 0x8dacc)) / iVar11;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_004659d8;
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = (iVar14 + -0x14) / iVar11;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_004659d8;
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = (iVar14 + 0x14) / iVar11;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_004659d8;
      uVar20 = *puVar32;
      iVar14 = 0x45;
    }
    else {
LAB_004659d8:
      uVar20 = *puVar32;
      iVar14 = 0x3b;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar14), GH_ARG(uVar20), GH_ARG(uVar21));
    iVar14 = 0x15;
  }
  else {
    if (iVar12 == 0x1a) {
      bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(*piVar3), GH_ARG(*piVar29), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(9), GH_ARG(param_10), GH_ARG(0));
      goto LAB_004653ac;
    }
    if (iVar12 != 0x16) {
      if (iVar12 == 0x15) {
        iVar11 = *piVar7;
        puVar32 = (uint *)(self + lVar31 * 0x288 + 0x8dad8);
        uVar21 = (uint)(*piVar4 < iVar11);
        *puVar32 = uVar21;
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(uVar21), GH_ARG(iVar11), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
        iVar11 = *(int *)(self + 0x1ae8);
        if (param_3 == 0x6d) {
          if (((iVar11 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = -10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar12 = -6 - iVar12;
            iVar11 = *piVar2;
          }
          uVar24 = *(undefined4 *)(self + lVar26 * 0x50 + 0xb0cc0);
          uVar30 = *(undefined8 *)piVar3;
          if (((iVar11 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 2;
            iVar11 = *piVar2;
          }
          if (((0x3d < iVar11 - 0xdU) ||
              ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar26 = 0;
            puVar25 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar25[-5] < 1) {
                puVar25[2] = 0;
                puVar25[3] = iVar13;
                *(undefined8 *)(puVar25 + -4) = 0x100000005;
                *(undefined8 *)(puVar25 + -6) = 0x6400000085;
                *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
                *(undefined8 *)(puVar25 + -10) = uVar30;
                puVar25[-8] = uVar24;
                puVar25[4] = 0;
                puVar25[5] = iVar12;
                *puVar25 = 0x3f800000;
                puVar25[1] = 0;
                *(undefined8 *)(puVar25 + 6) = 0xff00000000;
                *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
                break;
              }
              lVar26 = lVar26 + 1;
              puVar25 = puVar25 + 0x14;
            } while (lVar26 < *(int *)(self + 0x32b828));
          }
        }
        if (((iVar11 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar11 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
          iVar11 = iVar11 + 100;
        }
        uVar21 = (uint)(*puVar32 == 0);
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar32 == 0)), GH_ARG(*piVar7), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar31 * 0x288 + 0x8dd30)), GH_ARG(0));
        if (*(int *)(self + lVar31 * 0x288 + 0x8daec) < 2) {
          uVar21 = 0;
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
          uVar20 = *puVar32;
          iVar14 = 0x83;
        }
        else {
          if (((0x3d < *piVar2 - 0xdU) ||
              ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             (*piVar1 != 1)) {
            local_b0 = 0x6300000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            if (iVar14 < 0x33) goto LAB_004653ac;
          }
          iVar11 = *(int *)(self + 0x32ba14);
          iVar14 = *(int *)(self + 0x32ba20) + *piVar7;
          iVar12 = 0;
          if (iVar11 != 0) {
            iVar12 = iVar14 / iVar11;
          }
          iVar13 = 0;
          if (iVar11 != 0) {
            iVar13 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar31 * 0x288 + 0x8dacc)) /
                     iVar11;
          }
          if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = (iVar14 + -0x14) / iVar11;
            }
            if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar12 = 0;
              if (iVar11 != 0) {
                iVar12 = (iVar14 + 0x14) / iVar11;
              }
              if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 +
                                                              (gh_long)iVar12 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) goto LAB_004653ac;
            }
          }
          uVar20 = *puVar32;
          iVar14 = 0x82;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar14), GH_ARG(uVar20), GH_ARG(uVar21));
        *(undefined4 *)(self + lVar31 * 0x288 + 0x8dd3c) = 0x23a;
        goto LAB_004653ac;
      }
      if (0x16 < iVar12) {
        if (iVar12 == 0x17) {
          puVar32 = (uint *)(self + lVar31 * 0x288 + 0x8dad8);
          uVar22 = (ulong)*puVar32;
          iVar11 = *piVar7;
        }
        else {
          iVar11 = *piVar7;
          uVar22 = (ulong)(*piVar4 < iVar11);
          puVar32 = (uint *)(self + lVar31 * 0x288 + 0x8dad8);
          *puVar32 = (uint)(*piVar4 < iVar11);
        }
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG((int)uVar22), GH_ARG(iVar11), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
        if (param_3 == 0x6d) {
          iVar14 = *piVar2;
          if (((iVar14 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar11 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar11 = iVar11 + 6;
            iVar14 = *piVar2;
          }
          uVar24 = *(undefined4 *)(self + lVar26 * 0x50 + 0xb0cc0);
          uVar30 = *(undefined8 *)piVar3;
          if (((iVar14 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar14 = *piVar2;
            iVar12 = iVar12 + 2;
          }
          if (((0x3d < iVar14 - 0xdU) ||
              ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar26 = 0;
            puVar25 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar25[-5] < 1) {
                puVar25[2] = 0;
                puVar25[3] = iVar12;
                *(undefined8 *)(puVar25 + -4) = 0x100000005;
                *(undefined8 *)(puVar25 + -6) = 0x6400000085;
                *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
                *(undefined8 *)(puVar25 + -10) = uVar30;
                puVar25[-8] = uVar24;
                puVar25[4] = 0;
                puVar25[5] = -iVar11;
                *puVar25 = 0x3f800000;
                puVar25[1] = 0;
                *(undefined8 *)(puVar25 + 6) = 0xff00000000;
                *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
                break;
              }
              lVar26 = lVar26 + 1;
              puVar25 = puVar25 + 0x14;
            } while (lVar26 < *(int *)(self + 0x32b828));
          }
        }
        iVar14 = (int)uVar22;
        if (((((param_10 == 0) && (param_14 == 1)) &&
             (piVar29 = (int *)(self + 0x32c140), *piVar29 == 0)) &&
            ((0x3d < *piVar2 - 0xdU ||
             ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)))) &&
           (*piVar1 != 1)) {
          local_b0 = 0x6300000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
          iVar14 = (int)uVar22;
          if (iVar11 < 0x1e) {
            *piVar29 = *piVar29 + 1;
            iVar12 = *(int *)(self + 0x1ae8);
            iVar11 = 0;
            do {
              if (((iVar12 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0x14;
              }
              else {
                local_b0 = 0x1300000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar13 = iVar13 + 0xc;
                iVar12 = *piVar2;
              }
              if (((iVar12 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                local_cc = 4;
              }
              else {
                local_b0 = 0x300000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                local_cc = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar12 = *piVar2;
              }
              if (((iVar12 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar12 = *piVar2;
              }
              iVar23 = *piVar7;
              if ((iVar12 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar16 = 0x20;
              }
              else if (*piVar1 == 1) {
                iVar16 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar16 = iVar16 + -0x10;
                iVar12 = *piVar2;
              }
              iVar8 = *(int *)(self + 0x8dacc);
              if ((iVar12 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar17 = 10;
              }
              else if (*piVar1 == 1) {
                iVar17 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar12 = *piVar2;
              }
              if ((iVar12 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar18 = 8;
              }
              else if (*piVar1 == 1) {
                iVar18 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar18 = iVar18 + 4;
                iVar12 = *piVar2;
              }
              iVar14 = (int)uVar22;
              if ((((0x3d < iVar12 - 0xdU) ||
                   ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
                lVar26 = 0;
                puVar25 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar25[-5] < 1) {
                    puVar25[2] = 0;
                    puVar25[3] = iVar18;
                    *(undefined8 *)(puVar25 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar25 + -6) = 0x6400000085;
                    puVar25[-10] = iVar16 + iVar23;
                    puVar25[-9] = (iVar8 + -0x82) - iVar17;
                    puVar25[-8] = iVar15;
                    puVar25[-4] = local_cc + 0x260;
                    puVar25[-3] = 1;
                    *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
                    *puVar25 = 0x3f800000;
                    puVar25[1] = 0;
                    puVar25[4] = 0;
                    puVar25[5] = -iVar13;
                    *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar26 = lVar26 + 1;
                  puVar25 = puVar25 + 0x14;
                } while (lVar26 < *(int *)(self + 0x32b828));
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 != 0x28);
          }
        }
        if (*(int *)(self + lVar31 * 0x288 + 0x8daec) < 2) {
          if (*piVar6 == 0x17) {
            uVar21 = *puVar32;
            iVar11 = 0xae;
          }
          else {
            uVar21 = *puVar32;
            if (*piVar6 == 0x18) {
              iVar11 = 0xb8;
            }
            else {
              iVar11 = 0xc0;
            }
          }
        }
        else {
          if (param_3 != 0x3d) goto LAB_004653ac;
          iVar11 = *piVar6;
          if (iVar11 == 0x17) {
            if (((*piVar2 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) goto LAB_004653ac;
            local_b0 = 0x1300000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            if (iVar11 < 10) {
              iVar11 = 0xad;
              uVar21 = (uint)(*piVar4 < *piVar7);
              *puVar32 = uVar21;
              goto LAB_00467ef8;
            }
            iVar11 = *piVar6;
          }
          if (iVar11 == 0x19) {
            uVar21 = *puVar32;
            iVar11 = 0xc1;
          }
          else {
            if (iVar11 != 0x18) goto LAB_004653ac;
            uVar21 = *puVar32;
            iVar11 = 0xb7;
          }
        }
LAB_00467ef8:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(uVar21), GH_ARG(iVar14));
        goto LAB_004653ac;
      }
      piVar29 = (int *)(self + lVar31 * 0x288 + 0x8dae0);
      iVar12 = *piVar29;
      if (iVar12 != 3) {
        if ((param_10 == 0) && ((iVar12 == 0x3b || (iVar12 == 0xf)))) {
          *(undefined4 *)(self + 0x32ba84) = 0;
          joyX2 = *(undefined4 *)(self + 0x1b08);
          joyY2 = *(undefined4 *)(self + 0x1b0c);
          *(undefined4 *)(self + 0x8dd38) = 0;
          *(undefined4 *)(self + 0x8dd24) = 0;
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
        }
        if (((*piVar2 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
           ) {
          iVar11 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        }
        if (param_5 == 0x6f) {
          if (((*piVar2 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + -6;
          }
          if (*(int *)(self + lVar31 * 0x288 + 0x8dacc) - iVar14 < 0x3d) {
            iVar15 = *piVar7;
            iVar13 = iVar12;
            if (iVar14 + 0x14 <= *(int *)(self + lVar31 * 0x288 + 0x8dacc)) {
              iVar13 = 0x20;
            }
            iVar13 = iVar13 + iVar14;
            iVar23 = *(int *)(self + lVar26 * 0x50 + 0xb0cf8);
          }
          else {
            iVar15 = *piVar7;
            iVar23 = *(int *)(self + lVar26 * 0x50 + 0xb0cf8);
            iVar13 = iVar14 + iVar12 + 0x40;
          }
          uVar20 = 0;
          bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x6f), GH_ARG(param_6), GH_ARG(0), GH_ARG(iVar15), GH_ARG(iVar13), GH_ARG(iVar12), GH_ARG(0), GH_ARG(0.0), GH_ARG(iVar23));
        }
        else {
          iVar12 = *piVar7;
          uVar20 = (uint)(*piVar4 < iVar12);
          uVar21 = (uint)(*piVar4 < iVar12);
          *(uint *)(self + lVar31 * 0x288 + 0x8dad8) = uVar21;
          bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(uVar21), GH_ARG(iVar12), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(*(int *)(self + lVar26 * 0x50 + 0xb0cf8)));
          if (((0x1d < param_10) && (1 < *(int *)(self + lVar31 * 0x288 + 0x8dd20) - 0x15U)) &&
             (*(int *)(self + lVar31 * 0x288 + 0x8db10) == 3)) {
            if (param_14 == 1) {
              if (((0x3d < *piVar2 - 0xdU) ||
                  ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 (*piVar1 != 1)) {
                local_b0 = 0xc700000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                if (iVar12 < 0xb5) goto LAB_00466ca8;
              }
              bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x12), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dacc) + -0xa0), GH_ARG(0));
              uVar20 = 0;
              bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
            }
            else if ((*(int *)(self + lVar31 * 0x288 + 0x8dd4c) == 0) &&
                    (*(int *)(self + lVar31 * 0x288 + 0x8daec) < 100)) {
              if (((0x3d < *piVar2 - 0xdU) ||
                  ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 (*piVar1 != 1)) {
                local_b0 = 0xc700000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                if (iVar12 < 0xa1) goto LAB_00466ca8;
              }
              if (param_14 == 2) {
                iVar12 = 0x13;
              }
              else {
                iVar12 = 0x14;
              }
              bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(iVar12), GH_ARG(iVar14), GH_ARG(iVar14 + -0x50));
              uVar20 = 0;
              bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
            }
          }
        }
LAB_00466ca8:
        piVar4 = (int *)(self + lVar31 * 0x288 + 0x8daec);
        if (*piVar4 < 2) {
          uVar20 = 0;
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
          if (param_4 == 0x3a) {
            iVar12 = *(int *)(self + lVar31 * 0x288 + 0x8dad8);
            if (iVar11 < 10) {
              iVar11 = 0x3a;
            }
            else {
              iVar11 = 0x3b;
            }
LAB_004678cc:
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(iVar12), GH_ARG(uVar20));
          }
          else {
            if (param_3 == 0x6d) {
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x15), GH_ARG(param_10), GH_ARG(param_14), GH_ARG(param_11));
            }
            else {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_4), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(uVar20));
            }
            if (param_4 == 0x54) {
              iVar11 = *piVar2;
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar12 = 2;
              }
              else if (*piVar1 == 1) {
                iVar12 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar11 = *piVar2;
              }
              iVar13 = *piVar7;
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar15 = 0x14;
              }
              else if (*piVar1 == 1) {
                iVar15 = 0x14;
              }
              else {
                local_b0 = 0x1300000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -10;
                iVar11 = *piVar2;
              }
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar11 = 0x10;
              }
              else if (*piVar1 == 1) {
                iVar11 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar11 = iVar11 + 4;
              }
              bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x98), GH_ARG(0x28), GH_ARG(iVar12), GH_ARG(iVar15 + iVar13), GH_ARG(iVar14 + -0x3c), GH_ARG(-iVar11), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
              iVar11 = *(int *)(self + 0x1ae8);
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar12 = 2;
              }
              else if (*piVar1 == 1) {
                iVar12 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar11 = *piVar2;
              }
              iVar13 = *piVar7;
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar15 = 0x14;
              }
              else if (*piVar1 == 1) {
                iVar15 = 0x14;
              }
              else {
                local_b0 = 0x1300000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -10;
                iVar11 = *piVar2;
              }
              if ((iVar11 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
                iVar11 = 0x10;
              }
              else if (*piVar1 == 1) {
                iVar11 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                iVar11 = iVar11 + 4;
              }
              bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x98), GH_ARG(0x28), GH_ARG(iVar12), GH_ARG(iVar15 + iVar13), GH_ARG(iVar14 + -0x3c), GH_ARG(-iVar11), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
              iVar11 = 10;
              do {
                iVar13 = *(int *)(self + lVar31 * 0x288 + 0x8db0c);
                iVar12 = *piVar2;
                if (((iVar12 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*piVar1 == 1)) {
                  iVar15 = 2;
                }
                else {
                  local_b0 = 0x100000000;
                  pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                  iVar12 = *piVar2;
                }
                iVar23 = *piVar7;
                if (((iVar12 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*piVar1 == 1)) {
                  iVar16 = 0x14;
                }
                else {
                  local_b0 = 0x1300000000;
                  pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                  iVar16 = iVar16 + -10;
                  iVar12 = *piVar2;
                }
                if (((iVar12 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*piVar1 == 1)) {
                  iVar12 = 0xc;
                }
                else {
                  local_b0 = 0xb00000000;
                  pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                  iVar12 = iVar12 + 8;
                }
                bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x98), GH_ARG(iVar13 / 0x1c + 0x14d), GH_ARG(iVar15), GH_ARG(iVar16 + iVar23), GH_ARG(iVar14 + -0x50), GH_ARG(-iVar12), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              piVar3 = (int *)(self + lVar31 * 0x288 + 0x8dad8);
              iVar11 = *piVar3;
              puVar25 = (undefined4 *)(self + lVar31 * 0x288 + 0x8dd30);
              iVar12 = *piVar7;
              uVar24 = *puVar25;
              uVar21 = *(int *)(self + 0x1ae8) - 0xd;
              uVar22 = (ulong)uVar21;
              if ((((0x3d < uVar21) || ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
                lVar26 = 0;
                puVar28 = (undefined4 *)(self + 0xb0cd8);
                do {
                  if ((int)puVar28[-3] < 1) {
                    puVar28[-8] = iVar12 + -0x28;
                    puVar28[-7] = iVar14 + -0x28;
                    puVar28[-6] = (uint)(iVar11 == 0);
                    *puVar28 = uVar24;
                    *(undefined8 *)(puVar28 + 5) = 0;
                    *(undefined8 *)(puVar28 + -2) = 0x3c;
                    *(undefined8 *)(puVar28 + -4) = 0x6400000067;
                    *(undefined8 *)(puVar28 + 3) = 0;
                    *(undefined8 *)(puVar28 + 1) = 0x3f8000003f800000;
                    *(undefined8 *)(puVar28 + 10) = 0xff000000ff;
                    *(undefined8 *)(puVar28 + 8) = 0xff00000000;
                    puVar28[7] = param_10;
                    iVar11 = *piVar3;
                    iVar12 = *piVar7;
                    uVar24 = *puVar25;
                    break;
                  }
                  lVar26 = lVar26 + 1;
                  puVar28 = puVar28 + 0x14;
                } while (lVar26 < *(int *)(self + 0x32b828));
              }
              if (((0x3d < uVar21) || ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
                lVar26 = 0;
                puVar28 = (undefined4 *)(self + 0xb0cd8);
                do {
                  if ((int)puVar28[-3] < 1) {
                    puVar28[-8] = iVar12 + 0x28;
                    puVar28[-7] = iVar14 + -0x1e;
                    puVar28[-6] = (uint)(iVar11 == 0);
                    *puVar28 = uVar24;
                    *(undefined8 *)(puVar28 + 5) = 0;
                    *(undefined8 *)(puVar28 + -2) = 0x3c;
                    *(undefined8 *)(puVar28 + -4) = 0x6400000067;
                    *(undefined8 *)(puVar28 + 3) = 0;
                    *(undefined8 *)(puVar28 + 1) = 0x3f8000003f800000;
                    *(undefined8 *)(puVar28 + 10) = 0xff000000ff;
                    *(undefined8 *)(puVar28 + 8) = 0xff00000000;
                    puVar28[7] = param_10;
                    iVar11 = *piVar3;
                    iVar12 = *piVar7;
                    uVar24 = *puVar25;
                    break;
                  }
                  lVar26 = lVar26 + 1;
                  puVar28 = puVar28 + 0x14;
                } while (lVar26 < *(int *)(self + 0x32b828));
              }
              if (((0x3d < uVar21) || ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
                lVar26 = 0;
                puVar28 = (undefined4 *)(self + 0xb0cd8);
                do {
                  if ((int)puVar28[-3] < 1) {
                    puVar28[-8] = iVar12 + -0x14;
                    puVar28[-7] = iVar14 + -0xf;
                    puVar28[-6] = (uint)(iVar11 == 0);
                    *puVar28 = uVar24;
                    *(undefined8 *)(puVar28 + 5) = 0;
                    *(undefined8 *)(puVar28 + -2) = 0x3c;
                    *(undefined8 *)(puVar28 + -4) = 0x6400000067;
                    *(undefined8 *)(puVar28 + 3) = 0;
                    *(undefined8 *)(puVar28 + 1) = 0x3f8000003f800000;
                    *(undefined8 *)(puVar28 + 10) = 0xff000000ff;
                    *(undefined8 *)(puVar28 + 8) = 0xff00000000;
                    puVar28[7] = param_10;
                    iVar11 = *piVar3;
                    iVar12 = *piVar7;
                    uVar24 = *puVar25;
                    break;
                  }
                  lVar26 = lVar26 + 1;
                  puVar28 = puVar28 + 0x14;
                } while (lVar26 < *(int *)(self + 0x32b828));
              }
              if ((((0x3d < uVar21) || ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
                lVar26 = 0;
                puVar25 = (undefined4 *)(self + 0xb0cd8);
                do {
                  if ((int)puVar25[-3] < 1) {
                    puVar25[-8] = iVar12 + 0x14;
                    puVar25[-7] = iVar14 + 10;
                    puVar25[-6] = (uint)(iVar11 == 0);
                    *puVar25 = uVar24;
                    *(undefined8 *)(puVar25 + 5) = 0;
                    *(undefined8 *)(puVar25 + 3) = 0;
                    puVar25[7] = param_10;
                    *(undefined8 *)(puVar25 + 1) = 0x3f8000003f800000;
                    *(undefined8 *)(puVar25 + -2) = 0x3c;
                    *(undefined8 *)(puVar25 + -4) = 0x6400000067;
                    *(undefined8 *)(puVar25 + 10) = 0xff000000ff;
                    *(undefined8 *)(puVar25 + 8) = 0xff00000000;
                    break;
                  }
                  lVar26 = lVar26 + 1;
                  puVar25 = puVar25 + 0x14;
                } while (lVar26 < *(int *)(self + 0x32b828));
              }
              *piVar29 = 0x5a;
              piVar4[0] = 1;
              piVar4[1] = 0;
              if (param_13 == 0) {
                iVar11 = *(int *)(self + 0x32c8e8);
                if (0x3b < iVar11) {
                  iVar11 = 0x3c;
                }
                bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)((gh_long)(self + 0x8d35c) + (gh_long)iVar11 * 4) *
                                   *(int *)(self + 0x8d35c)));
              }
            }
          }
        }
        else if (param_3 == 0x6d) {
          bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_11), GH_ARG(param_10), GH_ARG(param_2));
          if (*piVar4 < 2) {
            bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
            bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x15), GH_ARG(param_10), GH_ARG(param_14), GH_ARG(param_11));
            *piVar4 = 1;
          }
          else {
            iVar11 = *piVar2;
            if (((iVar11 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = -10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar11 = *piVar2;
              iVar12 = -6 - iVar12;
            }
            uVar24 = *(undefined4 *)(self + lVar26 * 0x50 + 0xb0cc0);
            uVar30 = *(undefined8 *)piVar3;
            if (((iVar11 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar11 = *piVar2;
              iVar13 = iVar13 + 2;
            }
            if (((0x3d < iVar11 - 0xdU) ||
                ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
              lVar26 = 0;
              puVar25 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar25[-5] < 1) {
                  puVar25[2] = 0;
                  puVar25[3] = iVar13;
                  *(undefined8 *)(puVar25 + -4) = 0x100000005;
                  *(undefined8 *)(puVar25 + -6) = 0x6400000085;
                  *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
                  *(undefined8 *)(puVar25 + -10) = uVar30;
                  puVar25[-8] = uVar24;
                  puVar25[4] = 0;
                  puVar25[5] = iVar12;
                  *puVar25 = 0x3f800000;
                  puVar25[1] = 0;
                  *(undefined8 *)(puVar25 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
                  break;
                }
                lVar26 = lVar26 + 1;
                puVar25 = puVar25 + 0x14;
              } while (lVar26 < *(int *)(self + 0x32b828));
            }
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x3c), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(uVar20));
          }
        }
        else if (param_3 == 0x4d) {
          if (iVar11 < 7) {
            iVar12 = *(int *)(self + lVar31 * 0x288 + 0x8dad8);
            iVar11 = 0x4d;
          }
          else {
            iVar12 = *(int *)(self + lVar31 * 0x288 + 0x8dad8);
            if (iVar11 < 0xf) {
              iVar11 = 0x4e;
            }
            else {
              iVar11 = 0x4f;
            }
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(iVar12), GH_ARG(uVar20));
          if (0x5dd < *(int *)(self + lVar31 * 0x288 + 0x8dd3c)) {
            iVar12 = *(int *)(self + lVar31 * 0x288 + 0x8dad8);
            iVar11 = 0x6f;
            goto LAB_004678cc;
          }
        }
        else {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_3), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(uVar20));
        }
        if (((*piVar2 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
           ) {
          iVar11 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
          iVar11 = iVar11 + 100;
        }
        bVar10 = *(int *)(self + lVar31 * 0x288 + 0x8dad8) == 0;
        uVar21 = (uint)bVar10;
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)bVar10), GH_ARG(*piVar7), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar31 * 0x288 + 0x8dd30)), GH_ARG(0));
        if (*piVar29 < 0x4c) {
          iVar11 = *(int *)(self + 0x32ba14);
          iVar14 = *(int *)(self + 0x32ba20) + *piVar7;
          iVar12 = 0;
          if (iVar11 != 0) {
            iVar12 = iVar14 / iVar11;
          }
          iVar13 = 0;
          if (iVar11 != 0) {
            iVar13 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar31 * 0x288 + 0x8dacc)) /
                     iVar11;
          }
          if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = (iVar14 + -0x14) / iVar11;
            }
            if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar12 = 0;
              if (iVar11 != 0) {
                iVar12 = (iVar14 + 0x14) / iVar11;
              }
              if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 +
                                                              (gh_long)iVar12 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x45), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(uVar21))
                ;
                *(undefined4 *)(self + lVar31 * 0x288 + 0x8dd08) = 1;
              }
            }
          }
        }
        goto LAB_004653ac;
      }
      if (*(int *)(self + lVar31 * 0x288 + 0x8daec) < 2) {
        iVar13 = 0;
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
        piVar29 = (int *)(self + lVar31 * 0x288 + 0x8dad8);
        iVar12 = *piVar29;
        iVar11 = 0x14;
        if (iVar12 == 0) {
          iVar11 = -0x14;
        }
        *piVar7 = iVar11 + *piVar7;
        *(int *)(self + lVar31 * 0x288 + 0x8dacc) = *(int *)(self + lVar31 * 0x288 + 0x8dacc) + 0x3c
        ;
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x45), GH_ARG(iVar12), GH_ARG(iVar13));
        *(undefined4 *)(self + lVar31 * 0x288 + 0x8dd08) = 1;
      }
      else {
        if (((*piVar2 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
           ) {
          iVar12 = *(int *)(self + lVar31 * 0x288 + 0x8dad8);
        }
        else {
          local_b0 = 0x1300000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
          piVar29 = (int *)(self + lVar31 * 0x288 + 0x8dad8);
          iVar12 = *piVar29;
          if (iVar13 < 10) {
            iVar13 = 0x14;
            if (iVar12 == 0) {
              iVar13 = -0x14;
            }
            *piVar7 = *piVar7 + iVar13;
            *(int *)(self + lVar31 * 0x288 + 0x8dacc) =
                 *(int *)(self + lVar31 * 0x288 + 0x8dacc) + 0x3c;
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x45), GH_ARG(iVar12), GH_ARG(iVar11));
            goto LAB_0046677c;
          }
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_10), GH_ARG(0x31), GH_ARG(iVar12), GH_ARG(iVar11));
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*piVar1 == 1)) {
          iVar11 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
          iVar11 = iVar11 + 1;
        }
        piVar29 = (int *)(self + lVar31 * 0x288 + 0x8dad8);
        *(int *)(self + lVar31 * 0x288 + 0x8dd08) = iVar11;
      }
LAB_0046677c:
      bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(*piVar29), GH_ARG(*piVar7), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*piVar1 == 1)) {
        iVar11 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
        iVar11 = iVar11 + 100;
      }
      bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*piVar29 == 0)), GH_ARG(*piVar7), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar31 * 0x288 + 0x8dd30)), GH_ARG(0));
      goto LAB_004653ac;
    }
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_10), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(*(int *)(self + lVar31 * 0x288 + 0x8dad8)), GH_ARG(*piVar3), GH_ARG(*piVar29), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
    if (399 < *(int *)(self + lVar31 * 0x288 + 0x8daec)) goto LAB_004653ac;
    uVar30 = *(undefined8 *)piVar3;
    iVar12 = (int)uVar30;
    iVar14 = iVar12 - *(int *)(self + lVar31 * 0x50 + 0xb0cb8);
    iVar11 = iVar14;
    if (iVar14 < -0x3b) {
      iVar11 = -0x3c;
    }
    if (0x3b < iVar14) {
      iVar14 = 0x3c;
    }
    if (*(int *)(self + lVar31 * 0x50 + 0xb0cb8) <= iVar12) {
      iVar11 = iVar14;
    }
    if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
         ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
        (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
      lVar26 = 0;
      puVar25 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar25[-5] < 1) {
          puVar25[2] = 0;
          puVar25[3] = iVar11;
          *(undefined8 *)(puVar25 + -10) = uVar30;
          puVar25[-8] = 0;
          *(undefined8 *)(puVar25 + -4) = 0xbd;
          *(undefined8 *)(puVar25 + -6) = 0x640000006f;
          puVar25[4] = 0;
          puVar25[5] = param_10;
          *(undefined8 *)(puVar25 + -2) = 0x3f80000000000000;
          *puVar25 = 0x3f800000;
          puVar25[1] = 0;
          *(undefined8 *)(puVar25 + 6) = 0xff00000000;
          *(undefined8 *)(puVar25 + 8) = 0xff000000ff;
          iVar14 = *piVar5;
          goto joined_r0x00467868;
        }
        lVar26 = lVar26 + 1;
        puVar25 = puVar25 + 0x14;
      } while (lVar26 < *(int *)(self + 0x32b828));
    }
    iVar14 = *piVar5;
joined_r0x00467868:
    if (((iVar14 == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
       ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
        ((-0x1e < *(int *)(self + 0x8dacc) &&
         (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1530)), GH_ARG(false));
    }
    if (1 < *(int *)(self + lVar31 * 0x288 + 0x8daec)) goto LAB_004653ac;
    iVar14 = 0x16;
  }
  bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_10), GH_ARG(0), GH_ARG(iVar14), GH_ARG(0), GH_ARG(0));
LAB_004653ac:
  if (*(gh_long *)(lVar9 + 0x28) == local_a8) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
