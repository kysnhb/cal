/* bzStateGame::PimgAni_00403cb4 @ 0x00403cb4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__PimgAni_00403cb4(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  gh_long lVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  mersenne_twister_engine *pmVar18;
  ulong in_x4 = 0;
  int in_w5 = 0;
  int *piVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  gh_long lVar22;
  ulong uVar23;
  gh_long lVar24;
  int *piVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  gh_long lVar29;
  uint *puVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  iVar27 = (int)in_x4;
  lVar6 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar6 + 0x28);
  piVar25 = (int *)(self + 0x8dac8);
  piVar19 = piVar25 + (gh_long)param_2 * 0xa2;
  puVar30 = (uint *)(piVar19 + 6);
  uVar26 = *puVar30;
  if (0xa0 < uVar26) goto switchD_00403d34_caseD_4;
  lVar29 = (gh_long)param_2;
  switch(uVar26) {
  case 0:
    goto switchD_00403d34_caseD_0;
  case 1:
    goto switchD_00403d34_caseD_1;
  case 2:
    if (*(int *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8dd08) * 4 + lVar29 * 0x288 +
                        0x8db28) < 0) {
      uVar26 = 0xdaec;
      goto LAB_00406208;
    }
switchD_00403d34_caseD_1:
    if (param_2 == 0) {
      iVar27 = 0x10;
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(10), GH_ARG(0), GH_ARG(0x18), GH_ARG(0x10));
    }
    iVar7 = *(int *)(self + 0x116c);
    if (iVar7 == 0) {
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12d8)), GH_ARG(false));
      }
      iVar9 = 2;
LAB_00404dd0:
      *(int *)(self + 0x116c) = iVar9;
    }
    else {
      iVar9 = iVar7 + -1;
      if (0 < iVar7) goto LAB_00404dd0;
    }
    if (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2) {
      iVar7 = *piVar19;
      iVar9 = *(int *)(self + 0x1ae8);
      iVar12 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar13 = 0x32;
      }
      else {
        local_b0 = 0x3100000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar9 = *(int *)(self + 0x1ae8);
      }
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar14 = 0x50;
      }
      else {
        local_b0 = 0x4f00000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar9 = *(int *)(self + 0x1ae8);
        iVar14 = iVar14 + -0x28;
      }
      if (((0x3d < iVar9 - 0xdU) ||
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar22 = 0;
        puVar21 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar21[-5] < 1) {
            puVar21[-10] = iVar7;
            puVar21[-9] = iVar12 - iVar13;
            puVar21[2] = 0;
            puVar21[3] = iVar14;
            *(undefined8 *)(puVar21 + -4) = 0xbd;
            *(undefined8 *)(puVar21 + -6) = 0x640000006f;
            *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
            puVar21[-8] = 0;
            puVar21[4] = 0;
            puVar21[5] = param_2;
            *puVar21 = 0x3f800000;
            puVar21[1] = 0;
            *(undefined8 *)(puVar21 + 6) = 0xff00000000;
            *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
            break;
          }
          lVar22 = lVar22 + 1;
          puVar21 = puVar21 + 0x14;
        } while (lVar22 < *(int *)(self + 0x32b828));
      }
    }
switchD_00403d34_caseD_0:
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    iVar9 = *piVar25;
    iVar7 = *(int *)(self + (gh_long)iVar9 * 4 + lVar29 * 0x288 + 0x8db28);
    if (iVar7 < 0) {
      *piVar25 = 0;
      iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8db28);
      iVar9 = 0;
    }
    *(int *)(self + lVar29 * 0x288 + 0x8daf0) = iVar7;
    *piVar25 = iVar9 + 1;
    iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8db14);
    if ((iVar7 < 0x16) || (iVar7 == 0x17)) {
      iVar27 = 0x28;
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(0xb), GH_ARG(0x28), GH_ARG(0));
    }
    iVar7 = *(int *)(self + 0x32c134);
    if ((iVar7 <= *(int *)(self + lVar29 * 0x288 + 0x8db1c)) && (param_2 < iVar7)) {
      iVar27 = 0;
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0), GH_ARG(0x11), GH_ARG(0), GH_ARG(0));
    }
    if (param_2 == 0) {
      if ((*piVar19 + 0x1e < *(int *)(self + 0x1160)) ||
         (*(int *)(self + 0x1160) < *piVar19 + -0x1e)) {
        *(undefined4 *)(self + 0x32ba30) = 0x10;
      }
    }
    if ((*(int *)(self + 0x32c134) <= param_2) && (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2)) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar7 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
      }
      switch(*(int *)(self + lVar29 * 0x288 + 0x8db14)) {
      case 0x15:
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar7 = 0x83;
        break;
      default:
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        if (iVar7 < 10) {
          iVar7 = 0x3b;
        }
        else {
          iVar7 = 0x3a;
        }
        break;
      case 0x17:
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar7 = 0xae;
        break;
      case 0x18:
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar7 = 0xb8;
        break;
      case 0x19:
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar7 = 0xc0;
        break;
      case 0x1a:
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(8), GH_ARG(param_2), GH_ARG(0));
        goto LAB_00408c0c;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar7), GH_ARG(iVar9), GH_ARG(iVar27));
    }
LAB_00408c0c:
    uVar26 = *puVar30;
    iVar27 = 2;
    iVar7 = 0x17;
LAB_0040ec90:
    iVar9 = 0;
LAB_0040ec94:
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(iVar27), GH_ARG(iVar7), GH_ARG(iVar9));
    break;
  case 3:
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    iVar7 = *(int *)(self + (gh_long)*piVar25 * 4 + lVar29 * 0x288 + 0x8db28);
    if (-1 < iVar7) {
      *(int *)(self + lVar29 * 0x288 + 0x8daf0) = iVar7;
      *piVar25 = *piVar25 + 1;
      iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
      iVar12 = *(int *)(self + 0x32ba14);
      iVar7 = *(int *)(self + 0x32ba20) + *piVar19;
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = iVar7 / iVar12;
      }
      iVar14 = 0;
      if (iVar12 != 0) {
        iVar14 = (*(int *)(self + 0x32ba24) + iVar9) / iVar12;
      }
      if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar13 = 0;
        if (iVar12 != 0) {
          iVar13 = (iVar7 + -1) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar13 = 0;
          if (iVar12 != 0) {
            iVar13 = (iVar7 + 1) / iVar12;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar12 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
            iVar7 = 0x14;
            if (iVar12 == 0) {
              iVar7 = -0x14;
            }
            *piVar19 = iVar7 + *piVar19;
            *(int *)(self + lVar29 * 0x288 + 0x8dacc) = iVar9 + 0x5a;
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0), GH_ARG(iVar12), GH_ARG(iVar27));
          }
        }
      }
      goto joined_r0x004136d0;
    }
    if (iVar7 == -99) {
      *piVar25 = 0;
    }
    else {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(-iVar7), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG(iVar27));
    }
    if (param_2 != 0) break;
    *(undefined4 *)(self + 0x32b8d0) = 0;
    goto LAB_00413910;
  case 10:
  case 0xb:
  case 0xf:
    goto switchD_00403d34_caseD_a;
  case 0xc:
  case 0xd:
    goto switchD_00403d34_caseD_c;
  case 0xe:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar27 = 0x28;
    }
    else {
      local_b0 = 0x2700000000;
      pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
      iVar27 = iVar27 + -0x14;
    }
    *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar29 * 0x288 + 0x8dacc) + iVar27;
switchD_00403d34_caseD_c:
    iVar27 = *(int *)(self + 0x116c);
    if (iVar27 == 0) {
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12d8)), GH_ARG(false));
      }
      iVar7 = 2;
LAB_00404548:
      *(int *)(self + 0x116c) = iVar7;
    }
    else {
      iVar7 = iVar27 + -1;
      if (0 < iVar27) goto LAB_00404548;
    }
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(10), GH_ARG(param_2), GH_ARG(0x18), GH_ARG(0xc));
    if (*(int *)(self + lVar29 * 0x288 + 0x8daf0) == 0x13f) {
      iVar9 = *(int *)(self + 0x1ae8);
      piVar25 = (int *)(self + lVar29 * 0x288 + 0x8db14);
      piVar19 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
      piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dafc);
      iVar27 = *piVar19;
      uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12fd8);
      iVar7 = *piVar28;
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar12 = 0xe;
      }
      else {
        local_b0 = 0xd00000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + -7;
        iVar9 = *(int *)(self + 0x1ae8);
      }
      piVar2 = (int *)(self + lVar29 * 0x288 + 0x8db00);
      iVar13 = *piVar2;
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar14 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar14 = iVar14 + -8;
        iVar9 = *(int *)(self + 0x1ae8);
      }
      lVar22 = (gh_long)*piVar25;
      uVar26 = iVar9 - 0xd;
      uVar23 = (ulong)uVar26;
      uVar4 = *(undefined4 *)(self + lVar22 * 4 + 0x12f5c);
      if (iVar27 == 0) {
        if (((0x3d < uVar26) || ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar12 + iVar7;
              puVar21[-9] = iVar14 + iVar13;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x6400000003;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000c03a2da5;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 0x17;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar28;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -10;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        lVar22 = (gh_long)*piVar25;
        uVar4 = *(undefined4 *)(self + lVar22 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar7 + iVar27;
              puVar21[-9] = iVar13 + iVar12;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x6400000003;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000c03a2da5;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 0x17;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar28;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00405e14:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar7 + iVar27;
                puVar21[-9] = iVar13 + iVar12;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x6400000003;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000c03a2da5;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 0x17;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00405e14;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar19;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar28;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00405eac:
          iVar27 = -10;
        }
        else {
          iVar13 = *(int *)(self + 0xba8);
          if ((iVar13 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0d00);
            do {
              if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
                puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x12,(int)uVar34 + -0x50);
                puVar20[-1] = 0xff00000000;
                *puVar20 = 0xff000000ff;
                *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
                *(undefined4 *)(puVar20 + -5) = uVar4;
                *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
                *(int *)((gh_long)puVar20 + -0x14) = iVar12;
                *(undefined4 *)(puVar20 + -2) = 0;
                *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
                *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
                *(undefined4 *)(puVar20 + -6) = uVar8;
                *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
                puVar20[-7] = 0x6400000085;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar13 == 1)) goto LAB_00405eac;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = -6 - iVar27;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar19;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar28;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar9 - 0xdU) ||
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0d00);
          do {
            if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
              puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x10,(int)uVar34 + -0x53);
              puVar20[-1] = 0xff00000000;
              *puVar20 = 0xff000000ff;
              *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
              *(undefined4 *)(puVar20 + -5) = uVar4;
              *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
              *(int *)((gh_long)puVar20 + -0x14) = iVar12;
              *(undefined4 *)(puVar20 + -2) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
              *(int *)((gh_long)puVar20 + -0xc) = iVar27;
              *(undefined4 *)(puVar20 + -6) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
              puVar20[-7] = 0x6400000085;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8f6a0) < -0x95)) ||
           (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8f6a0)))
        goto switchD_00403d34_caseD_a;
        uVar26 = 0xf6a4;
      }
      else {
        if (((0x3d < uVar26) || ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar12 + iVar7;
              puVar21[-9] = iVar14 + iVar13;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x6400000003;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000bea0348f;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 0x11a;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar28;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -10;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        lVar22 = (gh_long)*piVar25;
        uVar4 = *(undefined4 *)(self + lVar22 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar7 + iVar27;
              puVar21[-9] = iVar13 + iVar12;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x6400000003;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000bea0348f;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 0x11a;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar28;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_004047f4:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar7 + iVar27;
                puVar21[-9] = iVar13 + iVar12;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x6400000003;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000bea0348f;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 0x11a;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_004047f4;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar19;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar28;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040488c:
          iVar27 = -10;
        }
        else {
          iVar13 = *(int *)(self + 0xba8);
          if ((iVar13 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0d00);
            do {
              if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
                puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x12,(int)uVar34 + 0x50);
                puVar20[-1] = 0xff00000000;
                *puVar20 = 0xff000000ff;
                *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
                *(undefined4 *)(puVar20 + -5) = uVar4;
                *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
                *(int *)((gh_long)puVar20 + -0x14) = iVar12;
                *(undefined4 *)(puVar20 + -2) = 0;
                *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
                *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
                *(undefined4 *)(puVar20 + -6) = uVar8;
                *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
                puVar20[-7] = 0x6400000085;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar13 == 1)) goto LAB_0040488c;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = -6 - iVar27;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar19;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar28;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar9 - 0xdU) ||
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0d00);
          do {
            if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
              puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x10,(int)uVar34 + 0x53);
              puVar20[-1] = 0xff00000000;
              *puVar20 = 0xff000000ff;
              *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
              *(undefined4 *)(puVar20 + -5) = uVar4;
              *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
              *(int *)((gh_long)puVar20 + -0x14) = iVar12;
              *(undefined4 *)(puVar20 + -2) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
              *(int *)((gh_long)puVar20 + -0xc) = iVar27;
              *(undefined4 *)(puVar20 + -6) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
              puVar20[-7] = 0x6400000085;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8f928) < -0x95)) ||
           (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8f928)))
        goto switchD_00403d34_caseD_a;
        uVar26 = 0xf92c;
      }
      if (((-0x1e < *(int *)(self + (uVar26 | 0x80000))) &&
          (*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) < 0x4b)) &&
         (*(int *)(self + (uVar26 | 0x80000)) < *(int *)(self + 0x115c) + 100)) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)
                   (self + (gh_long)(int)*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) * 0x18 + 0x11e8
                   )), GH_ARG(false));
      }
    }
switchD_00403d34_caseD_a:
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    iVar27 = *piVar25;
    if ((*(int *)(self + 0x32c134) <= param_2) && (iVar27 == 0)) {
      *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd48) = 0;
    }
    iVar7 = *(int *)(self + (gh_long)iVar27 * 4 + lVar29 * 0x288 + 0x8db28);
    if (iVar7 < 0) {
      if (param_2 == 0) {
        *(undefined4 *)(self + 0x32b8d0) = 0;
      }
      *piVar25 = 0;
      iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8db28);
      iVar27 = 0;
    }
    *(int *)(self + lVar29 * 0x288 + 0x8daf0) = iVar7;
    fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
    iVar9 = *(int *)(self + (gh_long)iVar27 * 4 + lVar29 * 0x288 + 0x8dba0);
    if (fVar31 != 1.0) {
      fVar33 = (float)iVar9;
      if (fVar31 <= 1.0) {
        fVar31 = fVar33 - (1.0 - fVar31) * fVar33;
      }
      else {
        fVar31 = fVar31 * fVar33;
      }
      iVar9 = (int)fVar31;
    }
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(0), GH_ARG(iVar9), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)));
    iVar27 = 2;
    iVar7 = 0x17;
    *piVar25 = *piVar25 + 1;
    uVar26 = *puVar30;
    goto LAB_0040ec94;
  case 0x1e:
  case 0x1f:
    piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    lVar22 = (gh_long)*piVar28;
    if (*(int *)(self + lVar29 * 0x288 + 0x8db14) - 1U < 0xc) {
      if (*piVar28 - 3U < 0x2f) {
        piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dae4);
        iVar27 = *piVar25;
        if (iVar27 == 0) {
          iVar27 = 1;
          *piVar25 = 1;
        }
        piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
        iVar7 = *piVar2;
        iVar9 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x31), GH_ARG(0x1e), GH_ARG(iVar27), GH_ARG(in_w5), GH_ARG(*piVar19), GH_ARG(iVar7), GH_ARG(2));
        if (iVar9 < 0) {
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(4), GH_ARG(-iVar9), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)))
          ;
          if (iVar7 == *piVar2) {
            iVar27 = 0;
            *piVar25 = 0;
          }
          else {
            iVar27 = *piVar25;
          }
        }
        else {
          *piVar2 = iVar9 + iVar7;
        }
        *piVar25 = iVar27 + 4;
        if ((0 < iVar9) && (*(int *)(self + 0x32ba2c) == param_2)) {
          *(int *)(self + 0x32ba34) = iVar9;
        }
        if (*(int *)(self + lVar29 * 0x288 + 0x8dadc) < 2) {
          fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
          iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dd10);
          if (fVar31 != 1.0) {
            fVar33 = (float)iVar27;
            if (fVar31 <= 1.0) {
              fVar31 = fVar33 - (1.0 - fVar31) * fVar33;
            }
            else {
              fVar31 = fVar31 * fVar33;
            }
            iVar27 = (int)fVar31;
          }
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(0), GH_ARG(iVar27), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dadc)));
        }
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x37), GH_ARG(0xc), GH_ARG(0x6e), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)));
        if (*puVar30 == 3) break;
        in_w5 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x37), GH_ARG(0xc), GH_ARG(100), GH_ARG(in_w5));
        if (*puVar30 == 3) break;
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(1), GH_ARG(param_2), GH_ARG(0));
        if (iVar9 == 0) goto LAB_00406164;
      }
      else {
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(1), GH_ARG(param_2), GH_ARG(0));
        piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dae4);
LAB_00406164:
        if (0 < *piVar25) {
          uVar8 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x31), GH_ARG(0x1e), GH_ARG(0), GH_ARG(in_w5), GH_ARG(*piVar19), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dacc)), GH_ARG(2));
          *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc) = uVar8;
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12a8)), GH_ARG(false));
          }
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(2), GH_ARG(param_2), GH_ARG(0));
          iVar27 = 0;
          goto LAB_004063c4;
        }
      }
    }
    else if (*(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8db28) < 0) {
      if (param_2 == 0) {
        *(undefined4 *)(self + 0x32b8d0) = 0;
      }
      iVar27 = 4;
LAB_004063c4:
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(iVar27), GH_ARG(param_2), GH_ARG(0));
    }
    else {
      *(int *)(self + lVar29 * 0x288 + 0x8daf0) =
           *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8db28);
      fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
      iVar27 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dba0);
      if (fVar31 != 1.0) {
        fVar33 = (float)iVar27;
        if (fVar31 <= 1.0) {
          fVar33 = fVar33 - (1.0 - fVar31) * fVar33;
        }
        else {
          fVar33 = fVar31 * fVar33;
        }
        iVar27 = (int)fVar33;
      }
      iVar7 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dc18);
      if (param_2 < 1) {
        if ((iVar27 == 1) && (iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dadc), iVar9 < 2)) {
          if (fVar31 == 1.0) {
            iVar27 = 0x12;
          }
          else {
            if (fVar31 <= 1.0) {
              fVar31 = 18.0 - (1.0 - fVar31) * 18.0;
            }
            else {
              fVar31 = fVar31 * 18.0;
            }
            iVar27 = (int)fVar31;
          }
          goto LAB_004075f4;
        }
      }
      else {
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
LAB_004075f4:
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(0), GH_ARG(iVar27), GH_ARG(iVar9));
      }
      if (iVar7 != 0) {
        if (iVar7 < 1) {
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(4), GH_ARG(-iVar7), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)));
        }
        else {
          iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(3), GH_ARG(iVar7), GH_ARG(iVar27));
          uVar8 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x31), GH_ARG(0x1e), GH_ARG(0), GH_ARG(iVar27), GH_ARG(*piVar19), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dacc)), GH_ARG(2));
          *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc) = uVar8;
        }
      }
      if (*piVar28 - 2U < 0xb) {
        piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar27 = 0x6e;
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x37), GH_ARG(0xc), GH_ARG(0x6e), GH_ARG(*piVar2));
        if (*puVar30 != 3) {
          iVar27 = 100;
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x37), GH_ARG(0xc), GH_ARG(100), GH_ARG(*piVar2));
        }
        if ((*(int *)(self + lVar29 * 0x288 + 0x8db14) == 0x14) &&
           (*(int *)(self + 0x8db14) == 0x16)) {
          if ((*piVar19 + -0x78 < *piVar25) && (*piVar25 < *piVar19 + 0x78)) {
            if ((*(int *)(self + lVar29 * 0x288 + 0x8dacc) + -0x82 < *(int *)(self + 0x8dacc)) &&
               (*(int *)(self + 0x8dacc) < *(int *)(self + lVar29 * 0x288 + 0x8dacc) + -0x46)) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x56), GH_ARG(*piVar2), GH_ARG(iVar27));
              if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) !=
                   0)) || (*(int *)(self + 0xba8) == 1)) {
                iVar27 = 0x28;
              }
              else {
                local_b0 = 0x2700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar27 = iVar27 + -0x14;
              }
              *(int *)(self + lVar29 * 0x288 + 0x8dafc) = iVar27;
              break;
            }
          }
        }
      }
    }
    if (*(int *)(self + lVar29 * 0x288 + 0x8dae8) < *(int *)(self + lVar29 * 0x288 + 0x8dacc)) {
      if (*(int *)(self + (gh_long)*piVar28 * 4 + lVar29 * 0x288 + 0x8dc90) == 999) {
        *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar29 * 0x288 + 0x8dae8);
      }
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(2), GH_ARG(0x17), GH_ARG(0x12));
    }
    if (*puVar30 != 0x41) {
      *piVar28 = *piVar28 + 1;
    }
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2f:
  case 0x30:
    goto switchD_00403d34_caseD_27;
  case 0x2d:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 0x28;
    }
    else {
      local_b0 = 0x2700000000;
      pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + -0x14;
    }
    iVar7 = *(int *)(self + 0x8dacc) + iVar7;
    *(int *)(self + 0x8dacc) = iVar7;
    iVar9 = *piVar25;
    iVar12 = *(int *)(self + lVar29 * 0x288 + 0x8dafc);
    *piVar19 = iVar12 + iVar9;
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
    *piVar25 = iVar7 + -10;
    iVar13 = *(int *)(self + lVar29 * 0x288 + 0x8dd08);
    if (*(int *)(self + (gh_long)iVar13 * 4 + lVar29 * 0x288 + 0x8db28) < 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = iVar13 + 1;
      *(int *)(self + lVar29 * 0x288 + 0x8daf0) =
           *(int *)(self + (gh_long)iVar13 * 4 + lVar29 * 0x288 + 0x8db28);
    }
    *(int *)(self + lVar29 * 0x288 + 0x8dd08) = iVar14;
    if (*(int *)(self + 0x8db14) == 0x16) {
      iVar13 = *(int *)(self + 0x32ba14);
      iVar9 = *(int *)(self + 0x32ba20) + iVar12 + iVar9;
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = iVar9 / iVar13;
      }
      iVar14 = 0;
      if (iVar13 != 0) {
        iVar14 = (iVar7 + *(int *)(self + 0x32ba24) + 0x78) / iVar13;
      }
      if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar7 = 0;
        if (iVar13 != 0) {
          iVar7 = (iVar9 + -0x14) / iVar13;
        }
        if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar7 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar7 = 0;
          if (iVar13 != 0) {
            iVar7 = (iVar9 + 0x14) / iVar13;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar7 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) break;
        }
      }
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x42), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG(iVar27));
    *piVar25 = *piVar25 + 0x50;
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x3a:
  case 0x3b:
  case 0xa0:
    switch(*(undefined4 *)
            (self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8dd08) * 4 + lVar29 * 0x288 + 0x8dc90))
    {
    case 10:
      iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      if (iVar27 == 0) {
        uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
        if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
           && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          iVar27 = *piVar19 + 0x50;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) goto LAB_00410fbc;
            lVar22 = lVar22 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      else {
        uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
        if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
           && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          iVar7 = *piVar19 + -0x50;
          lVar22 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) goto LAB_0040f69c;
            lVar22 = lVar22 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      goto LAB_004068a8;
    case 0xb:
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
      }
      iVar27 = *piVar19;
      uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dad8);
      uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
      uVar26 = *(int *)(self + 0x1ae8) - 0xd;
      if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar22 = 0;
        puVar21 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar21[-5] < 1) {
            *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
            puVar21[-10] = iVar27;
            puVar21[-9] = uVar4;
            puVar21[-8] = uVar8;
            *(undefined8 *)(puVar21 + -4) = 0x74;
            *(undefined8 *)(puVar21 + -6) = 0x64000000fb;
            *(undefined8 *)(puVar21 + 5) = 0;
            *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
            puVar21[7] = 0xff;
            *puVar21 = 0x3f800000;
            *(undefined8 *)(puVar21 + 3) = 0x84;
            *(undefined8 *)(puVar21 + 1) = 0;
            uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dad8);
            iVar27 = *piVar19;
            uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
            break;
          }
          lVar22 = lVar22 + 1;
          puVar21 = puVar21 + 0x14;
        } while (lVar22 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar22 = 0;
        puVar21 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar21[-5] < 1) {
            *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
            puVar21[-10] = iVar27;
            puVar21[-9] = uVar4;
            puVar21[-8] = uVar8;
            *(undefined8 *)(puVar21 + -4) = 0x1b5;
            *(undefined8 *)(puVar21 + -6) = 0x64000000fb;
            *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
            *(undefined8 *)(puVar21 + 5) = 3;
            puVar21[7] = 0xff;
            *(undefined8 *)(puVar21 + 3) = 0x1b8;
            *(undefined8 *)(puVar21 + 1) = 0;
            *puVar21 = 0x3f800000;
            break;
          }
          lVar22 = lVar22 + 1;
          puVar21 = puVar21 + 0x14;
        } while (lVar22 < *(int *)(self + 0x32b828));
      }
      break;
    case 0xc:
      iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      iVar27 = *piVar19;
      if (*(int *)(self + lVar29 * 0x288 + 0x8db14) == 0x11) {
        if (iVar7 == 0) {
          iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar12 = *(int *)(self + 0x32ba14);
          iVar7 = *(int *)(self + 0x32ba20) + iVar27 + 0x50;
          iVar13 = 0;
          if (iVar12 != 0) {
            iVar13 = iVar7 / iVar12;
          }
          iVar14 = 0;
          if (iVar12 != 0) {
            iVar14 = (*(int *)(self + 0x32ba24) + iVar9 + -0x78) / iVar12;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar13 = 0;
            if (iVar12 != 0) {
              iVar13 = (iVar7 + -1) / iVar12;
            }
            if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar13 = 0;
              if (iVar12 != 0) {
                iVar13 = (iVar7 + 1) / iVar12;
              }
              if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 +
                                                              (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar7 = *(int *)(self + lVar29 * 0x50 + 0xb0cd4);
                if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                    ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U)
                     == 0)) && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
                  lVar22 = 0;
                  puVar20 = (undefined8 *)(self + 0xb0cdc);
LAB_0040948c:
                  if (0 < *(int *)(puVar20 + -2)) goto code_r0x00409498;
                  *(int *)((gh_long)puVar20 + -0x24) = iVar27 + 0x50;
                  *(int *)(puVar20 + -4) = iVar9 + -0x78;
                  *(float *)((gh_long)puVar20 + -4) = (float)iVar7;
                  uVar34 = 0x6400000088;
                  uVar32 = 0x20;
                  *(undefined4 *)((gh_long)puVar20 + -0x1c) = 0;
LAB_00413428:
                  *(int *)(puVar20 + 3) = param_2;
                  *(undefined8 *)((gh_long)puVar20 + -0xc) = 0x10000024e;
                  *(undefined8 *)((gh_long)puVar20 + -0x14) = uVar34;
                  *puVar20 = 0x3f8000003f800000;
                  *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
                  puVar20[2] = uVar32;
                  puVar20[1] = 0;
                  *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
                }
                break;
              }
            }
          }
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x18c0)), GH_ARG(false));
          }
          iVar27 = *(int *)(self + 0x1ae8);
          if (((iVar27 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + 6;
            iVar27 = *(int *)(self + 0x1ae8);
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar27 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar9 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar27 = *(int *)(self + 0x1ae8);
            iVar9 = iVar9 + 2;
          }
          if (((0x3d < iVar27 - 0xdU) ||
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[2] = 0;
                puVar21[3] = iVar9;
                *(ulong *)(puVar21 + -10) =
                     CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x78,(int)uVar34 + 0x1e);
                puVar21[4] = 0;
                puVar21[5] = -iVar7;
                *(undefined8 *)(puVar21 + -4) = 0x100000005;
                *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                puVar21[-8] = 1;
                goto LAB_00412ce4;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
        }
        else {
          iVar12 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar13 = *(int *)(self + 0x32ba14);
          iVar9 = *(int *)(self + 0x32ba20) + iVar27 + -0x50;
          iVar14 = 0;
          if (iVar13 != 0) {
            iVar14 = iVar9 / iVar13;
          }
          iVar10 = 0;
          if (iVar13 != 0) {
            iVar10 = (*(int *)(self + 0x32ba24) + iVar12 + -0x78) / iVar13;
          }
          if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar14 = 0;
            if (iVar13 != 0) {
              iVar14 = (iVar9 + -1) / iVar13;
            }
            if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar9 + 1) / iVar13;
              }
              if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 +
                                                              (gh_long)iVar14 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar9 = *(int *)(self + lVar29 * 0x50 + 0xb0cd4);
                if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                    ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U)
                     == 0)) && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
                  lVar22 = 0;
                  puVar20 = (undefined8 *)(self + 0xb0cdc);
LAB_00408b38:
                  if (0 < *(int *)(puVar20 + -2)) goto code_r0x00408b44;
                  *(int *)((gh_long)puVar20 + -0x24) = iVar27 + -0x50;
                  *(int *)(puVar20 + -4) = iVar12 + -0x78;
                  *(int *)((gh_long)puVar20 + -0x1c) = iVar7;
                  *(float *)((gh_long)puVar20 + -4) = (float)iVar9;
                  uVar34 = 0x6400000088;
                  uVar32 = 0x20;
                  *(int *)(puVar20 + 3) = param_2;
LAB_00413098:
                  *(undefined8 *)((gh_long)puVar20 + -0xc) = 0x10000024e;
                  *(undefined8 *)((gh_long)puVar20 + -0x14) = uVar34;
                  *puVar20 = 0x3f8000003f800000;
                  *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
                  puVar20[2] = uVar32;
                  puVar20[1] = 0;
                  *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
                }
                break;
              }
            }
          }
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x18c0)), GH_ARG(false));
          }
          iVar27 = *(int *)(self + 0x1ae8);
          if (((iVar27 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + 6;
            iVar27 = *(int *)(self + 0x1ae8);
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar27 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar9 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar27 = *(int *)(self + 0x1ae8);
            iVar9 = iVar9 + 2;
          }
          if (((0x3d < iVar27 - 0xdU) ||
              ((1LL << ((ulong)(iVar27 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
LAB_004052dc:
            if (0 < (int)puVar21[-5]) goto code_r0x004052e8;
            puVar21[2] = 0;
            puVar21[3] = iVar9;
            *(ulong *)(puVar21 + -10) =
                 CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x78,(int)uVar34 + -0x1e);
            puVar21[-8] = 0;
            *(undefined8 *)(puVar21 + -4) = 0x100000005;
            *(undefined8 *)(puVar21 + -6) = 0x6400000085;
            *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
            puVar21[4] = 0;
            puVar21[5] = -iVar7;
LAB_00412ce4:
            *puVar21 = 0x3f800000;
            puVar21[1] = 0;
            *(undefined8 *)(puVar21 + 6) = 0xff00000000;
            *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
            break;
          }
        }
      }
      else if (iVar7 == 0) {
        iVar27 = iVar27 + 0x50;
        piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
        iVar9 = *(int *)(self + 0x32ba14);
        iVar7 = *(int *)(self + 0x32ba20) + iVar27;
        iVar13 = *piVar25 + -0x78;
        iVar12 = 0;
        if (iVar9 != 0) {
          iVar12 = iVar7 / iVar9;
        }
        iVar14 = 0;
        if (iVar9 != 0) {
          iVar14 = (*(int *)(self + 0x32ba24) + iVar13) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (iVar7 + -1) / iVar9;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar12 = 0;
            if (iVar9 != 0) {
              iVar12 = (iVar7 + 1) / iVar9;
            }
            if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar7 = *(int *)(self + lVar29 * 0x50 + 0xb0cd4);
              if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                  ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) ==
                   0)) && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
                lVar22 = 0;
                puVar20 = (undefined8 *)(self + 0xb0cdc);
                do {
                  if (*(int *)(puVar20 + -2) < 1) {
                    *(int *)((gh_long)puVar20 + -0x24) = iVar27;
                    *(int *)(puVar20 + -4) = iVar13;
                    *(float *)((gh_long)puVar20 + -4) = (float)iVar7;
                    uVar34 = 0x6400000087;
                    uVar32 = 0x16;
                    *(undefined4 *)((gh_long)puVar20 + -0x1c) = 0;
                    goto LAB_00413428;
                  }
                  lVar22 = lVar22 + 1;
                  puVar20 = puVar20 + 10;
                } while (lVar22 < *(int *)(self + 0x32b828));
              }
              break;
            }
          }
        }
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
          iVar27 = *piVar19 + 0x50;
          iVar13 = *piVar25 + -0x78;
        }
        uVar26 = *(int *)(self + 0x1ae8) - 0xd;
        if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
              *(int *)(puVar20 + -4) = iVar27;
              *(int *)((gh_long)puVar20 + -0x1c) = iVar13;
              puVar20[-1] = 0x85;
              puVar20[-2] = 0x6400000078;
              *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
              *puVar20 = 0x3f80000000000000;
              *(int *)((gh_long)puVar20 + 0x1c) = param_2;
              *(undefined4 *)(puVar20 + -3) = 1;
              *(undefined4 *)(puVar20 + 1) = 0x3f800000;
              puVar20[5] = 0xff000000ff;
              puVar20[4] = 0xff00000000;
              iVar27 = *piVar19 + 0x50;
              iVar13 = *piVar25 + -0x78;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
              *(int *)(puVar20 + -4) = iVar27;
              *(int *)((gh_long)puVar20 + -0x1c) = iVar13;
              *(undefined4 *)(puVar20 + -3) = 0;
              puVar20[-1] = 0x1c;
              puVar20[-2] = 0x640000006a;
              *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
              *puVar20 = 0x3f80000000000000;
              *(int *)((gh_long)puVar20 + 0x1c) = param_2;
              *(undefined4 *)(puVar20 + 1) = 0x3f800000;
              puVar20[5] = 0xff000000ff;
              puVar20[4] = 0xff00000000;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      else {
        piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
        iVar12 = *(int *)(self + 0x32ba14);
        iVar27 = iVar27 + -0x50;
        iVar9 = *(int *)(self + 0x32ba20) + iVar27;
        iVar14 = *piVar25 + -0x78;
        iVar13 = 0;
        if (iVar12 != 0) {
          iVar13 = iVar9 / iVar12;
        }
        iVar10 = 0;
        if (iVar12 != 0) {
          iVar10 = (*(int *)(self + 0x32ba24) + iVar14) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar13 = 0;
          if (iVar12 != 0) {
            iVar13 = (iVar9 + -1) / iVar12;
          }
          if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar13 = 0;
            if (iVar12 != 0) {
              iVar13 = (iVar9 + 1) / iVar12;
            }
            if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar9 = *(int *)(self + lVar29 * 0x50 + 0xb0cd4);
              if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                  ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) ==
                   0)) && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
                lVar22 = 0;
                puVar20 = (undefined8 *)(self + 0xb0cdc);
                do {
                  if (*(int *)(puVar20 + -2) < 1) {
                    *(int *)((gh_long)puVar20 + -0x24) = iVar27;
                    *(int *)(puVar20 + -4) = iVar14;
                    *(int *)((gh_long)puVar20 + -0x1c) = iVar7;
                    *(float *)((gh_long)puVar20 + -4) = (float)iVar9;
                    uVar34 = 0x6400000087;
                    uVar32 = 0x16;
                    *(int *)(puVar20 + 3) = param_2;
                    goto LAB_00413098;
                  }
                  lVar22 = lVar22 + 1;
                  puVar20 = puVar20 + 10;
                } while (lVar22 < *(int *)(self + 0x32b828));
              }
              break;
            }
          }
        }
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
          iVar27 = *piVar19 + -0x50;
          iVar14 = *piVar25 + -0x78;
        }
        uVar26 = *(int *)(self + 0x1ae8) - 0xd;
        if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
              *(int *)(puVar20 + -4) = iVar27;
              *(int *)((gh_long)puVar20 + -0x1c) = iVar14;
              *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
              puVar20[-1] = 0x85;
              puVar20[-2] = 0x6400000078;
              *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
              *(int *)((gh_long)puVar20 + 0x1c) = param_2;
              *puVar20 = 0x3f80000000000000;
              *(undefined4 *)(puVar20 + -3) = 1;
              *(undefined4 *)(puVar20 + 1) = 0x3f800000;
              puVar20[5] = 0xff000000ff;
              puVar20[4] = 0xff00000000;
              iVar27 = *piVar19 + -0x50;
              iVar14 = *piVar25 + -0x78;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
              *(int *)(puVar20 + -4) = iVar27;
              *(int *)((gh_long)puVar20 + -0x1c) = iVar14;
              *(undefined4 *)(puVar20 + -3) = 0;
              puVar20[-1] = 0x1c;
              puVar20[-2] = 0x640000006a;
              *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
              *puVar20 = 0x3f80000000000000;
              *(int *)((gh_long)puVar20 + 0x1c) = param_2;
              *(undefined4 *)(puVar20 + 1) = 0x3f800000;
              puVar20[5] = 0xff000000ff;
              puVar20[4] = 0xff00000000;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      break;
    case 0xd:
      iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      if (iVar27 == 0) {
        uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
        if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
             ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
            && (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar22 = 0;
          iVar27 = *piVar19 + 0x82;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) goto LAB_00410fbc;
            lVar22 = lVar22 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      else {
        uVar8 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dacc);
        if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
           && ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          iVar7 = *piVar19 + -0x82;
          lVar22 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) goto LAB_0040f69c;
            lVar22 = lVar22 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
      }
      goto LAB_004068a8;
    case 0xe:
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar22 = 0x1860;
      goto LAB_004068c8;
    case 0x10:
      fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
      *(float *)(self + lVar29 * 0x288 + 0x8db24) = fVar31 + 0.1;
      if ((*(int *)(self + lVar29 * 0x288 + 0x8db14) < 0x13) && (1.4 < fVar31 + 0.1)) {
        *(int *)(self + lVar29 * 0x288 + 0x8db14) = 0x13;
        *(int *)(self + lVar29 * 0x288 + 0x8db04) = *(int *)(self + lVar29 * 0x288 + 0x8db04) << 2;
      }
      break;
    case 0x11:
      iVar9 = *(int *)(self + 0x1ae8);
      piVar25 = (int *)(self + lVar29 * 0x288 + 0x8db14);
      piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
      piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dafc);
      iVar27 = *piVar28;
      uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12fd8);
      iVar7 = *piVar2;
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar12 = 0xe;
      }
      else {
        local_b0 = 0xd00000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + -7;
        iVar9 = *(int *)(self + 0x1ae8);
      }
      piVar1 = (int *)(self + lVar29 * 0x288 + 0x8db00);
      iVar13 = *piVar1;
      if (((iVar9 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar14 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar14 = iVar14 + -8;
        iVar9 = *(int *)(self + 0x1ae8);
      }
      lVar22 = (gh_long)*piVar25;
      uVar26 = iVar9 - 0xd;
      uVar23 = (ulong)uVar26;
      uVar4 = *(undefined4 *)(self + lVar22 * 4 + 0x12f5c);
      if (iVar27 == 0) {
        if (((0x3d < uVar26) || ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar12 + iVar7;
              puVar21[-9] = iVar14 + iVar13;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x640000012c;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000c04789d7;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 5;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar2;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar1;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00406994:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + -0x2a + iVar7;
                puVar21[-9] = iVar13 + iVar12;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000c04789d7;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 5;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00406994;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar28;
        iVar12 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        iVar13 = *piVar1;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar14 = iVar14 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00406a3c:
          iVar27 = 10;
        }
        else {
          iVar10 = *(int *)(self + 0xba8);
          if ((iVar10 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cdc);
            do {
              if (*(int *)(puVar20 + -2) < 1) {
                *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
                *(int *)((gh_long)puVar20 + -0x24) = iVar12;
                *(int *)(puVar20 + -4) = iVar13 + -3;
                *(undefined4 *)(puVar20 + -1) = 1;
                *(undefined4 *)((gh_long)puVar20 + -4) = uVar4;
                *(undefined8 *)((gh_long)puVar20 + -0x14) = 0x6400000085;
                *(uint *)((gh_long)puVar20 + -0x1c) = (uint)(iVar7 == 0);
                *(int *)(puVar20 + 2) = iVar14;
                *(undefined4 *)((gh_long)puVar20 + 0x14) = 0;
                *puVar20 = 0x3f8000003f800000;
                puVar20[1] = 0;
                *(int *)(puVar20 + 3) = -iVar27;
                *(undefined4 *)((gh_long)puVar20 + -0xc) = uVar8;
                *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar10 == 1)) goto LAB_00406a3c;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar28;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar9 - 0xdU) ||
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0d00);
          do {
            if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
              puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -4,(int)uVar34 + 0x6e);
              puVar20[-1] = 0xff00000000;
              *puVar20 = 0xff000000ff;
              *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
              *(undefined4 *)(puVar20 + -5) = uVar4;
              *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
              *(int *)((gh_long)puVar20 + -0x14) = iVar12;
              *(undefined4 *)(puVar20 + -2) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
              *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
              *(undefined4 *)(puVar20 + -6) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
              puVar20[-7] = 0x6400000085;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8f6a0) < -0x95)) ||
           (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8f6a0))) goto joined_r0x00406e94;
        uVar26 = 0xf6a4;
      }
      else {
        if ((((0x3d < uVar26) || ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar24 = 0;
          puVar21 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar21[-5] < 1) {
              puVar21[-10] = iVar12 + iVar7;
              puVar21[-9] = iVar14 + iVar13;
              puVar21[2] = 0;
              puVar21[3] = uVar4;
              *(undefined8 *)(puVar21 + -6) = 0x640000012c;
              puVar21[4] = 0;
              puVar21[5] = param_2;
              *(undefined8 *)(puVar21 + -2) = 0x3f800000bd70aa22;
              puVar21[-8] = 0;
              puVar21[-4] = uVar8;
              puVar21[-3] = 0x131;
              *puVar21 = 0x3f800000;
              puVar21[1] = 0;
              *(undefined8 *)(puVar21 + 6) = 0xff00000000;
              *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
              lVar22 = (gh_long)*piVar25;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar21 = puVar21 + 0x14;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar2;
        uVar8 = *(undefined4 *)(self + lVar22 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << (uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar7 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = iVar7 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar1;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040577c:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + 0x2a + iVar7;
                puVar21[-9] = iVar13 + iVar12;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000bd70aa22;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 0x131;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_0040577c;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar28;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar2;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar9 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00405814:
          iVar27 = 10;
        }
        else {
          iVar13 = *(int *)(self + 0xba8);
          if ((iVar13 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0d00);
            do {
              if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
                puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -3,(int)uVar34 + -0x6e);
                puVar20[-1] = 0xff00000000;
                *puVar20 = 0xff000000ff;
                *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
                *(undefined4 *)(puVar20 + -5) = uVar4;
                *(uint *)(puVar20 + -8) = (uint)(iVar7 == 0);
                *(int *)((gh_long)puVar20 + -0x14) = iVar12;
                *(undefined4 *)(puVar20 + -2) = 0;
                *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
                *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
                *(undefined4 *)(puVar20 + -6) = uVar8;
                *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
                puVar20[-7] = 0x6400000085;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar13 == 1)) goto LAB_00405814;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        iVar7 = *piVar28;
        iVar12 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        iVar13 = *piVar1;
        if (((iVar9 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar14 = iVar14 + 2;
          iVar9 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar9 - 0xdU) ||
            ((1LL << ((ulong)(iVar9 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar20 + -2) < 1) {
              *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
              *(int *)((gh_long)puVar20 + -0x24) = iVar12;
              *(int *)(puVar20 + -4) = iVar13 + -5;
              *(undefined4 *)(puVar20 + -1) = 1;
              *(undefined4 *)((gh_long)puVar20 + -4) = uVar4;
              *(undefined8 *)((gh_long)puVar20 + -0x14) = 0x6400000085;
              *(uint *)((gh_long)puVar20 + -0x1c) = (uint)(iVar7 == 0);
              *(int *)(puVar20 + 2) = iVar14;
              *(undefined4 *)((gh_long)puVar20 + 0x14) = 0;
              *puVar20 = 0x3f8000003f800000;
              puVar20[1] = 0;
              *(int *)(puVar20 + 3) = -iVar27;
              *(undefined4 *)((gh_long)puVar20 + -0xc) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8f928) < -0x95)) ||
           (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8f928))) goto joined_r0x00406e94;
        uVar26 = 0xf92c;
      }
      if (((-0x1e < *(int *)(self + (uVar26 | 0x80000))) &&
          (*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) < 0x4b)) &&
         (*(int *)(self + (uVar26 | 0x80000)) < *(int *)(self + 0x115c) + 100)) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)
                   (self + (gh_long)(int)*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) * 0x18 + 0x11e8
                   )), GH_ARG(false));
      }
      goto joined_r0x00406e94;
    case 0x12:
      if (2 < *(int *)(self + lVar29 * 0x288 + 0x8dd08)) {
        iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*(int *)(self + 0xba8) == 1)) {
          iVar9 = 6;
          iVar7 = iVar27;
        }
        else {
          local_b0 = 0x500000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        }
        iVar12 = *(int *)(self + lVar29 * 0x288 + 0x8db14);
        if (iVar27 == 0) {
          iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dafc) + 0x10;
        }
        else {
          iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dafc) + -0x10;
        }
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar9 + 0x99), GH_ARG(*(int *)(self + (gh_long)iVar12 * 4 + 0x12fd8)), GH_ARG(iVar7), GH_ARG(iVar27), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8db00) + -8), GH_ARG(*(int *)(self + (gh_long)iVar12 * 4 + 0x12f5c)), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
        if (((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8f6a0))) &&
             (*(int *)(self + 0x8f6a0) < *(int *)(self + 0x1158) + 0x96)) &&
            ((-0x1e < *(int *)(self + 0x8f6a4) &&
             (*(uint *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8db14) * 4 + 0x1314c) < 0x4b
             )))) && (*(int *)(self + 0x8f6a4) < *(int *)(self + 0x115c) + 100)) {
          lVar22 = (gh_long)(int)*(uint *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8db14) * 4 +
                                               0x1314c) * 0x18 + 0x11e8;
          goto LAB_004068c8;
        }
      }
      break;
    case 0x13:
      piVar25 = (int *)(self + lVar29 * 0x288 + 0x8db14);
      piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
      piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dafc);
      uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12fd8);
      iVar27 = *piVar2;
      if (*piVar28 == 0) {
        iVar7 = *(int *)(self + 0x1ae8);
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar9 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar9 = iVar9 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        piVar1 = (int *)(self + lVar29 * 0x288 + 0x8db00);
        iVar12 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar7 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00406c28:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + -0x39 + iVar9;
                puVar21[-9] = iVar13 + iVar12;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000c04789d7;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 5;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00406c28;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar9 = *piVar28;
        iVar12 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        iVar13 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar14 = iVar14 + 2;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar7 - 0xd;
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar20 + -2) < 1) {
              *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
              *(int *)((gh_long)puVar20 + -0x24) = iVar12;
              *(int *)(puVar20 + -4) = iVar13 + -3;
              *(undefined4 *)(puVar20 + -1) = 1;
              *(undefined4 *)((gh_long)puVar20 + -4) = uVar4;
              *(undefined8 *)((gh_long)puVar20 + -0x14) = 0x6400000085;
              *(uint *)((gh_long)puVar20 + -0x1c) = (uint)(iVar9 == 0);
              *(int *)(puVar20 + 2) = iVar14;
              *(undefined4 *)((gh_long)puVar20 + 0x14) = 0;
              *puVar20 = 0x3f8000003f800000;
              puVar20[1] = 0;
              *(int *)(puVar20 + 3) = -iVar27;
              *(undefined4 *)((gh_long)puVar20 + -0xc) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar9 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar9 = iVar9 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar7 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00406d70:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + -0xaa + iVar9;
                puVar21[-9] = iVar12 + 2 + iVar13;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000bd70aa22;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 0x131;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00406d70;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar9 = *piVar28;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar2;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar7 - 0xdU) ||
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0d00);
          do {
            if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
              puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -5,(int)uVar34 + -0xf3);
              puVar20[-1] = 0xff00000000;
              *puVar20 = 0xff000000ff;
              *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
              *(undefined4 *)(puVar20 + -5) = uVar4;
              *(int *)(puVar20 + -8) = iVar9;
              *(int *)((gh_long)puVar20 + -0x14) = iVar12;
              *(undefined4 *)(puVar20 + -2) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
              *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
              *(undefined4 *)(puVar20 + -6) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
              puVar20[-7] = 0x6400000085;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8f6a0))) &&
           (*(int *)(self + 0x8f6a0) < *(int *)(self + 0x1158) + 0x96)) {
          uVar26 = 0xf6a4;
          goto LAB_00406e2c;
        }
      }
      else {
        iVar7 = *(int *)(self + 0x1ae8);
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar9 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar9 = iVar9 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        piVar1 = (int *)(self + lVar29 * 0x288 + 0x8db00);
        iVar12 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar7 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00405aa4:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + 0x39 + iVar9;
                puVar21[-9] = iVar12 + 8 + iVar13;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000bd70aa22;
                puVar21[-8] = 0;
                puVar21[-4] = uVar8;
                puVar21[-3] = 0x131;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00405aa4;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar9 = *piVar28;
        iVar12 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        iVar13 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar14 = iVar14 + 2;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        uVar26 = iVar7 - 0xd;
        if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar20 + -2) < 1) {
              *(undefined8 *)((gh_long)puVar20 + 0x1c) = 0xff00000000;
              *(int *)((gh_long)puVar20 + -0x24) = iVar12;
              *(int *)(puVar20 + -4) = iVar13 + -5;
              *(undefined4 *)(puVar20 + -1) = 1;
              *(undefined4 *)((gh_long)puVar20 + -4) = uVar4;
              *(undefined8 *)((gh_long)puVar20 + -0x14) = 0x6400000085;
              *(uint *)((gh_long)puVar20 + -0x1c) = (uint)(iVar9 == 0);
              *(int *)(puVar20 + 2) = iVar14;
              *(undefined4 *)((gh_long)puVar20 + 0x14) = 0;
              *puVar20 = 0x3f8000003f800000;
              puVar20[1] = 0;
              *(int *)(puVar20 + 3) = -iVar27;
              *(undefined4 *)((gh_long)puVar20 + -0xc) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + 0x24) = 0xff000000ff;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        iVar27 = *piVar2;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12fd8);
        if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar9 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar9 = iVar9 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar12 = *piVar1;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -8;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x12f5c);
        uVar26 = iVar7 - 0xd;
        if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00405bec:
          iVar27 = 10;
        }
        else {
          iVar14 = *(int *)(self + 0xba8);
          if ((iVar14 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                puVar21[-10] = iVar27 + 0xaa + iVar9;
                puVar21[-9] = iVar12 + -3 + iVar13;
                puVar21[2] = 0;
                puVar21[3] = uVar4;
                *(undefined8 *)(puVar21 + -6) = 0x640000012c;
                *(undefined8 *)(puVar21 + -2) = 0x3f800000c04789d7;
                puVar21[-8] = 0;
                puVar21[4] = 0;
                puVar21[5] = param_2;
                puVar21[-4] = uVar8;
                puVar21[-3] = 5;
                *puVar21 = 0x3f800000;
                puVar21[1] = 0;
                *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar14 == 1)) goto LAB_00405bec;
          local_b0 = 0x900000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar27 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar27 = iVar27 + 6;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        iVar9 = *piVar28;
        uVar8 = *(undefined4 *)(self + (gh_long)*piVar25 * 4 + 0x13054);
        uVar34 = *(undefined8 *)piVar2;
        if (((iVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar7 = *(int *)(self + 0x1ae8);
        }
        uVar4 = *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd30);
        if (((0x3d < iVar7 - 0xdU) ||
            ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar22 = 0;
          puVar20 = (undefined8 *)(self + 0xb0d00);
          do {
            if (*(int *)((gh_long)puVar20 + -0x34) < 1) {
              puVar20[-9] = CONCAT44((int)((ulong)uVar34 >> 0x20) + -3,(int)uVar34 + 0xf3);
              puVar20[-1] = 0xff00000000;
              *puVar20 = 0xff000000ff;
              *(undefined4 *)((gh_long)puVar20 + -0x2c) = 1;
              *(undefined4 *)(puVar20 + -5) = uVar4;
              *(int *)(puVar20 + -8) = iVar9;
              *(int *)((gh_long)puVar20 + -0x14) = iVar12;
              *(undefined4 *)(puVar20 + -2) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x1c) = 0;
              *(int *)((gh_long)puVar20 + -0xc) = -iVar27;
              *(undefined4 *)(puVar20 + -6) = uVar8;
              *(undefined8 *)((gh_long)puVar20 + -0x24) = 0x3f8000003f800000;
              puVar20[-7] = 0x6400000085;
              break;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar22 < *(int *)(self + 0x32b828));
        }
        if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8f928))) &&
           (*(int *)(self + 0x8f928) < *(int *)(self + 0x1158) + 0x96)) {
          uVar26 = 0xf92c;
LAB_00406e2c:
          if (((-0x1e < *(int *)(self + (uVar26 | 0x80000))) &&
              (*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) < 0x4b)) &&
             (*(int *)(self + (uVar26 | 0x80000)) < *(int *)(self + 0x115c) + 100)) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)
                       (self + (gh_long)(int)*(uint *)(self + (gh_long)*piVar25 * 4 + 0x1314c) * 0x18 +
                               0x11e8)), GH_ARG(false));
          }
        }
      }
joined_r0x00406e94:
      if (param_2 == 0) {
        iVar27 = 0;
        if (0x13 < *(int *)(self + 0x32c43c)) {
          iVar27 = *(int *)(self + 0x32c43c) + -0x14;
        }
        *(int *)(self + 0x32c43c) = iVar27;
      }
    }
    goto switchD_00403e54_caseD_f;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_00403d34_caseD_34;
  case 0x41:
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dae4);
    piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
    iVar27 = *piVar25;
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x41), GH_ARG(3), GH_ARG(iVar27), GH_ARG(*piVar28));
    *piVar25 = *piVar25 + 6;
    if (((param_2 == 0) && (*(int *)(self + 0x8daf0) == 0x17)) && (*(int *)(self + 0x8dadc) < 2)) {
      fVar31 = *(float *)(self + 0x8db24);
      if (fVar31 == 1.0) {
        iVar27 = 0xe;
      }
      else {
        if (fVar31 <= 1.0) {
          fVar31 = 14.0 - (1.0 - fVar31) * 14.0;
        }
        else {
          fVar31 = fVar31 * 14.0;
        }
        iVar27 = (int)fVar31;
      }
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(0), GH_ARG(*puVar30), GH_ARG(0), GH_ARG(iVar27), GH_ARG(*(int *)(self + 0x8dadc)));
    }
    iVar9 = *(int *)(self + 0x32ba14);
    iVar7 = *(int *)(self + 0x32ba20) + *piVar19;
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = iVar7 / iVar9;
    }
    iVar13 = 0;
    if (iVar9 != 0) {
      iVar13 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar29 * 0x288 + 0x8dacc)) / iVar9;
    }
    if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378))) {
LAB_0040ff1c:
      iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8dd08);
      if (iVar7 == 0x17) {
        if ((0x5a < *piVar25) && (*(int *)(self + 0x32ba38) == 0)) {
          *(int *)(self + 0x32ba38) = 2;
        }
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(2), GH_ARG(param_2), GH_ARG(0));
        if (0 < param_2) {
          *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd48) = 0;
        }
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          lVar29 = 0x12a8;
LAB_00410188:
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar29)), GH_ARG(false));
        }
      }
      else {
        if (*(int *)(self + 0x32ba38) == 0) {
          *(int *)(self + 0x32ba38) = 2;
        }
        switch(*(undefined4 *)(self + lVar29 * 0x288 + 0x8db14)) {
        case 0x15:
          iVar7 = *piVar28;
          iVar9 = 0x84;
          break;
        default:
          if (iVar7 < 0x22d) {
            if (iVar7 == 0x73) {
              iVar7 = *piVar28;
              iVar9 = 0x4a;
            }
            else if (iVar7 == 0x74) {
              iVar7 = *piVar28;
              iVar9 = 0x4c;
            }
            else {
              if (iVar7 != 0xc3) goto switchD_004100dc_caseD_22e;
              iVar7 = *piVar28;
              iVar9 = 0x4b;
            }
          }
          else {
            switch(iVar7) {
            case 0x22d:
              iVar7 = *piVar28;
              iVar9 = 0x92;
              break;
            default:
              goto switchD_004100dc_caseD_22e;
            case 0x232:
              iVar7 = *piVar28;
              iVar9 = 0x94;
              break;
            case 0x244:
              iVar7 = *piVar28;
              iVar9 = 0x6e;
              break;
            case 0x24c:
              iVar7 = *piVar28;
              iVar9 = 0x99;
            }
          }
          break;
        case 0x17:
          iVar7 = *piVar28;
          iVar9 = 0xb1;
          break;
        case 0x18:
          iVar7 = *piVar28;
          iVar9 = 0xb9;
          break;
        case 0x19:
          iVar7 = *piVar28;
          iVar9 = 0xbf;
          break;
        case 0x1a:
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(8), GH_ARG(param_2), GH_ARG(0));
          goto switchD_004100dc_caseD_22e;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar9), GH_ARG(iVar7), GH_ARG(iVar27));
switchD_004100dc_caseD_22e:
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          lVar29 = 0x12c0;
          goto LAB_00410188;
        }
      }
      if (param_2 == 0) {
        *(undefined4 *)(self + 0x32b8d0) = 0;
      }
      break;
    }
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = (iVar7 + -0x14) / iVar9;
    }
    if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    goto LAB_0040ff1c;
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = (iVar7 + 0x14) / iVar9;
    }
    if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    goto LAB_0040ff1c;
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x37), GH_ARG(0xc), GH_ARG(0x5f), GH_ARG(*piVar28));
    if (*puVar30 == 3) break;
    iVar9 = *piVar28;
    uVar26 = 0x37;
    iVar27 = 0xc;
    iVar7 = 0x73;
    goto LAB_0040ec94;
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4c:
  case 0x4d:
  case 0x4f:
  case 0x51:
  case 0x52:
    goto switchD_00403d34_caseD_46;
  case 0x48:
    goto switchD_00403d34_caseD_48;
  case 0x4e:
    piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    if (*piVar28 - 6U < 6) {
      lVar22 = (gh_long)*(int *)(self + 0x32c134);
      if (*(int *)(self + 0x32c134) < *(int *)(self + 0x32b824)) {
        do {
          iVar27 = (int)lVar22;
          if (((iVar27 != param_2) &&
              (piVar2 = (int *)(self + lVar22 * 0x288 + 0x8daec), 1 < *piVar2)) &&
             (*(int *)(self + lVar22 * 0x288 + 0x8dae0) < 0x4c)) {
            iVar7 = *(int *)(self + lVar22 * 0x288 + 0x8dac8);
            if ((iVar7 + -0x46 < *piVar19) && (*piVar19 < iVar7 + 0x46)) {
              piVar1 = (int *)(self + lVar22 * 0x288 + 0x8dacc);
              if ((*piVar1 + -100 < *(int *)(self + lVar29 * 0x288 + 0x8dacc)) &&
                 (*(int *)(self + lVar29 * 0x288 + 0x8dacc) < *piVar1 + 100)) {
                bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(0), GH_ARG(iVar27), GH_ARG(*(int *)(self + 0x8db04) / 10));
                if (*(int *)(self + 0x32c160) == 0) {
                  SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1218)), GH_ARG(false));
                }
                uVar8 = *(undefined4 *)(self + lVar22 * 0x288 + 0x8dad8);
                iVar7 = *(int *)(self + lVar22 * 0x288 + 0x8dac8);
                puVar20 = (undefined8 *)(self + 0xb0cd8);
                if (*(int *)(self + lVar29 * 0x288 + 0x8dad8) == 0) {
                  iVar9 = *piVar1;
                  if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                      ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U
                       ) == 0)) &&
                     ((*(int *)(self + 0xba8) != 1 &&
                      (iVar12 = *(int *)(self + 0x32b828), 0 < iVar12)))) {
                    lVar24 = 0;
                    do {
                      if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                        *(int *)(puVar20 + -4) = iVar7 + 0x1e;
                        *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x32;
                        goto LAB_00409724;
                      }
                      lVar24 = lVar24 + 1;
                      puVar20 = puVar20 + 10;
                    } while (lVar24 < iVar12);
                  }
                }
                else {
                  iVar9 = *piVar1;
                  if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                       ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) &
                        0x3200000000000081U) == 0)) && (*(int *)(self + 0xba8) != 1)) &&
                     (iVar12 = *(int *)(self + 0x32b828), 0 < iVar12)) {
                    lVar24 = 0;
LAB_004098d0:
                    if (0 < *(int *)((gh_long)puVar20 + -0xc)) goto code_r0x004098dc;
                    *(int *)(puVar20 + -4) = iVar7 + -0x1e;
                    *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x32;
LAB_00409724:
                    *(undefined4 *)(puVar20 + -3) = uVar8;
                    *puVar20 = 0x3f80000000000000;
                    *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                    *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                    puVar20[-1] = 0x11;
                    puVar20[-2] = 0x640000006e;
                    *(int *)((gh_long)puVar20 + 0x1c) = iVar27;
                    *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                    puVar20[5] = 0xff000000ff;
                    puVar20[4] = 0xff00000000;
                  }
                }
LAB_00409930:
                if (*(int *)(self + lVar22 * 0x288 + 0x8db14) < 0x15) {
                  if (*piVar28 < 10) {
                    iVar7 = 0x3d;
                  }
                  else {
                    iVar7 = 0x45;
                  }
                  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar27), GH_ARG(iVar7), GH_ARG((uint)(*(int *)(self + lVar29 * 0x288 + 0x8dad8) == 0)), GH_ARG((int)in_x4))
                  ;
                }
                else if ((*(int *)(self + lVar22 * 0x288 + 0x8db14) != 0x16) && (*piVar2 < 1)) {
                  *piVar2 = 2;
                }
              }
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < *(int *)(self + 0x32b824));
      }
    }
    if (*(int *)(self + lVar29 * 0x288 + 0x8dd20) - 0x15U < 2) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x14), GH_ARG((uint)(*piVar25 <= *piVar19)), GH_ARG((int)in_x4));
    }
    if ((*(int *)(self + (gh_long)*piVar28 * 4 + lVar29 * 0x288 + 0x8db28) < 0) &&
       (bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(0), GH_ARG(param_2), GH_ARG(*(int *)(self + 0x8db04) / 10)),
       *(int *)(self + lVar29 * 0x288 + 0x8daec) < 2)) {
      *puVar30 = 0x5a;
      *piVar28 = 0;
      *(undefined4 *)(self + lVar29 * 0x288 + 0x8daf0) = 0x78;
      break;
    }
    uVar26 = *puVar30;
    if (uVar26 == 0x53) goto switchD_00403d34_caseD_53;
    goto LAB_00409e70;
  case 0x53:
switchD_00403d34_caseD_53:
    iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8db1c);
    lVar22 = (gh_long)iVar27;
    if (*(int *)(self + lVar22 * -0x288 + 0x8dae0) != 0x2c) {
      *(int *)(self + lVar29 * 0x288 + 0x8db1c) = 0;
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x45), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG((int)in_x4));
      iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dd20);
      if (*(int *)(self + lVar29 * 0x288 + 0x8dd14) !=
          *(int *)(self + (gh_long)iVar27 * 0x10 + 0x8cb70)) {
        *(int *)(self + lVar29 * 0x288 + 0x8dd14) = *(int *)(self + (gh_long)iVar27 * 0x10 + 0x8cb70);
        *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd18) =
             *(undefined4 *)(self + (gh_long)iVar27 * 0x10 + 0x8cb74);
        *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd1c) =
             *(undefined4 *)(self + (gh_long)iVar27 * 0x10 + 0x8cb78);
      }
      break;
    }
    iVar27 = -iVar27;
    piVar28 = (int *)(self + lVar22 * -0x288 + 0x8dafc);
    *piVar19 = *piVar28;
    iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8dd08);
    *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar22 * -0x288 + 0x8db00) + 0x8c;
    if ((iVar7 == 5) || (iVar7 == 0xc)) {
LAB_00409bd0:
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        uVar26 = 3;
      }
      else {
        local_b0 = 0x200000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        uVar26 = iVar7 + 1;
      }
      if ((uVar26 < 0x4b) && (*(int *)(self + 0x32c160) == 0)) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)uVar26 * 0x18 + 0x11e8)), GH_ARG(false));
      }
      piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
      iVar7 = *piVar2;
      uVar26 = *(int *)(self + 0x1ae8) - 0xd;
      if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00409c90:
        iVar7 = 4;
      }
      else {
        iVar9 = *(int *)(self + 0xba8);
        if ((iVar9 != 1) && (0 < *(int *)(self + 0x32b828))) {
          lVar24 = 0;
          puVar20 = (undefined8 *)(self + 0xb0cf8);
          do {
            if (*(int *)((gh_long)puVar20 + -0x2c) < 1) {
              puVar20[-8] = *(undefined8 *)piVar28;
              *(int *)(puVar20 + -7) = iVar7;
              puVar20[-5] = 0x11;
              puVar20[-6] = 0x640000006e;
              *(undefined8 *)((gh_long)puVar20 + -0xc) = 0;
              *(undefined8 *)((gh_long)puVar20 + -0x14) = 0;
              puVar20[-4] = 0x3f80000000000000;
              *(int *)((gh_long)puVar20 + -4) = param_2;
              *(undefined4 *)(puVar20 + -3) = 0x3f800000;
              puVar20[1] = 0xff000000ff;
              *puVar20 = 0xff00000000;
              break;
            }
            lVar24 = lVar24 + 1;
            puVar20 = puVar20 + 10;
          } while (lVar24 < *(int *)(self + 0x32b828));
        }
        if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar9 == 1)) goto LAB_00409c90;
        local_b0 = 0x300000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        iVar7 = iVar7 + 100;
      }
      in_x4 = (ulong)(*piVar2 == 0);
      bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar7), GH_ARG(0x3c), GH_ARG((uint)(*piVar2 == 0)), GH_ARG(*piVar28), GH_ARG(*(int *)(self + lVar22 * -0x288 + 0x8db00)), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar29 * 0x288 + 0x8dd30)), GH_ARG(0));
      if (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2) {
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x45), GH_ARG(*piVar2), GH_ARG((int)in_x4));
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar27), GH_ARG(0x71), GH_ARG(*(int *)(self + lVar22 * -0x288 + 0x8dad8)), GH_ARG((int)in_x4));
      }
      else if ((*(int *)(self + lVar22 * -0x288 + 0x8db14) == 0x13) &&
              (*(int *)(self + 0x32c428) < 5)) {
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x3d), GH_ARG(*piVar2), GH_ARG((int)in_x4));
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar27), GH_ARG(0x71), GH_ARG(*(int *)(self + lVar22 * -0x288 + 0x8dad8)), GH_ARG((int)in_x4));
      }
    }
    else if (iVar7 == 0x13) {
      bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(iVar27), GH_ARG(param_2), GH_ARG((*(int *)(self + lVar22 * -0x288 + 0x8db04) / 10) * 3));
      goto LAB_00409bd0;
    }
    uVar26 = *puVar30;
LAB_00409e70:
    iVar27 = (int)in_x4;
    if (uVar26 == 0x54) {
switchD_00403d34_caseD_54:
      iVar27 = (int)in_x4;
      iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8dd08);
      if (iVar7 == 4) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        }
        uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
        iVar27 = *piVar19;
        if (*(int *)(self + lVar29 * 0x288 + 0x8db14) == 0x17) {
          iVar7 = *(int *)(self + 0x1ae8);
          piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar9 = *piVar28;
          uVar26 = iVar7 - 0xd;
          if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(int *)(puVar20 + -4) = iVar27 + 10;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x88;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
                iVar27 = *piVar19;
                iVar9 = *piVar28;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar2 = (int *)(self + 0x1ae8);
          if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27 + -0xc;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x40;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar1 = (int *)(self + 0xba8);
          if (param_2 == 0) {
            piVar3 = (int *)(self + 0x32b828);
            iVar27 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x17;
              }
              else {
                local_b0 = 0x1600000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar14 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar10 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar10 = iVar10 + -0x10;
                iVar7 = *piVar2;
              }
              iVar15 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar11 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 4;
              }
              else {
                local_b0 = 0x300000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar16 = iVar16 + 2;
              }
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (0 < *piVar3)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[-10] = iVar14 + 10 + iVar10;
                    puVar21[-9] = (iVar15 + -0x88) - iVar11;
                    puVar21[-4] = iVar12 + 0x256;
                    puVar21[-3] = 1;
                    puVar21[2] = 0;
                    puVar21[3] = iVar16;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar13;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 10);
            iVar9 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0xc;
              }
              else {
                local_b0 = 0xb00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar12 = iVar12 + 6;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0xb;
              }
              else {
                local_b0 = 0xa00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar14 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar10 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -0x10;
                iVar7 = *piVar2;
              }
              iVar11 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar17 = 4;
              }
              else {
                local_b0 = 0x300000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar17 = iVar17 + 2;
              }
              iVar27 = (int)in_x4;
              uVar26 = iVar7 - 0xd;
              if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0))
                  && (*piVar1 != 1)) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[-10] = iVar10 + -0xc + iVar15;
                    puVar21[-9] = (iVar11 + -0x40) - iVar16;
                    puVar21[-4] = iVar13 + 0x25b;
                    puVar21[-3] = 1;
                    puVar21[2] = 0;
                    puVar21[3] = iVar17;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar14;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar12;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 10);
            if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040dd5c:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x46,(int)uVar34 + -0x28);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000288;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040dd5c;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040ddd8:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x32,(int)uVar34 + -0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000289;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040ddd8;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040de54:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x3a,(int)uVar34 + 0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000289;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040de54;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040ded0:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x23,(int)uVar34 + -10);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x10000028a;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040ded0;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040df4c:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x1e,(int)uVar34 + 0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x10000028a;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040df4c;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040dfc8:
              iVar9 = 6;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x1e,(int)uVar34 + -0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x10000028b;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040dfc8;
              if (iVar14 == 1) {
                iVar9 = 6;
              }
              else {
                local_b0 = 0x500000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            if (((0x3d < iVar7 - 0xdU) ||
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (0 < *piVar3)))) {
              lVar22 = 0;
              iVar9 = -iVar9;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x23,(int)uVar34 + 10);
                  puVar21[-8] = iVar12;
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  uVar34 = 0x10000028b;
                  goto LAB_00412db4;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            goto LAB_0040e720;
          }
          piVar3 = (int *)(self + 0x32b828);
          iVar27 = 0;
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            iVar14 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar10 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar10 = iVar10 + -0x10;
              iVar7 = *piVar2;
            }
            iVar15 = *piVar28;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar11 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar16 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
              iVar16 = iVar16 + 2;
            }
            if ((((0x3d < iVar7 - 0xdU) ||
                 ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*piVar1 != 1)) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[-10] = iVar14 + 10 + iVar10;
                  puVar21[-9] = (iVar15 + -0x88) - iVar11;
                  puVar21[-4] = iVar12 + 0x24f;
                  puVar21[-3] = 1;
                  puVar21[2] = 0;
                  puVar21[3] = iVar16;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar13;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 != 10);
          iVar9 = 0;
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + 6;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 0xb;
            }
            else {
              local_b0 = 0xa00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar14 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            iVar10 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar15 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar15 = iVar15 + -0x10;
              iVar7 = *piVar2;
            }
            iVar11 = *piVar28;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar16 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar17 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
              iVar17 = iVar17 + 2;
            }
            iVar27 = (int)in_x4;
            uVar26 = iVar7 - 0xd;
            if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (0 < *piVar3)))) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[-10] = iVar10 + -0xc + iVar15;
                  puVar21[-9] = (iVar11 + -0x40) - iVar16;
                  puVar21[-4] = iVar13 + 0x25b;
                  puVar21[-3] = 1;
                  puVar21[2] = 0;
                  puVar21[3] = iVar17;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar14;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar12;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 10);
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar9 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar9 = iVar9 + 4;
            iVar7 = *piVar2;
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040aef0:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x50,(int)uVar34 + -0x28);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028c;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040aef0;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040af6c:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x3c,(int)uVar34 + -0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028d;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040af6c;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040afe8:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x41,(int)uVar34 + 0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028d;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040afe8;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040b064:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x23,(int)uVar34 + -10);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028e;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040b064;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040b0e0:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x1e,(int)uVar34 + 0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028e;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040b0e0;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040b15c:
            iVar9 = 6;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x20,(int)uVar34 + -0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x10000028f;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040b15c;
            if (iVar14 == 1) {
              iVar9 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          if (((0x3d < iVar7 - 0xdU) ||
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar22 = 0;
            iVar9 = -iVar9;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
LAB_0040b218:
            if (0 < (int)puVar21[-5]) goto code_r0x0040b224;
            *(ulong *)(puVar21 + -10) =
                 CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x22,(int)uVar34 + 10);
            puVar21[-8] = iVar12;
            puVar21[2] = 0;
            puVar21[3] = iVar13;
            *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
            uVar34 = 0x10000028f;
LAB_00412db4:
            *(undefined8 *)(puVar21 + -4) = uVar34;
            *(undefined8 *)(puVar21 + -6) = 0x6400000085;
            puVar21[4] = 0;
            puVar21[5] = iVar9;
            *puVar21 = 0x3f800000;
            puVar21[1] = 0;
            *(undefined8 *)(puVar21 + 6) = 0xff00000000;
            *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
          }
        }
        else {
          iVar7 = *(int *)(self + 0x1ae8);
          piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar9 = *piVar28;
          piVar2 = (int *)(self + 0x1ae8);
          if (((0x3d < iVar7 - 0xdU) ||
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x50;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar3 = (int *)(self + 0x32b828);
          iVar9 = 0;
          piVar1 = (int *)(self + 0xba8);
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + 4;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 0x15;
            }
            else {
              local_b0 = 0x1400000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar14 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            iVar10 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar15 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar15 = iVar15 + -0x10;
              iVar7 = *piVar2;
            }
            iVar11 = *piVar28;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar16 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar17 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
              iVar17 = iVar17 + 2;
            }
            iVar27 = (int)in_x4;
            uVar26 = iVar7 - 0xd;
            if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*piVar1 != 1)) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[-10] = iVar15 + iVar10;
                  puVar21[-9] = (iVar11 + -0x50) - iVar16;
                  puVar21[-4] = iVar13 + 0x26d;
                  puVar21[-3] = 1;
                  puVar21[2] = 0;
                  puVar21[3] = iVar17;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  puVar21[-8] = iVar14;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar12;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 6);
          if (*(int *)(self + lVar29 * 0x288 + 0x8db14) != 0x19) {
            if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040cccc:
              iVar9 = 8;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x46,(int)uVar34 + -0x28);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000282;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040cccc;
              if (iVar14 == 1) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040cd48:
              iVar9 = 8;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x32,(int)uVar34 + 0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000286;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040cd48;
              if (iVar14 == 1) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040cdc4:
              iVar9 = 8;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x50,(int)uVar34 + -0x14);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000283;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040cdc4;
              if (iVar14 == 1) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040ce40:
              iVar9 = 8;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x5a,(int)uVar34 + 0x1e);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000284;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040ce40;
              if (iVar14 == 1) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            uVar26 = iVar7 - 0xd;
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040cebc:
              iVar9 = 8;
            }
            else {
              iVar14 = *piVar1;
              if ((iVar14 != 1) && (0 < *piVar3)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    *(ulong *)(puVar21 + -10) =
                         CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x4b,(int)uVar34 + 0x14);
                    puVar21[2] = 0;
                    puVar21[3] = iVar13;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    puVar21[-8] = iVar12;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + -4) = 0x100000285;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < *piVar3);
              }
              if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
              goto LAB_0040cebc;
              if (iVar14 == 1) {
                iVar9 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 4;
                iVar7 = *piVar2;
              }
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            uVar34 = *(undefined8 *)piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar13 = iVar13 + 1;
              iVar7 = *piVar2;
            }
            if (((0x3d < iVar7 - 0xdU) ||
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (0 < *piVar3)))) {
              lVar22 = 0;
              iVar9 = -iVar9;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x3c,(int)uVar34 + 0x1a);
                  puVar21[-8] = iVar12;
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  uVar34 = 0x100000287;
                  goto LAB_00412db4;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            goto LAB_0040e720;
          }
          iVar9 = 0;
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + 6;
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar14 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            iVar10 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar15 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar15 = iVar15 + -0x10;
              iVar7 = *piVar2;
            }
            iVar11 = *piVar28;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar16 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar17 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *piVar2;
              iVar17 = iVar17 + 2;
            }
            iVar27 = (int)in_x4;
            uVar26 = iVar7 - 0xd;
            if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*piVar1 != 1)) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[-10] = iVar15 + iVar10;
                  puVar21[-9] = (iVar11 + -0x50) - iVar16;
                  puVar21[-4] = iVar13 + 0x276;
                  puVar21[-3] = 1;
                  puVar21[2] = 0;
                  puVar21[3] = iVar17;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  puVar21[-8] = iVar14;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar12;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0xc);
          if (((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar9 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar9 = iVar9 + 4;
            iVar7 = *piVar2;
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040c4f8:
            iVar9 = 8;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x46,(int)uVar34 + -0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x100000290;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040c4f8;
            if (iVar14 == 1) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040c574:
            iVar9 = 8;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x46,(int)uVar34 + 0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x100000290;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040c574;
            if (iVar14 == 1) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040c5f0:
            iVar9 = 8;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x32,(int)uVar34 + -0x28);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x100000291;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040c5f0;
            if (iVar14 == 1) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040c66c:
            iVar9 = 8;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x32,(int)uVar34 + 0x14);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x100000291;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040c66c;
            if (iVar14 == 1) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          uVar26 = iVar7 - 0xd;
          if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0040c6e8:
            iVar9 = 8;
          }
          else {
            iVar14 = *piVar1;
            if ((iVar14 != 1) && (0 < *piVar3)) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  *(ulong *)(puVar21 + -10) =
                       CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x1e,(int)uVar34 + 0x1e);
                  puVar21[2] = 0;
                  puVar21[3] = iVar13;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  puVar21[-8] = iVar12;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar9;
                  *(undefined8 *)(puVar21 + -4) = 0x100000292;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *piVar3);
            }
            if ((uVar26 < 0x3e) && ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) != 0))
            goto LAB_0040c6e8;
            if (iVar14 == 1) {
              iVar9 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar9 = iVar9 + 4;
              iVar7 = *piVar2;
            }
          }
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar7 = *piVar2;
          }
          uVar34 = *(undefined8 *)piVar19;
          if (((iVar7 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)
             ) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 1;
            iVar7 = *piVar2;
          }
          if (((0x3d < iVar7 - 0xdU) ||
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar22 = 0;
            iVar9 = -iVar9;
            puVar21 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar21[-5] < 1) {
                *(ulong *)(puVar21 + -10) =
                     CONCAT44((int)((ulong)uVar34 >> 0x20) + -0x1e,(int)uVar34 + -0x23);
                puVar21[-8] = iVar12;
                puVar21[2] = 0;
                puVar21[3] = iVar13;
                *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                uVar34 = 0x100000292;
                goto LAB_00412db4;
              }
              lVar22 = lVar22 + 1;
              puVar21 = puVar21 + 0x14;
            } while (lVar22 < *piVar3);
          }
        }
      }
      else if (iVar7 == 3) {
        uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
        iVar27 = *piVar19;
        if (*(int *)(self + lVar29 * 0x288 + 0x8db14) == 0x17) {
          iVar7 = *(int *)(self + 0x1ae8);
          piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar9 = *piVar28;
          uVar26 = iVar7 - 0xd;
          if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(int *)(puVar20 + -4) = iVar27 + -0x28;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x5c;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
                iVar27 = *piVar19;
                iVar9 = *piVar28;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar2 = (int *)(self + 0x1ae8);
          if ((((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27 + 0x1d;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x3d;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar1 = (int *)(self + 0xba8);
          if (param_2 == 0) {
            iVar27 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar9 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 8;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x17;
              }
              else {
                local_b0 = 0x1600000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar14 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar10 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar10 = iVar10 + -0x10;
                iVar7 = *piVar2;
              }
              iVar15 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar11 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar16 = iVar16 + 4;
              }
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (iVar17 = *(int *)(self + 0x32b828), 0 < iVar17)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar16;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar14 + -0x28 + iVar10;
                    puVar21[-9] = (iVar15 + -0x5c) - iVar11;
                    puVar21[-8] = iVar13;
                    puVar21[-4] = iVar12 + 0x256;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar17);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 6);
            iVar9 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x18;
              }
              else {
                local_b0 = 0x1700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar12 = iVar12 + 0xc;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0x17;
              }
              else {
                local_b0 = 0x1600000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar14 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar10 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -0x10;
                iVar7 = *piVar2;
              }
              iVar11 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar17 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar17 = iVar17 + 4;
              }
              iVar27 = (int)in_x4;
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (iVar5 = *(int *)(self + 0x32b828), 0 < iVar5)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar17;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar10 + 0x1d + iVar15;
                    puVar21[-9] = (iVar11 + -0x3d) - iVar16;
                    puVar21[-8] = iVar14;
                    puVar21[-4] = iVar13 + 0x256;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar12;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar5);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 6);
          }
          else {
            iVar27 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar9 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 8;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0xc;
              }
              else {
                local_b0 = 0xb00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar14 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar10 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar10 = iVar10 + -0x10;
                iVar7 = *piVar2;
              }
              iVar15 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar11 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar16 = iVar16 + 4;
              }
              if ((((0x3d < iVar7 - 0xdU) ||
                   ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (iVar17 = *(int *)(self + 0x32b828), 0 < iVar17)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar16;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar14 + -0x28 + iVar10;
                    puVar21[-9] = (iVar15 + -0x5c) - iVar11;
                    puVar21[-8] = iVar13;
                    puVar21[-4] = iVar12 + 0x24f;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar17);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 6);
            iVar9 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x18;
              }
              else {
                local_b0 = 0x1700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar12 = iVar12 + 0xc;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0xc;
              }
              else {
                local_b0 = 0xb00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar14 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar10 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -0x10;
                iVar7 = *piVar2;
              }
              iVar11 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar17 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar17 = iVar17 + 4;
              }
              iVar27 = (int)in_x4;
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (iVar5 = *(int *)(self + 0x32b828), 0 < iVar5)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar17;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar10 + 0x1d + iVar15;
                    puVar21[-9] = (iVar11 + -0x3d) - iVar16;
                    puVar21[-8] = iVar14;
                    puVar21[-4] = iVar13 + 0x24f;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar12;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar5);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 6);
          }
        }
        else {
          iVar7 = *(int *)(self + 0x1ae8);
          iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
          if ((((0x3d < iVar7 - 0xdU) ||
               ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27 + 0x1e;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x1e;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar9 = 0;
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar12 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + 6;
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar13 = 0x15;
            }
            else {
              local_b0 = 0x1400000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar14 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            iVar10 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar15 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar15 = iVar15 + -0x10;
              iVar7 = *(int *)(self + 0x1ae8);
            }
            iVar11 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar16 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar17 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
              iVar17 = iVar17 + 3;
            }
            iVar27 = (int)in_x4;
            if (((0x3d < iVar7 - 0xdU) ||
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[2] = 0;
                  puVar21[3] = iVar17;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  puVar21[-10] = iVar10 + 0x1e + iVar15;
                  puVar21[-9] = (iVar11 + -0x1e) - iVar16;
                  puVar21[-8] = iVar14;
                  puVar21[-4] = iVar13 + 0x26d;
                  puVar21[-3] = 1;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar12;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *(int *)(self + 0x32b828));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 6);
        }
      }
      else if (iVar7 == 2) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        }
        uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
        iVar27 = *piVar19;
        if (*(int *)(self + lVar29 * 0x288 + 0x8db14) == 0x17) {
          iVar7 = *(int *)(self + 0x1ae8);
          piVar28 = (int *)(self + lVar29 * 0x288 + 0x8dacc);
          iVar9 = *piVar28;
          uVar26 = iVar7 - 0xd;
          if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(int *)(puVar20 + -4) = iVar27 + 0x25;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x7f;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                uVar8 = *(undefined4 *)(self + lVar29 * 0x50 + 0xb0cf4);
                iVar27 = *piVar19;
                iVar9 = *piVar28;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          piVar2 = (int *)(self + 0x1ae8);
          if (((0x3d < uVar26) || ((1LL << ((ulong)uVar26 & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27 + -0x34;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x48;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar27 = 0;
          piVar1 = (int *)(self + 0xba8);
          if (param_2 == 0) {
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar9 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 8;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x17;
              }
              else {
                local_b0 = 0x1600000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar14 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar10 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar10 = iVar10 + -0x10;
                iVar7 = *piVar2;
              }
              iVar15 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar11 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar16 = iVar16 + 4;
              }
              if ((((0x3d < iVar7 - 0xdU) ||
                   ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (iVar17 = *(int *)(self + 0x32b828), 0 < iVar17)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar16;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar14 + 0x25 + iVar10;
                    puVar21[-9] = (iVar15 + -0x7f) - iVar11;
                    puVar21[-8] = iVar13;
                    puVar21[-4] = iVar12 + 0x256;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar17);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 6);
            iVar9 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x18;
              }
              else {
                local_b0 = 0x1700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar12 = iVar12 + 0xc;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0x17;
              }
              else {
                local_b0 = 0x1600000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar14 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar10 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -0x10;
                iVar7 = *piVar2;
              }
              iVar11 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar17 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar17 = iVar17 + 4;
              }
              iVar27 = (int)in_x4;
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (iVar5 = *(int *)(self + 0x32b828), 0 < iVar5)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar17;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar10 + -0x34 + iVar15;
                    puVar21[-9] = (iVar11 + -0x48) - iVar16;
                    puVar21[-8] = iVar14;
                    puVar21[-4] = iVar13 + 0x256;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar12;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar5);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 6);
          }
          else {
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar9 = 0x10;
              }
              else {
                local_b0 = 0xf00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar9 = iVar9 + 8;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0xc;
              }
              else {
                local_b0 = 0xb00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar14 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar10 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar10 = iVar10 + -0x10;
                iVar7 = *piVar2;
              }
              iVar15 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar11 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar16 = iVar16 + 4;
              }
              if (((0x3d < iVar7 - 0xdU) ||
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar1 != 1 && (iVar17 = *(int *)(self + 0x32b828), 0 < iVar17)))) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar16;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar14 + 0x25 + iVar10;
                    puVar21[-9] = (iVar15 + -0x7f) - iVar11;
                    puVar21[-8] = iVar13;
                    puVar21[-4] = iVar12 + 0x24f;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar9;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar17);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 6);
            iVar9 = 0;
            do {
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar12 = 0x18;
              }
              else {
                local_b0 = 0x1700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar12 = iVar12 + 0xc;
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar13 = 0xc;
              }
              else {
                local_b0 = 0xb00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar14 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              iVar10 = *piVar19;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar15 = 0x20;
              }
              else {
                local_b0 = 0x1f00000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar15 = iVar15 + -0x10;
                iVar7 = *piVar2;
              }
              iVar11 = *piVar28;
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar16 = 10;
              }
              else {
                local_b0 = 0x900000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
              }
              if (((iVar7 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar1 == 1)) {
                iVar17 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
                iVar7 = *piVar2;
                iVar17 = iVar17 + 4;
              }
              iVar27 = (int)in_x4;
              if ((((0x3d < iVar7 - 0xdU) ||
                   ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                  (*piVar1 != 1)) && (iVar5 = *(int *)(self + 0x32b828), 0 < iVar5)) {
                lVar22 = 0;
                puVar21 = (undefined4 *)(self + 0xb0ce0);
                do {
                  if ((int)puVar21[-5] < 1) {
                    puVar21[2] = 0;
                    puVar21[3] = iVar17;
                    *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                    *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                    puVar21[-10] = iVar10 + -0x34 + iVar15;
                    puVar21[-9] = (iVar11 + -0x48) - iVar16;
                    puVar21[-8] = iVar14;
                    puVar21[-4] = iVar13 + 0x24f;
                    puVar21[-3] = 1;
                    *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                    *puVar21 = 0x3f800000;
                    puVar21[1] = 0;
                    puVar21[4] = 0;
                    puVar21[5] = -iVar12;
                    *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                    break;
                  }
                  lVar22 = lVar22 + 1;
                  puVar21 = puVar21 + 0x14;
                } while (lVar22 < iVar5);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 6);
          }
        }
        else {
          iVar7 = *(int *)(self + 0x1ae8);
          iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
          if (((0x3d < iVar7 - 0xdU) ||
              ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar22 = 0;
            puVar20 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar20 + -0xc) < 1) {
                *(int *)(puVar20 + -4) = iVar27 + -0x14;
                *(int *)((gh_long)puVar20 + -0x1c) = iVar9 + -0x32;
                puVar20[-1] = 0x85;
                puVar20[-2] = 0x6400000078;
                *(undefined4 *)((gh_long)puVar20 + 0x1c) = uVar8;
                *puVar20 = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar20 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar20 + 0xc) = 0;
                *(undefined4 *)(puVar20 + -3) = 1;
                puVar20[5] = 0xff000000ff;
                puVar20[4] = 0xff00000000;
                *(undefined4 *)(puVar20 + 1) = 0x3f800000;
                break;
              }
              lVar22 = lVar22 + 1;
              puVar20 = puVar20 + 10;
            } while (lVar22 < *(int *)(self + 0x32b828));
          }
          iVar9 = 0;
          do {
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar12 = 0x10;
            }
            else {
              local_b0 = 0xf00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar12 = iVar12 + 8;
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar13 = 0x15;
            }
            else {
              local_b0 = 0x1400000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar14 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            iVar10 = *piVar19;
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar15 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar15 = iVar15 + -0x10;
              iVar7 = *(int *)(self + 0x1ae8);
            }
            iVar11 = *(int *)(self + lVar29 * 0x288 + 0x8dacc);
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar16 = 10;
            }
            else {
              local_b0 = 0x900000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
            }
            if (((iVar7 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar17 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
              iVar7 = *(int *)(self + 0x1ae8);
              iVar17 = iVar17 + 4;
            }
            iVar27 = (int)in_x4;
            if ((((0x3d < iVar7 - 0xdU) ||
                 ((1LL << ((ulong)(iVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
              lVar22 = 0;
              puVar21 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar21[-5] < 1) {
                  puVar21[2] = 0;
                  puVar21[3] = iVar17;
                  *(undefined8 *)(puVar21 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar21 + -6) = 0x6400000085;
                  puVar21[-10] = iVar10 + -0x14 + iVar15;
                  puVar21[-9] = (iVar11 + -0x32) - iVar16;
                  puVar21[-8] = iVar14;
                  puVar21[-4] = iVar13 + 0x26d;
                  puVar21[-3] = 1;
                  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
                  *puVar21 = 0x3f800000;
                  puVar21[1] = 0;
                  puVar21[4] = 0;
                  puVar21[5] = -iVar12;
                  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
                  break;
                }
                lVar22 = lVar22 + 1;
                puVar21 = puVar21 + 0x14;
              } while (lVar22 < *(int *)(self + 0x32b828));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 6);
        }
      }
LAB_0040e720:
      uVar26 = *puVar30;
joined_r0x0040e734:
      if ((((uVar26 == 0x4f) && (*(int *)(self + lVar29 * 0x288 + 0x8dd20) - 0x15U < 2)) &&
          ((0x3d < *(int *)(self + 0x1ae8) - 0xdU ||
           ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))))
         && (*(int *)(self + 0xba8) != 1)) {
        local_b0 = 0x1300000000;
        pmVar18 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar18), GH_ARG((param_type *)&local_b0));
        if (iVar7 < 10) {
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x14), GH_ARG((uint)(*piVar25 <= *piVar19)), GH_ARG(iVar27));
        }
      }
    }
    else {
      if (uVar26 != 0x48) {
switchD_00403d34_caseD_46:
        goto joined_r0x0040e734;
      }
switchD_00403d34_caseD_48:
      if (*(int *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8db1c) * 0x288 + 0x8dae0) == 0x27
         ) {
        iVar7 = 0x14;
        if (*piVar19 <
            *(int *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8db1c) * 0x288 + 0x8dac8)) {
          iVar7 = -0x14;
        }
        *(int *)(self + lVar29 * 0x288 + 0x8dac8) =
             iVar7 + *(int *)(self + (gh_long)*(int *)(self + lVar29 * 0x288 + 0x8db1c) * 0x288 +
                                     0x8dac8);
      }
    }
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    lVar22 = (gh_long)*piVar25;
    iVar7 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8db28);
    if (iVar7 < 0) {
      uVar26 = -iVar7;
      if (((uVar26 | 1) == 0x4b) || (1 < *(int *)(self + lVar29 * 0x288 + 0x8daec))) {
        if (iVar7 == -1) {
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
        }
        else if (uVar26 == 0x4a) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x4a), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG(iVar27));
        }
        else {
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(6), GH_ARG(param_2), GH_ARG(uVar26));
        }
        if (param_2 == 0) {
          *(undefined4 *)(self + 0x32b8d0) = 0;
        }
      }
      else {
        *puVar30 = 0x5a;
        *piVar25 = 0;
      }
    }
    else {
      *(int *)(self + lVar29 * 0x288 + 0x8daf0) = iVar7;
      fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
      iVar27 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dba0);
      if (fVar31 != 1.0) {
        fVar33 = (float)iVar27;
        if (fVar31 <= 1.0) {
          fVar31 = fVar33 - (1.0 - fVar31) * fVar33;
        }
        else {
          fVar31 = fVar31 * fVar33;
        }
        iVar27 = (int)fVar31;
      }
      iVar7 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dc18);
      if (iVar27 < 0) {
        uVar26 = *puVar30;
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar12 = -iVar27;
        iVar13 = 1;
LAB_0040e8bc:
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(iVar13), GH_ARG(iVar12), GH_ARG(iVar9));
      }
      else if (iVar27 != 0) {
        uVar26 = *puVar30;
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar13 = 0;
        iVar12 = iVar27;
        goto LAB_0040e8bc;
      }
      if (iVar7 != 0) {
        if (iVar7 < 1) {
          iVar7 = -iVar7;
          iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
          iVar12 = 4;
        }
        else {
          iVar12 = 3;
          iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        }
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(iVar12), GH_ARG(iVar7), GH_ARG(iVar9));
      }
      if (*(int *)(self + lVar29 * 0x288 + 0x8dacc) < *(int *)(self + lVar29 * 0x288 + 0x8dae8)) {
        if (*(int *)(self + (gh_long)*piVar25 * 4 + lVar29 * 0x288 + 0x8dc90) == 999) {
LAB_0040e970:
          if (0x4a < (int)*puVar30) {
            iVar7 = *(int *)(self + 0x32ba14);
            iVar9 = 0;
            if (iVar7 != 0) {
              iVar9 = (*(int *)(self + 0x32ba20) + *piVar19) / iVar7;
            }
            iVar12 = 0;
            if (iVar7 != 0) {
              iVar12 = (*(int *)(self + lVar29 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24) + 0x14
                       ) / iVar7;
            }
            if ((0 < *(int *)(self + (gh_long)iVar12 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598)) &&
               (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar12 * 4 +
                                                                   (gh_long)iVar9 * 0x2d0 + 0x140598) *
                                                   0x12 | 1) * 4 + 0x11c378))) {
              if (*(int *)(self + 0x32c160) == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12c0)), GH_ARG(false));
              }
              if (*(int *)(self + 0x32ba38) == 0) {
                *(int *)(self + 0x32ba38) = 2;
              }
            }
          }
          goto LAB_0040ea4c;
        }
      }
      else {
        if (*(int *)(self + (gh_long)*piVar25 * 4 + lVar29 * 0x288 + 0x8dc90) == 999)
        goto LAB_0040e970;
LAB_0040ea4c:
        switch(*(undefined4 *)(self + lVar29 * 0x288 + 0x8db14)) {
        case 0x15:
          uVar26 = *puVar30;
          iVar7 = 0x1d5;
          break;
        default:
switchD_0040ea80_caseD_16:
          uVar26 = *puVar30;
          switch(uVar26) {
          case 0x46:
            uVar26 = 0x46;
            iVar7 = 0x17;
            break;
          default:
            goto switchD_0040eb44_caseD_47;
          case 0x49:
            uVar26 = 0x49;
            iVar7 = 0x22d;
            break;
          case 0x4a:
            uVar26 = 0x4a;
            iVar7 = 0x232;
            break;
          case 0x4c:
            uVar26 = 0x4c;
            iVar7 = 0x73;
            break;
          case 0x4d:
            uVar26 = 0x4d;
            iVar7 = 0xc3;
            break;
          case 0x4e:
            uVar26 = 0x4e;
            iVar7 = 0x74;
            break;
          case 0x51:
            uVar26 = 0x51;
            iVar7 = 0x244;
            break;
          case 0x52:
            uVar26 = 0x52;
            iVar7 = 0x24c;
          }
          break;
        case 0x17:
          if (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2) goto switchD_0040ea80_caseD_16;
          uVar26 = *puVar30;
          iVar7 = 0x27b;
          break;
        case 0x18:
          if (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2) goto switchD_0040ea80_caseD_16;
          uVar26 = *puVar30;
          iVar7 = 0x291;
          break;
        case 0x19:
          if (*(int *)(self + lVar29 * 0x288 + 0x8daec) < 2) goto switchD_0040ea80_caseD_16;
          uVar26 = *puVar30;
          iVar7 = 0x2a9;
          break;
        case 0x1a:
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(8), GH_ARG(param_2), GH_ARG(0));
          goto LAB_0040ec30;
        }
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(2), GH_ARG(iVar7), GH_ARG(iVar27));
      }
LAB_0040ec30:
      uVar26 = *puVar30;
switchD_0040eb44_caseD_47:
      if (uVar26 != 0x41) {
        *piVar25 = *piVar25 + 1;
      }
    }
    if ((*(int *)(self + lVar29 * 0x288 + 0x8db1c) < *(int *)(self + 0x32c134)) ||
       (*(int *)(self + 0x32c134) <= param_2)) break;
    iVar27 = 0x11;
    uVar26 = 0;
    iVar7 = 0;
    goto LAB_0040ec90;
  case 0x54:
    goto switchD_00403d34_caseD_54;
  case 0x5a:
    piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
    iVar7 = *piVar25;
    if (iVar7 == 1) {
      if (*(int *)(self + 0x32c134) <= param_2) {
        iVar27 = 0;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x13), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar7 = *piVar25;
        goto LAB_00406fd0;
      }
      iVar7 = 2;
LAB_00411df4:
      *piVar25 = iVar7;
    }
    else {
      if (iVar7 == 0) {
        piVar28 = (int *)(self + lVar29 * 0x288 + 0x8daf0);
        iVar9 = *piVar28;
        if (0 < iVar9) {
          if (iVar9 == 0x78) {
LAB_0040838c:
            piVar2 = (int *)(self + lVar29 * 0x288 + 0x8dad8);
            if (*piVar2 != 1) {
              if (*piVar2 != 0) goto LAB_00411df0;
              iVar7 = *piVar19;
              iVar12 = *(int *)(self + 0x32ba20);
              iVar13 = *(int *)(self + 0x32ba14);
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar7 + iVar12 + 0x10) / iVar13;
              }
              iVar10 = 0;
              if (iVar13 != 0) {
                iVar10 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar29 * 0x288 + 0x8dacc)) /
                         iVar13;
              }
              lVar22 = (gh_long)iVar10;
              if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 +
                                                              (gh_long)iVar14 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar14 = 0;
                if (iVar13 != 0) {
                  iVar14 = (iVar7 + iVar12 + -0x10) / iVar13;
                }
                if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                                0x140598) * 0x12 | 1) * 4 + 0x11c378
                            ) < 0x33)) goto LAB_0040f01c;
                iVar9 = 0x23c;
LAB_00411dbc:
                *piVar28 = iVar9;
              }
              else {
LAB_0040f01c:
                iVar14 = 0;
                if (iVar13 != 0) {
                  iVar14 = (iVar7 + iVar12 + 0x20) / iVar13;
                }
                if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                                0x140598) * 0x12 | 1) * 4 + 0x11c378
                            ) < 0x32)) {
                  iVar9 = 0x23d;
                  goto LAB_00411dbc;
                }
                iVar14 = 0;
                if (iVar13 != 0) {
                  iVar14 = (iVar7 + iVar12 + -0x10) / iVar13;
                }
                if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                                0x140598) * 0x12 | 1) * 4 + 0x11c378
                            ) < 0x32)) {
                  iVar9 = 0x23a;
                  goto LAB_00411dbc;
                }
                iVar14 = 0;
                if (iVar13 != 0) {
                  iVar14 = (iVar7 + iVar12 + -0x20) / iVar13;
                }
                if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                                0x140598) * 0x12 | 1) * 4 + 0x11c378
                            ) < 0x32)) {
                  iVar9 = 0x23b;
                  goto LAB_00411dbc;
                }
              }
              iVar7 = 1;
              if (iVar9 - 0x23aU < 4) {
                *piVar2 = 1;
              }
              goto LAB_00411df4;
            }
            iVar7 = *piVar19;
            iVar12 = *(int *)(self + 0x32ba20);
            iVar13 = *(int *)(self + 0x32ba14);
            iVar14 = 0;
            if (iVar13 != 0) {
              iVar14 = (iVar7 + iVar12 + -0x10) / iVar13;
            }
            iVar10 = 0;
            if (iVar13 != 0) {
              iVar10 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar29 * 0x288 + 0x8dacc)) /
                       iVar13;
            }
            lVar22 = (gh_long)iVar10;
            if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar14 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar7 + iVar12 + 0x10) / iVar13;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x33)) goto LAB_0040f130;
              iVar9 = 0x23c;
LAB_00411ddc:
              *piVar28 = iVar9;
            }
            else {
LAB_0040f130:
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar7 + iVar12 + -0x20) / iVar13;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) {
                iVar9 = 0x23d;
                goto LAB_00411ddc;
              }
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar7 + iVar12 + 0x10) / iVar13;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) {
                iVar9 = 0x23a;
                goto LAB_00411ddc;
              }
              iVar14 = 0;
              if (iVar13 != 0) {
                iVar14 = (iVar7 + iVar12 + 0x20) / iVar13;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) {
                iVar9 = 0x23b;
                goto LAB_00411ddc;
              }
            }
            if (iVar9 - 0x23aU < 4) {
              *piVar2 = 0;
            }
          }
          else if (iVar9 == 0x60) {
            if (*(int *)(self + lVar29 * 0x288 + 0x8dad8) == 1) {
              iVar7 = *piVar19;
              iVar12 = *(int *)(self + 0x32ba20);
              iVar9 = *(int *)(self + 0x32ba14);
              iVar13 = 0;
              if (iVar9 != 0) {
                iVar13 = (iVar7 + iVar12 + -0x10) / iVar9;
              }
              iVar14 = 0;
              if (iVar9 != 0) {
                iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar29 * 0x288 + 0x8dacc)) /
                         iVar9;
              }
              lVar22 = (gh_long)iVar14;
              if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 +
                                                              (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar13 = 0;
                if (iVar9 != 0) {
                  iVar13 = (iVar7 + iVar12 + 0x10) / iVar9;
                }
                if ((0 < *(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
                   (0x32 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 +
                                                                       (gh_long)iVar13 * 0x2d0 +
                                                                       0x140598) * 0x12 | 1) * 4 +
                                           0x11c378))) {
LAB_0040f564:
                  *piVar28 = 0x23a;
                  goto LAB_00411df0;
                }
              }
              iVar13 = 0;
              if (iVar9 != 0) {
                iVar13 = (iVar7 + iVar12 + -0x20) / iVar9;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) {
LAB_0040f814:
                *piVar28 = 0x23b;
              }
              else {
                iVar13 = 0;
                if (iVar9 != 0) {
                  iVar13 = (iVar7 + iVar12 + 0x10) / iVar9;
                }
                if ((0 < *(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
                   (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 +
                                                                       (gh_long)iVar13 * 0x2d0 +
                                                                       0x140598) * 0x12 | 1) * 4 +
                                           0x11c378))) {
                  iVar7 = iVar7 + iVar12 + 0x20;
                  goto LAB_0040f7b4;
                }
LAB_00411994:
                *piVar28 = 0x23c;
              }
            }
            else if (*(int *)(self + lVar29 * 0x288 + 0x8dad8) == 0) {
              iVar7 = *piVar19;
              iVar12 = *(int *)(self + 0x32ba20);
              iVar9 = *(int *)(self + 0x32ba14);
              iVar13 = 0;
              if (iVar9 != 0) {
                iVar13 = (iVar7 + iVar12 + 0x10) / iVar9;
              }
              iVar14 = 0;
              if (iVar9 != 0) {
                iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar29 * 0x288 + 0x8dacc)) /
                         iVar9;
              }
              lVar22 = (gh_long)iVar14;
              if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 +
                                                              (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar13 = 0;
                if (iVar9 != 0) {
                  iVar13 = (iVar7 + iVar12 + -0x10) / iVar9;
                }
                if ((0 < *(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
                   (0x32 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 +
                                                                       (gh_long)iVar13 * 0x2d0 +
                                                                       0x140598) * 0x12 | 1) * 4 +
                                           0x11c378))) goto LAB_0040f564;
              }
              iVar13 = 0;
              if (iVar9 != 0) {
                iVar13 = (iVar7 + iVar12 + 0x20) / iVar9;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) goto LAB_0040f814;
              iVar13 = 0;
              if (iVar9 != 0) {
                iVar13 = (iVar7 + iVar12 + -0x10) / iVar9;
              }
              if ((*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                              0x140598) * 0x12 | 1) * 4 + 0x11c378)
                  < 0x32)) goto LAB_00411994;
              iVar7 = iVar7 + iVar12 + -0x20;
LAB_0040f7b4:
              iVar12 = 0;
              if (iVar9 != 0) {
                iVar12 = iVar7 / iVar9;
              }
              if ((0 < *(int *)(self + lVar22 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
                 (iVar7 = 1,
                 0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar22 * 4 +
                                                                    (gh_long)iVar12 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378))) goto LAB_00411df4;
              *piVar28 = 0x23d;
            }
          }
          else {
            if (0x242 < iVar9) goto LAB_0040838c;
            iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8db14);
            if (0x16 < iVar7) {
              if (iVar7 == 0x17) {
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0xae), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG(iVar27));
                iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8db14);
              }
              if (iVar7 == 0x18) {
                iVar7 = 0xb8;
              }
              else {
                iVar7 = 0xc0;
              }
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar7), GH_ARG(*(int *)(self + lVar29 * 0x288 + 0x8dad8)), GH_ARG(iVar27));
              break;
            }
          }
        }
LAB_00411df0:
        iVar7 = 1;
        goto LAB_00411df4;
      }
LAB_00406fd0:
      if (iVar7 < 0x33) {
        *piVar25 = iVar7 + 1;
        if ((iVar7 + 1 == 3) && (*(int *)(self + 0x32c134) <= param_2)) {
          lVar22 = 0x3c;
          if (*(int *)(self + 0x32c8e8) < 0x3e) {
            lVar22 = (gh_long)*(int *)(self + 0x32c8e8);
          }
          *(int *)(self + 0x32c910) = *(int *)(self + 0x32c910) + 1;
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)((gh_long)(self + 0x8d35c) + lVar22 * 4) *
                             *(int *)(self + 0x8d35c)));
          bzStateGame__PEXP_0043b314(GH_ARG(self), GH_ARG(*(int *)((gh_long)(self + 0x8d454) + lVar22 * 4) *
                             *(int *)(self + 0x8d454)));
        }
      }
      else {
        fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db20);
        *(float *)(self + lVar29 * 0x288 + 0x8db20) = fVar31 + -0.1;
        if (fVar31 + -0.1 < 0.1) {
          *(undefined4 *)(self + lVar29 * 0x288 + 0x8daec) = 0;
          if (*(int *)(self + 0x32c858) == param_2) {
            *(int *)(self + 0x32c858) = 0;
          }
          if (*(int *)(self + 0x32c134) <= param_2) {
            iVar27 = 0;
            bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x13), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          }
        }
      }
    }
    iVar7 = *(int *)(self + lVar29 * 0x288 + 0x8daf0);
    if (iVar7 != 0) {
      if ((iVar7 == 0x24a) || (iVar7 == 0x60)) {
        uVar26 = *puVar30;
        iVar27 = 0xc3;
      }
      else {
        uVar26 = *puVar30;
        iVar27 = 0x73;
      }
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(2), GH_ARG(iVar27), GH_ARG(0));
    }
    if ((((param_2 != 0) || (*piVar25 < 0x15)) || (*(int *)(self + 0x1ae8) == 0x14)) ||
       (*(int *)(self + 0x1ae8) == 0x18)) break;
    piVar25 = (int *)(self + 0x32c15c);
    iVar7 = *piVar25;
    if (0 < iVar7) {
      if (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c)) {
        iVar27 = 0;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar7 = *piVar25;
      }
      *piVar25 = iVar7 + -10;
      *(undefined4 *)(self + 0x8daec) = *(undefined4 *)(self + 0x32c170);
      *(undefined4 *)(self + 0x8dd3c) = 0;
      *(undefined4 *)(self + 0x8dd4c) = 0;
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
      }
      if (*(int *)(self + 0x8db14) < 0x14) {
        iVar7 = *(int *)(self + 0x8dad8);
        iVar9 = 0x15;
      }
      else {
        iVar9 = 0xa8;
        *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + -100;
        iVar7 = *(int *)(self + 0x8dad8);
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar9), GH_ARG(iVar7), GH_ARG(iVar27));
      break;
    }
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1c), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
        (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
       ((-0x1e < *(int *)(self + 0x8dacc) &&
        (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1680)), GH_ARG(false));
    }
    *(undefined4 *)(self + 0x32c8bc) = 0;
    *(undefined4 *)(self + 0x1ae8) = 0x14;
    *(undefined4 *)(self + 0xc28) = 1;
    if (*(int *)(self + 0x32c9ac) < 1) {
      if (*(int *)(self + 0x32c854) == 100) {
        iVar27 = *(int *)(self + 0x32c46c) % 100;
        iVar7 = (int)((ulong)((gh_long)iVar27 * 0x66666667) >> 0x20);
        iVar27 = iVar27 / 10 + (iVar27 >> 0x1f);
LAB_00412568:
        iVar27 = iVar27 - (iVar7 >> 0x1f);
        goto joined_r0x00412570;
      }
      if (*(int *)(self + 0x32c854) == 0) {
        iVar27 = *(int *)(self + 0x32c46c);
        iVar7 = (int)((ulong)((gh_long)iVar27 * 0x51eb851f) >> 0x20);
        iVar27 = iVar27 / 100 + (iVar27 >> 0x1f);
        goto LAB_00412568;
      }
    }
    else {
      iVar27 = *(int *)(self + 0x32c46c) % 10;
joined_r0x00412570:
      if ((0 < iVar27) && (*(int *)(self + 0x32c8d8) == 0)) {
        *(undefined4 *)(self + 0x32c970) = 0x30;
      }
    }
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    if (*(int *)(self + 0xbd0) == 1) {
      *(undefined4 *)(self + 0xbd0) = 0;
      *(undefined4 *)(self + 0xc04) = 0;
    }
    break;
  case 0x94:
    uVar26 = 0xdaf0;
LAB_00406208:
    *(undefined4 *)(self + (ulong)(uVar26 | 0x80000) + lVar29 * 0x288) = 0;
    break;
  case 0x96:
    piVar25 = (int *)(self + 0x32ba4c);
    if (*piVar25 == 2) {
      *(int *)(self + 0x32ba6c) = *(int *)(self + 0x32ba6c) + 0x14;
      *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar29 * 0x288 + 0x8dacc) + 0x280;
      iVar27 = 0x12;
      piVar19 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
      *piVar25 = 0;
      *piVar19 = 0x12;
      iVar7 = *(int *)(self + 0x32c134);
      if (1 < iVar7) {
        piVar25 = (int *)(self + 0x8dd74);
        lVar29 = 1;
        do {
          if ((1 < *piVar25) && (0x94 < piVar25[-3])) {
            piVar25[-8] = *(int *)(self + 0x8dacc);
          }
          lVar29 = lVar29 + 1;
          piVar25 = piVar25 + 0xa2;
        } while (lVar29 < iVar7);
LAB_004064a4:
        iVar27 = 0x12;
      }
    }
    else if (*piVar25 == 1) {
      *(int *)(self + 0x32ba6c) = *(int *)(self + 0x32ba6c) + -0x14;
      *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar29 * 0x288 + 0x8dacc) + -0x280
      ;
      iVar27 = 0x12;
      piVar19 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
      *piVar25 = 0;
      *piVar19 = 0x12;
      iVar7 = *(int *)(self + 0x32c134);
      if (1 < iVar7) {
        piVar25 = (int *)(self + 0x8dd74);
        lVar29 = 1;
        do {
          if ((1 < *piVar25) && (0x94 < piVar25[-3])) {
            piVar25[-8] = *(int *)(self + 0x8dacc);
          }
          lVar29 = lVar29 + 1;
          piVar25 = piVar25 + 0xa2;
        } while (lVar29 < iVar7);
        goto LAB_004064a4;
      }
    }
    else {
      piVar19 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
      iVar27 = *piVar19;
      if (iVar27 < 1) break;
    }
    *piVar19 = iVar27 + -1;
    bzStateGame__Scroll_0041a3f0(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba2c)), GH_ARG(0), GH_ARG(0x20));
  }
  goto switchD_00403d34_caseD_4;
code_r0x004098dc:
  lVar24 = lVar24 + 1;
  puVar20 = puVar20 + 10;
  if (iVar12 <= lVar24) goto LAB_00409930;
  goto LAB_004098d0;
code_r0x0040b224:
  lVar22 = lVar22 + 1;
  puVar21 = puVar21 + 0x14;
  if (*piVar3 <= lVar22) goto LAB_0040e720;
  goto LAB_0040b218;
code_r0x00409498:
  lVar22 = lVar22 + 1;
  puVar20 = puVar20 + 10;
  if (*(int *)(self + 0x32b828) <= lVar22) goto switchD_00403e54_caseD_f;
  goto LAB_0040948c;
code_r0x00408b44:
  lVar22 = lVar22 + 1;
  puVar20 = puVar20 + 10;
  if (*(int *)(self + 0x32b828) <= lVar22) goto switchD_00403e54_caseD_f;
  goto LAB_00408b38;
code_r0x004052e8:
  lVar22 = lVar22 + 1;
  puVar21 = puVar21 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar22) goto switchD_00403e54_caseD_f;
  goto LAB_004052dc;
LAB_00410fbc:
  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
  puVar21[-10] = iVar27;
  puVar21[-9] = uVar8;
  *(undefined8 *)(puVar21 + -4) = 0x160;
  *(undefined8 *)(puVar21 + -6) = 0x64000000fb;
  puVar21[-8] = 0;
  *(undefined8 *)(puVar21 + 5) = 0;
  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
  puVar21[7] = 0xff;
  *puVar21 = 0x3f800000;
  *(undefined8 *)(puVar21 + 3) = 0x166;
  *(undefined8 *)(puVar21 + 1) = 0;
  goto LAB_004068a8;
LAB_0040f69c:
  *(undefined8 *)(puVar21 + 8) = 0xff000000ff;
  puVar21[-10] = iVar7;
  puVar21[-9] = uVar8;
  puVar21[-8] = iVar27;
  *(undefined8 *)(puVar21 + -4) = 0x160;
  *(undefined8 *)(puVar21 + -6) = 0x64000000fb;
  *(undefined8 *)(puVar21 + 5) = 0;
  *(undefined8 *)(puVar21 + -2) = 0x3f80000000000000;
  puVar21[7] = 0xff;
  *puVar21 = 0x3f800000;
  *(undefined8 *)(puVar21 + 3) = 0x166;
  *(undefined8 *)(puVar21 + 1) = 0;
LAB_004068a8:
  if (*(int *)(self + 0x32c160) == 0) {
    lVar22 = 0x14d0;
LAB_004068c8:
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar22)), GH_ARG(false));
  }
switchD_00403e54_caseD_f:
  uVar26 = *puVar30;
switchD_00403d34_caseD_34:
  if (uVar26 - 0x34 < 6) {
    if (uVar26 == 0x35) {
      if (*(int *)(self + lVar29 * 0x288 + 0x8dd08) == 4) {
        lVar22 = (gh_long)*(int *)(self + 0x32c138);
        iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        *(int *)(self + lVar29 * 0x288 + 0x8dacc) = *(int *)(self + lVar22 * 0x288 + 0x8dacc) + 0x3c
        ;
        if (iVar27 == 0) {
          uVar26 = (*(int *)(self + lVar22 * 0x288 + 0x8dac8) + -0x50) - *piVar19;
        }
        else {
          uVar26 = (*piVar19 + -0x50) - *(int *)(self + lVar22 * 0x288 + 0x8dac8);
        }
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        iVar7 = 0x35;
LAB_0041362c:
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar7), GH_ARG(0), GH_ARG(uVar26), GH_ARG(iVar27));
      }
    }
    else if (uVar26 == 0x37) {
      if (*(int *)(self + lVar29 * 0x288 + 0x8dd08) == 2) {
        iVar27 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        if (iVar27 == 0) {
          uVar26 = (*(int *)(self + (gh_long)*(int *)(self + 0x32c138) * 0x288 + 0x8dac8) + -0x50) -
                   *piVar19;
        }
        else {
          uVar26 = (*piVar19 + -0x50) -
                   *(int *)(self + (gh_long)*(int *)(self + 0x32c138) * 0x288 + 0x8dac8);
        }
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        iVar7 = 0x37;
        goto LAB_0041362c;
      }
    }
    else if ((uVar26 == 0x39) && (*(int *)(self + lVar29 * 0x288 + 0x8dd08) == 1)) {
      *(undefined8 *)piVar19 =
           *(undefined8 *)(self + (gh_long)*(int *)(self + 0x32c138) * 0x288 + 0x8dac8);
    }
  }
switchD_00403d34_caseD_27:
  piVar25 = (int *)(self + lVar29 * 0x288 + 0x8dd08);
  lVar22 = (gh_long)*piVar25;
  iVar27 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8db28);
  if (iVar27 < 0) {
    if (iVar27 == -1) {
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
joined_r0x004136ec:
      if (param_2 == 0) {
        *(undefined4 *)(self + 0x32b8d0) = 0;
      }
      if ((param_2 < *(int *)(self + 0x32c134)) &&
         (*(int *)(self + lVar29 * 0x288 + 0x8db14) - 1U < 0x12)) {
        *(undefined4 *)(self + lVar29 * 0x288 + 0x8dd24) = 0;
      }
    }
    else {
      if (iVar27 != -99) {
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(6), GH_ARG(param_2), GH_ARG(-iVar27));
        goto joined_r0x004136ec;
      }
      *piVar25 = 0;
    }
  }
  else {
    *(int *)(self + lVar29 * 0x288 + 0x8daf0) = iVar27;
    fVar31 = *(float *)(self + lVar29 * 0x288 + 0x8db24);
    iVar27 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dba0);
    if (fVar31 != 1.0) {
      fVar33 = (float)iVar27;
      if (fVar31 <= 1.0) {
        fVar31 = fVar33 - (1.0 - fVar31) * fVar33;
      }
      else {
        fVar31 = fVar31 * fVar33;
      }
      iVar27 = (int)fVar31;
    }
    iVar7 = *(int *)(self + lVar22 * 4 + lVar29 * 0x288 + 0x8dc18);
    if (iVar27 < 0) {
      uVar26 = *puVar30;
      iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      iVar12 = -iVar27;
      iVar13 = 1;
LAB_00413800:
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(uVar26), GH_ARG(iVar13), GH_ARG(iVar12), GH_ARG(iVar9));
    }
    else if (iVar27 != 0) {
      uVar26 = *puVar30;
      iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      iVar13 = 0;
      iVar12 = iVar27;
      goto LAB_00413800;
    }
    if (iVar7 != 0) {
      if (iVar7 < 1) {
        iVar7 = -iVar7;
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
        iVar12 = 4;
      }
      else {
        iVar12 = 3;
        iVar9 = *(int *)(self + lVar29 * 0x288 + 0x8dad8);
      }
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(iVar12), GH_ARG(iVar7), GH_ARG(iVar9));
    }
    if ((int)*puVar30 < 0x29) {
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(2), GH_ARG(0x17), GH_ARG(iVar27));
    }
    if ((*(int *)(self + lVar29 * 0x288 + 0x8dae8) <= *(int *)(self + lVar29 * 0x288 + 0x8dacc)) ||
       (*(int *)(self + (gh_long)*piVar25 * 4 + lVar29 * 0x288 + 0x8dc90) == 999)) {
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_2), GH_ARG(*puVar30), GH_ARG(2), GH_ARG(0x17), GH_ARG(iVar27));
    }
    if (*puVar30 != 0x41) {
      *piVar25 = *piVar25 + 1;
    }
  }
joined_r0x004136d0:
  if (param_2 == 0) {
LAB_00413910:
    if ((*piVar19 + 0x1e < *(int *)(self + 0x1160)) || (*(int *)(self + 0x1160) < *piVar19 + -0x1e))
    {
      *(undefined4 *)(self + 0x32ba30) = 0x10;
    }
  }
switchD_00403d34_caseD_4:
  if (*(gh_long *)(lVar6 + 0x28) != local_a8) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
