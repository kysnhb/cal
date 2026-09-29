/* bzStateGame::Poper3_0044b51c @ 0x0044b51c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__Poper3_0044b51c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12)
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

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  gh_long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  mersenne_twister_engine *pmVar14;
  uint uVar15;
  int iVar16;
  gh_long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  int *piVar21;
  gh_long lVar22;
  float fVar23;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar5 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar5 + 0x28);
  iVar12 = param_5;
  bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(0), GH_ARG(param_2), GH_ARG(param_3));
  lVar22 = (gh_long)param_2;
  if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) < 0x17) {
    piVar1 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) == 0x16) {
      piVar21 = (int *)(self + lVar22 * 0x288 + 0x8dad8);
      iVar12 = *piVar21;
      if (param_4 == 0x4d) {
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(iVar12), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          lVar17 = 0x1560;
LAB_0044b9b0:
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar17)), GH_ARG(false));
        }
      }
      else {
        if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
             ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
            && (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar17 = 0;
          puVar18 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
              *(int *)(puVar18 + -4) = param_9;
              *(int *)((gh_long)puVar18 + -0x1c) = param_10;
              *(int *)(puVar18 + -3) = iVar12;
              puVar18[-1] = 0x85;
              puVar18[-2] = 0x6400000078;
              *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
              *puVar18 = 0x3f80000000000000;
              *(int *)((gh_long)puVar18 + 0x1c) = param_2;
              *(undefined4 *)(puVar18 + 1) = 0x3f800000;
              puVar18[5] = 0xff000000ff;
              puVar18[4] = 0xff00000000;
              break;
            }
            lVar17 = lVar17 + 1;
            puVar18 = puVar18 + 10;
          } while (lVar17 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
           ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
            ((-0x1e < *(int *)(self + 0x8dacc) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
          lVar17 = 0x14d0;
          goto LAB_0044b9b0;
        }
      }
      iVar6 = *(int *)(self + lVar22 * 0x288 + 0x8daec);
      if (iVar6 < 400) {
        if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
           && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar17 = 0;
          puVar18 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
              *(int *)(puVar18 + -4) = param_9;
              *(int *)((gh_long)puVar18 + -0x1c) = param_10;
              *(undefined4 *)(puVar18 + -3) = 0;
              puVar18[-1] = 0xbd;
              puVar18[-2] = 0x640000006f;
              *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
              *puVar18 = 0x3f80000000000000;
              *(int *)((gh_long)puVar18 + 0x1c) = param_2;
              *(undefined4 *)(puVar18 + 1) = 0x3f800000;
              puVar18[5] = 0xff000000ff;
              puVar18[4] = 0xff00000000;
              iVar6 = *(int *)(self + lVar22 * 0x288 + 0x8daec);
              break;
            }
            lVar17 = lVar17 + 1;
            puVar18 = puVar18 + 10;
          } while (lVar17 < *(int *)(self + 0x32b828));
        }
        if (iVar6 < 2) {
          *(undefined4 *)(self + 0x32c85c) = 0;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x69), GH_ARG(*piVar21), GH_ARG(iVar12));
          iVar16 = *(int *)(self + 0x1ae8);
          iVar12 = *piVar21;
          iVar6 = *piVar1;
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 0xb4;
          }
          else {
            local_b0 = 0xb300000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + -0x5a;
            iVar16 = *(int *)(self + 0x1ae8);
          }
          piVar2 = (int *)(self + lVar22 * 0x288 + 0x8dacc);
          iVar8 = *piVar2;
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar13 = 0x46;
          }
          else {
            local_b0 = 0x4500000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar16 = *(int *)(self + 0x1ae8);
          }
          uVar15 = iVar16 - 0xd;
          if (((0x3d < uVar15) || ((1LL << ((ulong)uVar15 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar18 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
                *(int *)(puVar18 + -4) = iVar7 + iVar6;
                *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
                *(int *)(puVar18 + -3) = iVar12;
                puVar18[-1] = 0x85;
                puVar18[-2] = 0x6400000078;
                *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
                *puVar18 = 0x3f80000000000000;
                *(int *)((gh_long)puVar18 + 0x1c) = param_2;
                *(undefined4 *)(puVar18 + 1) = 0x3f800000;
                puVar18[5] = 0xff000000ff;
                puVar18[4] = 0xff00000000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar18 = puVar18 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar12 = *piVar21;
          iVar6 = *piVar1;
          if (((uVar15 < 0x3e) && ((1LL << ((ulong)uVar15 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 0x8c;
          }
          else {
            local_b0 = 0x8b00000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + -0x46;
            iVar16 = *(int *)(self + 0x1ae8);
          }
          iVar8 = *piVar2;
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar13 = 0x3c;
          }
          else {
            local_b0 = 0x3b00000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar16 = *(int *)(self + 0x1ae8);
          }
          uVar15 = iVar16 - 0xd;
          if (((0x3d < uVar15) || ((1LL << ((ulong)uVar15 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar18 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
                *(int *)(puVar18 + -4) = iVar7 + iVar6;
                *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
                *(int *)(puVar18 + -3) = iVar12;
                puVar18[-1] = 0x85;
                puVar18[-2] = 0x6400000078;
                *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
                *puVar18 = 0x3f80000000000000;
                *(int *)((gh_long)puVar18 + 0x1c) = param_2;
                *(undefined4 *)(puVar18 + 1) = 0x3f800000;
                puVar18[5] = 0xff000000ff;
                puVar18[4] = 0xff00000000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar18 = puVar18 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar12 = *piVar21;
          iVar6 = *piVar1;
          if (((uVar15 < 0x3e) && ((1LL << ((ulong)uVar15 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 0xa0;
          }
          else {
            local_b0 = 0x9f00000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + -0x50;
            iVar16 = *(int *)(self + 0x1ae8);
          }
          iVar8 = *piVar2;
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar13 = 0x32;
          }
          else {
            local_b0 = 0x3100000000;
            pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
            iVar16 = *(int *)(self + 0x1ae8);
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar18 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
                *(int *)(puVar18 + -4) = iVar7 + iVar6;
                *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
                *(int *)(puVar18 + -3) = iVar12;
                puVar18[-1] = 0x85;
                puVar18[-2] = 0x6400000078;
                *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
                *puVar18 = 0x3f80000000000000;
                *(int *)((gh_long)puVar18 + 0x1c) = param_2;
                *(undefined4 *)(puVar18 + 1) = 0x3f800000;
                puVar18[5] = 0xff000000ff;
                puVar18[4] = 0xff00000000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar18 = puVar18 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar12 = 0;
          do {
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar6 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar6 = iVar6 + 0xc;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar7 = 5;
            }
            else {
              local_b0 = 0x400000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar8 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            iVar13 = *piVar1;
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar9 = 0x82;
            }
            else {
              local_b0 = 0x8100000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + -0x5a;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            iVar3 = *piVar2;
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar10 = 0x28;
            }
            else {
              local_b0 = 0x2700000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar11 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar11 = iVar11 + 6;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if ((((0x3d < iVar16 - 0xdU) ||
                 ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*(int *)(self + 0xba8) != 1)) && (iVar4 = *(int *)(self + 0x32b828), 0 < iVar4)) {
              lVar22 = 0;
              puVar19 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar19[-5] < 1) {
                  puVar19[2] = 0;
                  puVar19[3] = iVar11;
                  *(undefined8 *)(puVar19 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar19 + -6) = 0x6400000085;
                  puVar19[-10] = iVar9 + iVar13;
                  puVar19[-9] = iVar3 - iVar10;
                  puVar19[-8] = iVar8;
                  puVar19[-4] = iVar7 + 0x143;
                  puVar19[-3] = 1;
                  *(undefined8 *)(puVar19 + -2) = 0x3f80000000000000;
                  *puVar19 = 0x3f800000;
                  puVar19[1] = 0;
                  puVar19[4] = 0;
                  puVar19[5] = -iVar6;
                  *(undefined8 *)(puVar19 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar19 = puVar19 + 0x14;
              } while (lVar22 < iVar4);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != 5);
          iVar12 = 0;
          do {
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar6 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar6 = iVar6 + 0xc;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar7 = 5;
            }
            else {
              local_b0 = 0x400000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar8 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            iVar13 = *piVar1;
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar9 = 0xbe;
            }
            else {
              local_b0 = 0xbd00000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + -0x5a;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            iVar3 = *piVar2;
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar10 = 0x50;
            }
            else {
              local_b0 = 0x4f00000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar11 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
              iVar11 = iVar11 + 6;
              iVar16 = *(int *)(self + 0x1ae8);
            }
            if (((0x3d < iVar16 - 0xdU) ||
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*(int *)(self + 0xba8) != 1 && (iVar4 = *(int *)(self + 0x32b828), 0 < iVar4)))) {
              lVar22 = 0;
              puVar19 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar19[-5] < 1) {
                  puVar19[2] = 0;
                  puVar19[3] = iVar11;
                  *(undefined8 *)(puVar19 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar19 + -6) = 0x6400000085;
                  puVar19[-10] = iVar9 + iVar13;
                  puVar19[-9] = iVar3 - iVar10;
                  puVar19[-8] = iVar8;
                  puVar19[-4] = iVar7 + 0x143;
                  puVar19[-3] = 1;
                  *(undefined8 *)(puVar19 + -2) = 0x3f80000000000000;
                  *puVar19 = 0x3f800000;
                  puVar19[1] = 0;
                  puVar19[4] = 0;
                  puVar19[5] = -iVar6;
                  *(undefined8 *)(puVar19 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar19 = puVar19 + 0x14;
              } while (lVar22 < iVar4);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != 5);
          if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
             ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
              ((-0x1e < *(int *)(self + 0x8dacc) &&
               (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
          }
          goto LAB_0044cad0;
        }
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x6c), GH_ARG(*piVar21), GH_ARG(iVar12));
      goto LAB_0044cad0;
    }
    if (param_13 - 0x198U < 6) {
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        lVar17 = 0x1668;
LAB_0044c304:
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar17)), GH_ARG(false));
      }
    }
    else if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
             (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
            ((-0x1e < *(int *)(self + 0x8dacc) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
      lVar17 = 0x1218;
      goto LAB_0044c304;
    }
    if (param_7 < 2) {
      *(uint *)(self + lVar22 * 0x288 + 0x8dad8) = (uint)(param_7 == 0);
    }
    if (*(int *)(self + lVar22 * 0x288 + 0x8daec) < 2) {
      piVar21 = (int *)(self + lVar22 * 0x288 + 0x8dad8);
      iVar6 = *piVar21;
      param_4 = param_5;
      if (param_5 == 0x3a) {
        param_4 = 0x3b;
      }
    }
    else {
      piVar21 = (int *)(self + lVar22 * 0x288 + 0x8dad8);
      iVar6 = *piVar21;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_4), GH_ARG(iVar6), GH_ARG(iVar12));
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_6), GH_ARG(0), GH_ARG(*piVar21), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(0), GH_ARG(0.0), GH_ARG(0));
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar12 = 4;
    }
    else {
      local_b0 = 0x300000000;
      pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
      iVar12 = iVar12 + 100;
    }
    uVar15 = (uint)(*piVar21 == 0);
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar12), GH_ARG(0x3c), GH_ARG((uint)(*piVar21 == 0)), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar22 * 0x288 + 0x8dd30)), GH_ARG(0));
    if (*(int *)(self + lVar22 * 0x288 + 0x8dae0) < 0x4c) {
      iVar6 = *(int *)(self + 0x32ba14);
      iVar12 = *(int *)(self + 0x32ba20) + *piVar1;
      iVar16 = 0;
      if (iVar6 != 0) {
        iVar16 = iVar12 / iVar6;
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar22 * 0x288 + 0x8dacc)) / iVar6;
      }
      if ((*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar16 = 0;
        if (iVar6 != 0) {
          iVar16 = (iVar12 + -0x14) / iVar6;
        }
        if ((*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar16 = 0;
          if (iVar6 != 0) {
            iVar16 = (iVar12 + 0x14) / iVar6;
          }
          if ((*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar7 * 4 + (gh_long)iVar16 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x45), GH_ARG(*piVar21), GH_ARG(uVar15));
            *(undefined4 *)(self + lVar22 * 0x288 + 0x8dd08) = 1;
          }
        }
      }
      goto LAB_0044cad0;
    }
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      param_6 = 4;
    }
    else {
      local_b0 = 0x300000000;
      pmVar14 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar14), GH_ARG((param_type *)&local_b0));
      param_6 = iVar12 + 100;
    }
    fVar23 = *(float *)(self + lVar22 * 0x288 + 0x8dd30);
    uVar15 = (uint)(*piVar21 == 0);
    iVar12 = 0x3c;
  }
  else {
    if (param_13 - 0x198U < 6) {
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        lVar17 = 0x1668;
LAB_0044b7a8:
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar17)), GH_ARG(false));
      }
    }
    else {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0xad), GH_ARG(*(int *)(self + lVar22 * 0x288 + 0x8dad8)), GH_ARG(iVar12));
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        lVar17 = 0x1218;
        goto LAB_0044b7a8;
      }
    }
    if (param_7 < 2) {
      uVar15 = (uint)(param_7 == 0);
      puVar20 = (uint *)(self + lVar22 * 0x288 + 0x8dad8);
      *puVar20 = (uint)(param_7 == 0);
    }
    else {
      puVar20 = (uint *)(self + lVar22 * 0x288 + 0x8dad8);
      uVar15 = *puVar20;
    }
    if (*(int *)(self + lVar22 * 0x288 + 0x8daec) < 2) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0xad), GH_ARG(uVar15), GH_ARG(iVar12));
      uVar15 = *puVar20;
      if (1 < *(int *)(self + lVar22 * 0x288 + 0x8daec)) goto LAB_0044b8d0;
      iVar6 = 0xae;
    }
    else {
LAB_0044b8d0:
      iVar6 = 0xad;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar15), GH_ARG(iVar12));
    uVar15 = *puVar20;
    fVar23 = 0.0;
    iVar12 = 0;
  }
  bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_6), GH_ARG(iVar12), GH_ARG(uVar15), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(0), GH_ARG(fVar23), GH_ARG(0));
LAB_0044cad0:
  if (*(gh_long *)(lVar5 + 0x28) != local_a8) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
