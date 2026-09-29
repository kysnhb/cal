/* bzStateGame::Tileimg_00433acc @ 0x00433acc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__Tileimg_00433acc(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  float param_6 = gh_b2f(gh_a5);
  float param_7 = gh_b2f(gh_a6);

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  gh_long lVar5;
  gh_long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    iVar1 = *(int *)(self + (gh_long)(param_2 * 0x12) * 4 + 0x11c378);
    lVar5 = (gh_long)*(int *)(self + (gh_long)(param_2 * 0x12 + -0x12) * 4 + 0x11c378) * 7;
    if ((int)lVar5 < (int)((gh_long)iVar1 * 7)) {
      lVar6 = (gh_long)*(int *)(self + (gh_long)(param_2 * 0x12 + -0x12) * 4 + 0x11c378) * 0x1c + 0x129e40
      ;
      do {
        iVar2 = *(int *)(self + lVar6 + -4);
        if (param_7 == 1.0) {
          iVar4 = *(int *)(self + lVar6);
          iVar3 = iVar4 + param_4;
        }
        else {
          fVar7 = (float)iVar2;
          fVar8 = (float)*(int *)(self + lVar6);
          fVar9 = fVar7 * param_7;
          if (param_7 <= 1.0) {
            fVar9 = fVar7 - (1.0 - param_7) * fVar7;
          }
          iVar2 = (int)fVar9;
          fVar7 = fVar8 - (1.0 - param_7) * fVar8;
          fVar9 = fVar8 * param_7;
          if (param_7 <= 1.0) {
            fVar9 = fVar7;
          }
          iVar3 = (int)fVar9 + param_4;
          if (param_7 <= 1.0) {
            iVar4 = (int)fVar7;
          }
          else {
            iVar4 = (int)(fVar8 * param_7);
          }
        }
        bzStateGame__TileImg_rotateImage_00470380(GH_ARG(self), GH_ARG(*(int *)(self + lVar6 + -8)), GH_ARG(param_3), GH_ARG(iVar2), GH_ARG(0), GH_ARG(iVar3), GH_ARG(param_6), GH_ARG(param_5), GH_ARG(param_7), GH_ARG(1), GH_ARG(param_3), GH_ARG(iVar4 + param_4), GH_ARG(*(int *)(self + lVar6 + 4)));
        lVar5 = lVar5 + 7;
        lVar6 = lVar6 + 0x1c;
      } while (lVar5 < (gh_long)iVar1 * 7);
    }
  }
  return 0;
  return 0;
}
