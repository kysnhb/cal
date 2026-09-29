/* bzStateGame::ImgMoneyNumber_003fcac4 @ 0x003fcac4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4d796
#define DAT_00a4d796 (*(undefined1 *)IMG(0x00a4d796))
gh_long bzStateGame__ImgMoneyNumber_003fcac4(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  float param_8 = gh_b2f(gh_a7);
  float param_9 = gh_b2f(gh_a8);
  undefined * param_10 = (undefined *)(uintptr_t)gh_a9;

  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  gh_long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = *(gh_long *)param_2;
  iVar5 = (int)*(ulong *)(lVar6 + -0x18);
  iVar2 = iVar5 + -1;
  if (iVar2 < 0) {
LAB_003fcc54:
    if (param_9 == 1.0) {
      iVar5 = 0x1e;
    }
    else {
      if (param_9 <= 1.0) {
        fVar9 = 30.0 - (1.0 - param_9) * 30.0;
      }
      else {
        fVar9 = param_9 * 30.0;
      }
      iVar5 = (int)fVar9;
    }
    iVar2 = FUN_009d6cd4(GH_ARG(param_10), GH_ARG(&DAT_00a4d796), GH_ARG(0));
    if (iVar2 == 0) {
      iVar2 = *(int *)(self + 0x32a5bc);
      if (param_9 != 1.0) {
        fVar9 = (float)iVar2;
        if (param_9 <= 1.0) {
          fVar9 = fVar9 - (1.0 - param_9) * fVar9;
        }
        else {
          fVar9 = fVar9 * param_9;
        }
        iVar2 = (int)fVar9;
      }
      iVar4 = 0xf9;
    }
    else {
      iVar2 = *(int *)(self + 0x32a5c0);
      if (param_9 != 1.0) {
        fVar9 = (float)iVar2;
        if (param_9 <= 1.0) {
          fVar9 = fVar9 - (1.0 - param_9) * fVar9;
        }
        else {
          fVar9 = fVar9 * param_9;
        }
        iVar2 = (int)fVar9;
      }
      iVar4 = 0xfa;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar4), GH_ARG(param_3 - iVar5), GH_ARG(param_4 - iVar2), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(0), GH_ARG(param_9))
    ;
    return 0;
  }
  uVar7 = (ulong)iVar2;
  if (uVar7 < *(ulong *)(lVar6 + -0x18)) {
    iVar5 = iVar5 + -2;
    do {
      if (-1 < *(int *)(lVar6 + -8)) {
        FUN_009d719c(GH_ARG(param_2));
        lVar6 = *(gh_long *)param_2;
      }
      cVar1 = *(char *)(lVar6 + uVar7);
      if (cVar1 == ',') {
        uVar3 = 10;
LAB_003fcb8c:
        lVar6 = (gh_long)(int)uVar3 + 0x14;
        iVar2 = *(int *)(self + lVar6 * 4 + 0x329d28);
        if (param_9 == 1.0) {
          iVar4 = *(int *)(self + lVar6 * 4 + 0x32a1d8);
        }
        else {
          fVar8 = (float)iVar2;
          fVar9 = fVar8 * param_9;
          if (param_9 <= 1.0) {
            fVar9 = fVar8 - (1.0 - param_9) * fVar8;
          }
          iVar2 = (int)fVar9;
          fVar9 = (float)*(int *)(self + lVar6 * 4 + 0x32a1d8);
          if (param_9 <= 1.0) {
            fVar9 = fVar9 - (1.0 - param_9) * fVar9;
          }
          else {
            fVar9 = fVar9 * param_9;
          }
          iVar4 = (int)fVar9;
        }
        param_3 = param_3 - iVar2;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG((int)lVar6), GH_ARG(param_3), GH_ARG(param_4 - iVar4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(0), GH_ARG(param_9));
      }
      else {
        if (cVar1 == '.') {
          uVar3 = 0xb;
          goto LAB_003fcb8c;
        }
        uVar3 = (int)cVar1 - 0x30;
        if (uVar3 < 10) goto LAB_003fcb8c;
      }
      if (iVar5 < 0) goto LAB_003fcc54;
      lVar6 = *(gh_long *)param_2;
      uVar7 = (ulong)iVar5;
      iVar5 = iVar5 + -1;
    } while (uVar7 < *(ulong *)(lVar6 + -0x18));
  }
                    
  FUN_009d1e68(GH_ARG("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"), GH_ARG(uVar7));
  return 0;
}
