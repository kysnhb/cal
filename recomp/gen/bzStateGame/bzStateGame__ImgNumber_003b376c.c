/* bzStateGame::ImgNumber_003b376c @ 0x003b376c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__ImgNumber_003b376c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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

  gh_long lVar1;
  gh_long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  gh_long lVar8;
  gh_long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t gh_frame64[30] = {0};   /* 원작 스택 프레임 (SP-0xd8 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xd8;
#define local_d8 (*(uint (*)[20])(gh_fb - 0xd8))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar2 = tpidr_el0;
  local_88 = *(gh_long *)(lVar2 + 0x28);
  memset(local_d8,0,0x50);
  uVar13 = param_4 & (param_4 >> 0x1f ^ 0xffffffffU);
  uVar14 = (ulong)uVar13;
  if (param_2 == 2) {
    uVar4 = uVar13 / 0x3c;
    if ((int)uVar13 < 0xe10) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar14 / 0xe10;
      uVar4 = uVar4 + (int)((uVar14 / 0x3c) / 0x3c) * -0x3c;
    }
    iVar6 = (int)(uVar11 / 10);
    iVar5 = iVar6 + param_3;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + 1;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar5;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar5 = (int)fVar15;
    }
    iVar6 = (int)uVar11 + iVar6 * -10 + param_3;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar6), GH_ARG(iVar5 + param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar6 = *(int *)(self + (gh_long)iVar6 * 4 + 0x329d28) + 6;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar6;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar6 = (int)fVar15;
    }
    iVar6 = iVar6 + iVar5 + param_5;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xc), GH_ARG(iVar6), GH_ARG(param_6 + 4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar5 = *(int *)(self + 0x329df8) + 1;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar5;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar5 = (int)fVar15;
    }
    iVar5 = iVar5 + iVar6;
    iVar6 = uVar4 / 10 + param_3;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar6), GH_ARG(iVar5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar6 = *(int *)(self + (gh_long)iVar6 * 4 + 0x329d28) + 1;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar6;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar6 = (int)fVar15;
    }
    iVar6 = iVar6 + iVar5;
    iVar5 = uVar4 % 10 + param_3;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(iVar6), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + 6;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar5;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar5 = (int)fVar15;
    }
    iVar5 = iVar5 + iVar6;
    uVar13 = uVar13 + (int)(uVar14 / 0x3c) * -0x3c;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xc), GH_ARG(iVar5), GH_ARG(param_6 + 4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar6 = *(int *)(self + 0x329df8) + 1;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar6;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar6 = (int)fVar15;
    }
    iVar6 = iVar6 + iVar5;
    iVar5 = uVar13 / 10 + param_3;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(iVar6), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
    iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + 1;
    if (param_11 != 1.0) {
      fVar15 = (float)iVar5;
      if (param_11 <= 1.0) {
        fVar15 = fVar15 - (1.0 - param_11) * fVar15;
      }
      else {
        fVar15 = fVar15 * param_11;
      }
      iVar5 = (int)fVar15;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(uVar13 % 10 + param_3), GH_ARG(iVar5 + iVar6), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
  }
  else if (param_2 == 3) {
    if ((int)uVar13 < 10) {
      uVar10 = 0;
      uVar11 = 0;
LAB_003b3e50:
      local_d8[uVar11] = uVar13;
      iVar5 = (int)uVar10;
    }
    else {
      lVar8 = 10;
      lVar9 = 100;
      local_d8[0] = uVar13 % 10;
      uVar11 = 1;
      do {
        if ((gh_long)uVar14 < lVar9) {
          uVar13 = 0;
          if (lVar8 != 0) {
            uVar13 = (uint)((gh_long)uVar14 / lVar8);
          }
          uVar10 = uVar11 & 0xffffffff;
          goto LAB_003b3e50;
        }
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = (gh_long)uVar14 / lVar9;
        }
        uVar10 = uVar11 + 1;
        uVar13 = 0;
        if (lVar8 != 0) {
          uVar13 = (uint)((gh_long)(uVar14 - lVar1 * lVar9) / lVar8);
        }
        bVar3 = uVar11 < 0x13;
        lVar9 = lVar9 * 10;
        local_d8[uVar11] = uVar13;
        lVar8 = lVar8 * 10;
        uVar11 = uVar10;
      } while (bVar3);
      iVar5 = (int)uVar10;
    }
    if (-1 < iVar5) {
      uVar14 = 0;
      fVar15 = 1.0 - param_11;
      do {
        if ((uVar14 < 0xd) && ((1LL << (uVar14 & 0x3f) & 0x1248U) != 0)) {
          iVar5 = 0x10;
          iVar6 = param_3 + 10;
        }
        else {
          iVar6 = local_d8[uVar14] + param_3;
          iVar5 = -3;
        }
        iVar5 = *(int *)(self + (gh_long)iVar6 * 4 + 0x329d28) + iVar5;
        if (param_11 != 1.0) {
          fVar16 = (float)iVar5;
          if (param_11 <= 1.0) {
            fVar16 = fVar16 - fVar15 * fVar16;
          }
          else {
            fVar16 = fVar16 * param_11;
          }
          iVar5 = (int)fVar16;
        }
        param_5 = param_5 - iVar5;
        iVar5 = local_d8[uVar14] + param_3;
        iVar6 = *(int *)(self + (gh_long)iVar5 * 4 + 0x32a1d8);
        if (param_11 != 1.0) {
          fVar16 = (float)iVar6;
          if (param_11 <= 1.0) {
            fVar16 = fVar16 - fVar15 * fVar16;
          }
          else {
            fVar16 = fVar16 * param_11;
          }
          iVar6 = (int)fVar16;
        }
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(param_5), GH_ARG(param_6 - iVar6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        if ((uVar14 < 0xd) && ((1LL << (uVar14 & 0x3f) & 0x1248U) != 0)) {
          iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + 1;
          if (param_11 == 1.0) {
            iVar6 = *(int *)(self + 0x32a250);
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            iVar6 = iVar6 >> 1;
          }
          else {
            fVar16 = (float)iVar5;
            iVar6 = *(int *)(self + 0x32a250);
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            fVar17 = fVar16 * param_11;
            if (param_11 <= 1.0) {
              fVar17 = fVar16 - fVar15 * fVar16;
            }
            iVar5 = (int)fVar17;
            fVar16 = (float)(iVar6 >> 1);
            if (param_11 <= 1.0) {
              fVar16 = fVar16 - fVar15 * fVar16;
            }
            else {
              fVar16 = fVar16 * param_11;
            }
            iVar6 = (int)fVar16;
          }
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(param_3 + 10), GH_ARG(iVar5 + param_5), GH_ARG(param_6 - iVar6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        }
        uVar14 = uVar14 + 1;
      } while ((gh_long)(int)uVar10 + 1U != uVar14);
    }
  }
  else {
    if ((int)uVar13 < 10) {
      uVar10 = 0;
      uVar11 = 0;
      uVar4 = uVar13;
LAB_003b4094:
      local_d8[uVar11] = uVar4;
    }
    else {
      lVar8 = 10;
      lVar9 = 100;
      local_d8[0] = uVar13 % 10;
      uVar11 = 1;
      do {
        if ((gh_long)uVar14 < lVar9) {
          uVar4 = 0;
          if (lVar8 != 0) {
            uVar4 = (uint)((gh_long)uVar14 / lVar8);
          }
          uVar10 = uVar11 & 0xffffffff;
          goto LAB_003b4094;
        }
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = (gh_long)uVar14 / lVar9;
        }
        uVar10 = uVar11 + 1;
        uVar4 = 0;
        if (lVar8 != 0) {
          uVar4 = (uint)((gh_long)(uVar14 - lVar1 * lVar9) / lVar8);
        }
        bVar3 = uVar11 < 0x13;
        lVar9 = lVar9 * 10;
        local_d8[uVar11] = uVar4;
        lVar8 = lVar8 * 10;
        uVar11 = uVar10;
      } while (bVar3);
    }
    iVar5 = (int)uVar10;
    if (param_2 == 4) {
      if (-1 < iVar5) {
        iVar6 = 0;
        lVar8 = (gh_long)iVar5;
        do {
          iVar5 = local_d8[lVar8] + param_3;
          iVar7 = *(int *)(self + (gh_long)iVar5 * 4 + 0x32a1d8);
          if (param_11 != 1.0) {
            fVar15 = (float)iVar7;
            if (param_11 <= 1.0) {
              fVar15 = fVar15 - (1.0 - param_11) * fVar15;
            }
            else {
              fVar15 = fVar15 * param_11;
            }
            iVar7 = (int)fVar15;
          }
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(iVar6 + param_5), GH_ARG(param_6 - iVar7), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
          iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + -2;
          if (param_11 != 1.0) {
            fVar15 = (float)iVar5;
            if (param_11 <= 1.0) {
              fVar15 = fVar15 - (1.0 - param_11) * fVar15;
            }
            else {
              fVar15 = fVar15 * param_11;
            }
            iVar5 = (int)fVar15;
          }
          iVar6 = iVar5 + iVar6;
          *(int *)(self + 0x32c9bc) = iVar6;
          bVar3 = 0 < lVar8;
          lVar8 = lVar8 + -1;
        } while (bVar3);
      }
    }
    else if (param_2 == 1) {
      if (-1 < iVar5) {
        puVar12 = local_d8;
        lVar8 = (gh_long)iVar5 + 1;
        do {
          if (-1 < (int)uVar13) {
            iVar6 = *puVar12 + param_3;
            iVar5 = *(int *)(self + (gh_long)iVar6 * 4 + 0x329d28) + 1;
            if (param_11 == 1.0) {
              iVar7 = *(int *)(self + (gh_long)iVar6 * 4 + 0x32a1d8);
            }
            else {
              fVar16 = (float)iVar5;
              fVar15 = fVar16 * param_11;
              if (param_11 <= 1.0) {
                fVar15 = fVar16 - (1.0 - param_11) * fVar16;
              }
              iVar5 = (int)fVar15;
              fVar15 = (float)*(int *)(self + (gh_long)iVar6 * 4 + 0x32a1d8);
              if (param_11 <= 1.0) {
                fVar15 = fVar15 - (1.0 - param_11) * fVar15;
              }
              else {
                fVar15 = fVar15 * param_11;
              }
              iVar7 = (int)fVar15;
            }
            param_5 = param_5 - iVar5;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar6), GH_ARG(param_5), GH_ARG(param_6 - iVar7), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
          }
          lVar8 = lVar8 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((param_2 == 0) && (-1 < iVar5)) {
      iVar6 = 0;
      lVar8 = (gh_long)iVar5;
      do {
        iVar5 = local_d8[lVar8] + param_3;
        iVar7 = *(int *)(self + (gh_long)iVar5 * 4 + 0x32a1d8);
        if (param_11 != 1.0) {
          fVar15 = (float)iVar7;
          if (param_11 <= 1.0) {
            fVar15 = fVar15 - (1.0 - param_11) * fVar15;
          }
          else {
            fVar15 = fVar15 * param_11;
          }
          iVar7 = (int)fVar15;
        }
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar5), GH_ARG(iVar6 + param_5), GH_ARG(param_6 - iVar7), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_11));
        iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x329d28) + 1;
        if (param_11 != 1.0) {
          fVar15 = (float)iVar5;
          if (param_11 <= 1.0) {
            fVar15 = fVar15 - (1.0 - param_11) * fVar15;
          }
          else {
            fVar15 = fVar15 * param_11;
          }
          iVar5 = (int)fVar15;
        }
        iVar6 = iVar5 + iVar6;
        *(int *)(self + 0x32c9bc) = iVar6;
        bVar3 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar3);
    }
  }
  if (*(gh_long *)(lVar2 + 0x28) != local_88) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
