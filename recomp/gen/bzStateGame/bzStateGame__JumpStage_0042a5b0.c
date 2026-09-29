/* bzStateGame::JumpStage_0042a5b0 @ 0x0042a5b0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__JumpStage_0042a5b0(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *(int *)(self + 0x32c8e8) = param_2;
  iVar10 = *(int *)(self + 0x8da28);
  if (0 < iVar10) {
    iVar7 = *(int *)(self + 0x8da24);
    do {
      iVar4 = iVar10 + -1;
      if (0 < iVar7) {
        iVar6 = *(int *)(self + 0x8da30);
        iVar5 = 0;
        do {
          if (0 < iVar6) {
            iVar2 = *(int *)(self + (gh_long)(iVar5 + iVar7 * iVar4 +
                                          (*(int *)(self + 0x8da28) * iVar7 + 3) * param_2) * 4 +
                                    0x62b90);
            iVar8 = *(int *)(self + 0x8da2c);
            iVar7 = 0;
            do {
              if (0 < iVar8) {
                iVar9 = 0;
                do {
                  iVar3 = *(int *)(self + (gh_long)(iVar9 + iVar8 * (iVar7 + iVar6 * iVar2)) * 4 +
                                          0x14990);
                  iVar11 = 0;
                  if ((1 < iVar3 - 500U) && (iVar3 != 0x23a)) {
                    iVar11 = iVar3;
                  }
                  *(int *)(self + (gh_long)(iVar7 + iVar6 * iVar4) * 4 +
                                  (gh_long)(iVar9 + iVar5 * iVar8) * 0x2d0 + 0x140598) = iVar11;
                  iVar8 = *(int *)(self + 0x8da2c);
                  iVar6 = *(int *)(self + 0x8da30);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar8);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
            iVar7 = *(int *)(self + 0x8da24);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
      }
      bVar1 = 1 < iVar10;
      iVar10 = iVar4;
    } while (bVar1);
  }
  return 0;
  return 0;
}
