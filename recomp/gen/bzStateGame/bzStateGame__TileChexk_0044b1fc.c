/* bzStateGame::TileChexk_0044b1fc @ 0x0044b1fc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__TileChexk_0044b1fc(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  int param_8 = (int)gh_a7;

  gh_long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  gh_long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int in_stack_ffffffffffffff58 = 0;
  
  uVar4 = param_3 * 0x12;
  fVar13 = *(float *)(self + 0x32ba28);
  iVar5 = *(int *)(self + (gh_long)param_3 * 0x48 + 0x11c3a0);
  if (fVar13 == 1.0) {
    iVar6 = *(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3a4);
    iVar8 = *(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b0);
    iVar10 = *(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b4);
    iVar11 = *(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b8);
    iVar12 = *(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3bc);
  }
  else {
    fVar14 = (float)iVar5;
    if (fVar13 <= 1.0) {
      fVar13 = 1.0 - fVar13;
      fVar14 = fVar14 - fVar13 * fVar14;
      fVar15 = (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3a4) -
               fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3a4);
      fVar16 = (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b0) -
               fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b0);
      fVar17 = (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b4) -
               fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b4);
      fVar18 = (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b8) -
               fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b8);
      fVar13 = (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3bc) -
               fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3bc);
    }
    else {
      fVar14 = fVar13 * fVar14;
      fVar15 = fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3a4);
      fVar16 = fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b0);
      fVar17 = fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b4);
      fVar18 = fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3b8);
      fVar13 = fVar13 * (float)*(int *)(self + (gh_long)(int)uVar4 * 4 + 0x11c3bc);
    }
    iVar11 = (int)fVar18;
    iVar10 = (int)fVar17;
    iVar8 = (int)fVar16;
    iVar6 = (int)fVar15;
    iVar5 = (int)fVar14;
    iVar12 = (int)fVar13;
  }
  if (0 < *(int *)(self + 0x32c134)) {
    lVar1 = (gh_long)(int)uVar4 * 4;
    lVar9 = 0;
    piVar7 = (int *)(self + 0x8daf0);
    do {
      if (((*(int *)(self + 0x32c840) == 0) && (1 < piVar7[-1])) && (piVar7[-4] < 0x46)) {
        iVar3 = iVar8;
        iVar19 = iVar12;
        iVar2 = bzStateGame__PCCData_00449f48(GH_ARG(self), GH_ARG(0), GH_ARG((int)lVar9), GH_ARG(*piVar7), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(iVar8), GH_ARG(iVar10), GH_ARG(iVar11), GH_ARG(iVar12));
        if (-1 < iVar2) {
          bzStateGame__Poper3_0044b51c(GH_ARG(self), GH_ARG((int)lVar9), GH_ARG(*(int *)(self + (gh_long)(int)(uVar4 | 1) * 4 + 0x11c378)), GH_ARG(*(int *)(self + lVar1 + 0x11c380)), GH_ARG(*(int *)(self + lVar1 + 0x11c384)), GH_ARG(*(int *)(self + lVar1 + 0x11c388)), GH_ARG(*(int *)(self + lVar1 + 0x11c38c)), GH_ARG(iVar3), GH_ARG(iVar5 + param_4), GH_ARG(iVar6 + param_5), GH_ARG(iVar19), GH_ARG(in_stack_ffffffffffffff58), GH_ARG(param_3));
        }
      }
      lVar9 = lVar9 + 1;
      piVar7 = piVar7 + 0xa2;
    } while (lVar9 < *(int *)(self + 0x32c134));
  }
  return 0;
  return 0;
}
