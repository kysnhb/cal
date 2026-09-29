/* bzStateGame::LPSOimg_0046bd40 @ 0x0046bd40 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
uint bzStateGame__LPSOimg_0046bd40(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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
  int param_11 = (int)gh_a10;

  int iVar1;
  int iVar2;
  int iVar3;
  gh_long lVar4;
  int *piVar5;
  int iVar6;
  gh_long lVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
  lVar7 = (gh_long)param_2;
  if (iVar2 < -5) {
    iVar6 = 0xb3;
    iVar1 = param_2 * 3 + *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) + -0x1e;
    iVar2 = 2;
LAB_0046be54:
    iVar3 = 0;
  }
  else {
    iVar1 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    if (*(int *)(self + 0x115c) + 0x82 < iVar2) {
      iVar1 = param_2 * 3 + iVar1 + -0x1e;
      iVar2 = *(int *)(self + 0x115c) + -0xf;
      iVar6 = 0xb4;
      goto LAB_0046be54;
    }
    if (-0x29 < iVar1) {
      if (iVar1 <= *(int *)(self + 0x1158) + 0x28) goto LAB_0046be70;
      iVar1 = *(int *)(self + 0x1158) + -0x10;
      iVar2 = param_2 * 3 + iVar2 + -0x96;
      iVar6 = 0x9e;
      goto LAB_0046be54;
    }
    iVar2 = param_2 * 3 + iVar2 + -0x96;
    iVar6 = 0x9e;
    iVar1 = 2;
    iVar3 = 1;
  }
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar6), GH_ARG(iVar1), GH_ARG(iVar2), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(1.0), GH_ARG(iVar3), GH_ARG(1.0));
LAB_0046be70:
  iVar1 = param_5 * 0x12;
  *(undefined4 *)(self + lVar7 * 0x288 + 0x8daf4) = 0;
  iVar2 = *(int *)(self + (gh_long)iVar1 * 4 + 0xc1658);
  lVar4 = (gh_long)*(int *)(self + (gh_long)(iVar1 + -0x12) * 4 + 0xc1658) * 7;
  if ((int)lVar4 < (int)((gh_long)iVar2 * 7)) {
    piVar5 = (int *)(self + (gh_long)*(int *)(self + (gh_long)(iVar1 + -0x12) * 4 + 0xc1658) * 0x1c +
                            0xd00bc);
    do {
      switch(piVar5[3]) {
      case 8:
      case 0xb:
switchD_0046bf24_caseD_8:
        iVar6 = *piVar5;
        if (param_10 == 1.0) {
          iVar3 = -iVar6;
          if (param_6 == 0) {
            iVar3 = iVar6;
          }
          *(int *)(self + lVar7 * 0x288 + 0x8dafc) = iVar3 + param_3;
          iVar6 = piVar5[1];
        }
        else {
          fVar8 = (float)iVar6;
          fVar9 = fVar8 * param_10;
          if (param_10 <= 1.0) {
            fVar9 = fVar8 - (1.0 - param_10) * fVar8;
          }
          iVar6 = -(int)fVar9;
          if (param_6 == 0) {
            iVar6 = (int)fVar9;
          }
          *(int *)(self + lVar7 * 0x288 + 0x8dafc) = iVar6 + param_3;
          fVar9 = (float)piVar5[1];
          if (param_10 <= 1.0) {
            fVar9 = fVar9 - (1.0 - param_10) * fVar9;
          }
          else {
            fVar9 = fVar9 * param_10;
          }
          iVar6 = (int)fVar9;
        }
        *(int *)(self + lVar7 * 0x288 + 0x8db00) = iVar6 + param_4;
        break;
      case 9:
      case 0xd:
        if (*(int *)(self + lVar7 * 0x288 + 0x8dd4c) == piVar5[3]) goto switchD_0046bf24_caseD_8;
      }
      lVar4 = lVar4 + 7;
      piVar5 = piVar5 + 7;
    } while (lVar4 < (gh_long)iVar2 * 7);
  }
  return *(uint *)(self + (gh_long)iVar1 * 4 + 0xc1660) &
         ((int)*(uint *)(self + (gh_long)iVar1 * 4 + 0xc1660) >> 0x1f ^ 0xffffffffU);
}

