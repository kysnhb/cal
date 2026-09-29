/* bzStateGame::joyPad_00432894 @ 0x00432894 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
#undef j_vy
#define j_vy (*(undefined4 *)IMG(0x00d23c68))
#undef j_vx
#define j_vx (*(undefined4 *)IMG(0x00d23c64))
gh_long bzStateGame__joyPad_00432894(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  float param_3 = gh_b2f(gh_a2);
  float param_4 = gh_b2f(gh_a3);
  float param_5 = gh_b2f(gh_a4);
  float param_6 = gh_b2f(gh_a5);

  float *pfVar1;
  int in_w4 = 0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  gh_long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 == param_5) {
    return 0;
  }
  fVar12 = param_6 - param_4;
  fVar13 = param_5 - param_3;
  fVar10 = fVar12 / fVar13;
  fVar6 = atanf(fVar10);
  pfVar1 = (float *)(self + (gh_long)param_2 * 0x288 + 0x8dd34);
  *pfVar1 = fVar6;
  fVar6 = cosf(fVar6);
  j_vy = sinf(*pfVar1);
  if (j_vy < 0.0) {
    j_vy = -j_vy;
  }
  j_vx = fVar6;
  if (fVar12 <= 0.0) {
    j_vy = -j_vy;
    if (fVar13 <= 0.0) {
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
      }
      *pfVar1 = *pfVar1 + 3.1415927;
      j_vx = -fVar6;
    }
    else {
      *pfVar1 = *pfVar1 + 6.2831855;
      if (fVar6 < 0.0) {
        j_vx = -fVar6;
      }
    }
  }
  else if (fVar13 <= 0.0) {
    if (fVar6 < 0.0) {
      fVar6 = -fVar6;
    }
    *pfVar1 = *pfVar1 + 3.1415927;
    j_vx = -fVar6;
  }
  else if (fVar6 < 0.0) {
    j_vx = -fVar6;
  }
  lVar5 = (gh_long)param_2;
  if (param_2 == 0) {
    iVar9 = *(int *)(self + 0x1b10);
    fVar6 = param_6;
    fVar7 = param_5;
    if ((float)(iVar9 * iVar9) < fVar13 * fVar13 + fVar12 * fVar12) {
      fVar6 = atanf(fVar10);
      fVar7 = cosf(fVar6);
      iVar3 = *(int *)(self + 0x1b10);
      fVar6 = atanf(fVar10);
      fVar8 = cosf(fVar6);
      fVar11 = 1.0;
      fVar6 = fVar8 * (float)iVar3;
      if (fVar7 * (float)iVar9 < 0.0) {
        fVar6 = -(fVar8 * (float)iVar3);
      }
      fVar7 = fVar11;
      if (fVar13 <= 0.0) {
        fVar7 = -1.0;
      }
      joyX2 = fVar7 * fVar6 + param_3;
      iVar9 = *(int *)(self + 0x1b10);
      fVar6 = atanf(fVar10);
      fVar13 = sinf(fVar6);
      iVar3 = *(int *)(self + 0x1b10);
      fVar6 = atanf(fVar10);
      fVar10 = sinf(fVar6);
      fVar6 = fVar10 * (float)iVar3;
      if (fVar13 * (float)iVar9 < 0.0) {
        fVar6 = -(fVar10 * (float)iVar3);
      }
      if (fVar12 <= 0.0) {
        fVar11 = -1.0;
      }
      fVar6 = fVar11 * fVar6 + param_4;
      fVar7 = joyX2;
    }
    joyX2 = fVar7;
    uVar2 = 1;
    joyY2 = fVar6;
  }
  else {
    uVar2 = 0x14;
  }
  *(undefined4 *)(self + lVar5 * 0x288 + 0x8dd24) = uVar2;
  iVar9 = *(int *)(self + lVar5 * 0x288 + 0x8dae0);
  iVar3 = (int)(*pfVar1 * 100.0);
  if ((iVar9 == 0xf) || (0x27 < iVar9 && iVar9 != 0x41)) {
    *(int *)(self + lVar5 * 0x288 + 0x8dd38) = iVar3;
    goto LAB_00432cc0;
  }
  if (0x13b < iVar3 - 0x9dU) {
    *(undefined4 *)(self + lVar5 * 0x288 + 0x8dad8) = 0;
    *(int *)(self + lVar5 * 0x288 + 0x8dd38) = iVar3;
    if (param_2 != 0) goto LAB_00432cc0;
    if ((iVar9 == 10) && (*(int *)(self + 0x32c84c) == 1)) {
      if (*(int *)(self + 0x8dadc) == 0) {
        if (*(int *)(self + 0x32c844) == 0) {
          iVar9 = 4;
        }
        else {
          iVar9 = 5;
        }
      }
      else {
        if (*(int *)(self + 0x8dadc) != 1) goto LAB_00432cbc;
        iVar9 = 6;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar9), GH_ARG(0), GH_ARG(in_w4));
    }
LAB_00432cbc:
    *(int *)(self + 0x32c84c) = 0;
    goto LAB_00432cc0;
  }
  *(undefined4 *)(self + lVar5 * 0x288 + 0x8dad8) = 1;
  iVar4 = 0x13a;
  if (0x13a < iVar3) {
    iVar4 = 0x3ae;
  }
  *(int *)(self + lVar5 * 0x288 + 0x8dd38) = iVar4 - iVar3;
  if (param_2 != 0) goto LAB_00432cc0;
  if ((iVar9 == 10) && (*(int *)(self + 0x32c84c) == 0)) {
    if (*(int *)(self + 0x8dadc) == 1) {
      if (*(int *)(self + 0x32c844) == 0) {
        iVar9 = 4;
      }
      else {
        iVar9 = 5;
      }
    }
    else {
      if (*(int *)(self + 0x8dadc) != 0) goto LAB_00432c9c;
      iVar9 = 6;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar9), GH_ARG(1), GH_ARG(in_w4));
  }
LAB_00432c9c:
  *(int *)(self + 0x32c84c) = 1;
LAB_00432cc0:
  fVar6 = atan2f(param_4 - param_6,param_3 - param_5);
  *(float *)(self + lVar5 * 0x288 + 0x8dd30) = fVar6;
  return 0;
  return 0;
}
