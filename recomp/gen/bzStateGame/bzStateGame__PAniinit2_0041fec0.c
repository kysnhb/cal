/* bzStateGame::PAniinit2_0041fec0 @ 0x0041fec0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyX
#define joyX (*(undefined4 *)IMG(0x00d23c5c))
#undef joyY
#define joyY (*(undefined4 *)IMG(0x00d23c60))
gh_long bzStateGame__PAniinit2_0041fec0(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  gh_long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  mersenne_twister_engine *pmVar16;
  int in_w4 = 0;
  int iVar17;
  undefined4 *puVar18;
  gh_long lVar19;
  gh_long lVar20;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar6 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar6 + 0x28);
  uVar5 = *(uint *)(self + (gh_long)param_3 * 0x288 + 0x8db14);
  lVar20 = (gh_long)param_3;
  if ((uVar5 < 0x13) && ((1 << (ulong)(uVar5 & 0x1f) & 0x42001U) != 0)) {
    switch(param_2) {
    case 0:
switchD_0041ff58_caseD_0:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dadc);
      param_4 = 2;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    case 2:
      goto switchD_0041ff58_caseD_2;
    case 3:
      goto switchD_0041ff58_caseD_3;
    case 4:
      if (param_3 < *(int *)(self + 0x32c134)) {
        if (uVar5 == 0) {
          iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
          if (*(int *)(self + lVar20 * 0x288 + 0x8dd3c) == 0x5dd) {
            param_4 = 0;
          }
          else {
            param_4 = 10;
          }
        }
        else {
          iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
          param_4 = 0x9a;
        }
      }
      else {
        iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
        param_4 = 7;
      }
      break;
    case 6:
switchD_0041ff58_caseD_6:
      if (param_3 == 0) {
        iVar17 = *(int *)(self + 0x8dad8);
        param_3 = 0;
      }
      else {
switchD_004200a8_caseD_6:
        iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
        param_4 = param_4 + -2;
      }
    }
    goto LAB_00420620;
  }
  if ((int)uVar5 < 0xd) {
    switch(param_2) {
    case 0:
      if (param_3 == 0) {
        if (*(int *)(self + 0x8dadc) == 1) {
          iVar17 = 0x50;
        }
        else {
          if (*(int *)(self + 0x8dadc) != 0) goto switchD_0041ff58_caseD_1;
          iVar17 = 0x118;
        }
        bzStateGame__MoveProKey_0043a9a4(GH_ARG(self), GH_ARG(0), GH_ARG(iVar17), GH_ARG(0x226));
      }
      else {
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd48) = 0;
      }
      goto switchD_0041ff58_caseD_1;
    case 1:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd08) == 0) {
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x57;
        goto switchD_0041ff58_caseD_1;
      }
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd08) < 3) {
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x58;
        goto switchD_0041ff58_caseD_1;
      }
      if (*(int *)(self + lVar20 * 0x288 + 0x8dae4) < -4) {
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x54;
        goto switchD_0041ff58_caseD_1;
      }
      iVar17 = 0x55;
      if (4 < *(int *)(self + lVar20 * 0x288 + 0x8dae4)) {
        iVar17 = 0x59;
      }
      goto LAB_004201cc;
    case 2:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0x24;
      break;
    case 3:
      iVar17 = 0x59;
LAB_004201c0:
      if (param_4 != 0x17) {
        iVar17 = param_4;
      }
LAB_004201cc:
      *(int *)(self + lVar20 * 0x288 + 0x8daf0) = iVar17;
      goto switchD_0041ff58_caseD_1;
    case 4:
      if ((param_3 < *(int *)(self + 0x32c134)) &&
         (*(undefined4 *)(self + lVar20 * 0x288 + 0x8dae0) = 0,
         0 < *(int *)(self + lVar20 * 0x288 + 0x8dd24))) {
        bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(param_3), GH_ARG(*(float *)(self + 0x1b08)), GH_ARG(*(float *)(self + 0x1b0c)), GH_ARG(joyX), GH_ARG(joyY));
      }
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 3;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    case 6:
      goto switchD_0041ff58_caseD_6;
    }
    goto LAB_00420620;
  }
  piVar1 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8dac8);
  if ((int)uVar5 < 0x12) {
    switch(param_2) {
    case 0:
      goto switchD_0041ff58_caseD_0;
    default:
      goto switchD_0041ff58_caseD_1;
    case 2:
switchD_0041ff58_caseD_2:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0x25;
      break;
    case 3:
switchD_0041ff58_caseD_3:
      *(int *)(self + lVar20 * 0x288 + 0x8daf0) = param_4;
      goto switchD_0041ff58_caseD_1;
    case 4:
      if (param_3 == 0) {
        iVar17 = *(int *)(self + 0x8dad8);
        param_4 = 0x90;
LAB_004205cc:
        param_3 = 0;
      }
      else {
        if (param_3 < *(int *)(self + 0x32c134)) {
          piVar2 = (int *)(self + 0x32c8ac);
          if ((*piVar2 < 5) &&
             (lVar19 = (gh_long)*(int *)(self + 0x32c8b0),
             1 < *(int *)(self + lVar19 * 0x288 + 0x8daec))) {
            iVar17 = *piVar1;
            iVar13 = *(int *)(self + lVar19 * 0x288 + 0x8dac8);
            if ((iVar17 + -0xf0 < iVar13) && (iVar13 < iVar17 + 0xf0)) {
              if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
                   *(int *)(self + lVar19 * 0x288 + 0x8dacc)) &&
                 (*(int *)(self + lVar19 * 0x288 + 0x8dacc) <
                  *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
                iVar7 = *(int *)(self + (gh_long)*piVar2 * 4 + 0x12dc8);
                if (iVar7 < 0) {
                  *piVar2 = 0;
                  iVar7 = *(int *)(self + 0x12dc8);
                }
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(iVar7), GH_ARG((uint)(iVar13 <= iVar17)), GH_ARG(in_w4));
                *piVar2 = *piVar2 + 1;
                goto switchD_0041ff58_caseD_1;
              }
            }
          }
        }
        else {
          *(uint *)((gh_long)(self + 0x8dac8) + (lVar20 * 0xa2 + 4) * 4) =
               (uint)(*(int *)(self + 0x8dac8) <= *piVar1);
        }
        iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
        param_4 = 0x8b;
      }
      break;
    case 6:
      goto switchD_0041ff58_caseD_6;
    }
    goto LAB_00420620;
  }
  switch(uVar5) {
  case 0x13:
    switch(param_2) {
    case 0:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dadc);
      if (param_3 == 0) {
        param_4 = 2;
        goto LAB_004205cc;
      }
      param_4 = 0x73;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    case 2:
      goto switchD_0041ff58_caseD_2;
    case 3:
      goto switchD_0041ff58_caseD_3;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0x71;
      break;
    case 6:
      goto switchD_004200a8_caseD_6;
    }
    break;
  case 0x14:
    switch(param_2) {
    case 2:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 100;
      break;
    case 3:
      iVar17 = 0x112;
      goto LAB_004201c0;
    case 4:
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
LAB_00420700:
        param_4 = 0x5d;
      }
      else {
        local_b0 = 0x1d00000000;
        pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
        if (iVar13 < 10) {
          iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
          param_4 = 0x5b;
        }
        else {
          iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
          if (0x13 < iVar13) goto LAB_00420700;
          param_4 = 0x5c;
        }
      }
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    case 6:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = param_4 + 0x2d;
    }
    break;
  case 0x15:
    switch(param_2) {
    case 2:
    case 6:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(0x7e), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dad8)), GH_ARG(in_w4));
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd3c) = 0x23a;
      break;
    case 3:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x1d5;
      break;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd3c) == 0x23a) {
        param_4 = 0x7e;
      }
      else {
        param_4 = 0x85;
      }
      goto LAB_00420620;
    }
    goto switchD_0041ff58_caseD_1;
  case 0x16:
    if (param_2 == 4) {
      if (*(int *)(self + 0x32c864) == 1) {
        iVar17 = 0x68;
      }
      else {
        iVar17 = 0x66;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(iVar17), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dad8)), GH_ARG(in_w4));
      *(undefined4 *)(self + 0x32c8a0) = 0;
    }
    goto switchD_0041ff58_caseD_1;
  case 0x17:
    switch(param_2) {
    case 0:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dadc);
      param_4 = 0xa9;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    case 2:
    case 6:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xb1;
      break;
    case 3:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x27b;
      goto switchD_0041ff58_caseD_1;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xa8;
    }
    break;
  case 0x18:
    switch(param_2) {
    case 2:
    case 6:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xb9;
      break;
    case 3:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x292;
      goto switchD_0041ff58_caseD_1;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xb2;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    }
    break;
  case 0x19:
    switch(param_2) {
    case 2:
    case 6:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xbf;
      break;
    case 3:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x2a9;
      goto switchD_0041ff58_caseD_1;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xba;
      break;
    default:
      goto switchD_0041ff58_caseD_1;
    }
    break;
  case 0x1a:
    switch(param_2) {
    case 2:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x271;
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd08) = 0;
      break;
    case 3:
    case 6:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daf0) = 0x271;
      break;
    case 4:
      iVar17 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      param_4 = 0xc4;
      goto LAB_00420620;
    case 8:
      if (*(int *)(self + lVar20 * 0x288 + 0x8daec) < 2) {
        param_4 = 0xc6;
      }
      else if (*(int *)(self + lVar20 * 0x288 + 0x8daec) < 0x6a4) {
        param_4 = 0xc5;
      }
      else {
        param_4 = 0xc4;
      }
      iVar17 = 0;
      goto LAB_00420620;
    case 9:
      if (*(int *)(self + lVar20 * 0x288 + 0x8daec) < 2) {
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(0xc6), GH_ARG(0), GH_ARG(in_w4));
        iVar13 = *(int *)(self + 0x1ae8);
        piVar3 = (int *)(self + 0x32b828);
        iVar17 = 0;
        piVar2 = (int *)(self + 0xba8);
        piVar4 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
        do {
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar7 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar7 = iVar7 + 8;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar8 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar9 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          iVar14 = *piVar1;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar10 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar10 = iVar10 + -0x10;
          }
          iVar15 = *piVar4;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar11 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar11 = iVar11 + -10;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar12 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar12 = iVar12 + 4;
          }
          if (((0x3d < iVar13 - 0xdU) ||
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar2 != 1 && (0 < *piVar3)))) {
            lVar20 = 0;
            puVar18 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar18[-5] < 1) {
                puVar18[2] = 0;
                puVar18[3] = iVar12;
                puVar18[-10] = iVar10 + iVar14;
                puVar18[-9] = (iVar15 + -0x8c) - iVar11;
                *(undefined8 *)(puVar18 + -6) = 0x6400000085;
                puVar18[-8] = iVar9;
                puVar18[-4] = iVar8 + 0x293;
                puVar18[-3] = 1;
                *(undefined8 *)(puVar18 + -2) = 0x3f80000000000000;
                *puVar18 = 0x3f800000;
                puVar18[1] = 0;
                puVar18[4] = 0;
                puVar18[5] = -iVar7;
                *(undefined8 *)(puVar18 + 6) = 0xff00000000;
                *(undefined8 *)(puVar18 + 8) = 0xff000000ff;
                break;
              }
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 0x14;
            } while (lVar20 < *piVar3);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != 0x3c);
        iVar17 = 0;
        do {
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar7 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar7 = iVar7 + 4;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar8 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar9 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          iVar14 = *piVar1;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar10 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar10 = iVar10 + -0x10;
          }
          iVar15 = *piVar4;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar11 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar11 = iVar11 + -10;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar12 = 4;
          }
          else {
            local_b0 = 0x300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar12 = iVar12 + 4;
          }
          if ((((0x3d < iVar13 - 0xdU) ||
               ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar2 != 1)) && (0 < *piVar3)) {
            lVar20 = 0;
            puVar18 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar18[-5] < 1) {
                puVar18[2] = 0;
                puVar18[3] = iVar12;
                puVar18[-10] = iVar10 + iVar14;
                puVar18[-9] = (iVar15 + -0x78) - iVar11;
                *(undefined8 *)(puVar18 + -6) = 0x6400000085;
                *(undefined8 *)(puVar18 + 6) = 0xff00000000;
                puVar18[-8] = iVar9;
                puVar18[-4] = iVar8 + 0x29b;
                puVar18[-3] = 1;
                *(undefined8 *)(puVar18 + -2) = 0x3f80000000000000;
                *puVar18 = 0x3f800000;
                puVar18[1] = 0;
                puVar18[4] = 0;
                puVar18[5] = -iVar7;
                *(undefined8 *)(puVar18 + 8) = 0xff000000ff;
                break;
              }
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 0x14;
            } while (lVar20 < *piVar3);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != 0x1e);
        iVar17 = 0;
        do {
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar7 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar7 = iVar7 + 4;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar8 = 3;
          }
          else {
            local_b0 = 0x200000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar9 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
          }
          iVar14 = *piVar1;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar10 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar10 = iVar10 + -8;
          }
          iVar15 = *piVar4;
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar11 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar11 = iVar11 + -10;
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar2 == 1)) {
            iVar12 = 4;
          }
          else {
            local_b0 = 0x300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar12 = iVar12 + 2;
          }
          if (((0x3d < iVar13 - 0xdU) ||
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar2 != 1 && (0 < *piVar3)))) {
            lVar20 = 0;
            puVar18 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar18[-5] < 1) {
                puVar18[2] = 0;
                puVar18[3] = iVar12;
                puVar18[-10] = iVar10 + iVar14;
                puVar18[-9] = iVar15 + iVar11 + -0x6e;
                *(undefined8 *)(puVar18 + -6) = 0x6400000085;
                puVar18[-8] = iVar9;
                puVar18[-4] = iVar8 + 0x2a0;
                puVar18[-3] = 1;
                *(undefined8 *)(puVar18 + -2) = 0x3f80000000000000;
                *puVar18 = 0x3f800000;
                puVar18[1] = 0;
                puVar18[4] = 0;
                puVar18[5] = -iVar7;
                *(undefined8 *)(puVar18 + 6) = 0xff00000000;
                *(undefined8 *)(puVar18 + 8) = 0xff000000ff;
                break;
              }
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 0x14;
            } while (lVar20 < *piVar3);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != 0x14);
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1c), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x32c8bc) = 0;
        *(undefined4 *)(self + 0x32c970) = 0;
        *(undefined4 *)(self + 0x1ae8) = 0x14;
        *(undefined4 *)(self + 0xc28) = 1;
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        if (*(int *)(self + 0xbd0) == 1) {
          *(undefined4 *)(self + 0xbd0) = 0;
          *(undefined4 *)(self + 0xc04) = 0;
        }
      }
      else {
        iVar17 = *(int *)(self + 0x1ae8);
        if (*(int *)(self + lVar20 * 0x288 + 0x8daec) < 0x6a4) {
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar13 = -0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar13 = -6 - iVar13;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 0x2a3;
          }
          else {
            local_b0 = 0x700000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar7 = iVar7 + 0x29b;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar8 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
          }
          iVar10 = *piVar1;
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar14 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar14 = iVar14 + -0x10;
          }
          iVar15 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar9 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar9 = 10 - iVar9;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar11 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar11 = iVar11 + 8;
          }
          if (((0x3d < iVar17 - 0xdU) ||
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar20 = 0;
            iVar14 = iVar14 + iVar10;
            iVar9 = iVar15 + -0x78 + iVar9;
            puVar18 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar18[-5] < 1) goto LAB_00421990;
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 0x14;
            } while (lVar20 < *(int *)(self + 0x32b828));
          }
        }
        else {
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar13 = -0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar13 = -4 - iVar13;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 0x2a3;
          }
          else {
            local_b0 = 0x200000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar7 = iVar7 + 0x2a0;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar8 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
          }
          iVar9 = *piVar1;
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar14 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar14 = iVar14 + -8;
          }
          iVar10 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar15 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar15 = iVar15 + -10;
          }
          if (((iVar17 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar11 = 4;
          }
          else {
            local_b0 = 0x300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar16), GH_ARG((param_type *)&local_b0));
            iVar17 = *(int *)(self + 0x1ae8);
            iVar11 = iVar11 + 2;
          }
          if ((((0x3d < iVar17 - 0xdU) ||
               ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar20 = 0;
            iVar14 = iVar14 + iVar9;
            iVar9 = iVar10 + iVar15 + -0x78;
            puVar18 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar18[-5] < 1) goto LAB_00421990;
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 0x14;
            } while (lVar20 < *(int *)(self + 0x32b828));
          }
        }
      }
    }
  default:
    goto switchD_0041ff58_caseD_1;
  }
LAB_00420620:
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar17), GH_ARG(in_w4));
switchD_0041ff58_caseD_1:
  if (*(gh_long *)(lVar6 + 0x28) == local_a8) {
    return 0;
  }
                    
  __stack_chk_fail();
LAB_00421990:
  puVar18[-10] = iVar14;
  puVar18[-9] = iVar9;
  puVar18[2] = 0;
  puVar18[3] = iVar11;
  *(undefined8 *)(puVar18 + -6) = 0x6400000085;
  *(undefined8 *)(puVar18 + -2) = 0x3f80000000000000;
  puVar18[-8] = iVar8;
  puVar18[4] = 0;
  puVar18[5] = iVar13;
  puVar18[-4] = iVar7;
  puVar18[-3] = 1;
  *puVar18 = 0x3f800000;
  puVar18[1] = 0;
  *(undefined8 *)(puVar18 + 6) = 0xff00000000;
  *(undefined8 *)(puVar18 + 8) = 0xff000000ff;
  goto switchD_0041ff58_caseD_1;
  return 0;
}
