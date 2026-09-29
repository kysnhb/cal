/* bzStateGame::PCDamage_004398c8 @ 0x004398c8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__PCDamage_004398c8(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  gh_long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  mersenne_twister_engine *pmVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  gh_long lVar15;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define local_70 (*(undefined8 *)(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar5 = tpidr_el0;
  local_68 = *(gh_long *)(lVar5 + 0x28);
  if (param_2 == 0) {
    param_4 = param_4 << (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c));
  }
  piVar1 = (int *)(self + (gh_long)param_3 * 0x288 + 0x8daec);
  iVar12 = *piVar1;
  *piVar1 = iVar12 - param_4;
  if (1 < iVar12 - param_4) goto LAB_00439dfc;
  lVar15 = (gh_long)param_3;
  *piVar1 = 1;
  if (0x15 < *(int *)(self + lVar15 * 0x288 + 0x8db14)) {
    if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
        (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
       ((-0x1e < *(int *)(self + 0x8dacc) &&
        (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
    }
    goto LAB_00439dfc;
  }
  if (*(int *)(self + lVar15 * 0x288 + 0x8db14) != 0x15) {
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_3), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
    goto LAB_00439dfc;
  }
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
     ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
      ((-0x1e < *(int *)(self + 0x8dacc) &&
       (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1830)), GH_ARG(false));
  }
  iVar12 = *(int *)(self + 0x1ae8);
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar10 = 0x14;
  }
  else {
    local_70 = 0x1300000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar10 = iVar10 + 0xc;
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar8 = 3;
  }
  else {
    local_70 = 0x200000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar6 = 2;
  }
  else {
    local_70 = 0x100000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  puVar13 = (undefined4 *)(self + lVar15 * 0x288 + 0x8dac8);
  piVar1 = (int *)(self + lVar15 * 0x288 + 0x8dacc);
  uVar2 = *puVar13;
  iVar9 = *piVar1;
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar7 = 8;
  }
  else {
    local_70 = 0x700000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar7 = iVar7 + 2;
  }
  uVar4 = iVar12 - 0xd;
  if ((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00439b3c:
    iVar10 = 0x14;
  }
  else {
    iVar3 = *(int *)(self + 0xba8);
    if ((iVar3 != 1) && (0 < *(int *)(self + 0x32b828))) {
      lVar15 = 0;
      puVar14 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar14[-5] < 1) {
          puVar14[-10] = uVar2;
          puVar14[-9] = iVar9 + -0x46;
          puVar14[2] = 0;
          puVar14[3] = iVar7;
          *(undefined8 *)(puVar14 + -6) = 0x6400000086;
          *(undefined8 *)(puVar14 + -2) = 0x3f80000000000000;
          puVar14[-8] = iVar6;
          puVar14[4] = 0;
          puVar14[5] = -iVar10;
          puVar14[-4] = iVar8 + 0x21d;
          puVar14[-3] = 1;
          *puVar14 = 0x3f800000;
          puVar14[1] = 0;
          *(undefined8 *)(puVar14 + 6) = 0xff00000000;
          *(undefined8 *)(puVar14 + 8) = 0xff000000ff;
          break;
        }
        lVar15 = lVar15 + 1;
        puVar14 = puVar14 + 0x14;
      } while (lVar15 < *(int *)(self + 0x32b828));
    }
    if (((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (iVar3 == 1)) goto LAB_00439b3c;
    local_70 = 0x1300000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar10 = iVar10 + 0xc;
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar8 = 3;
  }
  else {
    local_70 = 0x200000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar6 = 2;
  }
  else {
    local_70 = 0x100000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  uVar2 = *puVar13;
  iVar9 = *piVar1;
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar7 = 8;
  }
  else {
    local_70 = 0x700000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar7 = iVar7 + 2;
  }
  uVar4 = iVar12 - 0xd;
  if ((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00439be4:
    iVar10 = 0x14;
  }
  else {
    iVar3 = *(int *)(self + 0xba8);
    if ((iVar3 != 1) && (0 < *(int *)(self + 0x32b828))) {
      lVar15 = 0;
      puVar14 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar14[-5] < 1) {
          puVar14[-10] = uVar2;
          puVar14[-9] = iVar9 + -0x32;
          puVar14[2] = 0;
          puVar14[3] = iVar7;
          *(undefined8 *)(puVar14 + -6) = 0x6400000086;
          *(undefined8 *)(puVar14 + -2) = 0x3f80000000000000;
          puVar14[-8] = iVar6;
          puVar14[4] = 0;
          puVar14[5] = -iVar10;
          puVar14[-4] = iVar8 + 0x21d;
          puVar14[-3] = 1;
          *puVar14 = 0x3f800000;
          puVar14[1] = 0;
          *(undefined8 *)(puVar14 + 6) = 0xff00000000;
          *(undefined8 *)(puVar14 + 8) = 0xff000000ff;
          break;
        }
        lVar15 = lVar15 + 1;
        puVar14 = puVar14 + 0x14;
      } while (lVar15 < *(int *)(self + 0x32b828));
    }
    if (((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (iVar3 == 1)) goto LAB_00439be4;
    local_70 = 0x1300000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar10 = iVar10 + 0xc;
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar8 = 3;
  }
  else {
    local_70 = 0x200000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar6 = 2;
  }
  else {
    local_70 = 0x100000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  uVar2 = *puVar13;
  iVar9 = *piVar1;
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar7 = 8;
  }
  else {
    local_70 = 0x700000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar7 = iVar7 + 2;
  }
  uVar4 = iVar12 - 0xd;
  if ((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00439c8c:
    iVar10 = -0x14;
  }
  else {
    iVar3 = *(int *)(self + 0xba8);
    if ((iVar3 != 1) && (0 < *(int *)(self + 0x32b828))) {
      lVar15 = 0;
      puVar14 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar14[-5] < 1) {
          puVar14[-10] = uVar2;
          puVar14[-9] = iVar9 + -0x3c;
          puVar14[2] = 0;
          puVar14[3] = iVar7;
          *(undefined8 *)(puVar14 + -6) = 0x6400000086;
          *(undefined8 *)(puVar14 + -2) = 0x3f80000000000000;
          puVar14[-8] = iVar6;
          puVar14[4] = 0;
          puVar14[5] = -iVar10;
          puVar14[-4] = iVar8 + 0x21d;
          puVar14[-3] = 1;
          *puVar14 = 0x3f800000;
          puVar14[1] = 0;
          *(undefined8 *)(puVar14 + 6) = 0xff00000000;
          *(undefined8 *)(puVar14 + 8) = 0xff000000ff;
          break;
        }
        lVar15 = lVar15 + 1;
        puVar14 = puVar14 + 0x14;
      } while (lVar15 < *(int *)(self + 0x32b828));
    }
    if (((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (iVar3 == 1)) goto LAB_00439c8c;
    local_70 = 0x1300000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar10 = -0xc - iVar10;
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar8 = 2;
  }
  else {
    local_70 = 0x100000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  uVar2 = *puVar13;
  iVar6 = *piVar1;
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar9 = 8;
  }
  else {
    local_70 = 0x700000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar9 = iVar9 + 2;
  }
  uVar4 = iVar12 - 0xd;
  if ((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00439d0c:
    iVar10 = -0x14;
  }
  else {
    iVar7 = *(int *)(self + 0xba8);
    if ((iVar7 != 1) && (0 < *(int *)(self + 0x32b828))) {
      lVar15 = 0;
      puVar14 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar14[-5] < 1) {
          puVar14[-10] = uVar2;
          puVar14[-9] = iVar6 + -0x46;
          puVar14[2] = 0;
          puVar14[3] = iVar9;
          *(undefined8 *)(puVar14 + -4) = 0x1000000dd;
          *(undefined8 *)(puVar14 + -6) = 0x6400000089;
          *(undefined8 *)(puVar14 + -2) = 0x3f80000000000000;
          puVar14[-8] = iVar8;
          puVar14[4] = 0;
          puVar14[5] = iVar10;
          *puVar14 = 0x3f800000;
          puVar14[1] = 0;
          *(undefined8 *)(puVar14 + 6) = 0xff00000000;
          *(undefined8 *)(puVar14 + 8) = 0xff000000ff;
          break;
        }
        lVar15 = lVar15 + 1;
        puVar14 = puVar14 + 0x14;
      } while (lVar15 < *(int *)(self + 0x32b828));
    }
    if (((uVar4 < 0x3e) && ((1LL << ((ulong)uVar4 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (iVar7 == 1)) goto LAB_00439d0c;
    local_70 = 0x1300000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar10 = -0xc - iVar10;
  }
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar8 = 2;
  }
  else {
    local_70 = 0x100000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
  }
  uVar2 = *puVar13;
  iVar6 = *piVar1;
  if (((iVar12 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) {
    iVar9 = 8;
  }
  else {
    local_70 = 0x700000000;
    pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_70), GH_ARG(pmVar11), GH_ARG((param_type *)&local_70));
    iVar12 = *(int *)(self + 0x1ae8);
    iVar9 = iVar9 + 2;
  }
  if ((((0x3d < iVar12 - 0xdU) ||
       ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
      (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
    lVar15 = 0;
    puVar13 = (undefined4 *)(self + 0xb0ce0);
    do {
      if ((int)puVar13[-5] < 1) {
        puVar13[-10] = uVar2;
        puVar13[-9] = iVar6 + -0x3c;
        puVar13[2] = 0;
        puVar13[3] = iVar9;
        *(undefined8 *)(puVar13 + -4) = 0x1000000dd;
        *(undefined8 *)(puVar13 + -6) = 0x6400000089;
        *(undefined8 *)(puVar13 + -2) = 0x3f80000000000000;
        puVar13[-8] = iVar8;
        puVar13[4] = 0;
        puVar13[5] = iVar10;
        *puVar13 = 0x3f800000;
        puVar13[1] = 0;
        *(undefined8 *)(puVar13 + 6) = 0xff00000000;
        *(undefined8 *)(puVar13 + 8) = 0xff000000ff;
        break;
      }
      lVar15 = lVar15 + 1;
      puVar13 = puVar13 + 0x14;
    } while (lVar15 < *(int *)(self + 0x32b828));
  }
LAB_00439dfc:
  if (*(gh_long *)(lVar5 + 0x28) != local_68) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
