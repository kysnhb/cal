/* bzStateGame::PXYChexk_0043875c @ 0x0043875c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__PXYChexk_0043875c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;

  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *extraout_x1 = 0;
  int *extraout_x1_00 = 0;
  int *extraout_x1_01 = 0;
  int *extraout_x1_02 = 0;
  int *extraout_x1_03 = 0;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  uint64_t gh_frame64[28] = {0};   /* 원작 스택 프레임 (SP-0xc8 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xc8;
#define local_c8 (*(int *)(gh_fb - 0xc8))
#define local_c4 (*(int *)(gh_fb - 0xc4))
#define local_98 (*(int *)(gh_fb - 0x98))
#define local_84 (*(int *)(gh_fb - 0x84))
#define local_74 (*(int *)(gh_fb - 0x74))
#define local_70 (*(int *)(gh_fb - 0x70))
  
  uVar12 = param_3 * 0x12;
  if (*(int *)(self + (gh_long)(int)(uVar12 | 1) * 4 + 0xc1658) == 99) {
    local_c8 = 1;
    if (2 < param_3 - 0xbcU) {
      local_c8 = 2;
    }
    local_c4 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8db04) / 10;
    iVar16 = *(int *)(self + 0x32b824);
    iVar15 = *(int *)(self + 0x32b824) + 1;
  }
  else {
    iVar16 = *(int *)(self + 0x32c134);
    iVar15 = iVar16;
    if (param_2 < iVar16) {
      local_c8 = 1;
      local_c4 = 0;
      iVar16 = *(int *)(self + 0x32b824);
    }
    else {
      local_c8 = 1;
      local_c4 = 0;
      if (*(int *)(self + 0x32c840) < 1) {
        iVar15 = 0;
      }
    }
  }
  fVar22 = *(float *)(self + (gh_long)param_2 * 0x288 + 0x8db24);
  local_84 = *(int *)(self + (gh_long)param_3 * 0x48 + 0xc1690);
  if (fVar22 == 1.0) {
    local_70 = *(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1694);
    local_74 = *(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1698);
    iVar14 = *(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc169c);
  }
  else {
    fVar23 = (float)local_84;
    if (fVar22 <= 1.0) {
      fVar22 = 1.0 - fVar22;
      fVar23 = fVar23 - fVar22 * fVar23;
      fVar24 = (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1694) -
               fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1694);
      fVar25 = (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1698) -
               fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1698);
      fVar22 = (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc169c) -
               fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc169c);
    }
    else {
      fVar23 = fVar22 * fVar23;
      fVar24 = fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1694);
      fVar25 = fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1698);
      fVar22 = fVar22 * (float)*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc169c);
    }
    local_70 = (int)fVar24;
    local_84 = (int)fVar23;
    local_74 = (int)fVar25;
    iVar14 = (int)fVar22;
  }
  piVar2 = (int *)(self + 0x32ba14);
  piVar17 = (int *)(self + 0x32ba24);
  iVar13 = *(int *)(self + 0x32ba20);
  iVar11 = *piVar2;
  iVar21 = *piVar17;
  piVar3 = (int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1668);
  piVar4 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8db04);
  iVar7 = 0;
  if (iVar11 != 0) {
    iVar7 = iVar13 / iVar11;
  }
  uVar5 = 0;
  if (iVar11 != 0) {
    uVar5 = iVar21 / iVar11;
  }
  piVar18 = (int *)(self + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) +
                           (gh_long)iVar7 * 0x2d0 + 0x1405e8);
  piVar9 = piVar17;
  iVar8 = 0x14;
  do {
    piVar20 = piVar18;
    iVar19 = 0;
    do {
      iVar6 = *piVar20;
      if ((0 < iVar6) && (*(int *)(self + (gh_long)(iVar6 * 0x12 + 2) * 4 + 0x11c378) == 0x31)) {
        iVar27 = *piVar2 * iVar19 - (iVar13 - iVar7 * iVar11);
        iVar10 = (*piVar2 * iVar8 - (iVar21 - uVar5 * iVar11)) + *(int *)(self + 0x32ba40);
        iVar26 = local_74;
        iVar6 = bzStateGame__TileCData_0044ae24(GH_ARG(self), GH_ARG((int)piVar9), GH_ARG(iVar6), GH_ARG(iVar27), GH_ARG(iVar10), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_84), GH_ARG(local_70), GH_ARG(local_74), GH_ARG(iVar14));
        piVar9 = extraout_x1;
        if (0 < iVar6) {
          bzStateGame__TilePoper2_0044cbe4(GH_ARG(self), GH_ARG(*piVar4 / 10 + local_c4), GH_ARG(*piVar3), GH_ARG(0x12), GH_ARG(*piVar20), GH_ARG(iVar7 + iVar19), GH_ARG(iVar8 + uVar5), GH_ARG(iVar27), GH_ARG(iVar10), GH_ARG(param_2), GH_ARG(iVar26), GH_ARG(local_c8));
          piVar9 = extraout_x1_00;
          goto LAB_00438b90;
        }
      }
      piVar20 = piVar20 + 0xb4;
      bVar1 = iVar19 < 0x27;
      iVar19 = iVar19 + 1;
    } while (bVar1);
    iVar19 = iVar8 + -1;
    piVar18 = piVar18 + -1;
    bVar1 = 0 < iVar8;
    iVar8 = iVar19;
  } while (iVar19 != 0 && bVar1);
LAB_00438b90:
  if (iVar15 < iVar16) {
    local_98 = -1;
    do {
      iVar13 = iVar15;
      if ((((1 < *(int *)(self + (gh_long)iVar15 * 0x288 + 0x8daec)) &&
           (*(int *)(self + (gh_long)iVar15 * 0x288 + 0x8dae0) < 0x50)) &&
          ((iVar11 = param_5, iVar21 = local_70,
           iVar7 = bzStateGame__PCCData_00449f48(GH_ARG(self), GH_ARG(0), GH_ARG(iVar15), GH_ARG(*(int *)(self + (gh_long)iVar15 * 0x288 + 0x8daf0)), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_84), GH_ARG(local_70), GH_ARG(local_74), GH_ARG(iVar14)),
           -1 < iVar7 ||
           (piVar9 = extraout_x1_01, *(int *)(self + (gh_long)param_2 * 0x288 + 0x8daf0) == 0xb1)))) &&
         (bzStateGame__Poper_0046827c(GH_ARG(self), GH_ARG(*piVar4 / 10), GH_ARG(*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1660)), GH_ARG(*(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1664)), GH_ARG(*piVar3), GH_ARG(iVar11), GH_ARG(iVar15), GH_ARG(param_2), GH_ARG(iVar21)), piVar9 = extraout_x1_02, iVar13 = iVar16,
         local_98 = iVar15, *(int *)(self + (gh_long)(int)uVar12 * 4 + 0xc1660) != 0x79)) {
        iVar13 = iVar15;
      }
      iVar15 = iVar13 + 1;
    } while (iVar15 < iVar16);
    if (local_98 != -1) {
      return 0;
    }
  }
  iVar15 = *(int *)(self + 0x32ba20);
  iVar16 = *piVar2;
  iVar13 = *piVar17;
  iVar11 = 0;
  if (iVar16 != 0) {
    iVar11 = iVar15 / iVar16;
  }
  uVar12 = 0;
  if (iVar16 != 0) {
    uVar12 = iVar13 / iVar16;
  }
  piVar17 = (int *)(self + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) +
                           (gh_long)iVar11 * 0x2d0 + 0x1405e8);
  iVar21 = 0x14;
  do {
    piVar18 = piVar17;
    iVar7 = 0;
    do {
      iVar8 = *piVar18;
      if ((0 < iVar8) && (0x30 < *(int *)(self + (gh_long)(iVar8 * 0x12 + 2) * 4 + 0x11c378))) {
        iVar6 = *piVar2 * iVar7 - (iVar15 - iVar11 * iVar16);
        iVar19 = (*piVar2 * iVar21 - (iVar13 - uVar12 * iVar16)) + *(int *)(self + 0x32ba40);
        iVar10 = iVar6;
        iVar27 = local_74;
        iVar8 = bzStateGame__TileCData_0044ae24(GH_ARG(self), GH_ARG((int)piVar9), GH_ARG(iVar8), GH_ARG(iVar6), GH_ARG(iVar19), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_84), GH_ARG(local_70), GH_ARG(local_74), GH_ARG(iVar14));
        piVar9 = extraout_x1_03;
        if (0 < iVar8) {
          bzStateGame__TilePoper2_0044cbe4(GH_ARG(self), GH_ARG(*piVar4 / 10 + local_c4), GH_ARG(*piVar3), GH_ARG(iVar10), GH_ARG(*piVar18), GH_ARG(iVar11 + iVar7), GH_ARG(iVar21 + uVar12), GH_ARG(iVar6), GH_ARG(iVar19), GH_ARG(param_2), GH_ARG(iVar27), GH_ARG(local_c8));
          return 0;
        }
      }
      piVar18 = piVar18 + 0xb4;
      bVar1 = iVar7 < 0x27;
      iVar7 = iVar7 + 1;
    } while (bVar1);
    iVar7 = iVar21 + -1;
    piVar17 = piVar17 + -1;
    bVar1 = 0 < iVar21;
    iVar21 = iVar7;
  } while (iVar7 != 0 && bVar1);
  return 0;
  return 0;
}
