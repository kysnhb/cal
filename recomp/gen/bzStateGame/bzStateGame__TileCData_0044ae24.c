/* bzStateGame::TileCData_0044ae24 @ 0x0044ae24 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined8 bzStateGame__TileCData_0044ae24(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11)
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
  int param_10 = (int)gh_a9;
  int param_11 = (int)gh_a10;
  int param_12 = (int)gh_a11;

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = param_3 * 0x12;
  fVar5 = *(float *)(self + 0x32ba28);
  iVar1 = *(int *)(self + (gh_long)param_3 * 0x48 + 0x11c390);
  if (fVar5 == 1.0) {
    *(int *)(self + 0x32c86c) = iVar1;
    iVar3 = *(int *)(self + (gh_long)iVar2 * 4 + 0x11c394);
    *(int *)(self + 0x32c870) = iVar3;
    iVar4 = *(int *)(self + (gh_long)iVar2 * 4 + 0x11c398);
    *(int *)(self + 0x32c874) = iVar4;
    iVar2 = *(int *)(self + (gh_long)iVar2 * 4 + 0x11c39c);
  }
  else {
    fVar6 = (float)iVar1;
    if (fVar5 <= 1.0) {
      fVar6 = fVar6 - (1.0 - fVar5) * fVar6;
    }
    else {
      fVar6 = fVar5 * fVar6;
    }
    iVar1 = (int)fVar6;
    *(int *)(self + 0x32c86c) = iVar1;
    fVar6 = (float)*(int *)(self + (gh_long)iVar2 * 4 + 0x11c394);
    if (fVar5 <= 1.0) {
      fVar6 = fVar6 - (1.0 - fVar5) * fVar6;
    }
    else {
      fVar6 = fVar5 * fVar6;
    }
    iVar3 = (int)fVar6;
    *(int *)(self + 0x32c870) = iVar3;
    fVar6 = (float)*(int *)(self + (gh_long)iVar2 * 4 + 0x11c398);
    if (fVar5 <= 1.0) {
      fVar6 = fVar6 - (1.0 - fVar5) * fVar6;
    }
    else {
      fVar6 = fVar5 * fVar6;
    }
    iVar4 = (int)fVar6;
    *(int *)(self + 0x32c874) = iVar4;
    fVar6 = (float)*(int *)(self + (gh_long)iVar2 * 4 + 0x11c39c);
    if (fVar5 <= 1.0) {
      fVar5 = fVar6 - (1.0 - fVar5) * fVar6;
    }
    else {
      fVar5 = fVar5 * fVar6;
    }
    iVar2 = (int)fVar5;
  }
  *(int *)(self + 0x32c878) = iVar2;
  if (param_8 != 1) {
    if (param_8 != 0) {
      return 0xffffffff;
    }
    fVar9 = (float)param_11;
    fVar10 = (float)iVar4;
    fVar5 = (float)param_12;
    fVar7 = (float)(param_9 + param_6);
    fVar8 = (float)(iVar1 + param_4);
    fVar6 = (float)iVar2;
    if (fVar9 <= fVar10) {
      if ((fVar7 < fVar8) || (fVar10 + fVar8 <= fVar7)) {
        iVar1 = 1;
        if ((fVar7 + fVar9 <= fVar8) || (fVar10 + fVar8 < fVar7 + fVar9)) goto LAB_0044b0a4;
      }
    }
    else if ((fVar8 <= fVar7) || (fVar7 + fVar9 <= fVar8)) {
      iVar1 = 1;
      if ((fVar10 + fVar8 <= fVar7) || (fVar7 + fVar9 <= fVar10 + fVar8)) goto LAB_0044b0a4;
    }
    iVar1 = 2;
LAB_0044b0a4:
    fVar7 = (float)(param_10 + param_7);
    fVar8 = (float)(iVar3 + param_5);
    if (fVar5 <= fVar6) {
      if ((fVar7 < fVar8) || (fVar8 + fVar6 <= fVar7)) {
        if (fVar7 + fVar5 <= fVar8) {
          return 0xffffffff;
        }
        if (fVar8 + fVar6 < fVar7 + fVar5) {
          return 0xffffffff;
        }
        if (iVar1 != 2) {
          return 0xffffffff;
        }
        return 1;
      }
    }
    else if ((fVar8 <= fVar7) || (fVar7 + fVar5 <= fVar8)) {
      if (fVar8 + fVar6 <= fVar7) {
        return 0xffffffff;
      }
      if (fVar7 + fVar5 <= fVar8 + fVar6) {
        return 0xffffffff;
      }
      if (iVar1 != 2) {
        return 0xffffffff;
      }
      return 1;
    }
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return 1;
  }
  fVar9 = (float)param_11;
  fVar10 = (float)iVar4;
  fVar5 = (float)param_12;
  fVar7 = (float)(iVar1 + param_4);
  fVar8 = (float)((param_6 - param_9) - param_11);
  fVar6 = (float)iVar2;
  if (fVar9 <= fVar10) {
    if ((fVar8 < fVar7) || (fVar10 + fVar7 <= fVar8)) {
      iVar1 = 1;
      if ((fVar9 + fVar8 <= fVar7) || (fVar10 + fVar7 < fVar9 + fVar8)) goto LAB_0044b140;
    }
  }
  else if ((fVar7 <= fVar8) || (fVar9 + fVar8 <= fVar7)) {
    iVar1 = 1;
    if ((fVar10 + fVar7 <= fVar8) || (fVar9 + fVar8 <= fVar10 + fVar7)) goto LAB_0044b140;
  }
  iVar1 = 2;
LAB_0044b140:
  fVar7 = (float)(param_10 + param_7);
  fVar8 = (float)(iVar3 + param_5);
  if (fVar5 <= fVar6) {
    if ((fVar7 < fVar8) || (fVar8 + fVar6 <= fVar7)) {
      if (fVar7 + fVar5 <= fVar8) {
        return 0xffffffff;
      }
      if (fVar8 + fVar6 < fVar7 + fVar5) {
        return 0xffffffff;
      }
      if (iVar1 != 2) {
        return 0xffffffff;
      }
      return 1;
    }
  }
  else if ((fVar8 <= fVar7) || (fVar7 + fVar5 <= fVar8)) {
    if (fVar8 + fVar6 <= fVar7) {
      return 0xffffffff;
    }
    if (fVar7 + fVar5 <= fVar8 + fVar6) {
      return 0xffffffff;
    }
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return 1;
  }
  if (iVar1 != 2) {
    return 0xffffffff;
  }
  return 1;
}

