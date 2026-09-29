/* bzStateGame::MBarimg_003ecaf4 @ 0x003ecaf4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__MBarimg_003ecaf4(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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
  float param_10 = gh_b2f(gh_a9);
  float param_11 = gh_b2f(gh_a10);

  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  gh_long lVar18;
  gh_long lVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  int in_stack_fffffffffffffe98 = 0;
  
  uVar21 = (ulong)GH_F2I(uint, param_11);
  uVar12 = (ulong)(uint)param_8;
  if (param_3 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(self + (gh_long)param_3 * 4 + 0x139834) * 7;
  }
  iVar6 = *(int *)(self + (gh_long)param_3 * 4 + 0x139838);
  if (iVar16 < (int)((gh_long)iVar6 * 7)) {
    uVar11 = 0x13a7e4;
    lVar19 = (gh_long)iVar16;
    lVar18 = (gh_long)iVar16 * 4 + 0x13a7e4;
    piVar1 = (int *)(self + 0x8db14);
    piVar2 = (int *)(self + 0x8daec);
    puVar3 = (uint *)(self + 0x32c91c);
    puVar4 = (uint *)(self + 0x32c920);
    piVar5 = (int *)(self + 0x32c8b4);
    uVar9 = 0x32c43c;
    uVar10 = 0x32c440;
    fVar23 = 1.0 - param_11;
    uVar22 = uVar21;
    do {
      iVar16 = *(int *)(self + lVar18 + -0xc);
      if ((param_2 == -1 && param_3 == 0xe) && ((iVar16 == 0xcb || (iVar16 - 0x9fU < 0xb))))
      goto switchD_003ecde4_caseD_1;
      iVar14 = iVar16 + 0x5e;
      if (10 < iVar16 - 0x9fU || param_2 != -1) {
        iVar14 = iVar16;
      }
      switch(*(undefined4 *)(self + lVar18 + 4)) {
      case 0:
        iVar16 = *(int *)(self + lVar18);
        if (iVar16 != 0) {
          uVar10 = (ulong)(uint)param_8;
          uVar9 = (ulong)(uint)param_7;
          uVar11 = (ulong)(uint)param_9;
          uVar12 = 0;
          uVar22 = uVar21;
          bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(iVar14), GH_ARG(*(int *)(self + lVar18 + -8) + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11), GH_ARG(0), GH_ARG(*(int *)(self + lVar18 + -8) + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(iVar16));
          in_stack_fffffffffffffe98 = iVar16;
          break;
        }
        iVar16 = *(int *)(self + lVar18 + -8);
        if (*(int *)(self + lVar18 + 8) != 0x14) {
          if (param_11 != 1.0) {
            fVar20 = (float)iVar16;
            if (param_11 <= 1.0) {
              fVar20 = fVar20 - fVar23 * fVar20;
            }
            else {
              fVar20 = fVar20 * param_11;
            }
            iVar16 = (int)fVar20;
          }
          goto LAB_003ed708;
        }
        iVar16 = iVar16 - *(int *)(self + (gh_long)iVar14 * 4 + 0x329d28);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        iVar16 = iVar16 + param_4;
        uVar12 = 1;
        iVar8 = *(int *)(self + lVar18 + -4) + param_5;
        goto LAB_003ed728;
      case 4:
        iVar16 = *(int *)(self + lVar18 + -8);
        uVar11 = (ulong)(uint)param_9;
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        uVar10 = (ulong)(uint)param_8;
        uVar9 = (ulong)(uint)param_7;
        uVar12 = 0;
        uVar22 = uVar21;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar16 + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        uVar17 = *puVar3;
        if (0 < (int)uVar17) {
          puVar13 = puVar3;
          if ((uVar17 < 8) && ((1 << (ulong)(uVar17 & 0x1f) & 0xaaU) != 0)) {
            iVar16 = *(int *)(self + lVar18 + -8);
            uVar11 = (ulong)(uint)param_9;
            if (param_11 != 1.0) {
              fVar20 = (float)iVar16;
              if (param_11 <= 1.0) {
                fVar20 = fVar20 - fVar23 * fVar20;
              }
              else {
                fVar20 = fVar20 * param_11;
              }
              iVar16 = (int)fVar20;
            }
            uVar10 = (ulong)(uint)param_8;
            uVar9 = (ulong)(uint)param_7;
            uVar12 = 0;
            uVar22 = 0x3f99999a;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(param_4 + -5 + iVar16), GH_ARG(param_5 + -5 + *(int *)(self + lVar18 + -4)), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(1.2));
            uVar17 = *puVar3;
          }
LAB_003ed5dc:
          *puVar13 = uVar17 - 1;
        }
        break;
      case 5:
        iVar16 = *(int *)(self + lVar18 + -8);
        uVar11 = (ulong)(uint)param_9;
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        uVar10 = (ulong)(uint)param_8;
        uVar9 = (ulong)(uint)param_7;
        uVar12 = 0;
        uVar22 = uVar21;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar16 + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        uVar17 = *puVar4;
        if (0 < (int)uVar17) {
          puVar13 = puVar4;
          if ((uVar17 < 6) && ((1 << (ulong)(uVar17 & 0x1f) & 0x2aU) != 0)) {
            iVar16 = *(int *)(self + lVar18 + -8);
            uVar11 = (ulong)(uint)param_9;
            if (param_11 != 1.0) {
              fVar20 = (float)iVar16;
              if (param_11 <= 1.0) {
                fVar20 = fVar20 - fVar23 * fVar20;
              }
              else {
                fVar20 = fVar20 * param_11;
              }
              iVar16 = (int)fVar20;
            }
            uVar10 = (ulong)(uint)param_8;
            uVar9 = (ulong)(uint)param_7;
            uVar12 = 0;
            uVar22 = 0x3f99999a;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(param_4 + -5 + iVar16), GH_ARG(param_5 + -5 + *(int *)(self + lVar18 + -4)), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(1.2));
            uVar17 = *puVar4;
          }
          goto LAB_003ed5dc;
        }
        break;
      case 6:
        iVar8 = *(int *)(self + lVar18 + -8) + param_4;
        iVar15 = *piVar2;
        iVar7 = *(int *)(self + lVar18 + -4) + param_5;
        if (*piVar1 == 0x16) {
          if (iVar15 == 1) {
            iVar16 = 0;
          }
          else {
            iVar16 = (int)((float)iVar15 / 6.1);
            if (iVar16 == 0 && 1 < iVar15) {
              iVar16 = 1;
            }
          }
          bzStateGame__GUIImg_drawImage2_0041d91c(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar8), GH_ARG(iVar7), GH_ARG((int)uVar9), GH_ARG((int)uVar10), GH_ARG((int)uVar11), GH_ARG((float)iVar16 * 1.9), GH_ARG((int)uVar12), GH_ARG(GH_I2F(float, uVar22)), GH_ARG(0), GH_ARG((int)((float)iVar16 * 1.9)), GH_ARG(0x14), GH_ARG(in_stack_fffffffffffffe98));
          if ((*piVar5 < 3) || (iVar16 = *piVar2, iVar16 < 3)) {
            *piVar5 = *piVar5 + 1;
          }
          else {
            *piVar5 = 0;
            *piVar2 = iVar16 + -1;
            if (iVar16 == 3) {
              uVar9 = 0;
              uVar10 = 0;
              *piVar2 = 1;
              bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0x16), GH_ARG(0), GH_ARG(0));
            }
          }
        }
        else {
          if (iVar15 == 1) {
            iVar16 = 0;
          }
          else {
            uVar22 = (ulong)GH_F2I(uint, (float)iVar15);
            iVar16 = (int)((float)iVar15 / ((float)*(int *)(self + 0x32c170) / 100.0));
            if (iVar16 == 0 && 1 < iVar15) {
              iVar16 = 1;
            }
          }
          iVar15 = 0x14;
LAB_003ecd6c:
          bzStateGame__GUIImg_drawImage2_0041d91c(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar8), GH_ARG(iVar7), GH_ARG((int)uVar9), GH_ARG((int)uVar10), GH_ARG((int)uVar11), GH_ARG((float)iVar16 * 1.9), GH_ARG((int)uVar12), GH_ARG(GH_I2F(float, uVar22)), GH_ARG(0), GH_ARG((int)((float)iVar16 * 1.9)), GH_ARG(iVar15), GH_ARG(in_stack_fffffffffffffe98));
        }
        break;
      case 7:
        iVar16 = *piVar1;
        if (0 < iVar16) {
          if (iVar14 != 0x5a) {
            iVar16 = *(int *)(self + lVar18 + -8);
            if (param_11 != 1.0) {
              fVar20 = (float)iVar16;
              if (1.0 <= param_11) goto LAB_003ed064;
              goto LAB_003ed124;
            }
            goto LAB_003ed708;
          }
          if (iVar16 != 0x16) {
            if (iVar16 == 0x17) {
              iVar14 = *(int *)(self + 0x32c43c);
              iVar8 = *(int *)(self + lVar18 + -8) + param_4;
              iVar7 = *(int *)(self + lVar18 + -4) + param_5;
              if (iVar14 == 1) goto LAB_003ed6bc;
              uVar22 = (ulong)GH_F2I(uint, (float)iVar14);
              iVar16 = (int)((float)iVar14 / ((float)*(int *)(self + 0x32c440) / 100.0));
              if (iVar16 == 0 && 1 < iVar14) {
                iVar16 = 1;
              }
            }
            else {
              iVar8 = *(int *)(self + lVar18 + -8) + param_4;
              iVar7 = *(int *)(self + lVar18 + -4) + param_5;
              if (*(int *)(self + 0x8db18) == 0) {
                iVar14 = *(int *)(self + (gh_long)(iVar16 + 10) * 4 + 0x32c148);
                if (iVar14 != 1) {
                  iVar16 = iVar16 + 0x1e;
                  goto LAB_003ecd30;
                }
              }
              else {
                iVar14 = *(int *)(self + (gh_long)(iVar16 + 0x129) * 4 + 0x32c148);
                if (iVar14 != 1) {
                  iVar16 = iVar16 + 0x133;
LAB_003ecd30:
                  uVar22 = (ulong)GH_F2I(uint, (float)iVar14);
                  iVar16 = (int)((float)iVar14 /
                                ((float)*(int *)(self + (gh_long)iVar16 * 4 + 0x32c148) / 100.0));
                  if (iVar16 == 0 && 1 < iVar14) {
                    iVar16 = 1;
                  }
                  goto LAB_003ecd54;
                }
              }
LAB_003ed6bc:
              iVar16 = 0;
            }
LAB_003ecd54:
            iVar15 = 0x10;
            iVar14 = 0x5a;
            goto LAB_003ecd6c;
          }
        }
        break;
      case 8:
        uVar17 = *(uint *)(self + 0x32c16c);
        if ((int)uVar17 < 10) {
LAB_003ed5fc:
          iVar16 = *(int *)(self + lVar18 + -8);
          goto joined_r0x003ed0a0;
        }
        iVar16 = *(int *)(self + lVar18 + -8);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(uVar17 / 10 + 0x32), GH_ARG(param_4 + -9 + iVar16), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        iVar16 = *(int *)(self + lVar18 + -8);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        uVar11 = (ulong)(uint)param_9;
        uVar9 = (ulong)(uint)param_7;
        uVar10 = (ulong)(uint)param_8;
        uVar12 = 0;
        uVar22 = uVar21;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG((int)*(uint *)(self + 0x32c16c) % 10 + 0x32), GH_ARG(iVar16 + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        break;
      case 9:
        puVar13 = (uint *)(self + (gh_long)param_3 * 4 + 0x32c27c);
        if (((0x3f < *(int *)(self + 0x1ae8) - 0xbU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xbU) & 0x3f) & 0xc800000000000005U) == 0))
           && (*(int *)(self + 0xba8) != 1)) {
          puVar13 = (uint *)(self + (gh_long)param_3 * 4 + 0x32c294);
        }
LAB_003ecf9c:
        uVar17 = *puVar13;
        iVar16 = *(int *)(self + lVar18 + -8);
        goto joined_r0x003ed0a0;
      case 10:
        if (0 < param_2) {
          iVar16 = *(int *)(self + lVar18 + -8);
          uVar11 = (ulong)(uint)param_9;
          if (param_11 != 1.0) {
            fVar20 = (float)iVar16;
            if (param_11 <= 1.0) {
              fVar20 = fVar20 - fVar23 * fVar20;
            }
            else {
              fVar20 = fVar20 * param_11;
            }
            iVar16 = (int)fVar20;
          }
          uVar10 = (ulong)(uint)param_8;
          uVar9 = (ulong)(uint)param_7;
          uVar12 = 0;
          uVar22 = uVar21;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar16 + param_4), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
          if (1 < param_2) {
            iVar16 = *(int *)(self + lVar18 + -8);
            uVar11 = (ulong)(uint)param_9;
            if (param_11 != 1.0) {
              fVar20 = (float)iVar16;
              if (param_11 <= 1.0) {
                fVar20 = fVar20 - fVar23 * fVar20;
              }
              else {
                fVar20 = fVar20 * param_11;
              }
              iVar16 = (int)fVar20;
            }
            uVar10 = (ulong)(uint)param_8;
            uVar9 = (ulong)(uint)param_7;
            uVar12 = 0;
            uVar22 = uVar21;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(param_4 + 0x12 + iVar16), GH_ARG(*(int *)(self + lVar18 + -4) + param_5), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
            if (2 < param_2) {
              iVar16 = *(int *)(self + lVar18 + -8);
              if (param_11 != 1.0) {
                fVar20 = (float)iVar16;
                if (param_11 <= 1.0) {
                  fVar20 = fVar20 - fVar23 * fVar20;
                }
                else {
                  fVar20 = fVar20 * param_11;
                }
                iVar16 = (int)fVar20;
              }
              iVar8 = *(int *)(self + lVar18 + -4);
              iVar16 = param_4 + 0x24 + iVar16;
              goto LAB_003ed714;
            }
          }
        }
        break;
      case 0xc:
        iVar16 = *(int *)(self + lVar18 + -8);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        iVar16 = iVar16 + param_4;
        iVar8 = *(int *)(self + lVar18 + -4) + param_5;
        if (*(int *)(self + 0x32c158) == 0) {
          iVar14 = 0x44;
        }
        else {
          iVar14 = 0x4f;
        }
        goto LAB_003ed720;
      case 0xe:
        iVar16 = *piVar1;
        if (iVar16 < 1) break;
        if (iVar16 != 0x16) {
          puVar13 = (uint *)(self + 0x32c38c);
          if (iVar16 != 0x17) {
            if (*(int *)(self + 0x8db18) == 0) {
              iVar16 = iVar16 + 0x32;
            }
            else {
              iVar16 = iVar16 + 0x13d;
            }
            uVar17 = *(uint *)(self + (gh_long)iVar16 * 4 + 0x32c148);
            goto LAB_003ed5fc;
          }
          goto LAB_003ecf9c;
        }
        iVar16 = *(int *)(self + lVar18 + -8);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        iVar8 = *(int *)(self + lVar18 + -4);
        iVar14 = 0x33;
        goto LAB_003ed61c;
      case 0xf:
        iVar16 = *(int *)(self + lVar18 + -8);
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
LAB_003ed124:
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
LAB_003ed064:
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
LAB_003ed708:
        iVar8 = *(int *)(self + lVar18 + -4);
        iVar16 = iVar16 + param_4;
LAB_003ed714:
        iVar8 = iVar8 + param_5;
        goto LAB_003ed720;
      case 0x12:
        iVar16 = *(int *)(self + lVar18 + -8);
        uVar17 = *(int *)(self + 0x32c15c) / 10;
joined_r0x003ed0a0:
        iVar14 = uVar17 + 0x32;
        if (param_11 != 1.0) {
          fVar20 = (float)iVar16;
          if (param_11 <= 1.0) {
            fVar20 = fVar20 - fVar23 * fVar20;
          }
          else {
            fVar20 = fVar20 * param_11;
          }
          iVar16 = (int)fVar20;
        }
        iVar8 = *(int *)(self + lVar18 + -4);
LAB_003ed61c:
        iVar16 = iVar16 + param_4;
        iVar8 = iVar8 + param_5;
LAB_003ed720:
        uVar12 = 0;
LAB_003ed728:
        uVar11 = (ulong)(uint)param_9;
        uVar10 = (ulong)(uint)param_8;
        uVar9 = (ulong)(uint)param_7;
        uVar22 = uVar21;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar14), GH_ARG(iVar16), GH_ARG(iVar8), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG((int)uVar12), GH_ARG(param_11));
      }
switchD_003ecde4_caseD_1:
      lVar19 = lVar19 + 7;
      lVar18 = lVar18 + 0x1c;
    } while (lVar19 < (gh_long)iVar6 * 7);
  }
  return 0;
  return 0;
}
