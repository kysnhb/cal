/* bzStateGame::COMAI_004219dc @ 0x004219dc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef switchdataD_00a4bbf8
#define switchdataD_00a4bbf8 (*(uint *)IMG(0x00a4bbf8))
gh_long bzStateGame__COMAI_004219dc(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int iVar1;
  gh_long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  mersenne_twister_engine *pmVar7;
  uint uVar8;
  int in_w4 = 0;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  gh_long lVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  gh_long lVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define local_70 (*(undefined8 *)(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar2 = tpidr_el0;
  local_68 = *(gh_long *)(lVar2 + 0x28);
  piVar23 = (int *)(self + 0x8dac8);
  piVar21 = piVar23 + (gh_long)param_2 * 0xa2;
  lVar20 = (gh_long)param_2;
  piVar22 = piVar21 + 0x9e;
  if (((0 < piVar21[0x9e]) || (0x1d < *(int *)(self + lVar20 * 0x288 + 0x8dae0))) ||
     (*(int *)(self + lVar20 * 0x288 + 0x8dae0) == 3)) {
    if (*(int *)(self + lVar20 * 0x288 + 0x8daf0) != 0x159) {
      if (*(int *)(self + lVar20 * 0x288 + 0x8daf0) != 0xf5) {
        *piVar22 = piVar21[0x9e] + -1;
        uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dd3c);
        if (((((int)uVar8 < 1000) && (1 < *(int *)(self + lVar20 * 0x288 + 0x8daec))) &&
            (((uVar8 & 0xfffffffe) != 0x30 && (*(int *)(self + lVar20 * 0x288 + 0x8dae0) < 0xc))))
           && ((iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dacc), iVar6 < -800 ||
               (*(int *)(self + 0x115c) + 800 < iVar6)))) {
          iVar5 = *(int *)(self + 0x32ba14);
          iVar9 = 0;
          if (iVar5 != 0) {
            iVar9 = (*piVar21 + *(int *)(self + 0x32ba20)) / iVar5;
          }
          iVar30 = 0;
          if (iVar5 != 0) {
            iVar30 = (*(int *)(self + 0x32ba24) + iVar6) / iVar5;
          }
          if ((*(uint *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140594) == 0) &&
             (*(int *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140590) == 0)) {
            *(uint *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140594) = uVar8;
            *(int *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140590) =
                 -*(int *)(self + lVar20 * 0x288 + 0x8dd20);
            *(int *)(self + lVar20 * 0x288 + 0x8daec) = 0;
            if (*(int *)(self + 0x32c134) <= param_2) {
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x13), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            }
          }
        }
        iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dd24);
        if (0 < iVar6) {
          *(int *)(self + lVar20 * 0x288 + 0x8dd24) = iVar6 + -1;
        }
        goto switchD_00422070_caseD_421e20;
      }
      goto LAB_00421c18;
    }
    uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
    iVar6 = 0x2e;
    goto LAB_00421e1c;
  }
LAB_00421c18:
  iVar6 = *(int *)(self + 0x1ae8);
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar5 = 0xf;
  }
  else {
    local_70 = 0xe00000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 + 5;
  }
  *piVar22 = iVar5;
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar6 = 0x28;
  }
  else {
    local_70 = 0x2700000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
  }
  piVar24 = (int *)(self + lVar20 * 0x288 + 0x8dd44);
  *piVar24 = iVar6;
  puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dd3c);
  uVar8 = *puVar10;
  if (999 < (int)uVar8) {
    iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
    if (iVar5 < 0x50a) {
      iVar9 = 6;
    }
    else if (iVar5 < 0x78a) {
      iVar9 = 5;
    }
    else if (iVar5 < 0xa0a) {
      iVar9 = 4;
    }
    else if (iVar5 < 0xc8a) {
      iVar9 = 3;
    }
    else {
      iVar9 = 1;
      if (iVar5 < 0xf0a) {
        iVar9 = 2;
      }
    }
    *(int *)(self + 0x32c8d0) = iVar9;
    uVar13 = *(uint *)(self + 0x32c134);
    if (*(int *)(self + 0x32b824) <= (int)uVar13) goto LAB_00422118;
    lVar16 = 0;
    iVar30 = 3000;
    piVar25 = (int *)(self + (gh_long)(int)uVar13 * 0x288 + 0x8dac8);
    iVar5 = 0;
    do {
      iVar17 = iVar5;
      iVar12 = iVar30;
      if (((1 < piVar25[9]) && (iVar14 = *piVar25, -100 < iVar14)) &&
         (iVar14 < *(int *)(self + 0x1158) + 100)) {
        iVar1 = piVar25[1] + *(int *)(self + 0x32ba24);
        if (iVar1 < 0x50a) {
          if (iVar9 == 6) goto LAB_00422024;
        }
        else if (iVar1 < 0x78a) {
          if (iVar9 == 5) goto LAB_00422024;
        }
        else if (iVar1 < 0xa0a) {
          if (iVar9 == 4) goto LAB_00422024;
        }
        else if (iVar1 < 0xc8a) {
          if (iVar9 == 3) {
LAB_00422024:
            iVar14 = iVar14 - *piVar21;
            iVar12 = -iVar14;
            if (-1 < iVar14) {
              iVar12 = iVar14;
            }
            iVar17 = uVar13 + (int)lVar16;
            if (iVar30 <= iVar12) {
              iVar17 = iVar5;
              iVar12 = iVar30;
            }
          }
        }
        else {
          iVar19 = 1;
          if (iVar1 < 0xf0a) {
            iVar19 = 2;
          }
          if (iVar9 == iVar19) goto LAB_00422024;
        }
      }
      iVar30 = iVar12;
      lVar16 = lVar16 + 1;
      piVar25 = piVar25 + 0xa2;
      iVar5 = iVar17;
    } while ((int)uVar13 + lVar16 < (gh_long)*(int *)(self + 0x32b824));
LAB_00422054:
    iVar5 = iVar17;
    if (uVar8 < 0x246) goto LAB_0042205c;
LAB_00422124:
    switch(uVar8) {
    case 0x5dc:
      if (*(int *)(self + 0x8daf0) == 0xf5) {
LAB_00424160:
        if (*(int *)(self + lVar20 * 0x288 + 0x8daf0) == 0xf5) break;
        uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
        iVar6 = 0x2d;
        goto LAB_00421e1c;
      }
      if (((iVar5 < (int)uVar13) || (*(int *)(self + 0x32ba48) != 0)) ||
         (*(int *)(self + 0x32ba44) != 0)) {
        if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) == *(int *)(self + 0x8dd0c)) {
          iVar6 = param_2 * 8 + 0x50;
          if (*piVar23 - iVar6 <= *piVar21) {
            if (*piVar23 + iVar6 < *piVar21) {
              iVar6 = 2;
              uVar8 = 1;
              goto LAB_004270f8;
            }
            goto LAB_004285f8;
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(2), GH_ARG(0), GH_ARG(in_w4));
        }
      }
      else {
        iVar9 = *piVar21;
        iVar30 = *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
        if ((iVar9 + -0x8c < iVar30) && (iVar30 < iVar9 + 0x8c)) {
          if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_00427ca0;
          if (iVar6 < 5) goto LAB_004285f8;
          if (iVar6 < 0xc) {
            uVar8 = (uint)(iVar30 <= iVar9);
            iVar6 = 0xc;
          }
          else {
            if (iVar6 < 0x13) {
              uVar8 = (uint)(iVar30 <= iVar9);
              iVar6 = 0xf;
              goto LAB_004270f8;
            }
            if (iVar6 < 0x1a) {
              uVar8 = (uint)(iVar30 <= iVar9);
              iVar6 = 0x10;
              goto LAB_004270f8;
            }
            uVar8 = (uint)(iVar30 <= iVar9);
            uVar13 = uVar8;
            if (iVar6 < 0x21) {
              iVar6 = 0x11;
              goto LAB_004270f8;
            }
LAB_004288d8:
            uVar8 = uVar13;
            iVar6 = 2;
          }
        }
        else {
LAB_00427ca0:
          if ((iVar30 <= iVar9 + -0x10e) || (iVar9 + 0x10e <= iVar30)) {
LAB_00428270:
            if (5 < iVar6) {
              if (iVar6 < 0x14) goto LAB_00428280;
              if (0x1d < iVar6) {
                uVar13 = (uint)(iVar30 <= iVar9);
                goto LAB_004288d8;
              }
            }
LAB_004285f8:
            bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
            goto LAB_0042860c;
          }
          if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_00428270;
          if (iVar6 < 6) goto LAB_004285f8;
          if (0xf < iVar6) {
            uVar8 = (uint)(iVar30 <= iVar9);
            uVar13 = (uint)(iVar30 <= iVar9);
            if (0x1b < iVar6) goto LAB_004288d8;
            iVar6 = 0x12;
            goto LAB_004270f8;
          }
LAB_00428280:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 1;
        }
LAB_004270f8:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
      }
LAB_0042860c:
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
      if (*piVar22 < 1) break;
      puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        iVar6 = *piVar21;
LAB_00428694:
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = iVar6 + *(int *)(self + 0x32ba20) + 0x40;
      }
      else {
        if (uVar8 != 1) goto LAB_00428864;
        iVar6 = *piVar21;
LAB_004287d8:
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = iVar6 + *(int *)(self + 0x32ba20) + -0x40;
      }
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = iVar6 / iVar9;
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (iVar5 + -0x122) / iVar9;
      }
      if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00428864;
      goto LAB_00422240;
    case 0x5dd:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) != *(int *)(self + 0x8dd0c)) break;
      if (*(int *)(self + 0x8daf0) == 0xf5) goto LAB_00424160;
      if (((iVar5 < (int)uVar13) || (*(int *)(self + 0x32ba48) != 0)) ||
         (*(int *)(self + 0x32ba44) != 0)) {
        iVar6 = param_2 * 5 + 0x78;
        if (*piVar23 - iVar6 <= *piVar21) {
          if (*piVar21 <= *piVar23 + iVar6) goto LAB_00428754;
          iVar6 = 0x57;
          uVar8 = 1;
          goto LAB_0042711c;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x57), GH_ARG(0), GH_ARG(in_w4));
      }
      else {
        iVar9 = *piVar21;
        iVar30 = *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
        if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
          if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_004284a4;
          if ((*(float *)(self + lVar20 * 0x288 + 0x8db24) <= 1.0) || (7 < iVar6)) {
            if ((iVar6 < 0x14) && ((iVar9 + -0x78 < iVar30 && (iVar30 < iVar9 + 0x78)))) {
              uVar8 = (uint)(iVar30 <= iVar9);
              iVar6 = 0xc;
              goto LAB_0042711c;
            }
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
LAB_00428928:
            iVar6 = 0x57;
            goto LAB_0042711c;
          }
LAB_004284b4:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 1;
LAB_0042711c:
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
        }
        else {
LAB_004284a4:
          if (5 < iVar6) {
            if (iVar6 < 0x14) goto LAB_004284b4;
            if (0x1d < iVar6) {
              uVar8 = (uint)(iVar30 <= iVar9);
              goto LAB_00428928;
            }
          }
LAB_00428754:
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
        }
      }
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
      if (*piVar22 < 1) break;
      puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        iVar6 = *piVar21;
        if (*piVar23 < iVar6) goto LAB_00428864;
        goto LAB_00428694;
      }
      if ((uVar8 == 1) && (iVar6 = *piVar21, *piVar23 <= iVar6)) goto LAB_004287d8;
      goto LAB_00428864;
    case 0x5de:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) != *(int *)(self + 0x8dd0c)) break;
      if ((*(int *)(self + 0x32ba48) < 1) && (*(int *)(self + 0x32ba44) < 1)) {
LAB_00424230:
        bVar3 = false;
      }
      else {
        if ((*piVar21 + -200 < *piVar23) && (*piVar23 < *piVar21 + 200)) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x28 < *(int *)(self + 0x8dacc)) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x28))
          goto LAB_00424230;
        }
        bVar3 = true;
      }
      if (0 < *(int *)(self + lVar20 * 0x288 + 0x8dd48)) {
LAB_004257e4:
        uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
        if (uVar8 == 0) {
          if (*piVar21 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) {
            iVar9 = *(int *)(self + 0x32ba14);
            iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
            iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
            goto LAB_00427084;
          }
LAB_004270d4:
          *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
        }
        else {
          if ((uVar8 != 1) || (*piVar21 <= *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)))
          goto LAB_004270d4;
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_00427084:
          iVar30 = 0;
          if (iVar9 != 0) {
            iVar30 = iVar6 / iVar9;
          }
          iVar6 = 0;
          if (iVar9 != 0) {
            iVar6 = (iVar5 + -0x122) / iVar9;
          }
          if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
             (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                                 (gh_long)iVar30 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378))) goto LAB_004270d4;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x26), GH_ARG(uVar8), GH_ARG(in_w4));
        }
        *(int *)(self + lVar20 * 0x288 + 0x8dd48) = 0;
        *(undefined4 *)(self + 0x32c8ac) = 5;
        break;
      }
      if (((int)uVar13 <= iVar5) &&
         (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x96)) {
        if ((*piVar21 + -0xa0 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) &&
           (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21 + 0xa0)) goto LAB_004257e4;
      }
      if ((bVar3) || (iVar5 < (int)uVar13)) {
        *(undefined4 *)(self + 0x32c8ac) = 5;
        iVar6 = param_2 * 8 + 0x50;
        if (*piVar21 < *piVar23 - iVar6) {
LAB_0042729c:
          iVar6 = 2;
LAB_004272a0:
          uVar8 = 0;
        }
        else {
          if (*piVar21 <= *piVar23 + iVar6) goto LAB_0042799c;
LAB_00427958:
          iVar6 = 2;
          uVar8 = 1;
        }
        goto LAB_00421e1c;
      }
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar5;
      if ((iVar9 + -0xf0 < iVar30) && (iVar30 < iVar9 + 0xf0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          *(int *)(self + 0x32c8b0) = iVar5;
          piVar22 = (int *)(self + 0x32c8ac);
          iVar6 = *(int *)(self + (gh_long)*piVar22 * 4 + 0x12dc8);
          if (iVar6 < 0) {
            *piVar22 = 0;
            iVar6 = *(int *)(self + 0x12dc8);
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG((uint)(iVar30 <= iVar9)), GH_ARG(in_w4));
          *piVar22 = *piVar22 + 1;
          break;
        }
      }
      if ((iVar30 <= iVar9 + -0x168) || (iVar9 + 0x168 <= iVar30)) {
LAB_00427818:
        *(undefined4 *)(self + 0x32c8ac) = 5;
        if (iVar6 < 0x14) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
               *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
             (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
              *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) goto LAB_00427984;
        }
        goto LAB_00428150;
      }
      if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00427818;
      *(undefined4 *)(self + 0x32c8ac) = 5;
      if (iVar6 < 10) goto LAB_00427984;
      uVar8 = (uint)(iVar30 <= iVar9);
      if (iVar6 < 0x1e) {
        iVar6 = 0x8f;
        goto LAB_00421e1c;
      }
LAB_0042848c:
      iVar6 = 2;
      goto LAB_00421e1c;
    case 0x5df:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) != *(int *)(self + 0x8dd0c)) break;
      iVar30 = *(int *)(self + 0x32ba48);
      if ((iVar30 < 1) && (*(int *)(self + 0x32ba44) < 1)) {
LAB_004242d0:
        bVar3 = false;
      }
      else {
        if ((*piVar21 + -200 < *piVar23) && (*piVar23 < *piVar21 + 200)) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x28 < *(int *)(self + 0x8dacc)) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x28))
          goto LAB_004242d0;
        }
        bVar3 = true;
      }
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
      if (0 < *piVar22) goto LAB_00425894;
      if (((int)uVar13 <= iVar5) &&
         (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x96)) {
        if ((*piVar21 + -0xa0 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) &&
           (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21 + 0xa0)) goto LAB_00425894;
      }
      iVar9 = *piVar21;
      if ((bVar3) || (iVar5 < (int)uVar13)) {
LAB_00426ea8:
        iVar6 = param_2 * 8 + 0x50;
        if (iVar9 < *piVar23 - iVar6) goto LAB_0042729c;
        if (*piVar23 + iVar6 < iVar9) goto LAB_00427958;
        goto LAB_0042799c;
      }
      iVar17 = *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xa0 < iVar17) && (iVar17 < iVar9 + 0xa0)) {
        if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_004275b8;
        if (iVar6 < 5) goto LAB_00427880;
        if (iVar6 < 0xc) {
          bVar3 = SBORROW4(iVar9,iVar17);
          iVar9 = iVar9 - iVar17;
          goto LAB_004230f4;
        }
        if (0x12 < iVar6) {
          if (0x19 < iVar6) {
            if (0x20 < iVar6) break;
            bVar3 = SBORROW4(iVar9,iVar17);
            iVar9 = iVar9 - iVar17;
            goto LAB_004231c0;
          }
          bVar3 = SBORROW4(iVar9,iVar17);
          iVar9 = iVar9 - iVar17;
          goto LAB_004282c4;
        }
        bVar3 = SBORROW4(iVar9,iVar17);
        iVar9 = iVar9 - iVar17;
LAB_00427970:
        uVar8 = (uint)(iVar9 < 0 == bVar3);
        iVar6 = 0xf;
        goto LAB_00421e1c;
      }
LAB_004275b8:
      if ((iVar9 + -0x17c < iVar17) && (iVar17 < iVar9 + 0x17c)) {
        if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_00427870;
        if (0x13 < iVar6) {
          if ((iVar30 != 0) || (*(int *)(self + 0x32ba44) != 0)) break;
          uVar8 = (uint)(iVar9 < iVar17);
          goto LAB_0042848c;
        }
LAB_00427880:
        bVar3 = SBORROW4(iVar9,iVar17);
        iVar9 = iVar9 - iVar17;
        goto LAB_00427988;
      }
LAB_00427870:
      if (iVar6 < 10) goto LAB_0042799c;
      if (iVar6 < 0x14) goto LAB_00427880;
      if ((iVar30 != 0) || (*(int *)(self + 0x32ba44) != 0)) break;
      bVar3 = SBORROW4(iVar9,iVar17);
      iVar9 = iVar9 - iVar17;
      goto LAB_00428154;
    case 0x5e0:
    case 0x5e1:
    case 0x5e2:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) != *(int *)(self + 0x8dd0c)) break;
      iVar9 = *(int *)(self + 0x32ba48);
      if ((iVar9 < 1) && (*(int *)(self + 0x32ba44) < 1)) {
LAB_004221dc:
        bVar3 = false;
      }
      else {
        if ((*piVar21 + -200 < *piVar23) && (*piVar23 < *piVar21 + 200)) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x28 < *(int *)(self + 0x8dacc)) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x28))
          goto LAB_004221dc;
        }
        bVar3 = true;
      }
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
      if (0 < *piVar22) {
LAB_00424420:
        uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
        if (uVar8 == 0) {
          if (*piVar21 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) {
            iVar9 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
            iVar30 = *(int *)(self + 0x32ba14);
            iVar5 = iVar9 + *(int *)(self + 0x32ba24);
            iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
            goto LAB_00425660;
          }
        }
        else if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21)) {
          iVar9 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          iVar30 = *(int *)(self + 0x32ba14);
          iVar5 = iVar9 + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_00425660:
          iVar17 = 0;
          if (iVar30 != 0) {
            iVar17 = iVar6 / iVar30;
          }
          iVar6 = 0;
          if (iVar30 != 0) {
            iVar6 = (iVar5 + -0x122) / iVar30;
          }
          if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar17 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar17 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            *(uint *)(self + lVar20 * 0x288 + 0x8dadc) = uVar8;
            *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd08) = 0;
            *(int *)(self + lVar20 * 0x288 + 0x8dae8) = iVar9;
            *(undefined8 *)(self + lVar20 * 0x288 + 0x8dae0) = 0xffffffde0000001e;
            *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd10) = 10;
            *piVar22 = 0;
            break;
          }
        }
        if (0 < *piVar22) {
          *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
        }
        *piVar22 = 0;
        break;
      }
      if (((int)uVar13 <= iVar5) &&
         (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x96)) {
        if ((*piVar21 + -0xa0 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) &&
           (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21 + 0xa0)) goto LAB_00424420;
      }
      iVar30 = *piVar21;
      if ((((bVar3) || (iVar5 < (int)uVar13)) || (iVar30 < -0x4f)) ||
         (*(int *)(self + 0x115c) + 0x50 <= iVar30)) {
        iVar6 = param_2 * 8 + 0x50;
        if (iVar30 < *piVar23 - iVar6) {
          iVar6 = 5;
          goto LAB_004272a0;
        }
        if (*piVar23 + iVar6 < iVar30) {
          iVar6 = 5;
          uVar8 = 1;
          goto LAB_00421e1c;
        }
        goto LAB_0042799c;
      }
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd24);
      if (0 < *piVar22) break;
      piVar23 = (int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
      iVar17 = *piVar23;
      lVar16 = (gh_long)iVar5;
      if ((iVar30 + -0x78 < iVar17) && (iVar17 < iVar30 + 0x78)) {
        if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00427ae0;
        if ((0x1d < iVar6) || (*(int *)(self + lVar20 * 0x288 + 0x8db14) < 4)) {
          if ((iVar9 != 0) || (*(int *)(self + 0x32ba44) != 0)) break;
          goto LAB_00427784;
        }
        bVar3 = SBORROW4(iVar30,iVar17);
        iVar30 = iVar30 - iVar17;
        goto LAB_00425ad8;
      }
LAB_00427ae0:
      if ((iVar17 <= iVar30 + -400) || (iVar30 + 400 <= iVar17)) {
LAB_00427d1c:
        if (((iVar6 < 6) && (iVar9 == 0)) && (*(int *)(self + 0x32ba44) == 0)) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(4), GH_ARG((uint)(iVar17 <= iVar30)), GH_ARG(in_w4));
        }
        if (*(int *)(self + lVar16 * 0x288 + 0x8db14) == 0x18) {
          iVar6 = *(int *)(self + lVar16 * 0x288 + 0x8dacc);
          fVar26 = (float)*piVar21;
          fVar28 = (float)*piVar23;
          fVar27 = (float)(*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x46);
        }
        else {
          fVar26 = (float)*piVar21;
          fVar27 = (float)(*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x46);
          fVar28 = (float)*piVar23;
          if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) == 3) {
            iVar6 = *(int *)(self + lVar16 * 0x288 + 0x8dacc) + 0x46;
          }
          else {
            iVar6 = *(int *)(self + lVar16 * 0x288 + 0x8dacc) + -0x46;
          }
        }
        goto LAB_004285a8;
      }
      piVar25 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
      piVar24 = (int *)(self + lVar16 * 0x288 + 0x8dacc);
      if ((*piVar24 <= *piVar25 + -0x50) || (*piVar25 + 0x50 <= *piVar24)) goto LAB_00427d1c;
      if (((iVar6 < 5) && (iVar9 == 0)) && (*(int *)(self + 0x32ba44) == 0)) {
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(4), GH_ARG((uint)(iVar30 < iVar17)), GH_ARG(in_w4));
      }
      if (*(int *)(self + lVar16 * 0x288 + 0x8db14) != 0x18) {
        fVar26 = (float)*piVar21;
        fVar27 = (float)(*piVar25 + -0x46);
        fVar28 = (float)*piVar23;
        if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) == 3) {
          iVar5 = *piVar24 + 0x46;
        }
        else {
          iVar5 = *piVar24 + -0x46;
        }
        goto LAB_00427db0;
      }
      fVar26 = (float)*piVar21;
      fVar28 = (float)*piVar23;
      fVar27 = (float)(*piVar25 + -0x46);
      fVar29 = (float)*piVar24;
      goto LAB_00427db4;
    case 0x5e3:
      if (*(int *)(self + lVar20 * 0x288 + 0x8dd0c) != *(int *)(self + 0x8dd0c)) break;
      if ((*(int *)(self + 0x32ba48) < 1) && (*(int *)(self + 0x32ba44) < 1)) {
LAB_00424370:
        bVar3 = false;
      }
      else {
        if ((*piVar21 + -0x104 < *piVar23) && (*piVar23 < *piVar21 + 0x104)) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x28 < *(int *)(self + 0x8dacc)) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x28))
          goto LAB_00424370;
        }
        bVar3 = true;
      }
      piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
      if (*piVar22 < 1) {
        if (((int)uVar13 <= iVar5) &&
           (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x96)) {
          if ((*piVar21 + -0xa0 < *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)) &&
             (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21 + 0xa0)) goto LAB_00425958;
        }
        iVar9 = *piVar21;
        if ((bVar3) || (iVar5 < (int)uVar13)) goto LAB_00426ea8;
        iVar30 = *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8);
        if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
          if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_00427634;
          if (9 < iVar6) {
            if (0x13 < iVar6) {
              bVar3 = SBORROW4(iVar9,iVar30);
              iVar9 = iVar9 - iVar30;
              goto LAB_004239bc;
            }
            bVar4 = SBORROW4(iVar9,iVar30);
            bVar3 = iVar9 - iVar30 < 0;
            goto LAB_00427454;
          }
          bVar4 = SBORROW4(iVar9,iVar30);
          bVar3 = iVar9 - iVar30 < 0;
          goto LAB_00425560;
        }
LAB_00427634:
        if ((iVar30 <= iVar9 + -400) || (iVar9 + 400 <= iVar30)) {
LAB_00427888:
          if (0x22 < iVar6) goto LAB_0042799c;
LAB_00427890:
          uVar8 = (uint)(iVar30 <= iVar9);
          goto LAB_00428474;
        }
        if ((*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dacc))) goto LAB_00427888;
        if ((((iVar6 < 8) || (0x15 < iVar6)) || (*(int *)(self + 0x32ba48) != 0)) ||
           (*(int *)(self + 0x32ba44) != 0)) goto LAB_00427890;
        bVar4 = SBORROW4(iVar9,iVar30);
        bVar3 = iVar9 - iVar30 < 0;
LAB_00426e48:
        uVar8 = (uint)(bVar3 == bVar4);
        iVar6 = 0x72;
        goto LAB_00421e1c;
      }
LAB_00425958:
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      if (uVar8 == 1) {
        if (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) < *piVar21) {
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
          goto LAB_0042718c;
        }
        goto LAB_0042734c;
      }
      if ((uVar8 != 0) || (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) <= *piVar21))
      goto LAB_0042734c;
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
LAB_0042718c:
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = iVar6 / iVar9;
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (iVar5 + -0x122) / iVar9;
      }
      if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_0042734c;
      goto LAB_004246a4;
    case 0x5e4:
      if ((*(int *)(self + 0x32c868) == 0x1e) && (*(int *)(self + lVar20 * 0x288 + 0x8dacc) < -300))
      {
        *(int *)(self + 0x32c868) = 0;
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8daec) = 0;
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8db14) = 0;
      }
      break;
    case 0x5e5:
      iVar6 = 8;
      goto LAB_004279a0;
    }
    goto switchD_00422070_caseD_421e20;
  }
  uVar13 = *(uint *)(self + 0x32c134);
  if (0 < (int)uVar13) {
    piVar18 = (int *)(self + 0x8dac8);
    lVar16 = 0;
    piVar25 = piVar18 + lVar20 * 0xa2 + 1;
    iVar9 = 3000;
    iVar5 = -1;
    do {
      iVar30 = iVar9;
      iVar17 = iVar5;
      if (((((1 < piVar18[9]) && (iVar12 = piVar18[1], -0x28 < iVar12)) &&
           (iVar12 < *(int *)(self + 0x115c) + 0xb4)) &&
          ((iVar14 = *piVar18, -100 < iVar14 && (iVar14 < *(int *)(self + 0x1158) + 100)))) &&
         ((*piVar25 + -0x78 < iVar12 && (iVar12 < *piVar25 + 0x78)))) {
        iVar14 = iVar14 - *piVar21;
        iVar30 = -iVar14;
        if (-1 < iVar14) {
          iVar30 = iVar14;
        }
        iVar17 = (int)lVar16;
        if (iVar9 <= iVar30) {
          iVar30 = iVar9;
          iVar17 = iVar5;
        }
      }
      iVar9 = iVar30;
      lVar16 = lVar16 + 1;
      piVar18 = piVar18 + 0xa2;
      iVar5 = iVar17;
    } while (lVar16 < (int)uVar13);
    if ((iVar17 == -1) && (iVar17 = 0, 0 < (int)uVar13)) {
      uVar15 = 0;
      piVar25 = (int *)(self + 0x8dac8);
      iVar5 = 0;
      do {
        iVar30 = iVar9;
        iVar17 = iVar5;
        if ((((1 < piVar25[9]) && (-0x28 < piVar25[1])) &&
            (piVar25[1] < *(int *)(self + 0x115c) + 0xb4)) &&
           ((iVar12 = *piVar25, -100 < iVar12 && (iVar12 < *(int *)(self + 0x1158) + 100)))) {
          iVar12 = iVar12 - *piVar21;
          iVar30 = -iVar12;
          if (-1 < iVar12) {
            iVar30 = iVar12;
          }
          iVar17 = (int)uVar15;
          if (iVar9 <= iVar30) {
            iVar30 = iVar9;
            iVar17 = iVar5;
          }
        }
        iVar9 = iVar30;
        uVar15 = uVar15 + 1;
        piVar25 = piVar25 + 0xa2;
        iVar5 = iVar17;
      } while (uVar13 != uVar15);
    }
    goto LAB_00422054;
  }
LAB_00422118:
  iVar17 = 0;
  iVar5 = 0;
  if (0x245 < uVar8) goto LAB_00422124;
LAB_0042205c:
  switch((gh_long)0x00a4bbf8 +
         (gh_long)(int)((int32_t *)IMG(0x00a4bbf8))[uVar8]) {
  case 0x421e20:
    goto switchD_00422070_caseD_421e20;
  case 0x422074:
    lVar16 = (gh_long)iVar17;
    if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8db14) == 0x16) {
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((*piVar21 + -0xa0 < iVar5) && (iVar5 < *piVar21 + 0xa0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -500 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 500)) {
LAB_004220fc:
          uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
          iVar6 = 0x5a;
          break;
        }
      }
    }
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar5 + -100 < iVar9) && (iVar9 < iVar5 + 100)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0xa0 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0xa0)) {
          if (iVar6 < 6) {
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            iVar6 = 0x65;
          }
          else {
            if (iVar6 < 0x12) goto LAB_0042799c;
            if (((*(int *)(self + lVar20 * 0x288 + 0x8dd4c) != 9) && (iVar6 < 0x1e)) &&
               (*(int *)(self + lVar16 * 0x288 + 0x8db1c) < (int)uVar13)) goto LAB_00424d34;
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            iVar6 = 0x5e;
          }
          break;
        }
      }
      if ((iVar5 < -0x5a) || (*(int *)(self + 0x1158) + 0x5a < iVar5)) {
LAB_00422428:
        uVar8 = (uint)(iVar9 <= iVar5);
        iVar6 = 0x5e;
        break;
      }
      if (4 < iVar6) {
        if (iVar6 < 0xc) goto LAB_00422428;
        if (0x13 < iVar6) {
          uVar8 = (uint)(iVar9 <= iVar5);
          goto LAB_004268d4;
        }
      }
      goto LAB_0042799c;
    }
    goto LAB_00422204;
  case 0x422258:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd24);
    if (0 < *piVar22) goto switchD_00422070_caseD_421e20;
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar23) {
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (iVar6 == 0) goto LAB_00422c54;
      if (iVar6 == 1) goto LAB_004222b8;
LAB_00422368:
      iVar30 = *piVar21;
      goto LAB_00422cf0;
    }
    iVar30 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar9 <= iVar30 + -0x8c) || (iVar30 + 0x8c <= iVar9)) {
LAB_00424568:
      if ((iVar9 <= iVar30 + -400) || (iVar30 + 400 <= iVar9)) {
LAB_00424948:
        if ((iVar30 < -0x1e) || (*(int *)(self + 0x1158) + 200 < iVar30)) goto LAB_00426e98;
        if (5 < iVar6) {
          if (iVar6 < 0xc) goto LAB_00427230;
          if (0x11 < iVar6) {
            if (0x1b < iVar6) goto LAB_0042822c;
            goto LAB_00426e98;
          }
        }
        goto LAB_004268e4;
      }
      iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc);
      if ((iVar5 <= iVar12 + -0x50) || (iVar12 + 0x50 <= iVar5)) goto LAB_00424948;
      if (10 < *(int *)(self + 0x32c8e8)) goto LAB_004268dc;
      if (iVar6 < 0x12) goto LAB_004268e4;
      if (0x18 < iVar6) goto LAB_004277b0;
LAB_00427230:
      uVar8 = (uint)(iVar9 <= iVar30);
      goto LAB_00427238;
    }
    if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
         *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
       (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
        *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00424568;
    if (iVar6 < 0xf) goto LAB_00424528;
    if (0x1f < iVar6) goto LAB_004268e4;
    uVar8 = (uint)(iVar9 <= iVar30);
    if (10 < *(int *)(self + 0x32c8e8)) {
      iVar6 = 0x70;
      break;
    }
LAB_004268ec:
    iVar6 = 3;
    break;
  case 0x422308:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd24);
    if (0 < *piVar22) goto switchD_00422070_caseD_421e20;
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar23) {
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (iVar6 == 0) {
LAB_00422c54:
        iVar30 = *piVar21;
        iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
        iVar14 = *(int *)(self + 0x32ba14);
        iVar9 = iVar12 + *(int *)(self + 0x32ba24);
        iVar5 = iVar30 + *(int *)(self + 0x32ba20) + 0x40;
      }
      else {
        if (iVar6 != 1) goto LAB_00422368;
LAB_004222b8:
        iVar30 = *piVar21;
        iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
        iVar14 = *(int *)(self + 0x32ba14);
        iVar9 = iVar12 + *(int *)(self + 0x32ba24);
        iVar5 = iVar30 + *(int *)(self + 0x32ba20) + -0x40;
      }
      iVar1 = 0;
      if (iVar14 != 0) {
        iVar1 = iVar5 / iVar14;
      }
      iVar5 = 0;
      if (iVar14 != 0) {
        iVar5 = (iVar9 + -0x122) / iVar14;
      }
      if ((*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar1 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar1 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        puVar11 = self + lVar20 * 0x288;
        *(int *)(puVar11 + 0x8dadc) = iVar6;
        *(undefined4 *)(puVar11 + 0x8dd08) = 0;
        *(int *)(puVar11 + 0x8dae8) = iVar12;
LAB_00422d64:
        *(undefined8 *)(puVar11 + 0x8dae0) = 0xffffffde0000001e;
        *(undefined4 *)(puVar11 + 0x8dd10) = 10;
        *piVar23 = 0;
        goto switchD_00422070_caseD_421e20;
      }
LAB_00422cf0:
      bVar3 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) <= iVar30;
LAB_004257b4:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(3), GH_ARG((uint)bVar3), GH_ARG(in_w4));
      *piVar23 = 0;
      goto switchD_00422070_caseD_421e20;
    }
    iVar30 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar30 + -0xa0 < iVar9) && (iVar9 < iVar30 + 0xa0)) {
      if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_004248cc;
      if (0x13 < iVar6) goto LAB_004268e4;
LAB_00424528:
      iVar6 = *(int *)(self + 0x32c8e8);
      local_70 = 0x100000000;
      pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
      if (10 < iVar6) {
        iVar6 = 5;
        break;
      }
LAB_00427238:
      iVar6 = 4;
    }
    else {
LAB_004248cc:
      if ((iVar30 + -400 < iVar9) && (iVar9 < iVar30 + 400)) {
        iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
        iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc);
        if ((iVar12 + -0x50 < iVar5) && (iVar5 < iVar12 + 0x50)) {
          if (*(int *)(self + 0x32c8e8) < 0xb) {
            if (iVar6 < 0x12) goto LAB_004268e4;
            if (iVar6 < 0x19) goto LAB_00426744;
          }
          else {
LAB_004268dc:
            if (iVar6 < 8) goto LAB_004268e4;
            if (iVar6 < 0xf) goto LAB_00427230;
            if (iVar6 < 0x16) goto LAB_00427784;
          }
          goto LAB_004277b0;
        }
      }
      if ((-0x1f < iVar30) && (iVar30 <= *(int *)(self + 0x1158) + 200)) {
        if (5 < iVar6) {
          if (iVar6 < 0xc) goto LAB_00427230;
          if (0x11 < iVar6) {
            if (0x1b < iVar6) goto LAB_0042822c;
            goto LAB_00426744;
          }
        }
LAB_004268e4:
        uVar8 = (uint)(iVar9 <= iVar30);
        goto LAB_004268ec;
      }
LAB_00426e98:
      uVar8 = (uint)(iVar9 <= iVar30);
      iVar6 = 5;
    }
    break;
  case 0x422438:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd24);
    if (0 < *piVar22) goto switchD_00422070_caseD_421e20;
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar23) {
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (iVar6 == 0) goto LAB_004256ec;
      if (iVar6 != 1) goto LAB_00422498;
LAB_00422684:
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      iVar5 = *piVar21;
      if (iVar5 <= iVar9) goto LAB_004257a0;
      iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar14 = *(int *)(self + 0x32ba14);
      iVar17 = iVar12 + *(int *)(self + 0x32ba24);
      iVar30 = iVar5 + *(int *)(self + 0x32ba20) + -0x40;
LAB_00425750:
      iVar1 = 0;
      if (iVar14 != 0) {
        iVar1 = iVar30 / iVar14;
      }
      iVar30 = 0;
      if (iVar14 != 0) {
        iVar30 = (iVar17 + -0x122) / iVar14;
      }
      if ((*(int *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar1 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar30 * 4 + (gh_long)iVar1 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        puVar11 = self + lVar20 * 0x288;
        *(int *)(puVar11 + 0x8dadc) = iVar6;
        *(undefined4 *)(puVar11 + 0x8dd08) = 0;
        *(int *)(puVar11 + 0x8dae8) = iVar12;
        goto LAB_00422d64;
      }
      goto LAB_004257a0;
    }
    iVar30 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar30 + -0xa0 < iVar9) && (iVar9 < iVar30 + 0xa0)) {
      if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_004266cc;
      if (0x13 < iVar6) goto LAB_00425ad4;
LAB_00427784:
      local_70 = 0x100000000;
      pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
      iVar6 = 5;
    }
    else {
LAB_004266cc:
      if ((iVar9 <= iVar30 + -400) || (iVar30 + 400 <= iVar9)) {
LAB_00426e54:
        if ((iVar30 < -100) || (*(int *)(self + 0x1158) + 100 < iVar30)) goto LAB_00426e98;
        if (iVar6 < 5) goto LAB_0042793c;
        if (iVar6 < 10) goto LAB_0042821c;
LAB_0042822c:
        fVar26 = (float)iVar30;
        fVar27 = (float)(*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x46);
        fVar28 = (float)iVar9;
        if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dae0) == 3) {
          iVar6 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) + 0x46;
        }
        else {
          iVar6 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) + -0x46;
        }
LAB_004285a8:
        bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(param_2), GH_ARG(fVar26), GH_ARG(fVar27), GH_ARG(fVar28), GH_ARG((float)iVar6));
        *piVar22 = 10;
        goto switchD_00422070_caseD_421e20;
      }
      iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc);
      if ((iVar5 <= iVar12 + -0x50) || (iVar12 + 0x50 <= iVar5)) goto LAB_00426e54;
      if (10 < *(int *)(self + 0x32c8e8)) goto LAB_00427710;
      if (iVar6 < 0xe) goto LAB_0042793c;
      if (0x13 < iVar6) goto LAB_004277b0;
LAB_00426744:
      local_70 = 0x100000000;
      pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
      iVar6 = 4;
    }
    break;
  case 0x4224b4:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar17;
      if ((iVar9 + -0xf0 < iVar30) && (iVar30 < iVar9 + 0xf0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0xc) goto LAB_00425388;
          if (0xd < iVar6) goto LAB_00422934;
LAB_00427408:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x8d;
          break;
        }
      }
      if ((iVar9 + -0x140 < iVar30) && (iVar30 < iVar9 + 0x140)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0x1a) goto LAB_00425c1c;
          goto LAB_00424ab0;
        }
      }
      if ((iVar9 + -0x1b8 < iVar30) && (iVar30 < iVar9 + 0x1b8)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (0x19 < iVar6) goto LAB_00424f48;
LAB_00424fe8:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x95;
          break;
        }
      }
      goto LAB_00424f70;
    }
LAB_00423460:
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
    if (*(int *)(self + 0x8dacc) <= iVar6 + -0x1e) {
      if (uVar8 != 0) {
        uVar13 = 0;
        goto joined_r0x004234d4;
      }
LAB_004245fc:
      iVar5 = *piVar21;
      if (iVar5 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) goto LAB_00424624;
      uVar13 = 1;
      goto LAB_00424988;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        if (*piVar21 < *piVar23) goto LAB_00428064;
        uVar8 = 1;
      }
      uVar13 = (uint)(uVar8 == 0);
joined_r0x004234d4:
      if ((uVar8 != 1) ||
         (iVar5 = *piVar21, iVar5 <= *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)))
      goto LAB_00424988;
      goto LAB_00423c34;
    }
    if (*piVar21 <= *piVar23) goto LAB_004245fc;
    goto LAB_00428064;
  case 0x422558:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) {
LAB_00422eb0:
      puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        if (*piVar21 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) {
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
          goto LAB_004247bc;
        }
      }
      else if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) < *piVar21)) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_004247bc:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar6 = 0xb5;
          goto LAB_004246a8;
        }
      }
      goto LAB_00428064;
    }
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -300 < iVar9) && (iVar9 < iVar5 + 300)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78)) {
        if (iVar6 < 10) {
LAB_00425180:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xb2;
        }
        else {
          if (iVar6 < 0x1e) goto LAB_004225f8;
LAB_0042772c:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xb4;
        }
        break;
      }
    }
    goto LAB_00425190;
  case 0x422624:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd24);
    if (0 < *piVar22) goto switchD_00422070_caseD_421e20;
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar23) {
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (iVar6 == 0) {
LAB_004256ec:
        iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
        iVar5 = *piVar21;
        if (iVar5 < iVar9) {
          iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          iVar14 = *(int *)(self + 0x32ba14);
          iVar17 = iVar12 + *(int *)(self + 0x32ba24);
          iVar30 = iVar5 + *(int *)(self + 0x32ba20) + 0x40;
          goto LAB_00425750;
        }
      }
      else {
        if (iVar6 == 1) goto LAB_00422684;
LAB_00422498:
        iVar5 = *piVar21;
        iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      }
LAB_004257a0:
      bVar3 = iVar9 <= iVar5;
      goto LAB_004257b4;
    }
    iVar30 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar30 + -0x8c < iVar9) && (iVar9 < iVar30 + 0x8c)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
        if (iVar6 < 0xf) goto LAB_00427784;
LAB_00425ad4:
        bVar3 = SBORROW4(iVar30,iVar9);
        iVar30 = iVar30 - iVar9;
LAB_00425ad8:
        uVar8 = (uint)(iVar30 < 0 == bVar3);
        iVar6 = 0x70;
        break;
      }
    }
    if ((iVar9 <= iVar30 + -400) || (iVar30 + 400 <= iVar9)) {
LAB_00426e80:
      if ((-0x65 < iVar30) && (iVar30 <= *(int *)(self + 0x1158) + 100)) {
        if (iVar6 < 6) {
LAB_0042793c:
          uVar8 = (uint)(iVar9 <= iVar30);
          iVar6 = 3;
          break;
        }
        if (0xb < iVar6) goto LAB_0042822c;
LAB_0042821c:
        uVar8 = (uint)(iVar9 <= iVar30);
        iVar6 = 4;
        break;
      }
      goto LAB_00426e98;
    }
    iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
    iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc);
    if ((iVar5 <= iVar12 + -0x50) || (iVar12 + 0x50 <= iVar5)) goto LAB_00426e80;
    if (*(int *)(self + 0x32c8e8) < 0xf) {
      if (iVar6 < 0x12) goto LAB_0042793c;
      if (0x18 < iVar6) goto LAB_004277b0;
      goto LAB_0042821c;
    }
LAB_00427710:
    if (iVar6 < 5) goto LAB_0042793c;
    if (iVar6 < 10) goto LAB_0042821c;
LAB_004277b0:
    if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8daf0) == 0xf5) {
      fVar26 = (float)iVar30;
      fVar28 = (float)iVar9;
      fVar27 = (float)(iVar12 + -0x46);
      fVar29 = (float)iVar5;
    }
    else {
      fVar26 = (float)iVar30;
      fVar27 = (float)(iVar12 + -0x46);
      fVar28 = (float)iVar9;
      if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dae0) == 3) {
        iVar5 = iVar5 + 0x46;
      }
      else {
        iVar5 = iVar5 + -0x46;
      }
LAB_00427db0:
      fVar29 = (float)iVar5;
    }
LAB_00427db4:
    bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(param_2), GH_ARG(fVar26), GH_ARG(fVar27), GH_ARG(fVar28), GH_ARG(fVar29));
    *piVar22 = 8;
    goto switchD_00422070_caseD_421e20;
  case 0x4226f0:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00423bb0;
    iVar9 = *piVar21;
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
LAB_00425378:
        if (4 < iVar6) {
          if (iVar6 < 10) goto LAB_00425388;
          if (iVar6 < 0xf) goto LAB_00427408;
          if ((0x15 < iVar6) && (iVar6 < 0x1c)) goto LAB_0042293c;
          goto LAB_0042799c;
        }
        goto LAB_004279b4;
      }
    }
    if ((iVar9 + -0x140 < iVar30) && (iVar30 < iVar9 + 0x140)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
        if (iVar6 < 0xf) goto LAB_00425c1c;
LAB_00427994:
        if (iVar6 < 0x20) goto LAB_0042799c;
        goto LAB_004279b4;
      }
    }
LAB_00424ff8:
    if (iVar9 < -0x32) goto LAB_00428150;
LAB_00426d38:
    if (iVar9 <= *(int *)(self + 0x1158) + 200) goto LAB_00426d48;
LAB_00428150:
    bVar3 = SBORROW4(iVar9,iVar30);
    iVar9 = iVar9 - iVar30;
LAB_00428154:
    uVar8 = (uint)(iVar9 < 0 == bVar3);
    iVar6 = 2;
    break;
  case 0x4227e0:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar17;
      if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 5) goto LAB_004279b4;
          if (iVar6 < 0xe) goto LAB_00425388;
          if (iVar6 < 0x17) goto LAB_00427408;
          if (0x1f < iVar6) goto LAB_0042799c;
LAB_0042293c:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x8e;
          break;
        }
      }
      if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (0x13 < iVar6) goto LAB_00427994;
LAB_00425c1c:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x8f;
          break;
        }
      }
      if ((iVar9 + -0x1a4 < iVar30) && (iVar30 < iVar9 + 0x1a4)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0xf) goto LAB_00424fe8;
          goto LAB_00427994;
        }
      }
      goto LAB_00424ff8;
    }
    goto LAB_00423bb0;
  case 0x422894:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xf0 < iVar30) && (iVar30 < iVar9 + 0xf0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0xc) {
LAB_00425388:
            uVar8 = (uint)(iVar30 <= iVar9);
            iVar6 = 0x8c;
          }
          else {
            if (iVar6 < 0x16) goto LAB_00427408;
LAB_00422934:
            if (iVar6 < 0x24) goto LAB_0042293c;
LAB_004238f4:
            uVar8 = (uint)(iVar9 < iVar30);
            iVar6 = 2;
          }
          break;
        }
      }
      if ((iVar9 + -0x154 < iVar30) && (iVar30 < iVar9 + 0x154)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0x19) goto LAB_00425c1c;
LAB_00424ab0:
          if (0x22 < iVar6) {
LAB_00424f48:
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            goto LAB_0042848c;
          }
          goto LAB_0042799c;
        }
      }
LAB_00424f70:
      if ((iVar9 < -0x14) || (*(int *)(self + 0x1158) + 0x14 < iVar9)) goto LAB_00428150;
LAB_00426d48:
      if (9 < iVar6) goto LAB_00428150;
      goto LAB_0042799c;
    }
    goto LAB_00423460;
  case 0x42294c:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar5 + -0xe6 < iVar9) && (iVar9 < iVar5 + 0xe6)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 10) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0x81;
          }
          else if (iVar6 < 0x14) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0x80;
          }
          else {
            if ((0x1d < iVar6) || (*(float *)(self + lVar20 * 0x288 + 0x8db24) < 1.0))
            goto LAB_0042799c;
            *puVar10 = 0x23b;
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0x84;
          }
          break;
        }
      }
      if ((iVar5 + -300 < iVar9) && (iVar9 < iVar5 + 300)) {
        if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00425034;
        if (iVar6 < 8) goto LAB_0042799c;
        uVar8 = (uint)(iVar9 <= iVar5);
        if (iVar6 < 0x16) {
          iVar6 = 0x80;
          break;
        }
      }
      else {
LAB_00425034:
        if (((-0x33 < iVar5) && (iVar5 <= *(int *)(self + 0x1158) + 0x32)) && (0x18 < iVar6))
        goto LAB_0042799c;
        uVar8 = (uint)(iVar9 <= iVar5);
      }
      iVar6 = 0x7f;
      break;
    }
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) <= *piVar21) goto LAB_00428064;
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
LAB_00424de0:
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = iVar6 / iVar9;
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (iVar5 + -0x122) / iVar9;
      }
      if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00428064;
      iVar6 = 0xa7;
      goto LAB_004246a8;
    }
    if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) < *piVar21)) {
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
      goto LAB_00424de0;
    }
    goto LAB_00428064;
  case 0x4229f8:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) {
LAB_00424010:
      puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        if (*piVar21 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) {
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
          goto LAB_00424874;
        }
      }
      else if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) < *piVar21)) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_00424874:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar6 = 0xbc;
          goto LAB_004246a8;
        }
      }
      goto LAB_00428064;
    }
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -0xfa < iVar9) && (iVar9 < iVar5 + 0xfa)) {
      if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78 <=
          *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00424abc;
      if (0xf < iVar6) {
        if (iVar6 < 0x1e) goto LAB_00422a98;
LAB_004255ec:
        uVar8 = (uint)(iVar9 <= iVar5);
        iVar6 = 0xbd;
        break;
      }
LAB_00425c88:
      uVar8 = (uint)(iVar9 <= iVar5);
      iVar6 = 0xba;
    }
    else {
LAB_00424abc:
      if ((iVar5 + -500 < iVar9) && (iVar9 < iVar5 + 500)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (0x13 < iVar6) {
            uVar8 = (uint)(iVar9 <= iVar5);
            if (iVar6 < 0x20) goto LAB_0042502c;
            goto LAB_00424b28;
          }
          goto LAB_00425c88;
        }
      }
      if ((-0x65 < iVar5) && (iVar5 <= *(int *)(self + 0x1158) + 100)) {
        uVar8 = (uint)(iVar9 <= iVar5);
        if (iVar6 < 0x1e) goto LAB_0042502c;
        goto LAB_00424b28;
      }
LAB_00426898:
      uVar8 = (uint)(iVar9 <= iVar5);
      iVar6 = 0xbb;
    }
    break;
  case 0x422aa8:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00423460;
    iVar9 = *piVar21;
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    lVar16 = (gh_long)iVar17;
    if ((iVar9 + -0xa0 < iVar30) && (iVar30 < iVar9 + 0xa0)) {
      if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
            *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
          (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) || (*(int *)(self + 0x8daf0) == 0x159)
         ) {
        if (iVar6 < 5) goto LAB_00428150;
        if (9 < iVar6) goto LAB_004271e0;
LAB_0042524c:
        uVar8 = (uint)(iVar30 <= iVar9);
        iVar6 = 0x27;
        break;
      }
    }
    if ((iVar9 + -0x104 < iVar30) && (iVar30 < iVar9 + 0x104)) {
      if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00424e8c;
LAB_00426484:
      if (0xe < iVar6) goto LAB_0042648c;
      goto LAB_004271e8;
    }
LAB_00424e8c:
    if ((iVar30 <= iVar9 + -0x14a) || (iVar9 + 0x14a <= iVar30)) goto LAB_00426d30;
    if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
         *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
       (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
        *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00426d30;
joined_r0x00424ee4:
    if (iVar6 < 0x1e) goto LAB_00426d20;
LAB_004274d8:
    local_70 = 0x100000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
    iVar6 = 1;
    break;
  case 0x422d74:
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar23 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar17;
      if ((iVar5 + -0xa0 < iVar9) && (iVar9 < iVar5 + 0xa0)) {
        if (((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
              *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
            (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
             *(int *)(self + lVar16 * 0x288 + 0x8dacc))) && (*(int *)(self + 0x8daf0) != 0x159))
        goto LAB_00425e70;
        if (7 < iVar6) {
          if (0xc < iVar6) {
            if (iVar6 < 0x12) {
              uVar8 = (uint)(iVar9 <= iVar5);
              iVar6 = 0xf;
              goto LAB_00428310;
            }
            if (iVar6 < 0x18) {
              uVar8 = (uint)(iVar9 <= iVar5);
              iVar6 = 0x10;
              goto LAB_00428310;
            }
            goto LAB_004282e8;
          }
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xc;
          goto LAB_00428310;
        }
LAB_004250f0:
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
      }
      else {
LAB_00425e70:
        if ((iVar5 + -300 < iVar9) && (iVar9 < iVar5 + 300)) {
          if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00426c74;
          if (5 < iVar6) {
            if (0x15 < iVar6) goto LAB_004250f0;
LAB_004282e8:
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            goto LAB_0042830c;
          }
          if (0x46 < *(int *)(self + lVar16 * 0x288 + 0x8dae0)) goto LAB_004282e8;
LAB_004278c0:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0x97;
        }
        else {
LAB_00426c74:
          if ((iVar5 < -0x1e) || (*(int *)(self + 0x1158) + 200 < iVar5)) {
            uVar8 = (uint)(iVar9 <= iVar5);
LAB_0042830c:
            iVar6 = 2;
          }
          else {
            if (iVar6 < 6) {
              if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) < 0x47) goto LAB_004278c0;
            }
            else if (0x1f < iVar6) goto LAB_004250f0;
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            iVar6 = 1;
          }
        }
LAB_00428310:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
      }
    }
    else {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      if (uVar8 == 0) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
LAB_00425df4:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x26), GH_ARG(uVar8), GH_ARG(in_w4));
          *piVar23 = 0;
          goto LAB_0042831c;
        }
      }
      else if (uVar8 == 1) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
        goto LAB_00425df4;
      }
      *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
      *piVar23 = 0;
    }
LAB_0042831c:
    if (*(int *)(self + lVar20 * 0x288 + 0x8dae0) == 10) {
      *piVar22 = 0x19;
    }
    goto switchD_00422070_caseD_421e20;
  case 0x422e04:
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -0xe6 < iVar9) && (iVar9 < iVar5 + 0xe6)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
        if (iVar6 < 0xf) {
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0x86;
        }
        else {
          if (0x1d < iVar6) goto LAB_0042799c;
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0x87;
        }
        break;
      }
    }
    *puVar10 = 0x23a;
    uVar8 = (uint)(iVar9 <= iVar5);
    iVar6 = 0x88;
    break;
  case 0x422e90:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00422eb0;
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -0x140 < iVar9) && (iVar9 < iVar5 + 0x140)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78)) {
        if (iVar6 < 5) goto LAB_00425180;
        if (0x13 < iVar6) goto LAB_0042772c;
LAB_004225f8:
        local_70 = 0x100000000;
        pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
        iVar6 = 0xb3;
        break;
      }
    }
LAB_00425190:
    if ((iVar5 < -100) || (*(int *)(self + 0x1158) + 100 < iVar5)) {
      uVar8 = (uint)(iVar9 <= iVar5);
    }
    else {
      uVar8 = (uint)(iVar9 <= iVar5);
      if (iVar6 < 10) {
        iVar6 = 0xb2;
        break;
      }
    }
    iVar6 = 0xb3;
    break;
  case 0x422f3c:
    *(undefined4 *)(self + lVar20 * 0x288 + 0x8daec) = 0;
    goto switchD_00422070_caseD_421e20;
  case 0x422f54:
    iVar5 = *piVar21;
    if ((iVar5 < -900) || (*(int *)(self + 0x1158) + 900 < iVar5)) {
LAB_0042300c:
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8daec) = 0;
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x13), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      goto switchD_00422070_caseD_421e20;
    }
    if ((((*(int *)(self + lVar20 * 0x288 + 0x8db10) == 0xf) || (0x17 < iVar6)) || (iVar5 < 0x29))
       || (*(int *)(self + 0x1158) + -0x28 <= iVar5)) {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      iVar6 = 0x30;
    }
    else {
      iVar6 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar5 + -0x1cc < iVar6) && (iVar6 < iVar5 + 0x1cc)) {
        uVar8 = (uint)(iVar5 < iVar6);
        iVar6 = 0x2f;
        *piVar22 = *piVar22 + 10;
      }
      else {
        local_70 = 0x100000000;
        pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
        iVar6 = 0x2f;
      }
    }
    break;
  case 0x422ff0:
    iVar9 = *piVar21;
    if ((iVar9 < -900) || (*(int *)(self + 0x1158) + 900 < iVar9)) goto LAB_0042300c;
    if (*(int *)(self + lVar20 * 0x288 + 0x8db10) == 0xf) {
      if (0x1d < iVar6) {
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8daec) = 1;
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*(int *)(self + 0xba8) == 1)) {
          uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
        }
        else {
          local_70 = 0x6300000000;
          pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
          uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
          if (iVar6 < 0x32) {
            iVar6 = 0x3a;
            break;
          }
        }
        iVar6 = 0x3b;
        break;
      }
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
LAB_004274c8:
      iVar6 = 0;
      break;
    }
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar9 + -0x78 < iVar30) && (iVar30 < iVar9 + 0x78)) {
      if (iVar6 < 10) goto LAB_0042799c;
      if (iVar6 < 0x12) {
LAB_0042796c:
        bVar3 = SBORROW4(iVar9,iVar30);
        iVar9 = iVar9 - iVar30;
        goto LAB_00427970;
      }
      if (iVar6 < 0x1a) {
LAB_004282c0:
        bVar3 = SBORROW4(iVar9,iVar30);
        iVar9 = iVar9 - iVar30;
LAB_004282c4:
        uVar8 = (uint)(iVar9 < 0 == bVar3);
        iVar6 = 0x10;
        break;
      }
      uVar8 = (uint)(iVar9 < iVar30);
      goto LAB_00425f14;
    }
    if (iVar6 < 0x1e) {
      uVar8 = (uint)(iVar30 <= iVar9);
      goto LAB_004274c8;
    }
    goto LAB_004274d8;
  case 0x42303c:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00423ee4;
    iVar9 = *piVar21;
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar9 + -0xa0 < iVar30) && (iVar30 < iVar9 + 0xa0)) {
      if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
            *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
          (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) || (*(int *)(self + 0x8daf0) == 0x159)
         ) {
        if (iVar6 < 4) goto LAB_0042799c;
        if (iVar6 < 8) {
          bVar3 = SBORROW4(iVar9,iVar30);
          iVar9 = iVar9 - iVar30;
LAB_004230f4:
          uVar8 = (uint)(iVar9 < 0 == bVar3);
          iVar6 = 0xc;
        }
        else {
          if (iVar6 < 0xc) goto LAB_0042796c;
          if (iVar6 < 0x10) goto LAB_004282c0;
          uVar8 = (uint)(iVar30 <= iVar9);
          if (0x13 < iVar6) goto LAB_00425f14;
LAB_0042791c:
          iVar6 = 0x11;
        }
        break;
      }
    }
    if ((iVar9 < -0x1e) || (*(int *)(self + 0x1158) + 200 < iVar9)) {
      uVar8 = (uint)(iVar30 <= iVar9);
      if (iVar6 < 0x14) goto LAB_0042848c;
LAB_00425f14:
      iVar6 = 1;
      break;
    }
    if ((iVar6 < 4) || ((7 < iVar6 && ((iVar6 < 0xc || (0xf < iVar6)))))) goto LAB_0042799c;
LAB_004279b4:
    uVar8 = (uint)(iVar30 <= iVar9);
    iVar6 = 1;
    break;
  case 0x423100:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xa0 < iVar30) && (iVar30 < iVar9 + 0xa0)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 5) goto LAB_0042799c;
          if (iVar6 < 10) {
LAB_00423364:
            uVar8 = (uint)(iVar30 <= iVar9);
            iVar6 = 0xd;
          }
          else if (iVar6 < 0xf) {
            bVar3 = SBORROW4(iVar9,iVar30);
            iVar9 = iVar9 - iVar30;
LAB_004231c0:
            uVar8 = (uint)(iVar9 < 0 == bVar3);
            iVar6 = 0x11;
          }
          else {
            if (iVar6 < 0x14) goto LAB_00427260;
            uVar8 = (uint)(iVar30 <= iVar9);
            if (0x18 < iVar6) goto LAB_00425f14;
            iVar6 = 0x10;
          }
          break;
        }
      }
      if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 8) goto LAB_0042799c;
          if (iVar6 < 0xf) {
            uVar8 = (uint)(iVar30 <= iVar9);
            iVar6 = 0x1d;
            break;
          }
          uVar8 = (uint)(iVar30 <= iVar9);
          if (0x15 < iVar6) goto LAB_0042848c;
LAB_0042649c:
          iVar6 = 0x12;
          break;
        }
      }
LAB_004260d0:
      if ((iVar9 < -10) || (*(int *)(self + 0x1158) + 200 < iVar9)) goto LAB_00428150;
      if (5 < iVar6) {
        if (iVar6 < 0xe) goto LAB_004279b4;
        if (0x13 < iVar6) goto LAB_00428150;
      }
LAB_0042799c:
      iVar6 = 4;
LAB_004279a0:
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(iVar6), GH_ARG(param_2), GH_ARG(0));
      goto switchD_00422070_caseD_421e20;
    }
    goto LAB_00423ee4;
  case 0x4231cc:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xaa < iVar30) && (iVar30 < iVar9 + 0xaa)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (4 < iVar6) {
            if (iVar6 < 10) goto LAB_0042524c;
            if (iVar6 < 0xf) goto LAB_00423430;
            if (iVar6 < 0x14) goto LAB_00427260;
            uVar8 = (uint)(iVar30 <= iVar9);
            if (0x18 < iVar6) goto LAB_00425f14;
            iVar6 = 0x2c;
            break;
          }
          goto LAB_00428150;
        }
      }
      if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (5 < iVar6) {
            if (iVar6 < 0xf) goto LAB_004271e8;
            uVar8 = (uint)(iVar30 <= iVar9);
            if (iVar6 < 0x18) goto LAB_0042649c;
            goto LAB_0042848c;
          }
          goto LAB_004279b4;
        }
      }
      goto LAB_004260d0;
    }
    goto LAB_00423ee4;
  case 0x4232a8:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xa0 < iVar30) && (iVar30 < iVar9 + 0xa0)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 5) goto LAB_00428150;
          if (iVar6 < 10) goto LAB_0042524c;
          if (iVar6 < 0xf) goto LAB_00423364;
LAB_00427258:
          if (0x15 < iVar6) {
            uVar8 = (uint)(iVar30 <= iVar9);
            if (0x1b < iVar6) goto LAB_0042848c;
            goto LAB_0042791c;
          }
LAB_00427260:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x14;
          break;
        }
      }
      if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0x10) goto LAB_00426d20;
LAB_0042648c:
          uVar8 = (uint)(iVar30 <= iVar9);
          if (iVar6 < 0x1e) goto LAB_0042649c;
          goto LAB_0042848c;
        }
      }
      goto LAB_004260d0;
    }
    goto LAB_00423bb0;
  case 0x423374:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xa0 < iVar30) && (iVar30 < iVar9 + 0xa0)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 5) goto LAB_00428150;
          if (iVar6 < 10) goto LAB_0042524c;
          if (0xe < iVar6) goto LAB_00427258;
LAB_00423430:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0x29;
          break;
        }
      }
      if ((iVar9 + -0x140 < iVar30) && (iVar30 < iVar9 + 0x140)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (0xf < iVar6) {
            if (iVar6 < 0x18) goto LAB_004271e8;
            goto LAB_0042648c;
          }
LAB_00426d20:
          uVar8 = (uint)(iVar30 <= iVar9);
          iVar6 = 0xe;
          break;
        }
      }
      goto LAB_004260d0;
    }
    goto LAB_00423bb0;
  case 0x423440:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00423460;
    iVar9 = *piVar21;
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    lVar16 = (gh_long)iVar17;
    if ((iVar30 <= iVar9 + -0xa0) || (iVar9 + 0xa0 <= iVar30)) {
LAB_00426430:
      if ((iVar9 + -0x104 < iVar30) && (iVar30 < iVar9 + 0x104)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) goto LAB_00426484;
      }
      if ((iVar9 + -0x14a < iVar30) && (iVar30 < iVar9 + 0x14a)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) goto joined_r0x00424ee4;
      }
LAB_00426d30:
      if (-0xb < iVar9) goto LAB_00426d38;
      goto LAB_00428150;
    }
    if (((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
        (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
         *(int *)(self + lVar16 * 0x288 + 0x8dacc))) && (*(int *)(self + 0x8daf0) != 0x159))
    goto LAB_00426430;
    if (iVar6 < 5) goto LAB_00428150;
    if (iVar6 < 10) goto LAB_0042524c;
LAB_004271e0:
    if (0xe < iVar6) goto LAB_00427258;
LAB_004271e8:
    uVar8 = (uint)(iVar30 <= iVar9);
    iVar6 = 0x2c;
    break;
  case 0x423504:
    if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8db14) == 0x16) {
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((*piVar21 + -0xa0 < iVar5) && (iVar5 < *piVar21 + 0xa0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -500 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 500)) goto LAB_004220fc;
      }
    }
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00422204;
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -100 < iVar9) && (iVar9 < iVar5 + 100)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0xa0 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0xa0)) {
        if (7 < iVar6) {
          if ((*(int *)(self + lVar20 * 0x288 + 0x8dd4c) != 9) && (iVar6 < 0x19)) goto LAB_00423810;
          goto LAB_0042382c;
        }
        goto LAB_0042799c;
      }
    }
    if ((-0x33 < iVar5) && (iVar5 <= *(int *)(self + 0x1158) + 0x32)) {
      if (iVar6 < 5) goto LAB_0042799c;
      if (0x10 < iVar6) {
        uVar8 = (uint)(iVar9 <= iVar5);
        if (0x1b < iVar6) goto LAB_004268d4;
        goto LAB_00428474;
      }
      goto LAB_00422428;
    }
LAB_00425d28:
    bVar4 = SBORROW4(iVar5,iVar9);
    bVar3 = iVar5 - iVar9 < 0;
LAB_00428384:
    uVar8 = (uint)(bVar3 == bVar4);
    iVar6 = 0x73;
    break;
  case 0x423638:
    if (0 < *(int *)(self + lVar20 * 0x288 + 0x8dd24)) goto switchD_00422070_caseD_421e20;
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) {
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      if (iVar6 == 1) {
        iVar30 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
        iVar17 = *(int *)(self + 0x32ba14);
        iVar9 = iVar30 + *(int *)(self + 0x32ba24);
        iVar5 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
      }
      else {
        if (iVar6 != 0) goto LAB_0042734c;
        iVar30 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
        iVar17 = *(int *)(self + 0x32ba14);
        iVar9 = iVar30 + *(int *)(self + 0x32ba24);
        iVar5 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
      }
      iVar12 = 0;
      if (iVar17 != 0) {
        iVar12 = iVar5 / iVar17;
      }
      iVar5 = 0;
      if (iVar17 != 0) {
        iVar5 = (iVar9 + -0x122) / iVar17;
      }
      if ((*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        *(int *)(self + lVar20 * 0x288 + 0x8dadc) = iVar6;
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd08) = 0;
        *(int *)(self + lVar20 * 0x288 + 0x8dae8) = iVar30;
        *(undefined8 *)(self + lVar20 * 0x288 + 0x8dae0) = 0xffffffde0000001e;
        *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd10) = 10;
        *piVar22 = 0;
        goto switchD_00422070_caseD_421e20;
      }
LAB_0042734c:
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
      *piVar22 = 0;
      goto switchD_00422070_caseD_421e20;
    }
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    lVar16 = (gh_long)iVar17;
    if ((iVar5 + -100 < iVar9) && (iVar9 < iVar5 + 100)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0xa0 <
           *(int *)(self + lVar16 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + lVar16 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0xa0)) {
        if (iVar6 < 8) goto LAB_0042799c;
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dd4c) == 9) || (0x19 < iVar6)) ||
           ((int)uVar13 <= *(int *)(self + lVar16 * 0x288 + 0x8db1c))) {
          uVar8 = (uint)(iVar5 < iVar9);
          iVar6 = 0x9c;
          break;
        }
        bVar3 = SBORROW4(iVar5,iVar9);
        iVar5 = iVar5 - iVar9;
LAB_00424d38:
        uVar8 = (uint)(iVar5 < 0 == bVar3);
        iVar6 = 0x5f;
        break;
      }
    }
    if (iVar5 < -0x32) {
      if (-0x1f5 < iVar5) {
        iVar30 = *(int *)(self + 0x1158);
        goto LAB_004276fc;
      }
LAB_00427708:
      bVar4 = SBORROW4(iVar5,iVar9);
      bVar3 = iVar5 - iVar9 < 0;
      goto LAB_00428384;
    }
    iVar30 = *(int *)(self + 0x1158);
    if (iVar30 + 0x32 < iVar5) {
LAB_004276fc:
      if (iVar30 + 500 < iVar5) goto LAB_00427708;
    }
    else {
      if (iVar6 < 5) goto LAB_0042799c;
      if (iVar6 < 0x23) {
        if (*(int *)(self + lVar16 * 0x288 + 0x8daf0) == 0xf5) {
          iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          iVar30 = *(int *)(self + lVar16 * 0x288 + 0x8dacc);
        }
        else {
          iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
          if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) == 3) {
            iVar30 = *(int *)(self + lVar16 * 0x288 + 0x8dacc) + 0x46;
          }
          else {
            iVar30 = *(int *)(self + lVar16 * 0x288 + 0x8dacc) + -0x46;
          }
        }
        bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(param_2), GH_ARG((float)iVar5), GH_ARG((float)(iVar6 + -0x46)), GH_ARG((float)iVar9), GH_ARG((float)iVar30))
        ;
        *(int *)(self + lVar20 * 0x288 + 0x8dd24) = 8;
        goto switchD_00422070_caseD_421e20;
      }
    }
    uVar8 = (uint)(iVar9 <= iVar5);
    iVar6 = 0x9c;
    break;
  case 0x4236e8:
    if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8db14) == 0x16) {
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((*piVar21 + -0xa0 < iVar5) && (iVar5 < *piVar21 + 0xa0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -500 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 500)) goto LAB_004220fc;
      }
    }
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00422204;
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -0xa0 < iVar9) && (iVar9 < iVar5 + 0xa0)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0xa0 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0xa0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dd4c) != 9) && (iVar6 < 0x1a)) {
LAB_00423810:
          if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8db1c) < (int)uVar13) {
LAB_00424d34:
            bVar3 = SBORROW4(iVar5,iVar9);
            iVar5 = iVar5 - iVar9;
            goto LAB_00424d38;
          }
        }
LAB_0042382c:
        uVar8 = (uint)(iVar5 < iVar9);
        iVar6 = 0x73;
        break;
      }
    }
    if ((iVar5 < -0x32) || (*(int *)(self + 0x1158) + 0x32 < iVar5)) goto LAB_00425d28;
    if (iVar6 < 5) goto LAB_0042799c;
    if (iVar6 < 0xf) {
      bVar4 = SBORROW4(iVar5,iVar9);
      bVar3 = iVar5 - iVar9 < 0;
      goto LAB_00426e48;
    }
    bVar3 = SBORROW4(iVar5,iVar9);
    iVar5 = iVar5 - iVar9;
LAB_00428468:
    uVar8 = (uint)(iVar5 < 0 == bVar3);
    if (iVar6 < 0x1e) {
LAB_00428474:
      iVar6 = 0x73;
    }
    else {
LAB_004268d4:
      iVar6 = 0x65;
    }
    break;
  case 0x42383c:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00423bb0;
    iVar9 = *piVar21;
    iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar9 + -0xf0 < iVar30) && (iVar30 < iVar9 + 0xf0)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
        if (4 < iVar6) {
          if (9 < iVar6) {
            if (iVar6 < 0xf) goto LAB_00427408;
            if (0x15 < iVar6) {
              if (iVar6 < 0x22) goto LAB_0042293c;
              goto LAB_004238f4;
            }
          }
          goto LAB_00425388;
        }
        goto LAB_0042799c;
      }
    }
    if ((iVar9 + -0x154 < iVar30) && (iVar30 < iVar9 + 0x154)) {
      if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_004267ec;
      if (iVar6 < 0x10) goto LAB_00425c1c;
      uVar8 = (uint)(iVar30 <= iVar9);
      if (0x1f < iVar6) goto LAB_00425f14;
    }
    else {
LAB_004267ec:
      if ((iVar9 < -0x32) || (*(int *)(self + 0x1158) + 0x32 < iVar9)) goto LAB_00428150;
      if (iVar6 < 10) goto LAB_0042799c;
      uVar8 = (uint)(iVar30 <= iVar9);
      if (0x1d < iVar6) goto LAB_0042848c;
    }
LAB_00426878:
    iVar6 = 0x97;
    break;
  case 0x423904:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    iVar5 = iVar17;
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 10) goto LAB_0042555c;
          if (iVar6 < 0x14) goto LAB_00427450;
          bVar3 = SBORROW4(iVar9,iVar30);
          iVar9 = iVar9 - iVar30;
LAB_004239bc:
          uVar8 = (uint)(iVar9 < 0 == bVar3);
          if (0x1d < iVar6) goto LAB_00428474;
          iVar6 = 0x76;
          break;
        }
      }
      if ((iVar9 + -400 < iVar30) && (iVar30 < iVar9 + 400)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0xc) goto LAB_0042799c;
          uVar8 = (uint)(iVar30 <= iVar9);
          if (iVar6 < 0x14) goto LAB_00426608;
          goto LAB_00428474;
        }
      }
      if ((-0x47 < iVar9) && (iVar9 <= *(int *)(self + 0x1158) + 0x46)) {
        if (iVar6 < 10) goto LAB_00426e44;
        if (0x1d < iVar6) goto LAB_0042799c;
        goto LAB_00428380;
      }
      goto LAB_00428150;
    }
LAB_00425894:
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar6 = *piVar21;
      if (*(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8) <= iVar6) goto LAB_00428064;
      goto LAB_00423f74;
    }
    if ((uVar8 != 1) || (iVar6 = *piVar21, iVar6 <= *(int *)(self + (gh_long)iVar5 * 0x288 + 0x8dac8)))
    goto LAB_00428064;
    goto LAB_00423f28;
  case 0x4239d0:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar5 + -0xfa < iVar9) && (iVar9 < iVar5 + 0xfa)) {
        if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78 <=
            *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00425b54;
        if (iVar6 < 0x10) {
LAB_00425bb0:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xa8;
        }
        else if (iVar6 < 0x19) {
          local_70 = 0x100000000;
          pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
          iVar6 = 0xa9;
        }
        else {
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xab;
        }
      }
      else {
LAB_00425b54:
        if ((iVar5 + -500 < iVar9) && (iVar9 < iVar5 + 500)) {
          if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00426820;
          if (iVar6 < 0xc) goto LAB_00425bb0;
        }
        else {
LAB_00426820:
          if ((iVar5 < -100) || (*(int *)(self + 0x1158) + 100 < iVar5)) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0xa9;
            goto LAB_00427dd8;
          }
        }
        uVar8 = (uint)(iVar9 <= iVar5);
        if (iVar6 < 0x1e) {
          iVar6 = 0xa9;
        }
        else {
          iVar6 = 0xac;
        }
      }
LAB_00427dd8:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
    }
    else {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      if (uVar8 == 0) {
        if (*piVar21 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) {
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
          goto LAB_004261d4;
        }
      }
      else if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) < *piVar21)) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_004261d4:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0xaa), GH_ARG(uVar8), GH_ARG(in_w4));
          *piVar22 = 0;
          goto switchD_00422070_caseD_427de4;
        }
      }
      *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
      *piVar22 = 0;
    }
  case 0x427de4:
switchD_00422070_caseD_427de4:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar6 = *piVar21;
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar6 + -0xfa < iVar5) && (iVar5 < iVar6 + 0xfa)) {
        if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78 <=
            *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00427f40;
        if (9 < *piVar24) {
          if (*piVar24 < 0x14) {
            local_70 = 0x100000000;
            pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
            iVar6 = 0xa9;
          }
          else {
            uVar8 = (uint)(iVar5 <= iVar6);
            iVar6 = 0xab;
          }
          break;
        }
LAB_00427fa0:
        uVar8 = (uint)(iVar5 <= iVar6);
        iVar6 = 0xa8;
        break;
      }
LAB_00427f40:
      if ((iVar6 + -500 < iVar5) && (iVar5 < iVar6 + 500)) {
        if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00428074;
        if (*piVar24 < 0x12) goto LAB_00427fa0;
        uVar8 = (uint)(iVar5 <= iVar6);
        if (*piVar24 < 0x14) goto LAB_004280b8;
LAB_004280d0:
        iVar6 = 0xac;
      }
      else {
LAB_00428074:
        if ((iVar6 < -100) || (*(int *)(self + 0x1158) + 100 < iVar6)) {
          uVar8 = (uint)(iVar5 <= iVar6);
          iVar6 = 0xa9;
        }
        else {
          uVar8 = (uint)(iVar5 <= iVar6);
          if (0x18 < *piVar24) goto LAB_004280d0;
LAB_004280b8:
          iVar6 = 0xa9;
        }
      }
      break;
    }
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    if (uVar8 != 0) {
      if ((uVar8 != 1) || (*piVar21 <= *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)))
      goto LAB_00428064;
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_00428010:
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = iVar6 / iVar9;
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (iVar5 + -0x122) / iVar9;
      }
      if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00428064;
      iVar6 = 0xaa;
      goto LAB_004246a8;
    }
    if (*piVar21 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) {
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
      goto LAB_00428010;
    }
    goto LAB_00428064;
  case 0x423a7c:
    if (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8db14) == 0x16) {
      iVar5 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((*piVar21 + -0xa0 < iVar5) && (iVar5 < *piVar21 + 0xa0)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -500 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 500)) goto LAB_004220fc;
      }
    }
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar5 + -0xdc < iVar9) && (iVar9 < iVar5 + 0xdc)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0xa0 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0xa0)) {
          if (iVar6 < 10) {
            bVar4 = SBORROW4(iVar5,iVar9);
            bVar3 = iVar5 - iVar9 < 0;
LAB_00425560:
            uVar8 = (uint)(bVar3 == bVar4);
            iVar6 = 0x74;
          }
          else if (iVar6 < 0x14) {
            bVar4 = SBORROW4(iVar5,iVar9);
            bVar3 = iVar5 - iVar9 < 0;
LAB_00427454:
            uVar8 = (uint)(bVar3 == bVar4);
            iVar6 = 0x75;
          }
          else {
            uVar8 = (uint)(iVar9 <= iVar5);
            if ((0x21 < iVar6) || (*(int *)(self + lVar20 * 0x288 + 0x8dd4c) == 9))
            goto LAB_00428474;
            iVar6 = 0x5f;
          }
          break;
        }
      }
      if ((-0x33 < iVar5) && (iVar5 <= *(int *)(self + 0x1158) + 0x32)) {
        if (iVar6 < 5) goto LAB_0042799c;
        if (iVar6 < 0xf) {
          bVar4 = SBORROW4(iVar5,iVar9);
          bVar3 = iVar5 - iVar9 < 0;
          goto LAB_00426e48;
        }
        bVar3 = SBORROW4(iVar5,iVar9);
        iVar5 = iVar5 - iVar9;
        goto LAB_00428468;
      }
      bVar4 = SBORROW4(iVar5,iVar9);
      bVar3 = iVar5 - iVar9 < 0;
      goto LAB_00428384;
    }
LAB_00422204:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
    }
    else {
      local_70 = 0x2700000000;
      pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
      puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
      uVar8 = *puVar10;
      if (iVar6 < 0x1a) {
LAB_00428864:
        *puVar10 = (uint)(uVar8 == 0);
        *piVar22 = 0;
        goto switchD_00422070_caseD_421e20;
      }
    }
LAB_00422240:
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x26), GH_ARG(uVar8), GH_ARG(in_w4));
    *piVar22 = 0;
    goto switchD_00422070_caseD_421e20;
  case 0x423b90:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) goto LAB_00425378;
      }
      if ((iVar9 + -300 < iVar30) && (iVar30 < iVar9 + 300)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 0xc) goto LAB_00425c1c;
          if (iVar6 < 0x18) {
LAB_00427984:
            bVar3 = SBORROW4(iVar9,iVar30);
            iVar9 = iVar9 - iVar30;
LAB_00427988:
            uVar8 = (uint)(iVar9 < 0 == bVar3);
            iVar6 = 0x97;
            break;
          }
          goto LAB_00427994;
        }
      }
      if ((-0x33 < iVar9) && (iVar9 <= *(int *)(self + 0x1158) + 200)) {
        if (9 < iVar6) {
          uVar8 = (uint)(iVar30 <= iVar9);
          if (iVar6 < 0x18) goto LAB_00426878;
          goto LAB_0042848c;
        }
        goto LAB_0042799c;
      }
      goto LAB_00428150;
    }
LAB_00423bb0:
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
    if (*(int *)(self + 0x8dacc) <= iVar6 + -0x1e) {
      if (uVar8 != 0) {
        uVar13 = 0;
        goto joined_r0x00423c24;
      }
LAB_004243ec:
      iVar5 = *piVar21;
LAB_00424624:
      iVar9 = *(int *)(self + 0x32ba14);
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = (iVar5 + *(int *)(self + 0x32ba20) + 0x40) / iVar9;
      }
      iVar5 = 0;
      if (iVar9 != 0) {
        iVar5 = (iVar6 + *(int *)(self + 0x32ba24) + -0x122) / iVar9;
      }
      if ((0 < *(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
         (uVar13 = 1,
         0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                            0x140598) * 0x12 | 1) * 4 + 0x11c378)))
      goto LAB_00424988;
      uVar8 = 0;
      goto LAB_004246a4;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        if (*piVar21 < *piVar23) goto LAB_00428064;
        uVar8 = 1;
      }
      uVar13 = (uint)(uVar8 == 0);
joined_r0x00423c24:
      if (uVar8 == 1) {
        iVar5 = *piVar21;
LAB_00423c34:
        iVar9 = *(int *)(self + 0x32ba14);
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = (iVar5 + *(int *)(self + 0x32ba20) + -0x40) / iVar9;
        }
        iVar5 = 0;
        if (iVar9 != 0) {
          iVar5 = (iVar6 + *(int *)(self + 0x32ba24) + -0x122) / iVar9;
        }
        uVar8 = 1;
        if ((*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar5 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) goto LAB_004246a4;
      }
LAB_00424988:
      *puVar10 = uVar13;
      *piVar22 = 0;
      goto switchD_00422070_caseD_421e20;
    }
    if (*piVar21 <= *piVar23) goto LAB_004243ec;
    goto LAB_00428064;
  case 0x423cb4:
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar23 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar17;
      if ((iVar5 + -0xaa < iVar9) && (iVar9 < iVar5 + 0xaa)) {
        if (((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
              *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
            (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
             *(int *)(self + lVar16 * 0x288 + 0x8dacc))) && (*(int *)(self + 0x8daf0) != 0x159))
        goto LAB_004264a4;
        if (iVar6 < 6) {
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0xc;
        }
        else {
          if (iVar6 < 0xc) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0xf;
            goto LAB_00426d78;
          }
          if (iVar6 < 0x12) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0x10;
            goto LAB_00426d78;
          }
          uVar8 = (uint)(iVar5 < iVar9);
LAB_00426d74:
          iVar6 = 2;
        }
LAB_00426d78:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
      }
      else {
LAB_004264a4:
        if ((iVar9 <= iVar5 + -0x140) || (iVar5 + 0x140 <= iVar9)) {
LAB_00426d54:
          if ((iVar5 < -100) || (*(int *)(self + 0x1158) + 100 < iVar5)) {
            uVar8 = (uint)(iVar9 <= iVar5);
            goto LAB_00426d74;
          }
          if (iVar6 < 0xf) {
            if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) < 0x47) goto LAB_004278f4;
          }
          else if (0x1d < iVar6) goto LAB_004281c8;
          local_70 = 0x100000000;
          pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
          iVar6 = 1;
          goto LAB_00426d78;
        }
        if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
           (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
            *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00426d54;
        if (iVar6 < 0xf) {
          if (0x46 < *(int *)(self + lVar16 * 0x288 + 0x8dae0)) goto LAB_00427bec;
LAB_004278f4:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0x97;
          goto LAB_00426d78;
        }
        if (iVar6 < 0x1e) {
LAB_00427bec:
          local_70 = 0x100000000;
          pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
          goto LAB_00426d74;
        }
LAB_004281c8:
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
      }
    }
    else {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      if (uVar8 == 0) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
LAB_00426280:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x26), GH_ARG(uVar8), GH_ARG(in_w4));
          *piVar23 = 0;
          goto LAB_00426d84;
        }
      }
      else if (uVar8 == 1) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
        goto LAB_00426280;
      }
      *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
      *piVar23 = 0;
    }
LAB_00426d84:
    if (*(int *)(self + lVar20 * 0x288 + 0x8dae0) == 10) {
      *piVar22 = 0x14;
    }
    goto switchD_00422070_caseD_421e20;
  case 0x423d44:
    piVar23 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar23 < 1) {
      iVar5 = *piVar21;
      iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      lVar16 = (gh_long)iVar17;
      if ((iVar5 + -0xb4 < iVar9) && (iVar9 < iVar5 + 0xb4)) {
        if (((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
              *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
            (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
             *(int *)(self + lVar16 * 0x288 + 0x8dacc))) && (*(int *)(self + 0x8daf0) != 0x159))
        goto LAB_00426520;
        if (4 < iVar6) {
          if (iVar6 < 10) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0xf;
            goto LAB_004280fc;
          }
          if (iVar6 < 0xf) {
            uVar8 = (uint)(iVar9 <= iVar5);
            iVar6 = 0x10;
            goto LAB_004280fc;
          }
          local_70 = 0x100000000;
          pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          uVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar7), GH_ARG((param_type *)&local_70));
          goto LAB_004280f8;
        }
        uVar8 = (uint)(iVar9 <= iVar5);
        iVar6 = 0xc;
      }
      else {
LAB_00426520:
        if ((iVar5 + -0x154 < iVar9) && (iVar9 < iVar5 + 0x154)) {
          if ((*(int *)(self + lVar16 * 0x288 + 0x8dacc) <=
               *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
             (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
              *(int *)(self + lVar16 * 0x288 + 0x8dacc))) goto LAB_00426dac;
          if (0x15 < iVar6) {
            if (iVar6 < 0x1c) goto LAB_00427c1c;
LAB_00428130:
            bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(param_2), GH_ARG(0));
            goto LAB_00428108;
          }
          if (0x46 < *(int *)(self + lVar16 * 0x288 + 0x8dae0)) {
LAB_00427c1c:
            uVar8 = (uint)(iVar5 < iVar9);
            goto LAB_004280f8;
          }
LAB_00426de8:
          uVar8 = (uint)(iVar9 <= iVar5);
          iVar6 = 0x97;
        }
        else {
LAB_00426dac:
          if ((-0x65 < iVar5) && (iVar5 <= *(int *)(self + 0x1158) + 100)) {
            if (iVar6 < 0x14) {
              if (*(int *)(self + lVar16 * 0x288 + 0x8dae0) < 0x47) goto LAB_00426de8;
            }
            else if (0x1d < iVar6) goto LAB_00428130;
          }
          uVar8 = (uint)(iVar9 <= iVar5);
LAB_004280f8:
          iVar6 = 2;
        }
      }
LAB_004280fc:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
    }
    else {
      uVar8 = *(uint *)(self + lVar20 * 0x288 + 0x8dad8);
      if (uVar8 == 0) {
        if (*piVar21 < *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8)) {
          iVar9 = *(int *)(self + 0x32ba14);
          iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
          iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + 0x40;
          goto LAB_0042635c;
        }
      }
      else if ((uVar8 == 1) && (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8) < *piVar21)) {
        iVar9 = *(int *)(self + 0x32ba14);
        iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
        iVar6 = *piVar21 + *(int *)(self + 0x32ba20) + -0x40;
LAB_0042635c:
        iVar30 = 0;
        if (iVar9 != 0) {
          iVar30 = iVar6 / iVar9;
        }
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = (iVar5 + -0x122) / iVar9;
        }
        if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                               (gh_long)iVar30 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) goto LAB_004263ac;
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x26), GH_ARG(uVar8), GH_ARG(in_w4));
        *piVar23 = 0;
        goto LAB_00428108;
      }
LAB_004263ac:
      *(uint *)(self + lVar20 * 0x288 + 0x8dad8) = (uint)(uVar8 == 0);
      *piVar23 = 0;
    }
LAB_00428108:
    if (*(int *)(self + lVar20 * 0x288 + 0x8dae0) == 10) {
      *piVar22 = 0xf;
    }
    goto switchD_00422070_caseD_421e20;
  case 0x423df0:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 8) {
LAB_0042555c:
            bVar4 = SBORROW4(iVar9,iVar30);
            bVar3 = iVar9 - iVar30 < 0;
            goto LAB_00425560;
          }
          if (iVar6 < 0x10) {
LAB_00427450:
            bVar4 = SBORROW4(iVar9,iVar30);
            bVar3 = iVar9 - iVar30 < 0;
            goto LAB_00427454;
          }
          if (iVar6 < 0x18) {
LAB_00427a3c:
            uVar8 = (uint)(iVar30 <= iVar9);
            iVar6 = 0x76;
          }
          else {
            if (iVar6 < 0x1e) goto LAB_00428380;
            uVar8 = (uint)(iVar9 < iVar30);
            iVar6 = 0x72;
          }
          break;
        }
      }
      if ((iVar9 + -400 < iVar30) && (iVar30 < iVar9 + 400)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (9 < iVar6) {
            uVar8 = (uint)(iVar30 <= iVar9);
            if (iVar6 < 0x1e) goto LAB_00426608;
            goto LAB_0042848c;
          }
          goto LAB_0042799c;
        }
      }
      if ((-0x1f < iVar9) && (iVar9 <= *(int *)(self + 0x1158) + 200)) {
        if (iVar6 < 10) {
LAB_00426e44:
          bVar4 = SBORROW4(iVar9,iVar30);
          bVar3 = iVar9 - iVar30 < 0;
          goto LAB_00426e48;
        }
        if (0x18 < iVar6) goto LAB_0042799c;
      }
      goto LAB_00428150;
    }
    goto LAB_00423ee4;
  case 0x423ec4:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (*piVar22 < 1) {
      iVar9 = *piVar21;
      iVar30 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
      if ((iVar9 + -0xe6 < iVar30) && (iVar30 < iVar9 + 0xe6)) {
        if (((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
              *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
            (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
             *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) ||
           (*(int *)(self + 0x8daf0) == 0x159)) {
          if (iVar6 < 8) goto LAB_0042555c;
          if (iVar6 < 0x10) goto LAB_00427450;
          if (iVar6 < 0x18) goto LAB_00427a3c;
          if (iVar6 < 0x20) goto LAB_00428380;
          goto LAB_0042799c;
        }
      }
      if ((iVar9 + -400 < iVar30) && (iVar30 < iVar9 + 400)) {
        if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50 <
             *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
            *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50)) {
          if (iVar6 < 8) goto LAB_0042799c;
          uVar8 = (uint)(iVar30 <= iVar9);
          if (0x15 < iVar6) goto LAB_00428474;
LAB_00426608:
          iVar6 = 0x72;
          break;
        }
      }
      if ((-0x33 < iVar9) && (iVar9 <= *(int *)(self + 0x1158) + 0x32)) {
        if (iVar6 < 10) goto LAB_00426e44;
        if (0x18 < iVar6) goto LAB_0042799c;
LAB_00428380:
        bVar4 = SBORROW4(iVar9,iVar30);
        bVar3 = iVar9 - iVar30 < 0;
        goto LAB_00428384;
      }
      goto LAB_00428150;
    }
LAB_00423ee4:
    puVar10 = (uint *)(self + lVar20 * 0x288 + 0x8dad8);
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar6 = *piVar21;
LAB_00423f74:
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = iVar6 + *(int *)(self + 0x32ba20) + 0x40;
LAB_00423f9c:
      iVar30 = 0;
      if (iVar9 != 0) {
        iVar30 = iVar6 / iVar9;
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (iVar5 + -0x122) / iVar9;
      }
      if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar30 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
LAB_004246a4:
        iVar6 = 0x26;
LAB_004246a8:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
        *piVar22 = 0;
        goto switchD_00422070_caseD_421e20;
      }
    }
    else if (uVar8 == 1) {
      iVar6 = *piVar21;
LAB_00423f28:
      iVar9 = *(int *)(self + 0x32ba14);
      iVar5 = *(int *)(self + lVar20 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
      iVar6 = iVar6 + *(int *)(self + 0x32ba20) + -0x40;
      goto LAB_00423f9c;
    }
LAB_00428064:
    *puVar10 = (uint)(uVar8 == 0);
    *piVar22 = 0;
    goto switchD_00422070_caseD_421e20;
  case 0x423ff0:
    piVar22 = (int *)(self + lVar20 * 0x288 + 0x8dd48);
    if (0 < *piVar22) goto LAB_00424010;
    iVar5 = *piVar21;
    iVar9 = *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dac8);
    if ((iVar5 + -0xfa < iVar9) && (iVar9 < iVar5 + 0xfa)) {
      if ((*(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x78 <
           *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc)) &&
         (*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <
          *(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x78)) {
        if (iVar6 < 10) goto LAB_00425c88;
        if (0x18 < iVar6) goto LAB_004255ec;
LAB_00422a98:
        uVar8 = (uint)(iVar5 < iVar9);
        iVar6 = 0xbb;
        break;
      }
    }
    if ((iVar5 + -500 < iVar9) && (iVar9 < iVar5 + 500)) {
      if ((*(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc) <=
           *(int *)(self + lVar20 * 0x288 + 0x8dacc) + -0x50) ||
         (*(int *)(self + lVar20 * 0x288 + 0x8dacc) + 0x50 <=
          *(int *)(self + (gh_long)iVar17 * 0x288 + 0x8dacc))) goto LAB_00426880;
      if (iVar6 < 0x12) goto LAB_00425c88;
      uVar8 = (uint)(iVar9 <= iVar5);
      if (iVar6 < 0x19) goto LAB_0042502c;
LAB_00424b28:
      iVar6 = 0xbd;
    }
    else {
LAB_00426880:
      if ((iVar5 < -100) || (*(int *)(self + 0x1158) + 100 < iVar5)) goto LAB_00426898;
      uVar8 = (uint)(iVar9 <= iVar5);
      if (0xb < iVar6) goto LAB_00424b28;
LAB_0042502c:
      iVar6 = 0xbb;
    }
  }
LAB_00421e1c:
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar6), GH_ARG(uVar8), GH_ARG(in_w4));
switchD_00422070_caseD_421e20:
  if (*(gh_long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
