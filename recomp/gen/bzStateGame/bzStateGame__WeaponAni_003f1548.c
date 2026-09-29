/* bzStateGame::WeaponAni_003f1548 @ 0x003f1548 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
int bzStateGame__WeaponAni_003f1548(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  gh_long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  gh_long lVar17;
  undefined8 *puVar18;
  mersenne_twister_engine *pmVar19;
  int iVar20;
  int in_w5 = 0;
  undefined4 uVar21;
  ulong uVar22;
  gh_long lVar23;
  int *piVar24;
  gh_long lVar25;
  undefined4 *puVar26;
  gh_long lVar27;
  int *piVar28;
  gh_long lVar29;
  ulong uVar30;
  uint *puVar31;
  uint uVar32;
  gh_long lVar33;
  undefined8 uVar34;
  ulong uVar35;
  float fVar36;
  uint64_t gh_frame64[29] = {0};   /* 원작 스택 프레임 (SP-0xd0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xd0;
#define local_d0 (*(gh_long *)(gh_fb - 0xd0))
#define local_c8 (*(gh_long *)(gh_fb - 0xc8))
#define auStack_c0 (*(undefined1 (*)[8])(gh_fb - 0xc0))
#define local_b8 (*(gh_long *)(gh_fb - 0xb8))
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  uVar35 = (ulong)(uint)param_5;
  lVar6 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar6 + 0x28);
  iVar15 = 0;
  switch(param_2) {
  case 0:
    if (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dad8) == 0) {
      iVar8 = *(int *)(self + 0x32c83c);
      if ((iVar8 < 1) || (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dae0) != 0x30)) {
        iVar8 = bzStateGame__cahkCom_0043a6b0(GH_ARG(self), GH_ARG(param_3), GH_ARG(0x50), GH_ARG(0x28));
      }
      iVar9 = *(int *)(self + (gh_long)iVar8 * 0x288 + 0x8daf0);
      if (7 < iVar9 - 0x14cU) {
        iVar15 = 0;
        if ((iVar9 == 0x60) || (iVar9 == 0x78)) goto switchD_003f15b8_caseD_2;
        lVar33 = (gh_long)iVar8;
        if (((*(int *)(self + 0x32c134) <= iVar8) &&
            (((1 < *(int *)(self + lVar33 * 0x288 + 0x8daec) &&
              (*(int *)(self + lVar33 * 0x288 + 0x8dae0) != 0x47)) &&
             (*(float *)(self + lVar33 * 0x288 + 0x8db24) < 1.3)))) &&
           (*(int *)(self + lVar33 * 0x288 + 0x8db14) < 0x15)) {
          iVar15 = *(int *)(self + lVar33 * 0x288 + 0x8dacc);
          iVar9 = *(int *)(self + 0x8dacc);
          if (iVar9 < iVar15) {
            *(int *)(self + lVar33 * 0x288 + 0x8dacc) = iVar9;
            iVar15 = iVar9;
          }
          piVar24 = (int *)(self + 0x8dac8);
          iVar9 = *piVar24;
          piVar28 = piVar24 + lVar33 * 0xa2;
          *piVar28 = iVar9;
          iVar10 = *(int *)(self + 0x8dad8);
          iVar11 = 0x50;
          piVar28[4] = (uint)(iVar10 == 0);
          iVar15 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(iVar8), GH_ARG(0x32), GH_ARG(0x1e), GH_ARG(0x50), GH_ARG(in_w5), GH_ARG(iVar9), GH_ARG(iVar15), GH_ARG((uint)(iVar10 != 0)));
          *piVar28 = iVar15 + iVar9;
          if (iVar15 < 0x50) {
            iVar15 = iVar15 + *piVar24 + -0x50;
            goto LAB_003f3a80;
          }
          goto LAB_003f3a84;
        }
      }
    }
    break;
  case 1:
    if (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dad8) == 1) {
      iVar8 = *(int *)(self + 0x32c83c);
      if ((iVar8 < 1) || (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dae0) != 0x30)) {
        iVar8 = bzStateGame__cahkCom_0043a6b0(GH_ARG(self), GH_ARG(param_3), GH_ARG(0x50), GH_ARG(0x28));
      }
      iVar15 = *(int *)(self + (gh_long)iVar8 * 0x288 + 0x8daf0);
      if (((iVar15 - 0x14cU < 8) || (iVar15 == 0x78)) || (iVar15 == 0x60)) {
        cocos2d__log_005d21e4(GH_ARG("-TEST- 2"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      }
      else {
        lVar33 = (gh_long)iVar8;
        if (((*(int *)(self + 0x32c134) <= iVar8) && (1 < *(int *)(self + lVar33 * 0x288 + 0x8daec))
            ) && ((*(int *)(self + lVar33 * 0x288 + 0x8dae0) != 0x47 &&
                  ((*(float *)(self + lVar33 * 0x288 + 0x8db24) < 1.3 &&
                   (*(int *)(self + lVar33 * 0x288 + 0x8db14) < 0x15)))))) {
          cocos2d__log_005d21e4(GH_ARG("-TEST- 2.5"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          iVar15 = *(int *)(self + lVar33 * 0x288 + 0x8dacc);
          iVar9 = *(int *)(self + 0x8dacc);
          if (iVar9 < iVar15) {
            *(int *)(self + lVar33 * 0x288 + 0x8dacc) = iVar9;
            iVar15 = iVar9;
          }
          piVar24 = (int *)(self + 0x8dac8);
          iVar9 = *piVar24;
          piVar28 = piVar24 + lVar33 * 0xa2;
          *piVar28 = iVar9;
          iVar10 = *(int *)(self + 0x8dad8);
          iVar11 = 0x50;
          piVar28[4] = (uint)(iVar10 == 0);
          iVar15 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(iVar8), GH_ARG(0x32), GH_ARG(0x1e), GH_ARG(0x50), GH_ARG(in_w5), GH_ARG(iVar9), GH_ARG(iVar15), GH_ARG((uint)(iVar10 != 0)));
          *piVar28 = iVar9 - iVar15;
          if (iVar15 < 0x50) {
            iVar15 = (0x50 - iVar15) + *piVar24;
LAB_003f3a80:
            *(int *)(self + 0x8dac8) = iVar15;
          }
LAB_003f3a84:
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x17), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(iVar11));
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar8), GH_ARG(0x3f), GH_ARG((uint)(*(int *)(self + 0x8dad8) == 0)), GH_ARG(iVar11));
          iVar15 = 2;
          goto switchD_003f15b8_caseD_2;
        }
      }
    }
    break;
  default:
    goto switchD_003f15b8_caseD_2;
  case 10:
    if (param_3 == 0x1d) {
      piVar24 = (int *)(self + 0x32c868);
      iVar15 = *piVar24;
      if (iVar15 == 0x1e) {
        iVar15 = *(int *)(self + 0x92448);
        iVar8 = *(int *)(self + 0x92440);
        iVar9 = 0x1d;
LAB_003f30bc:
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(iVar9), GH_ARG(iVar15), GH_ARG(4), GH_ARG(param_4), GH_ARG(iVar8));
      }
      else {
        iVar8 = iVar15 + -1;
        if (0 < iVar15) {
LAB_003f38fc:
          iVar15 = 0;
          *piVar24 = iVar8;
          goto switchD_003f15b8_caseD_2;
        }
        iVar8 = *(int *)(self + 0x92434);
        iVar9 = *(int *)(self + 0x32ba14);
        iVar15 = *(int *)(self + 0x32ba20) + *(int *)(self + 0x92430);
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = iVar15 / iVar9;
        }
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = (param_5 + iVar8 + *(int *)(self + 0x32ba24) + 0x3c) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar10 = 0;
          if (iVar9 != 0) {
            iVar10 = (iVar15 + -0x14) / iVar9;
          }
          if ((*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar10 = 0;
            if (iVar9 != 0) {
              iVar10 = (iVar15 + 0x14) / iVar9;
            }
            if ((*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar10 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar15 = 0;
              *(int *)(self + 0x92434) = iVar8 + param_5;
              goto switchD_003f15b8_caseD_2;
            }
          }
        }
        *(undefined4 *)(self + 0x8dae0) = 0xc;
        *piVar24 = 0x1e;
        iVar8 = *(int *)(self + 0x32c134);
        if (5 < iVar8) {
          lVar33 = 4;
          piVar24 = (int *)(self + 0x8e50c);
          do {
            if ((0 < *piVar24) && (piVar24[0x88] == 0x2611)) {
              *piVar24 = 0;
              *(int *)(self + 0x32c13c) = *(int *)(self + 0x32c13c) + 1;
            }
            lVar33 = lVar33 + 1;
            iVar15 = 0;
            piVar24 = piVar24 + 0xa2;
          } while (lVar33 < (gh_long)iVar8 + -1);
          goto switchD_003f15b8_caseD_2;
        }
      }
    }
    else if ((param_3 == 0) && (piVar28 = (int *)(self + 0x8db14), *piVar28 == 0x16)) {
      piVar24 = (int *)(self + 0x32c85c);
      iVar15 = *piVar24;
      if (iVar15 == 0x1e) {
        iVar15 = *(int *)(self + 0x8dae0);
        iVar8 = *(int *)(self + 0x8dad8);
        iVar9 = 0;
        goto LAB_003f30bc;
      }
      iVar8 = iVar15 + -1;
      if (0 < iVar15) goto LAB_003f38fc;
      cocos2d__log_005d21e4(GH_ARG("-TEST- 4"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      piVar24 = (int *)(self + 0x8dad8);
      piVar1 = (int *)(self + 0x8dac8);
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(0), GH_ARG(*(int *)(self + 0x8dae0)), GH_ARG(3), GH_ARG(param_5), GH_ARG(*piVar24));
      piVar2 = (int *)(self + 0x8dacc);
      iVar8 = *(int *)(self + 0x32ba14);
      iVar15 = *(int *)(self + 0x32ba20) + *piVar1;
      iVar9 = 0;
      if (iVar8 != 0) {
        iVar9 = iVar15 / iVar8;
      }
      iVar10 = 0;
      if (iVar8 != 0) {
        iVar10 = (*(int *)(self + 0x32ba24) + *piVar2) / iVar8;
      }
      if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar9 = 0;
        if (iVar8 != 0) {
          iVar9 = (iVar15 + -0x3c) / iVar8;
        }
        if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar9 = 0;
          if (iVar8 != 0) {
            iVar9 = (iVar15 + 0x3c) / iVar8;
          }
          if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) break;
        }
      }
      cocos2d__log_005d21e4(GH_ARG("-TEST- 5"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      piVar3 = (int *)(self + 0x8daec);
      if (0 < *piVar3) {
        cocos2d__log_005d21e4(GH_ARG("-TEST- 6"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar15 = *(int *)(self + 0x32ba14);
        uVar32 = 0;
        if (iVar15 != 0) {
          uVar32 = (*piVar1 + *(int *)(self + 0x32ba20)) / iVar15;
        }
        uVar35 = (ulong)uVar32;
        iVar8 = 0;
        if (iVar15 != 0) {
          iVar8 = (*piVar2 + *(int *)(self + 0x32ba24)) / iVar15;
        }
        lVar23 = (gh_long)iVar8;
        lVar17 = lVar23 + -4;
        lVar33 = (gh_long)(int)uVar32;
        if ((((((*(int *)(self + lVar17 * 4 + (gh_long)(int)uVar32 * 0x2d0 + 0x140598) != 0) ||
               (*(int *)(self + lVar23 * 4 + lVar33 * 0x2d0 + 0x140584) != 0)) ||
              (*(int *)(self + lVar23 * 4 + lVar33 * 0x2d0 + 0x140580) != 0)) &&
             (((uVar35 = lVar33 + 1, *(int *)(self + lVar17 * 4 + uVar35 * 0x2d0 + 0x140598) != 0 ||
               (*(int *)(self + lVar23 * 4 + uVar35 * 0x2d0 + 0x140584) != 0)) ||
              (*(int *)(self + lVar23 * 4 + uVar35 * 0x2d0 + 0x140580) != 0)))) &&
            (((uVar35 = lVar33 - 1, *(int *)(self + lVar17 * 4 + uVar35 * 0x2d0 + 0x140598) != 0 ||
              (*(int *)(self + lVar23 * 4 + uVar35 * 0x2d0 + 0x140584) != 0)) ||
             (*(int *)(self + lVar23 * 4 + uVar35 * 0x2d0 + 0x140580) != 0)))) ||
           (iVar15 = (int)uVar35, iVar15 == -999)) {
          if (2 < *piVar3) break;
          iVar15 = -999;
        }
        cocos2d__log_005d21e4(GH_ARG("-TEST- 7"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar8 = *piVar3;
        if (1 < iVar8) {
          lVar33 = (gh_long)iVar15 * 0x2d0 + 0x140598;
          *(undefined4 *)(self + lVar17 * 4 + lVar33) = 0x1ed;
          lVar33 = lVar23 * 4 + lVar33;
          *(int *)(self + lVar33 + -0x14) = -*piVar3;
          *(int *)(self + lVar33 + -0x18) = -*piVar24;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 8"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        }
        *(undefined4 *)(self + 0x32c864) = 0;
        *piVar3 = *(int *)(self + 0x32c860);
        piVar28[0] = 0;
        piVar28[1] = 0;
        *(undefined4 *)(self + 0x8db0c) = 0x1c;
        if (iVar8 < 3) {
          iVar15 = *(int *)(self + 0x1ae8);
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          piVar28 = (int *)(self + 0x1ae8);
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 0x78;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 0x78;
          }
          else {
            local_b0 = 0x7700000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -0x3c;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x3c;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x3c;
          }
          else {
            local_b0 = 0x3b00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          uVar32 = iVar15 - 0xd;
          if ((((0x3d < uVar32) || ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          if ((uVar32 < 0x3e) && ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 0xb4;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 0xb4;
          }
          else {
            local_b0 = 0xb300000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -900;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x50;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x50;
          }
          else {
            local_b0 = 0x4f00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          uVar32 = iVar15 - 0xd;
          if ((((0x3d < uVar32) || ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          if ((uVar32 < 0x3e) && ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 200;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 200;
          }
          else {
            local_b0 = 0xc700000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -100;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x50;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x50;
          }
          else {
            local_b0 = 0x4f00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          uVar32 = iVar15 - 0xd;
          if ((((0x3d < uVar32) || ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          if ((uVar32 < 0x3e) && ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 0xa0;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 0xa0;
          }
          else {
            local_b0 = 0x9f00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -0x50;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x46;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x46;
          }
          else {
            local_b0 = 0x4500000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          uVar32 = iVar15 - 0xd;
          if ((((0x3d < uVar32) || ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          if ((uVar32 < 0x3e) && ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 0x8c;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 0x8c;
          }
          else {
            local_b0 = 0x8b00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -0x46;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x3c;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x3c;
          }
          else {
            local_b0 = 0x3b00000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          uVar32 = iVar15 - 0xd;
          if ((((0x3d < uVar32) || ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = *piVar24;
          iVar9 = *piVar1;
          if ((uVar32 < 0x3e) && ((1LL << ((ulong)uVar32 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar10 = 0xb4;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar10 = 0xb4;
          }
          else {
            local_b0 = 0xb300000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar10 = iVar10 + -0x5a;
            iVar15 = *piVar28;
          }
          iVar11 = *piVar2;
          if ((iVar15 - 0xdU < 0x3e) &&
             ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar16 = 0x32;
          }
          else if (*(int *)(self + 0xba8) == 1) {
            iVar16 = 0x32;
          }
          else {
            local_b0 = 0x3100000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *piVar28;
          }
          if ((((0x3d < iVar15 - 0xdU) ||
               ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
                puVar26[-10] = iVar10 + iVar9;
                puVar26[-9] = iVar11 - iVar16;
                *(undefined8 *)(puVar26 + -4) = 0x85;
                *(undefined8 *)(puVar26 + -6) = 0x6400000078;
                puVar26[-8] = iVar8;
                *(undefined8 *)(puVar26 + 5) = 0;
                *(undefined8 *)(puVar26 + 3) = 0;
                *(undefined8 *)(puVar26 + 1) = 0;
                puVar26[9] = 0xff;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                break;
              }
              lVar33 = lVar33 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
          }
          iVar8 = 0;
          do {
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar9 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 0xc;
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar10 = 5;
            }
            else {
              local_b0 = 0x400000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar11 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            iVar16 = *piVar1;
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar12 = 0x82;
            }
            else {
              local_b0 = 0x8100000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + -0x5a;
              iVar15 = *piVar28;
            }
            iVar20 = *piVar2;
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar13 = 0x28;
            }
            else {
              local_b0 = 0x2700000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar14 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
              iVar14 = iVar14 + 6;
            }
            if (((0x3d < iVar15 - 0xdU) ||
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*(int *)(self + 0xba8) != 1 && (iVar4 = *(int *)(self + 0x32b828), 0 < iVar4)))) {
              lVar33 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[2] = 0;
                  puVar26[3] = iVar14;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                  puVar26[-10] = iVar12 + iVar16;
                  puVar26[-9] = (iVar20 + -0x28) - iVar13;
                  puVar26[-8] = iVar11;
                  puVar26[-4] = iVar10 + 0x143;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar9;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar33 = lVar33 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar33 < iVar4);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 5);
          iVar8 = 0;
          do {
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar9 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 0xc;
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar10 = 5;
            }
            else {
              local_b0 = 0x400000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar11 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            iVar16 = *piVar1;
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar12 = 0xbe;
            }
            else {
              local_b0 = 0xbd00000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + -0x5a;
              iVar15 = *piVar28;
            }
            iVar20 = *piVar2;
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar13 = 0x50;
            }
            else {
              local_b0 = 0x4f00000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
            }
            if (((iVar15 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar14 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
              iVar15 = *piVar28;
              iVar14 = iVar14 + 6;
            }
            if (((0x3d < iVar15 - 0xdU) ||
                ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*(int *)(self + 0xba8) != 1 && (iVar4 = *(int *)(self + 0x32b828), 0 < iVar4)))) {
              lVar33 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[2] = 0;
                  puVar26[3] = iVar14;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                  puVar26[-10] = iVar12 + iVar16;
                  puVar26[-9] = (iVar20 + -0x28) - iVar13;
                  puVar26[-8] = iVar11;
                  puVar26[-4] = iVar10 + 0x143;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar9;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar33 = lVar33 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar33 < iVar4);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 5);
          if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *piVar1)) &&
              (*piVar1 < *(int *)(self + 0x1158) + 0x96)) &&
             ((-0x1e < *piVar2 && (*piVar2 < *(int *)(self + 0x115c) + 100)))) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
          }
          uVar35 = (ulong)*(uint *)(self + 0x32c850);
          bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1a), GH_ARG(0), GH_ARG(0), GH_ARG(*(uint *)(self + 0x32c850)));
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x3d), GH_ARG(*piVar24), GH_ARG((int)uVar35));
          iVar15 = *(int *)(self + 0x32c134);
          if (1 < iVar15) {
            piVar24 = (int *)(self + 0x8dd68);
            lVar33 = 1;
            do {
              if ((1 < piVar24[3]) && (*piVar24 == 0x94)) {
                *(undefined8 *)(piVar24 + -6) = *(undefined8 *)piVar1;
                if (((*piVar28 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(*piVar28 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar15 = 2;
                }
                else {
                  local_b0 = 0x100000000;
                  pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
                }
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar33), GH_ARG(0x3d), GH_ARG(iVar15), GH_ARG((int)uVar35));
                iVar15 = *(int *)(self + 0x32c134);
              }
              lVar33 = lVar33 + 1;
              piVar24 = piVar24 + 0xa2;
            } while (lVar33 < iVar15);
          }
        }
        else {
          bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1a), GH_ARG(0), GH_ARG(0), GH_ARG(*(int *)(self + 0x32c850)));
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
          iVar15 = *(int *)(self + 0x32c134);
          if (1 < iVar15) {
            piVar24 = (int *)(self + 0x8dd68);
            lVar33 = 1;
            do {
              if ((1 < piVar24[3]) && (*piVar24 == 0x94)) {
                *(undefined8 *)(piVar24 + -6) = *(undefined8 *)piVar1;
                bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG((int)lVar33), GH_ARG(0));
                iVar15 = *(int *)(self + 0x32c134);
              }
              lVar33 = lVar33 + 1;
              piVar24 = piVar24 + 0xa2;
            } while (lVar33 < iVar15);
          }
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        }
        iVar15 = 0;
        *(undefined8 *)(self + 0x8dd14) = *(undefined8 *)(self + 0x8cb70);
        *(undefined4 *)(self + 0x8dd1c) = *(undefined4 *)(self + 0x8cb78);
        goto switchD_003f15b8_caseD_2;
      }
    }
    break;
  case 0xb:
    if (*(int *)(self + 0x8dd0c) < 2) {
      *(int *)(self + 0x8dd0c) = param_5;
    }
    iVar15 = *(int *)(self + 0x32c134);
    if (1 < iVar15) {
      lVar33 = 1;
      piVar24 = (int *)(self + 0x8dd50);
      do {
        if (piVar24[9] < 2) {
          if (piVar24[9] == 1) {
            piVar24[9] = 0;
          }
        }
        else if (iVar15 <= piVar24[0x15]) {
          if (piVar24[0x12] == 3) {
            piVar24[0xa1] = 3;
          }
          iVar15 = *(int *)(self + 0x32ba14);
          iVar8 = 0;
          if (iVar15 != 0) {
            iVar8 = (*piVar24 + *(int *)(self + 0x32ba20)) / iVar15;
          }
          iVar9 = 0;
          if (iVar15 != 0) {
            iVar9 = (piVar24[1] + *(int *)(self + 0x32ba24)) / iVar15;
          }
          lVar17 = (gh_long)iVar9;
          lVar23 = (gh_long)iVar8 * 0x2d0 + 0x140598;
          piVar28 = (int *)(self + (lVar17 + -1) * 4 + lVar23);
          if (*(int *)(self + (gh_long)iVar9 * 4 + lVar23) == 0) {
            if (*piVar28 != 0) goto LAB_003f2540;
            *(int *)(self + (gh_long)iVar9 * 4 + lVar23) = piVar24[0xa1] + 0x212;
            *piVar28 = -0x21;
          }
          else if ((*piVar28 == 0) &&
                  (*(int *)(self + lVar17 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140590) == 0)) {
            *piVar28 = piVar24[0xa1] + 0x212;
            *(int *)(self + lVar17 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140590) = -0x21;
          }
          else {
LAB_003f2540:
            lVar23 = (gh_long)iVar8 + -1;
            if ((*(int *)(self + (lVar17 + -1) * 4 + lVar23 * 0x2d0 + 0x140598) == 0) &&
               (*(int *)(self + lVar17 * 4 + lVar23 * 0x2d0 + 0x140590) == 0)) {
              *(int *)(self + (lVar17 + -1) * 4 + lVar23 * 0x2d0 + 0x140598) = piVar24[0xa1] + 0x212
              ;
              *(int *)(self + lVar17 * 4 + lVar23 * 0x2d0 + 0x140590) = -0x21;
            }
          }
          piVar24[9] = 0;
          iVar15 = *(int *)(self + 0x32c134);
        }
        lVar33 = lVar33 + 1;
        piVar24 = piVar24 + 0xa2;
      } while (lVar33 < iVar15);
    }
    iVar8 = *(int *)(self + 0x32b824);
    if (iVar15 < iVar8) {
      lVar33 = (gh_long)iVar15;
      lVar23 = (gh_long)iVar15 * 0x288 + 0x8dac8;
      do {
        if (0 < *(int *)(self + lVar23 + 0x24)) {
          if ((*(int *)(self + lVar23 + 0x24) != 1) &&
             (uVar32 = *(uint *)(self + lVar23 + 0x274), (uVar32 & 0xfffffffe) != 0x30)) {
            iVar15 = *(int *)(self + 0x32ba14);
            iVar8 = 0;
            if (iVar15 != 0) {
              iVar8 = (*(int *)(self + lVar23) + *(int *)(self + 0x32ba20)) / iVar15;
            }
            iVar9 = 0;
            if (iVar15 != 0) {
              iVar9 = (*(int *)((gh_long)(self + lVar23) + 4) + *(int *)(self + 0x32ba24)) / iVar15;
            }
            lVar25 = (gh_long)iVar9;
            lVar17 = (gh_long)iVar8 * 0x2d0 + 0x140598;
            lVar29 = lVar25 + -1;
            puVar31 = (uint *)(self + lVar29 * 4 + lVar17);
            lVar27 = (gh_long)iVar8;
            if (*(uint *)(self + (gh_long)iVar9 * 4 + lVar17) == 0) {
              if (*puVar31 != 0) goto LAB_003f26e4;
              *(uint *)(self + (gh_long)iVar9 * 4 + lVar17) = uVar32;
              *puVar31 = -*(int *)(self + lVar23 + 600);
            }
            else {
              if ((*puVar31 == 0) &&
                 (piVar24 = (int *)(self + lVar25 * 4 + lVar27 * 0x2d0 + 0x140590), *piVar24 == 0))
              {
LAB_003f27c0:
                *puVar31 = uVar32;
              }
              else {
LAB_003f26e4:
                puVar31 = (uint *)(self + lVar29 * 4 + (lVar27 + -1) * 0x2d0 + 0x140598);
                if ((*puVar31 == 0) &&
                   (piVar24 = (int *)(self + lVar25 * 4 + (lVar27 + -1) * 0x2d0 + 0x140590),
                   *piVar24 == 0)) goto LAB_003f27c0;
                if ((*(uint *)(self + lVar29 * 4 + (lVar27 + 1) * 0x2d0 + 0x140598) != 0) ||
                   (piVar24 = (int *)(self + (lVar25 + -2) * 4 + (lVar27 + 1) * 0x2d0 + 0x140598),
                   *piVar24 != 0)) {
                  if ((*(uint *)(self + (lVar25 + -2) * 4 + lVar27 * 0x2d0 + 0x140598) == 0) &&
                     (*(int *)(self + lVar25 * 4 + lVar27 * 0x2d0 + 0x14058c) == 0)) {
                    *(uint *)(self + (lVar25 + -2) * 4 + lVar27 * 0x2d0 + 0x140598) = uVar32;
                    *(int *)(self + lVar25 * 4 + lVar27 * 0x2d0 + 0x14058c) =
                         -*(int *)(self + lVar23 + 600);
                  }
                  goto LAB_003f27e4;
                }
                *(uint *)(self + lVar29 * 4 + (lVar27 + 1) * 0x2d0 + 0x140598) = uVar32;
              }
              *piVar24 = -*(int *)(self + lVar23 + 600);
            }
          }
LAB_003f27e4:
          if ((*(uint *)(self + lVar23 + 0x274) & 0xfffffffe) == 0x30) {
            *(int *)(self + 0x32c910) = *(int *)(self + 0x32c910) + 1;
            lVar17 = 0x3c;
            if (*(int *)(self + 0x32c8e8) < 0x3e) {
              lVar17 = (gh_long)*(int *)(self + 0x32c8e8);
            }
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + lVar17 * 4 + 0x8d35c) * *(int *)(self + 0x8d35c)));
            bzStateGame__PEXP_0043b314(GH_ARG(self), GH_ARG(*(int *)(self + lVar17 * 4 + 0x8d454) * *(int *)(self + 0x8d454)));
          }
          *(undefined4 *)(self + lVar23 + 0x24) = 0;
          iVar8 = *(int *)(self + 0x32b824);
        }
        lVar33 = lVar33 + 1;
        lVar23 = lVar23 + 0x288;
      } while (lVar33 < iVar8);
    }
    iVar15 = *(int *)(self + 0x32b828);
    uVar35 = (ulong)iVar15;
    if (0 < iVar15) {
      if (iVar15 == 1) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar35 & 0xfffffffffffffffe;
        puVar26 = (undefined4 *)(self + 0xb0d1c);
        uVar30 = uVar22;
        do {
          puVar26[-0x14] = 0;
          *puVar26 = 0;
          uVar30 = uVar30 - 2;
          puVar26 = puVar26 + 0x28;
        } while (uVar30 != 0);
        if (uVar22 == uVar35) break;
      }
      puVar26 = (undefined4 *)(self + uVar22 * 0x50 + 0xb0ccc);
      do {
        uVar22 = uVar22 + 1;
        iVar15 = 0;
        *puVar26 = 0;
        puVar26 = puVar26 + 0x14;
      } while ((gh_long)uVar22 < (gh_long)uVar35);
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0xc:
    if (*(int *)(self + 0x32c7dc) == -2) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x15), GH_ARG(0));
    }
    piVar24 = (int *)(self + 0x32c174);
    piVar28 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8db14);
    piVar1 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8db18);
    bVar7 = *piVar28 == 0x17;
    iVar15 = 0;
    if (!bVar7) {
      iVar15 = *piVar28;
    }
    piVar2 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8db04);
    iVar8 = iVar15 + 0xf;
    if (*piVar1 != 1) {
      iVar8 = iVar15;
    }
    lVar33 = (gh_long)param_3;
    uVar32 = 0xffffffff;
LAB_003f299c:
    if (iVar8 != 0) {
      iVar15 = iVar8 + 1;
      if (iVar15 == 0x1c) {
        piVar28[0] = 0;
        piVar28[1] = 0;
        *piVar2 = *piVar24;
        *(undefined4 *)(self + lVar33 * 0x288 + 0x8dd24) = 0;
      }
      else {
        if (bVar7) goto LAB_003f31fc;
        if (iVar8 < 0x11) goto LAB_003f2a18;
        if (*(int *)(self + (gh_long)iVar8 * 4 + 0x32c5b4) < 1) goto LAB_003f2a28;
        *piVar28 = iVar8 + -0xe;
        *piVar1 = 1;
        *(undefined4 *)(self + lVar33 * 0x288 + 0x8db08) =
             *(undefined4 *)(self + (gh_long)iVar8 * 4 + 0x32c62c);
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1458)), GH_ARG(false));
        }
        if (*(int *)(self + 0x1960) == -1) {
          FUN_009d4eac(GH_ARG(&local_d0), GH_ARG("FirstPlayWeapons"), GH_ARG(auStack_c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(4), GH_ARG((undefined *)&local_d0));
          puVar18 = (undefined8 *)(local_d0 + -0x18);
          if (puVar18 != &DAT_00d40300) {
            piVar24 = (int *)(local_d0 + -8);
            do {
              iVar15 = *piVar24;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar7) {
                *piVar24 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_003f5240;
          }
        }
      }
      goto LAB_003f3898;
    }
    if (bVar7) {
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8db0c) = 0x1c;
      *piVar2 = *piVar24;
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dd14) = *(undefined4 *)(self + 0x8cb70);
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dd18) = *(undefined4 *)(self + 0x8cb74);
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dd1c) = *(undefined4 *)(self + 0x8cb78);
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8db24) = 0x3f8ccccd;
LAB_003f2a14:
      bVar7 = false;
      iVar15 = 3;
LAB_003f2a18:
      if (*(int *)(self + (gh_long)iVar15 * 4 + 0x32c170) < 1) goto LAB_003f2a28;
      *piVar28 = iVar15;
      *piVar1 = 0;
      if (iVar15 < 0xd) {
        *(undefined4 *)(self + lVar33 * 0x288 + 0x8db08) =
             *(undefined4 *)(self + (gh_long)iVar15 * 4 + 0x32c260);
      }
      else {
        *piVar2 = *(int *)(self + (gh_long)iVar15 * 4 + 0x32c260) + *piVar24;
      }
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1458)), GH_ARG(false));
      }
      if (*(int *)(self + 0x1960) != -1) goto LAB_003f3898;
      FUN_009d4eac(GH_ARG(&local_c8), GH_ARG("FirstPlayWeapons"), GH_ARG(auStack_c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(4), GH_ARG((undefined *)&local_c8));
      puVar18 = (undefined8 *)(local_c8 + -0x18);
      if (puVar18 == &DAT_00d40300) goto LAB_003f3898;
      piVar24 = (int *)(local_c8 + -8);
      do {
        iVar15 = *piVar24;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar7) {
          *piVar24 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (*(int *)(self + 0x32c43c) < 1) goto LAB_003f2a14;
LAB_003f31fc:
      piVar28[0] = 0x17;
      piVar28[1] = 0;
      iVar15 = *(int *)(self + 0x32c3dc);
      *(int *)(self + lVar33 * 0x288 + 0x8db08) = iVar15;
      *piVar2 = iVar15 * 5;
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8db0c) = 0;
      *(undefined8 *)(self + (gh_long)param_3 * 0x288 + 0x8dd14) = 0xff000000ff;
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dd1c) = 0xff;
      *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8db24) = 0x3f800000;
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1458)), GH_ARG(false));
      }
      if (*(int *)(self + 0x1960) != -1) goto LAB_003f3898;
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG("FirstPlayWeapons"), GH_ARG(auStack_c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(4), GH_ARG((undefined *)&local_b8));
      puVar18 = (undefined8 *)(local_b8 + -0x18);
      if (puVar18 == &DAT_00d40300) goto LAB_003f3898;
      piVar24 = (int *)(local_b8 + -8);
      do {
        iVar15 = *piVar24;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar7) {
          *piVar24 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
LAB_003f5240:
    if (iVar15 < 1) {
      operator_delete(puVar18);
    }
LAB_003f3898:
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_3), GH_ARG(0));
    break;
  case 0xd:
    uVar32 = *(uint *)(self + 0x32c134);
    uVar35 = (ulong)uVar32;
    if (1 < (int)uVar32) {
      lVar33 = 1;
      do {
        iVar15 = *(int *)(self + lVar33 * 0x288 + 0x8daec);
        if (iVar15 < 2) {
          if (iVar15 != 1) goto LAB_003f1e98;
          *(int *)(self + lVar33 * 0x288 + 0x8daec) = 0;
        }
        else {
          iVar15 = *(int *)(self + lVar33 * 0x288 + 0x8dd0c);
          if (iVar15 < 2) {
            piVar24 = (int *)(self + lVar33 * 0x288 + 0x8dac8);
            if (iVar15 == 1) {
              iVar15 = *(int *)(self + 0x8dac8);
              iVar9 = *(int *)(self + 0x8dacc);
              piVar28 = (int *)(self + lVar33 * 0x288 + 0x8dacc);
LAB_003f1e6c:
              *piVar24 = iVar15 + (int)lVar33 * -5 + -0x14;
              *piVar28 = iVar9;
              *(int *)(self + lVar33 * 0x288 + 0x8dd0c) = param_5;
            }
            else {
              iVar8 = *piVar24;
              iVar15 = *(int *)(self + 0x8dac8);
              if ((iVar8 + -0xfa < iVar15) && (iVar15 < iVar8 + 0xfa)) {
                piVar28 = (int *)(self + lVar33 * 0x288 + 0x8dacc);
                iVar9 = *(int *)(self + 0x8dacc);
                if ((*piVar28 + -100 < iVar9) && (iVar9 < *piVar28 + 100)) goto LAB_003f1e6c;
              }
              if (param_5 == 1) {
                *piVar24 = iVar8 - (*(int *)(self + 0x32ba20) - *(int *)(self + 0x32ba50));
                iVar15 = *(int *)(self + 0x32ba54) - *(int *)(self + 0x32ba24);
              }
              else {
                *piVar24 = (*(int *)(self + 0x32ba20) - *(int *)(self + 0x32ba50)) + iVar8;
                iVar15 = *(int *)(self + 0x32ba24) - *(int *)(self + 0x32ba54);
              }
              *(int *)(self + lVar33 * 0x288 + 0x8dacc) =
                   iVar15 + *(int *)(self + lVar33 * 0x288 + 0x8dacc);
              bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG((int)lVar33), GH_ARG(0));
            }
          }
          else {
LAB_003f1e98:
            if (*(int *)(self + lVar33 * 0x288 + 0x8daf0) != 0xf5) {
              uVar22 = (gh_long)(int)uVar35 - 1;
              *(undefined4 *)(self + uVar22 * 0x288 + 0x8daec) = 0;
              *(undefined4 *)(self + uVar22 * 0x288 + 0x8db18) = 0;
              *(undefined4 *)(self + uVar22 * 0x288 + 0x8db14) = 0;
              if (5 < (int)uVar35) {
                lVar23 = (uVar22 & 0xffffffff) - 4;
                piVar24 = (int *)(self + 0x8e50c);
                do {
                  if ((0 < *piVar24) && (piVar24[0x88] == 0x2611)) {
                    *piVar24 = 0;
                    *(int *)(self + 0x32c13c) = *(int *)(self + 0x32c13c) + 1;
                  }
                  lVar23 = lVar23 + -1;
                  piVar24 = piVar24 + 0xa2;
                } while (lVar23 != 0);
              }
            }
          }
        }
        uVar35 = (ulong)(int)*(uint *)(self + 0x32c134);
        lVar33 = lVar33 + 1;
      } while (lVar33 < (gh_long)uVar35);
    }
    iVar15 = 0;
    *(undefined4 *)(self + 0x32c8a4) = 0;
    goto switchD_003f15b8_caseD_2;
  case 0xe:
    iVar8 = *(int *)(self + 0x32c134);
    if (1 < iVar8) {
      lVar33 = 1;
      lVar23 = 0x8dac8;
      do {
        if (((1 < *(int *)(self + lVar23 + 0x2ac)) && (*(int *)(self + lVar23 + 0x2a0) < 0x96)) &&
           (*(int *)(self + lVar23 + 0x4cc) < 3)) {
          if ((*(int *)(self + lVar23 + 0x288) + -200 < *(int *)(self + 0x8dac8)) &&
             (*(int *)(self + 0x8dac8) < *(int *)(self + lVar23 + 0x288) + 200)) {
            if ((*(int *)(self + lVar23 + 0x28c) + -0x3c < *(int *)(self + 0x8dacc)) &&
               (*(int *)(self + 0x8dacc) < *(int *)(self + lVar23 + 0x28c) + 0x3c)) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar33), GH_ARG(9), GH_ARG(*(int *)(self + lVar23 + 0x298)), GH_ARG((int)uVar35));
              iVar8 = *(int *)(self + 0x32c134);
            }
          }
        }
        lVar33 = lVar33 + 1;
        iVar15 = 0;
        lVar23 = lVar23 + 0x288;
      } while (lVar33 < iVar8);
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0xf:
    iVar8 = *(int *)(self + 0x32c134);
    if (1 < iVar8) {
      lVar33 = 1;
      piVar24 = (int *)(self + 0x8dd68);
      do {
        if ((1 < piVar24[3]) && (*piVar24 == 0x96)) {
          iVar15 = *(int *)(self + 0x8dacc);
          *piVar24 = 0x95;
          piVar24[-5] = iVar15;
        }
        lVar33 = lVar33 + 1;
        iVar15 = 0;
        piVar24 = piVar24 + 0xa2;
      } while (lVar33 < iVar8);
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x10:
    if (1 < *(int *)(self + 0x32c134)) {
      uVar35 = 1;
      lVar33 = 0x8dd60;
      lVar23 = 0x8ddac;
      do {
        if ((1 < *(int *)(self + lVar33 + 0x14)) && (0x94 < *(int *)(self + lVar33 + 8))) {
          iVar8 = (int)uVar35;
          iVar15 = iVar8;
          if (3 < uVar35) {
            iVar15 = 4;
          }
          if (*(int *)(self + lVar33 + 0x3c) == 0x13) {
            iVar9 = *(int *)(self + lVar33 + 0x23c);
            iVar10 = *(int *)(self + lVar33 + 0x240);
            iVar11 = *(int *)(self + lVar33 + 0x244);
            iVar16 = *(int *)(self + lVar33 + 0x34);
            fVar36 = *(float *)(self + lVar23);
            iVar20 = 0x115;
            iVar12 = 0;
            iVar15 = param_3 + -0x19;
          }
          else {
            if (iVar8 == 4) {
              piVar24 = (int *)(self + lVar33);
              iVar12 = *piVar24;
              iVar9 = piVar24[0x8f];
              iVar10 = piVar24[0x90];
              iVar11 = piVar24[0x91];
              iVar16 = piVar24[0xd];
              fVar36 = *(float *)(self + lVar23);
              iVar8 = 4;
              iVar15 = param_3 + 0x28;
            }
            else if (iVar8 == 5) {
              piVar24 = (int *)(self + lVar33);
              iVar12 = *piVar24;
              iVar9 = piVar24[0x8f];
              iVar10 = piVar24[0x90];
              iVar11 = piVar24[0x91];
              iVar16 = piVar24[0xd];
              fVar36 = *(float *)(self + lVar23);
              iVar8 = 5;
              iVar15 = param_3 + -0x28;
            }
            else {
              iVar20 = iVar15 * 0xd;
              piVar24 = (int *)(self + lVar33);
              if ((uVar35 & 1) == 0) {
                fVar36 = *(float *)(self + lVar23);
                iVar12 = *piVar24;
                iVar9 = piVar24[0x8f];
                iVar10 = piVar24[0x90];
                iVar11 = piVar24[0x91];
                iVar16 = piVar24[0xd];
              }
              else {
                fVar36 = *(float *)(self + lVar23);
                iVar12 = *piVar24;
                iVar9 = piVar24[0x8f];
                iVar10 = piVar24[0x90];
                iVar11 = piVar24[0x91];
                iVar16 = piVar24[0xd];
                iVar20 = iVar15 * -0xd;
              }
              iVar15 = iVar20 + param_3;
            }
            iVar20 = 0xe;
          }
          bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(iVar8), GH_ARG(iVar15), GH_ARG(param_5), GH_ARG(iVar20), GH_ARG(iVar12), GH_ARG(iVar9), GH_ARG(iVar10), GH_ARG(iVar11), GH_ARG(fVar36), GH_ARG(iVar16));
        }
        uVar35 = uVar35 + 1;
        iVar15 = 0;
        lVar23 = lVar23 + 0x288;
        lVar33 = lVar33 + 0x288;
      } while ((gh_long)uVar35 < (gh_long)*(int *)(self + 0x32c134));
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x11:
    iVar8 = *(int *)(self + 0x32c134);
    if (1 < iVar8) {
      piVar24 = (int *)(self + 0x8dd74);
      lVar33 = 1;
      do {
        if ((1 < *piVar24) && (piVar24[-3] == 0x95)) {
          piVar24[-8] = *(int *)(self + 0x8dacc);
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG((int)lVar33), GH_ARG(0));
          iVar8 = *(int *)(self + 0x32c134);
        }
        lVar33 = lVar33 + 1;
        iVar15 = 0;
        piVar24 = piVar24 + 0xa2;
      } while (lVar33 < iVar8);
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x13:
    lVar33 = (gh_long)*(int *)(self + 0x32c134);
    piVar24 = (int *)(self + 0x32c8a4);
    *piVar24 = 0;
    iVar15 = 0;
    if (*(int *)(self + 0x32c134) < *(int *)(self + 0x32b824)) {
      piVar28 = (int *)(self + lVar33 * 0x288 + 0x8daec);
      do {
        if ((1 < *piVar28) && ((piVar28[0x94] & 0xfffffffeU) != 0x30)) {
          iVar8 = 1;
          goto LAB_003f38fc;
        }
        lVar33 = lVar33 + 1;
        iVar15 = 0;
        piVar28 = piVar28 + 0xa2;
      } while (lVar33 < *(int *)(self + 0x32b824));
    }
    goto switchD_003f15b8_caseD_2;
  case 0x14:
    *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dd08) = 0;
    iVar15 = 0;
    *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dae8) =
         *(undefined4 *)(self + (gh_long)param_3 * 0x288 + 0x8dacc);
    *(undefined8 *)(self + (gh_long)param_3 * 0x288 + 0x8dae0) = 0xffffffde0000001e;
    *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dd10) = param_5;
    goto switchD_003f15b8_caseD_2;
  case 0x15:
    iVar15 = param_5;
    if (param_4 == 1) {
      iVar9 = *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dad8);
LAB_003f1ab8:
      iVar8 = 0x6d;
    }
    else {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar8 = 200;
      }
      else {
        local_b0 = 0xc700000000;
        pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
      }
      if (param_4 == 2) {
        iVar9 = *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dad8);
        if (0x5a < iVar8) goto LAB_003f1ab8;
      }
      else {
        iVar9 = *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dad8);
        if (iVar8 < 0x83) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(0x45), GH_ARG(iVar9), GH_ARG(iVar15));
          iVar15 = *(int *)(self + 0x1ae8);
          if (((iVar15 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar8 = -10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *(int *)(self + 0x1ae8);
            iVar8 = -6 - iVar8;
          }
          uVar21 = *(undefined4 *)(self + (gh_long)param_5 * 0x50 + 0xb0cc0);
          uVar34 = *(undefined8 *)(self + (gh_long)param_5 * 0x50 + 0xb0cb8);
          if (((iVar15 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar9 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar19 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar19), GH_ARG((param_type *)&local_b0));
            iVar15 = *(int *)(self + 0x1ae8);
            iVar9 = iVar9 + 2;
          }
          if ((((0x3d < iVar15 - 0xdU) ||
               ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar33 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar9;
                iVar15 = 0;
                *(undefined8 *)(puVar26 + -4) = 0x100000005;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *(undefined8 *)(puVar26 + -10) = uVar34;
                puVar26[-8] = uVar21;
                puVar26[4] = 0;
                puVar26[5] = iVar8;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar33 = lVar33 + 1;
              iVar15 = 0;
              puVar26 = puVar26 + 0x14;
            } while (lVar33 < *(int *)(self + 0x32b828));
            goto switchD_003f15b8_caseD_2;
          }
          break;
        }
      }
      iVar8 = 0x98;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(iVar8), GH_ARG(iVar9), GH_ARG(iVar15));
    break;
  case 0x16:
    iVar8 = *(int *)(self + 0x32c134);
    if (1 < iVar8) {
      lVar33 = 1;
      puVar26 = (undefined4 *)(self + 0x8dd78);
      do {
        if (1 < (int)puVar26[-1]) {
          if ((puVar26[-10] + -200 < *(int *)(self + 0x8dac8)) &&
             (*(int *)(self + 0x8dac8) < puVar26[-10] + 200)) {
            if ((puVar26[-9] + -100 < *(int *)(self + 0x8dacc)) &&
               (*(int *)(self + 0x8dacc) < puVar26[-9] + 100)) {
              puVar26[-4] = 0x94;
              *puVar26 = 0;
            }
          }
        }
        lVar33 = lVar33 + 1;
        iVar15 = 0;
        puVar26 = puVar26 + 0xa2;
      } while (lVar33 < iVar8);
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x17:
    piVar24 = (int *)(self + 0x32c3f8);
    if (0 < *piVar24) {
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1320)), GH_ARG(false));
      }
      iVar15 = param_3;
      if (param_3 == 0) {
        if (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c)) {
          *(int *)(self + 0x8db1c) = 0;
          *(undefined4 *)(self + 0x8dd1c) = 0;
          *(undefined8 *)(self + 0x8dd14) = 0;
          *piVar24 = *piVar24 + -1;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x58), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5));
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(4), GH_ARG(0));
          iVar15 = 0;
          *(undefined4 *)(self + 0x32baa0) = 0x96;
          goto switchD_003f15b8_caseD_2;
        }
        iVar15 = *(int *)(self + 0x32c858);
      }
      *(undefined4 *)(self + (gh_long)iVar15 * 0x288 + 0x8db1c) = 0;
      iVar8 = *(int *)(self + (gh_long)iVar15 * 0x288 + 0x8dd20);
      lVar33 = (gh_long)iVar15;
      *(undefined4 *)(self + (gh_long)iVar15 * 0x288 + 0x8dd14) =
           *(undefined4 *)(self + (gh_long)iVar8 * 0x10 + 0x8cb70);
      *(undefined4 *)(self + (gh_long)iVar15 * 0x288 + 0x8dd18) =
           *(undefined4 *)(self + (gh_long)iVar8 * 0x10 + 0x8cb74);
      *(undefined4 *)(self + (gh_long)iVar15 * 0x288 + 0x8dd1c) =
           *(undefined4 *)(self + (gh_long)iVar8 * 0x10 + 0x8cb78);
      piVar28 = (int *)(self + (gh_long)iVar15 * 0x288 + 0x8dd3c);
      iVar8 = *piVar28;
      if (iVar8 < 600) {
        uVar21 = 0;
        iVar9 = 0x5dc;
        if (iVar8 != 0x210) {
          iVar9 = 0x5dd;
        }
        *piVar28 = iVar9;
      }
      else {
        *piVar28 = iVar8 + 0x386;
        uVar21 = *(undefined4 *)(self + (gh_long)(iVar8 + -0x218) * 0x28 + 0x13b58);
      }
      *(undefined4 *)(self + lVar33 * 0x288 + 0x8db14) = uVar21;
      *(undefined4 *)(self + lVar33 * 0x288 + 0x8db18) = 0;
      *(undefined4 *)(self + lVar33 * 4 + 0x32baa0) = 0x96;
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar15), GH_ARG(0x58), GH_ARG(*(int *)(self + lVar33 * 0x288 + 0x8dad8)), GH_ARG(param_5));
      if (param_3 == 0) {
        *(undefined4 *)(self + 0x32c858) = 0;
      }
      *piVar24 = *piVar24 + -1;
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(5), GH_ARG(0));
    }
    break;
  case 0x18:
    *(int *)(self + (gh_long)*(int *)(self + (gh_long)param_3 * 0x288 + 0x8db14) * 4 + 0x32c170) =
         *(int *)(self + (gh_long)*(int *)(self + (gh_long)param_3 * 0x288 + 0x8db14) * 4 + 0x32c170) -
         param_5;
    if (*(int *)(self + (gh_long)*(int *)(self + (gh_long)param_3 * 0x288 + 0x8db14) * 4 + 0x32c170) < 0)
    {
      iVar15 = 0;
      *(int *)(self + (gh_long)*(int *)(self + (gh_long)param_3 * 0x288 + 0x8db14) * 4 + 0x32c170) = 0;
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x19:
    iVar15 = *(int *)(self + 0x32c3f8);
    iVar8 = *(int *)(self + 0x32c354);
    if (iVar15 < iVar8) {
      iVar15 = iVar15 + param_5;
      if (iVar15 <= iVar8) {
        iVar8 = iVar15;
      }
      *(int *)(self + 0x32c3f8) = iVar8;
      *(undefined4 *)(self + 0x32c924) = 8;
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
      }
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
LAB_003f2e1c:
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    }
    break;
  case 0x1a:
    lVar33 = (gh_long)param_3;
    piVar24 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8db14);
    *piVar24 = param_5;
    if (param_5 == 0) {
      piVar24[0] = 0;
      piVar24[1] = 0;
      *(undefined4 *)(self + lVar33 * 0x288 + 0x8db04) = *(undefined4 *)(self + 0x32c174);
      *(undefined4 *)(self + lVar33 * 0x288 + 0x8dd24) = 0;
    }
    if (0 < *(int *)(self + (gh_long)param_5 * 4 + 0x32c170)) {
      if (param_5 - 0xdU < 5) {
        lVar33 = lVar33 * 0x288;
        iVar8 = *(int *)(self + (gh_long)param_5 * 4 + 0x32c260) + *(int *)(self + 0x32c174);
        uVar32 = 0x8db04;
      }
      else {
        iVar8 = *(int *)(self + (gh_long)param_5 * 4 + 0x32c260);
        lVar33 = lVar33 * 0x288;
        uVar32 = 0x8db08;
      }
LAB_003f3144:
      iVar15 = 0;
      *(int *)(self + (ulong)uVar32 + lVar33) = iVar8;
      goto switchD_003f15b8_caseD_2;
    }
    break;
  case 0x1b:
    lVar33 = 0;
    piVar24 = (int *)(self + 0x32c8c4);
    piVar28 = (int *)(self + 0x32c8c8);
    piVar1 = (int *)(self + 0x32c8cc);
    do {
      iVar15 = *(int *)(self + lVar33 + 0x32c3fc);
      if (0 < iVar15) {
        iVar8 = iVar15 + 0x3a;
        iVar9 = *(int *)(self + (gh_long)iVar8 * 0x28 + 0x13b70);
        *piVar24 = iVar9;
        iVar10 = *(int *)(self + (gh_long)iVar8 * 0x28 + 0x13b74);
        *piVar28 = iVar10;
        iVar11 = *(int *)(self + (gh_long)iVar8 * 0x28 + 0x13b6c);
        *piVar1 = iVar11;
        iVar16 = *(int *)(self + (gh_long)(iVar15 + 0x83) * 4 + 0x32c148);
        if (*(int *)(self + (gh_long)iVar8 * 0x28 + 0x13b58) == 0x13) {
          if (2 < iVar16) {
            piVar24[0] = 3;
            piVar24[1] = 0x38;
            if (7 < iVar16) {
              iVar11 = 0x10;
              *piVar1 = 0x10;
            }
            iVar9 = 3;
            iVar10 = 0x38;
          }
        }
        else if (iVar16 < 9) {
          if (2 < iVar16) {
            iVar10 = 0x1c;
            *piVar28 = 0x1c;
            iVar12 = 0x1c;
            if (5 < iVar16) goto LAB_003f1888;
          }
        }
        else {
          *piVar28 = 0x38;
          iVar12 = 0x38;
LAB_003f1888:
          iVar10 = iVar12;
          iVar11 = 0xc;
          *piVar1 = 0xc;
        }
        bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(1), GH_ARG(*(int *)(self + (gh_long)iVar8 * 0x28 + 0x13b58)), GH_ARG(iVar15 + -5), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(*(int *)(self + (gh_long)(*(int *)(self + lVar33 + 0x32c3fc) + 0x5b) * 4 +
                                          0x32c148) / 10), GH_ARG(*(int *)(self + (gh_long)(*(int *)(self + lVar33 + 0x32c3fc) + 0x97) * 4 +
                                          0x32c148)), GH_ARG(*(int *)(self + (gh_long)(*(int *)(self + lVar33 + 0x32c3fc) + 0x97) * 4 +
                                          0x32c148)), GH_ARG(0x19), GH_ARG((float)iVar11 / 10.0), GH_ARG(iVar9), GH_ARG(iVar10), GH_ARG(iVar15 + 0x5d8));
      }
      lVar33 = lVar33 + 4;
      param_4 = param_4 + 100;
    } while (lVar33 != 0xc);
    break;
  case 0x1c:
    if (param_3 == 0) {
      iVar15 = *(int *)(self + 0x32c3fc);
      if (0 < iVar15) {
        *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) = *(int *)(self + 0x8dd74) * 10;
        iVar15 = *(int *)(self + 0x32c3fc);
        if (*(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) / 10 <
            *(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) / 10) {
          *(int *)(self + (gh_long)(iVar15 + 0xaa) * 4 + 0x32c148) =
               (*(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) -
               *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148)) / 10;
        }
      }
      iVar15 = *(int *)(self + 0x32c400);
      if (0 < iVar15) {
        *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) = *(int *)(self + 0x8dffc) * 10;
        iVar15 = *(int *)(self + 0x32c400);
        if (*(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) / 10 <
            *(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) / 10) {
          *(int *)(self + (gh_long)(iVar15 + 0xaa) * 4 + 0x32c148) =
               (*(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) -
               *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148)) / 10;
        }
      }
      iVar15 = *(int *)(self + 0x32c404);
      if (0 < iVar15) {
        *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) = *(int *)(self + 0x8e284) * 10;
        iVar15 = *(int *)(self + 0x32c404);
        if (*(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148) / 10 <
            *(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) / 10) {
          iVar8 = (*(int *)(self + (gh_long)(iVar15 + 0x6f) * 4 + 0x32c148) -
                  *(int *)(self + (gh_long)(iVar15 + 0x5b) * 4 + 0x32c148)) / 10;
          lVar33 = (gh_long)(iVar15 + 0xaa) << 2;
          uVar32 = 0x32c148;
          goto LAB_003f3144;
        }
      }
    }
    else {
      piVar24 = (int *)(self + 0x32c8b8);
      iVar15 = *piVar24;
      *piVar24 = iVar15 + 1;
      if (0 < iVar15) {
        piVar28 = (int *)(self + 0x32c2cc);
        if (*piVar28 < *(int *)(self + 0x32c31c)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c408);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c31c);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        piVar28 = (int *)(self + 0x32c2d0);
        if (*piVar28 < *(int *)(self + 0x32c320)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c40c);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c320);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        piVar28 = (int *)(self + 0x32c2d4);
        if (*piVar28 < *(int *)(self + 0x32c324)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c410);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c324);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        piVar28 = (int *)(self + 0x32c2d8);
        if (*piVar28 < *(int *)(self + 0x32c328)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c414);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c328);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        piVar28 = (int *)(self + 0x32c2dc);
        if (*piVar28 < *(int *)(self + 0x32c32c)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c418);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c32c);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        piVar28 = (int *)(self + 0x32c2e0);
        if (*piVar28 < *(int *)(self + 0x32c330)) {
          *piVar28 = *piVar28 + 10;
          piVar1 = (int *)(self + 0x32c41c);
          iVar15 = *piVar1;
          iVar8 = iVar15 + -1;
          *piVar1 = iVar8;
          if (iVar8 == 0 || iVar15 < 1) {
            *piVar28 = *(int *)(self + 0x32c330);
            *piVar1 = 0;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        }
        iVar15 = 0;
        *piVar24 = 0;
        goto switchD_003f15b8_caseD_2;
      }
    }
    break;
  case 0x1d:
    if ((0 < *(int *)(self + 0x4a0)) && (*(int *)(self + 0x4a4) == -1)) {
      *(undefined4 *)(self + 0x4a4) = 0;
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    }
    if ((0 < *(int *)(self + 0x630)) && (*(int *)(self + 0x634) == -1)) {
      *(undefined4 *)(self + 0x634) = 0;
      goto LAB_003f2e1c;
    }
    break;
  case 0x1e:
    *(undefined4 *)(self + 0x410) = 0xffffffff;
    *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
    *(undefined4 *)(self + 0x5a0) = 0xffffffff;
    *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    byebye_0047e184(GH_ARG(0));
  }
  iVar15 = 0;
switchD_003f15b8_caseD_2:
  if (*(gh_long *)(lVar6 + 0x28) == local_a8) {
    return iVar15;
  }
                    
  __stack_chk_fail();
LAB_003f2a28:
  iVar8 = iVar15;
  uVar32 = uVar32 + 1;
  if (0x1b < uVar32) goto LAB_003f3898;
  goto LAB_003f299c;
}

