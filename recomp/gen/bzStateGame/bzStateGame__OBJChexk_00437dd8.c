/* bzStateGame::OBJChexk_00437dd8 @ 0x00437dd8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__OBJChexk_00437dd8(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;

  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  gh_long lVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  gh_long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  mersenne_twister_engine *pmVar17;
  undefined8 uVar18;
  undefined8 extraout_x1 = 0;
  undefined8 extraout_x1_00 = 0;
  undefined8 extraout_x1_01 = 0;
  undefined8 extraout_x1_02 = 0;
  undefined8 extraout_x1_03 = 0;
  undefined8 extraout_x1_04 = 0;
  undefined8 extraout_x1_05 = 0;
  int iVar19;
  gh_long lVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  gh_long lVar25;
  undefined8 uVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int in_stack_fffffffffffffeb8 = 0;
  uint64_t gh_frame64[38] = {0};   /* 원작 스택 프레임 (SP-0x118 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x118;
#define local_118 (*(int *)(gh_fb - 0x118))
#define local_b8 (*(int *)(gh_fb - 0xb8))
#define local_b4 (*(int *)(gh_fb - 0xb4))
#define local_88 (*(int *)(gh_fb - 0x88))
#define local_84 (*(int *)(gh_fb - 0x84))
#define local_80 (*(int *)(gh_fb - 0x80))
#define local_70 (*(undefined8 *)(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar13 = tpidr_el0;
  local_68 = *(gh_long *)(lVar13 + 0x28);
  iVar8 = *(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cf4);
  iVar21 = *(int *)(self + 0x32c134);
  lVar20 = (gh_long)param_2;
  if (iVar8 < iVar21) {
    iVar15 = *(int *)(self + 0x32b824);
    iVar16 = iVar8;
    if (param_3 != 0x1c) {
      iVar16 = -1;
    }
  }
  else {
    iVar15 = iVar21;
    iVar16 = -1;
    if (*(int *)(self + 0x32c840) < 1) {
      iVar21 = 0;
    }
  }
  iVar23 = param_3 * 0x12;
  fVar31 = *(float *)(self + lVar20 * 0x50 + 0xb0ce0);
  local_118 = *(int *)(self + (gh_long)param_3 * 0x48 + 0x104ca4);
  if (fVar31 == 1.0) {
    local_80 = *(int *)(self + (gh_long)iVar23 * 4 + 0x104cb0);
    local_84 = *(int *)(self + (gh_long)iVar23 * 4 + 0x104cb4);
    local_88 = *(int *)(self + (gh_long)iVar23 * 4 + 0x104cb8);
    iVar24 = *(int *)(self + (gh_long)iVar23 * 4 + 0x104cbc);
  }
  else {
    fVar32 = (float)local_118;
    if (fVar31 <= 1.0) {
      fVar31 = 1.0 - fVar31;
      fVar32 = fVar32 - fVar31 * fVar32;
      fVar33 = (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb0) -
               fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb0);
      fVar34 = (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb4) -
               fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb4);
      fVar35 = (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb8) -
               fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb8);
      fVar31 = (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cbc) -
               fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cbc);
    }
    else {
      fVar32 = fVar31 * fVar32;
      fVar33 = fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb0);
      fVar34 = fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb4);
      fVar35 = fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cb8);
      fVar31 = fVar31 * (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x104cbc);
    }
    local_80 = (int)fVar33;
    local_84 = (int)fVar34;
    local_118 = (int)fVar32;
    local_88 = (int)fVar35;
    iVar24 = (int)fVar31;
  }
  lVar25 = (gh_long)*(int *)(self + (gh_long)iVar8 * 0x288 + 0x8db14);
  piVar3 = (int *)(self + (gh_long)iVar23 * 4 + 0x104c88);
  piVar4 = (int *)(self + lVar20 * 0x50 + 0xb0ccc);
  piVar28 = (int *)(self + 0x32c294);
  if (iVar8 != 0 || lVar25 != 0xd) {
    piVar28 = (int *)(self + (gh_long)iVar8 * 0x288 + 0x8db08);
  }
  uVar18 = 0xd;
  piVar5 = (int *)(self + 0x32ba14);
  lVar6 = 0xd;
  if (iVar8 != 0 || lVar25 != 0xd) {
    lVar6 = lVar25;
  }
  iVar8 = *piVar5;
  iVar11 = 0;
  if (iVar8 != 0) {
    iVar11 = *(int *)(self + 0x32ba20) / iVar8;
  }
  uVar12 = 0;
  if (iVar8 != 0) {
    uVar12 = *(int *)(self + 0x32ba24) / iVar8;
  }
  iVar10 = *(int *)(self + 0x32ba20) - iVar11 * iVar8;
  iVar8 = *(int *)(self + 0x32ba24) - uVar12 * iVar8;
  piVar29 = (int *)(self + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) +
                           (gh_long)iVar11 * 0x2d0 + 0x1405e8);
  local_b8 = (*piVar28 +
             (int)(((float)*piVar28 / 10.0) * (float)*(int *)(self + lVar6 * 4 + 0x130d0))) / 10;
  iVar30 = 0x14;
  do {
    piVar28 = piVar29;
    iVar27 = 0;
    do {
      iVar14 = *piVar28;
      if ((0 < iVar14) && (*(int *)(self + (gh_long)(iVar14 * 0x12 + 2) * 4 + 0x11c378) == 0x31)) {
        iVar9 = *piVar5 * iVar27 - iVar10;
        iVar2 = (*piVar5 * iVar30 - iVar8) + *(int *)(self + 0x32ba40);
        iVar19 = iVar9;
        iVar36 = local_88;
        in_stack_fffffffffffffeb8 = iVar24;
        iVar14 = bzStateGame__TileCData_0044ae24(GH_ARG(self), GH_ARG((int)uVar18), GH_ARG(iVar14), GH_ARG(iVar9), GH_ARG(iVar2), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_80), GH_ARG(local_84), GH_ARG(local_88), GH_ARG(iVar24));
        uVar18 = extraout_x1;
        if (0 < iVar14) {
          bzStateGame__TilePoper2_0044cbe4(GH_ARG(self), GH_ARG(local_b8), GH_ARG(*piVar3), GH_ARG(iVar19), GH_ARG(*piVar28), GH_ARG(iVar11 + iVar27), GH_ARG(iVar30 + uVar12), GH_ARG(iVar9), GH_ARG(iVar2), GH_ARG(param_2), GH_ARG(iVar36), GH_ARG(0));
          uVar18 = extraout_x1_00;
          if (param_3 != 0x29) goto LAB_004383ac;
          iVar21 = *(int *)(self + 0x1ae8);
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar16 = -10;
          }
          else {
            local_70 = 0x900000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar17), GH_ARG((param_type *)&local_70));
            iVar21 = *(int *)(self + 0x1ae8);
            iVar16 = -6 - iVar16;
            uVar18 = extraout_x1_04;
          }
          uVar7 = *(undefined4 *)(self + lVar20 * 0x50 + 0xb0cc0);
          uVar26 = *(undefined8 *)(self + lVar20 * 0x50 + 0xb0cb8);
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar15 = 6;
          }
          else {
            local_70 = 0x500000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar17), GH_ARG((param_type *)&local_70));
            iVar21 = *(int *)(self + 0x1ae8);
            iVar15 = iVar15 + 2;
            uVar18 = extraout_x1_05;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1)))) goto LAB_004383ac;
          lVar20 = 0;
          puVar22 = (undefined4 *)(self + 0xb0ce0);
          goto LAB_004386f8;
        }
      }
      piVar28 = piVar28 + 0xb4;
      bVar1 = iVar27 < 0x27;
      iVar27 = iVar27 + 1;
    } while (bVar1);
    iVar27 = iVar30 + -1;
    piVar29 = piVar29 + -1;
    bVar1 = 0 < iVar30;
    iVar30 = iVar27;
  } while (iVar27 != 0 && bVar1);
  if ((0 < *piVar4) && (iVar21 < iVar15)) {
    local_b4 = -1;
    do {
      if ((((1 < *(int *)(self + (gh_long)iVar21 * 0x288 + 0x8daec)) && (iVar16 != iVar21)) &&
          (*(int *)(self + (gh_long)iVar21 * 0x288 + 0x8dae0) < 0x50)) &&
         (iVar30 = param_6, iVar27 = local_80,
         iVar14 = bzStateGame__PCCData_00449f48(GH_ARG(self), GH_ARG(0), GH_ARG(iVar21), GH_ARG(*(int *)(self + (gh_long)iVar21 * 0x288 + 0x8daf0)), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_80), GH_ARG(local_84), GH_ARG(local_88), GH_ARG(iVar24)),
         uVar18 = extraout_x1_02, -1 < iVar14)) {
        iVar2 = local_b8 / 3;
        if (param_3 != 0x1c) {
          iVar2 = local_b8;
        }
        bzStateGame__Poper2_00465334(GH_ARG(self), GH_ARG(iVar2), GH_ARG(*(int *)(self + (gh_long)iVar23 * 4 + 0x104c80)), GH_ARG(*(int *)(self + (gh_long)iVar23 * 4 + 0x104c84)), GH_ARG(*piVar3), GH_ARG(*(int *)(self + (gh_long)iVar23 * 4 + 0x104c8c)), GH_ARG(iVar30), GH_ARG(iVar27), GH_ARG(local_118), GH_ARG(iVar21), GH_ARG(param_2), GH_ARG(in_stack_fffffffffffffeb8), GH_ARG(*(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cf4)), GH_ARG(iVar14));
        uVar18 = extraout_x1_03;
        local_b8 = iVar2;
        local_b4 = iVar21;
        if (0xb < param_3 - 0x1cU) {
          *piVar4 = 0;
          iVar21 = iVar15;
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar15);
    if (local_b4 != -1) goto LAB_004384f4;
  }
  goto LAB_004383b4;
  while( true ) {
    lVar20 = lVar20 + 1;
    puVar22 = puVar22 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar20) break;
LAB_004386f8:
    if ((int)puVar22[-5] < 1) {
      puVar22[2] = 0;
      puVar22[3] = iVar15;
      *(undefined8 *)(puVar22 + -4) = 0x100000005;
      *(undefined8 *)(puVar22 + -6) = 0x6400000085;
      *(undefined8 *)(puVar22 + -2) = 0x3f80000000000000;
      *(undefined8 *)(puVar22 + -10) = uVar26;
      puVar22[-8] = uVar7;
      puVar22[4] = 0;
      puVar22[5] = iVar16;
      *puVar22 = 0x3f800000;
      puVar22[1] = 0;
      *(undefined8 *)(puVar22 + 6) = 0xff00000000;
      *(undefined8 *)(puVar22 + 8) = 0xff000000ff;
      break;
    }
  }
LAB_004383ac:
  *piVar4 = 0;
LAB_004383b4:
  if ((param_3 != 0x29) && (param_3 != 0x24e)) {
    piVar28 = (int *)(self + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) +
                             (gh_long)iVar11 * 0x2d0 + 0x1405e8);
    iVar21 = 0x14;
    do {
      piVar29 = piVar28;
      iVar16 = 0;
      do {
        iVar15 = *piVar29;
        if ((0 < iVar15) && (0x31 < *(int *)(self + (gh_long)(iVar15 * 0x12 + 2) * 4 + 0x11c378))) {
          iVar30 = *piVar5 * iVar16 - iVar10;
          iVar23 = (*piVar5 * iVar21 - iVar8) + *(int *)(self + 0x32ba40);
          iVar27 = iVar30;
          iVar14 = local_88;
          iVar15 = bzStateGame__TileCData_0044ae24(GH_ARG(self), GH_ARG((int)uVar18), GH_ARG(iVar15), GH_ARG(iVar30), GH_ARG(iVar23), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(local_80), GH_ARG(local_84), GH_ARG(local_88), GH_ARG(iVar24));
          uVar18 = extraout_x1_01;
          if (0 < iVar15) {
            bzStateGame__TilePoper2_0044cbe4(GH_ARG(self), GH_ARG(local_b8), GH_ARG(*piVar3), GH_ARG(iVar27), GH_ARG(*piVar29), GH_ARG(iVar11 + iVar16), GH_ARG(iVar21 + uVar12), GH_ARG(iVar30), GH_ARG(iVar23), GH_ARG(param_2), GH_ARG(iVar14), GH_ARG(0));
            *piVar4 = 0;
            goto LAB_004384f4;
          }
        }
        piVar29 = piVar29 + 0xb4;
        bVar1 = iVar16 < 0x27;
        iVar16 = iVar16 + 1;
      } while (bVar1);
      iVar16 = iVar21 + -1;
      piVar28 = piVar28 + -1;
      bVar1 = 0 < iVar21;
      iVar21 = iVar16;
    } while (iVar16 != 0 && bVar1);
  }
LAB_004384f4:
  if (*(gh_long *)(lVar13 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
