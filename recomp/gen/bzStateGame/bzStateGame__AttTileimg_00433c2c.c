/* bzStateGame::AttTileimg_00433c2c @ 0x00433c2c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__AttTileimg_00433c2c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  float param_6 = gh_b2f(gh_a5);
  float param_7 = gh_b2f(gh_a6);
  int param_8 = (int)gh_a7;
  int param_9 = (int)gh_a8;

  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_w1 = 0;
  int extraout_w1_00 = 0;
  int extraout_w1_01 = 0;
  int extraout_w1_02 = 0;
  int extraout_w1_03 = 0;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  gh_long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < param_2) {
    iVar5 = param_2 * 0x12;
    iVar4 = *(int *)(self + (gh_long)iVar5 * 4 + 0x11c378);
    lVar15 = (gh_long)*(int *)(self + (gh_long)(iVar5 + -0x12) * 4 + 0x11c378) * 7;
    iVar6 = param_2;
    if ((int)lVar15 < (int)((gh_long)iVar4 * 7)) {
      iVar1 = param_3 + 0x32;
      piVar14 = (int *)(self + (gh_long)*(int *)(self + (gh_long)(iVar5 + -0x12) * 4 + 0x11c378) * 0x1c +
                               0x129e48);
      piVar2 = (int *)(self + 0x32c818);
      piVar3 = (int *)(self + 0x32ba48);
      fVar21 = 1.0 - param_7;
      do {
        iVar6 = piVar14[-1];
        iVar8 = piVar14[-4];
        if (*piVar14 == 6) {
          if ((*(int *)(self + 0x8dae0) < 0x96) &&
             ((iVar10 = *(int *)(self + 0x8db14), iVar10 < 0x15 || (iVar10 == 0x17)))) {
            iVar7 = piVar14[-3];
            iVar10 = *(int *)(self + 0x8dac8);
            iVar12 = iVar7;
            if (param_7 != 1.0) {
              fVar16 = (float)iVar7;
              if (param_7 <= 1.0) {
                fVar16 = fVar16 - fVar21 * fVar16;
              }
              else {
                fVar16 = fVar16 * param_7;
              }
              iVar12 = (int)fVar16;
            }
            if ((iVar12 + param_3 <= iVar10 + -0x2d) || (iVar10 + 0x2d <= iVar12 + param_3))
            goto LAB_00433fcc;
            iVar12 = piVar14[-2];
            iVar10 = *(int *)(self + 0x8dacc);
            iVar13 = iVar12;
            if (param_7 != 1.0) {
              fVar16 = (float)iVar12;
              if (param_7 <= 1.0) {
                fVar16 = fVar16 - fVar21 * fVar16;
              }
              else {
                fVar16 = fVar16 * param_7;
              }
              iVar13 = (int)fVar16;
            }
            if ((iVar13 + param_4 + 0xaa <= iVar10 + -0x3c) || (iVar10 <= iVar13 + param_4 + 0x6e))
            goto LAB_00433fcc;
            iVar10 = 0x57;
            if (iVar8 != 0x3d) {
              iVar10 = iVar8 + 1;
            }
            if (param_7 == 1.0) {
              iVar8 = iVar12 + param_4;
            }
            else {
              fVar18 = (float)iVar7;
              fVar20 = (float)iVar12;
              fVar19 = fVar20 - fVar21 * fVar20;
              fVar17 = fVar20 * param_7;
              fVar16 = fVar18 * param_7;
              if (param_7 <= 1.0) {
                fVar17 = fVar19;
                fVar16 = fVar18 - fVar21 * fVar18;
              }
              iVar7 = (int)fVar16;
              iVar8 = (int)fVar17 + param_4;
              if (param_7 <= 1.0) {
                iVar12 = (int)fVar19;
              }
              else {
                iVar12 = (int)(fVar20 * param_7);
              }
            }
            bzStateGame__TileImg_rotateImage_00470380(GH_ARG(self), GH_ARG(iVar10), GH_ARG(param_3), GH_ARG(iVar7), GH_ARG(0), GH_ARG(iVar8), GH_ARG(param_6), GH_ARG(param_5), GH_ARG(param_7), GH_ARG(1), GH_ARG(param_3), GH_ARG(iVar12 + param_4), GH_ARG(iVar6));
            iVar6 = extraout_w1_02;
            if ((*piVar3 == 0) && (*(int *)(self + 0x32c160) == 0)) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1698)), GH_ARG(false));
              iVar6 = extraout_w1_03;
            }
            iVar8 = *(int *)(self + (gh_long)param_9 * 4 + (gh_long)param_8 * 0x2d0 + 0x14059c);
          }
          else {
LAB_00433fcc:
            iVar10 = piVar14[-3];
            if (param_7 == 1.0) {
              iVar12 = piVar14[-2];
              iVar7 = iVar12 + param_4;
            }
            else {
              fVar17 = (float)iVar10;
              fVar18 = (float)piVar14[-2];
              fVar16 = fVar17 * param_7;
              if (param_7 <= 1.0) {
                fVar16 = fVar17 - fVar21 * fVar17;
              }
              iVar10 = (int)fVar16;
              fVar17 = fVar18 - fVar21 * fVar18;
              fVar16 = fVar18 * param_7;
              if (param_7 <= 1.0) {
                fVar16 = fVar17;
              }
              iVar7 = (int)fVar16 + param_4;
              if (param_7 <= 1.0) {
                iVar12 = (int)fVar17;
              }
              else {
                iVar12 = (int)(fVar18 * param_7);
              }
            }
            bzStateGame__TileImg_rotateImage_00470380(GH_ARG(self), GH_ARG(iVar8), GH_ARG(param_3), GH_ARG(iVar10), GH_ARG(0), GH_ARG(iVar7), GH_ARG(param_6), GH_ARG(param_5), GH_ARG(param_7), GH_ARG(1), GH_ARG(param_3), GH_ARG(iVar12 + param_4), GH_ARG(iVar6));
            iVar8 = 0;
            iVar6 = extraout_w1_00;
            if (*piVar3 != 0) {
              if (*(int *)(self + 0x32c160) == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1698)), GH_ARG(false));
                iVar6 = extraout_w1_01;
              }
              iVar8 = 0;
            }
          }
          *piVar3 = iVar8;
          if (((*(int *)(self + 0x32c790) < 0) && (*(int *)(self + 0x32c8e8) == 1)) &&
             (*(int *)(self + (gh_long)param_9 * 4 + (gh_long)param_8 * 0x2d0 + 0x14059c) == 0x19f)) {
            iVar8 = piVar14[-3];
            iVar10 = iVar8;
            if (param_7 != 1.0) {
              fVar16 = (float)iVar8;
              if (param_7 <= 1.0) {
                fVar16 = fVar16 - fVar21 * fVar16;
              }
              else {
                fVar16 = fVar16 * param_7;
              }
              iVar10 = (int)fVar16;
            }
            if (0 < iVar10 + iVar1) {
              if (param_7 != 1.0) {
                fVar16 = (float)iVar8;
                if (param_7 <= 1.0) {
                  fVar16 = fVar16 - fVar21 * fVar16;
                }
                else {
                  fVar16 = fVar16 * param_7;
                }
                iVar8 = (int)fVar16;
              }
              if (iVar8 + iVar1 < *(int *)(self + 0x1158)) {
                *(int *)(self + 0x32c790) = -2;
                if (param_7 == 1.0) {
                  *piVar2 = piVar14[-3] + iVar1;
                  iVar8 = piVar14[-2];
                  piVar9 = (int *)(self + lVar15 * 4 + 0x129e40);
                }
                else {
                  fVar16 = (float)piVar14[-3];
                  if (param_7 <= 1.0) {
                    *piVar2 = iVar1 + (int)(fVar16 - fVar21 * fVar16);
                    piVar9 = (int *)(self + lVar15 * 4 + 0x129e40);
                    fVar16 = (float)piVar14[-2] - fVar21 * (float)piVar14[-2];
                  }
                  else {
                    *piVar2 = iVar1 + (int)(fVar16 * param_7);
                    piVar9 = piVar14 + -2;
                    fVar16 = (float)*piVar9 * param_7;
                  }
                  iVar8 = (int)fVar16;
                }
                *(int *)(self + 0x32c81c) = param_4 + 0x1e + iVar8;
                if ((*(int *)(self + 0x8dae0) < 0x96) && (*(int *)(self + 0x8db14) < 0x15)) {
                  iVar10 = piVar14[-3];
                  iVar8 = *(int *)(self + 0x8dac8);
                  if (param_7 != 1.0) {
                    fVar16 = (float)iVar10;
                    if (param_7 <= 1.0) {
                      fVar16 = fVar16 - fVar21 * fVar16;
                    }
                    else {
                      fVar16 = fVar16 * param_7;
                    }
                    iVar10 = (int)fVar16;
                  }
                  uVar11 = 0;
                  if ((iVar8 + -0x2d < iVar10 + param_3) && (iVar10 + param_3 < iVar8 + 0x2d)) {
                    iVar8 = *piVar9;
                    iVar10 = *(int *)(self + 0x8dacc);
                    if (param_7 != 1.0) {
                      fVar16 = (float)iVar8;
                      if (param_7 <= 1.0) {
                        fVar16 = fVar16 - fVar21 * fVar16;
                      }
                      else {
                        fVar16 = fVar16 * param_7;
                      }
                      iVar8 = (int)fVar16;
                    }
                    uVar11 = (uint)(iVar10 + -0x3c < iVar8 + param_4 + 0xaa &&
                                   iVar8 + param_4 + 0x6e < iVar10);
                  }
                }
                else {
                  uVar11 = 0;
                }
                *(uint *)(self + 0x32c838) = uVar11;
              }
            }
          }
        }
        else {
          iVar10 = piVar14[-3];
          if (param_7 == 1.0) {
            iVar12 = piVar14[-2];
            iVar7 = iVar12 + param_4;
          }
          else {
            fVar17 = (float)iVar10;
            fVar18 = (float)piVar14[-2];
            fVar16 = fVar17 * param_7;
            if (param_7 <= 1.0) {
              fVar16 = fVar17 - fVar21 * fVar17;
            }
            iVar10 = (int)fVar16;
            fVar17 = fVar18 - fVar21 * fVar18;
            fVar16 = fVar18 * param_7;
            if (param_7 <= 1.0) {
              fVar16 = fVar17;
            }
            iVar7 = (int)fVar16 + param_4;
            if (param_7 <= 1.0) {
              iVar12 = (int)fVar17;
            }
            else {
              iVar12 = (int)(fVar18 * param_7);
            }
          }
          bzStateGame__TileImg_rotateImage_00470380(GH_ARG(self), GH_ARG(iVar8), GH_ARG(param_3), GH_ARG(iVar10), GH_ARG(0), GH_ARG(iVar7), GH_ARG(param_6), GH_ARG(param_5), GH_ARG(param_7), GH_ARG(1), GH_ARG(param_3), GH_ARG(iVar12 + param_4), GH_ARG(iVar6));
          iVar6 = extraout_w1;
        }
        lVar15 = lVar15 + 7;
        piVar14 = piVar14 + 7;
      } while (lVar15 < (gh_long)iVar4 * 7);
    }
    if (0 < *(int *)(self + (gh_long)iVar5 * 4 + 0x11c380)) {
      bzStateGame__TileChexk_0044b1fc(GH_ARG(self), GH_ARG(iVar6), GH_ARG(param_2), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_8), GH_ARG(param_9));
      return 0;
    }
  }
  return 0;
  return 0;
}
