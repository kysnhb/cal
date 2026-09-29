/* bzStateGame::TileRGBimg_00437c50 @ 0x00437c50 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__TileRGBimg_00437c50(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  float param_8 = gh_b2f(gh_a7);
  float param_9 = gh_b2f(gh_a8);

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  gh_long lVar7;
  gh_long lVar8;
  float fVar9;
  float fVar10;
  
  if (0 < param_2) {
    iVar1 = *(int *)(self + (gh_long)(param_2 * 0x12) * 4 + 0x11c378);
    lVar7 = (gh_long)*(int *)(self + (gh_long)(param_2 * 0x12 + -0x12) * 4 + 0x11c378) * 7;
    if ((int)lVar7 < (int)((gh_long)iVar1 * 7)) {
      lVar8 = (gh_long)*(int *)(self + (gh_long)(param_2 * 0x12 + -0x12) * 4 + 0x11c378) * 0x1c + 0x129e40
      ;
      do {
        iVar5 = *(int *)(self + lVar8 + -4);
        if (param_9 == 1.0) {
          iVar6 = *(int *)(self + lVar8);
        }
        else {
          fVar9 = (float)iVar5;
          fVar10 = fVar9 * param_9;
          if (param_9 <= 1.0) {
            fVar10 = fVar9 - (1.0 - param_9) * fVar9;
          }
          iVar5 = (int)fVar10;
          fVar10 = (float)*(int *)(self + lVar8);
          if (param_9 <= 1.0) {
            fVar10 = fVar10 - (1.0 - param_9) * fVar10;
          }
          else {
            fVar10 = fVar10 * param_9;
          }
          iVar6 = (int)fVar10;
        }
        iVar2 = param_5;
        iVar3 = param_6;
        iVar4 = param_7;
        if (*(int *)(self + lVar8 + 8) != 10) {
          iVar2 = 0xff;
          iVar3 = 0xff;
          iVar4 = 0xff;
        }
        bzStateGame__TileImg_drawImage_004379e0(GH_ARG(self), GH_ARG(*(int *)(self + lVar8 + -8)), GH_ARG(iVar5 + param_3), GH_ARG(iVar6 + param_4), GH_ARG(iVar2), GH_ARG(iVar3), GH_ARG(iVar4), GH_ARG(param_8), GH_ARG(0), GH_ARG(param_9));
        lVar7 = lVar7 + 7;
        lVar8 = lVar8 + 0x1c;
      } while (lVar7 < (gh_long)iVar1 * 7);
    }
  }
  return 0;
  return 0;
}
