/* bzStateGame::LPimg2_0046df14 @ 0x0046df14 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__LPimg2_0046df14(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11)
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
  int param_12 = (int)gh_a11;

  int *piVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  gh_long lVar12;
  int iVar13;
  int iVar14;
  mersenne_twister_engine *pmVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  gh_long lVar25;
  gh_long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  uint64_t gh_frame64[63] = {0};   /* 원작 스택 프레임 (SP-0x1e0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x1e0;
#define local_1e0 (*(undefined8 *)(gh_fb - 0x1e0))
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar12 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar12 + 0x28);
  if (param_5 == 0) {
    uVar17 = 0;
  }
  else {
    iVar10 = param_5 * 0x12;
    iVar9 = *(int *)(self + (gh_long)iVar10 * 4 + 0xc1658);
    lVar26 = (gh_long)*(int *)(self + (gh_long)(iVar10 + -0x12) * 4 + 0xc1658) * 7;
    if ((int)lVar26 < (int)((gh_long)iVar9 * 7)) {
      local_1e0 = 0xff00000001;
      piVar4 = (int *)(self + 0x8db14);
      piVar5 = (int *)(self + 0x32b828);
      puVar6 = (undefined8 *)(self + 0xb0cdc);
      uVar18 = 0x32c148;
      piVar20 = (int *)((gh_long)(self + 0x8dac8) + (gh_long)param_2 * 0xa2 * 4);
      piVar1 = piVar20 + 0x14;
      piVar2 = piVar20 + 0x13;
      pfVar3 = (float *)(piVar20 + 0x9a);
      fVar28 = 1.0 - param_10;
      do {
        iVar19 = (int)uVar18;
        if (*(uint *)(self + lVar26 * 4 + 0xd00c8) < 10) {
          iVar16 = *(int *)(self + lVar26 * 4 + 0xd00b8);
          fVar29 = GH_I2F(float, piVar20[0x16]);
          iVar24 = *(int *)(self + lVar26 * 4 + 0xd00c4);
          switch(*(uint *)(self + lVar26 * 4 + 0xd00c8)) {
          case 0:
            uVar18 = 0;
            bzStateGame__Pimg_rotateImage3_0046fda8(GH_ARG(self), GH_ARG(iVar16 + param_12), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(fVar29), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24 + param_11));
            break;
          case 2:
            iVar19 = *(int *)(self + lVar26 * 4 + 0xd00cc);
            iVar24 = iVar24 + param_11;
            if (iVar19 < 0xb) {
              uVar18 = 0;
              bzStateGame__PHead_rotateImage_0046cbd0(GH_ARG(self), GH_ARG(piVar20[0x12] + 1), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(fVar29), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24));
            }
            else {
              uVar18 = 0;
              bzStateGame__PHead_rotateImage2_0046c5d4(GH_ARG(self), GH_ARG(piVar20[0x12] + 1), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(fVar29), GH_ARG((uint)(param_6 == 0)), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24));
            }
            if (param_2 == 0) {
              if (iVar19 < 0xb) {
                uVar18 = 0;
                bzStateGame__PHead_rotateImage_0046cbd0(GH_ARG(self), GH_ARG(0x2a), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar29), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24));
              }
              else {
                uVar18 = 0;
                bzStateGame__PHead_rotateImage2_0046c5d4(GH_ARG(self), GH_ARG(0x2a), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar29), GH_ARG((uint)(param_6 == 0)), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24));
              }
            }
            if ((1 < piVar20[0x15]) && (1 < piVar20[9])) {
              iVar19 = *(int *)(self + 0x8dac8);
              if ((iVar19 + -200 < *piVar20) && (*piVar20 < iVar19 + 200)) {
                if ((*(int *)(self + 0x8dacc) + -0x96 < piVar20[1]) &&
                   (piVar20[1] < *(int *)(self + 0x8dacc) + 0x96)) {
                  iVar19 = *(int *)(self + 0x1ae8);
                  if (param_6 == 0) {
                    iVar24 = param_3 + 5;
                    if (((iVar19 - 0xdU < 0x3e) &&
                        ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                       (*(int *)(self + 0xba8) == 1)) {
                      iVar16 = 5;
                    }
                    else {
                      local_b0 = 0x400000000;
                      pmVar15 = (mersenne_twister_engine *)
                                cocos2d__RandomHelper__getEngine_0060b3d4();
                      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                      iVar19 = *(int *)(self + 0x1ae8);
                      iVar16 = iVar16 + -2;
                    }
                  }
                  else {
                    iVar24 = param_3 + -0xf;
                    if (((iVar19 - 0xdU < 0x3e) &&
                        ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                       (*(int *)(self + 0xba8) == 1)) {
                      iVar16 = 5;
                    }
                    else {
                      local_b0 = 0x400000000;
                      pmVar15 = (mersenne_twister_engine *)
                                cocos2d__RandomHelper__getEngine_0060b3d4();
                      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                      iVar19 = *(int *)(self + 0x1ae8);
                      iVar16 = iVar16 + -2;
                    }
                  }
                  if (((iVar19 - 0xdU < 0x3e) &&
                      ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                     (*(int *)(self + 0xba8) == 1)) {
                    iVar19 = 5;
                  }
                  else {
                    local_b0 = 0x400000000;
                    pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4()
                    ;
                    iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                    iVar19 = iVar19 + -2;
                  }
                  uVar18 = 0xff;
                  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(iVar24 + iVar16), GH_ARG(param_4 + -0x3c + iVar19), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.6));
                }
              }
            }
            break;
          case 3:
            iVar19 = iVar16;
            if ((iVar16 - 1U < 0x18) && (iVar19 = iVar16 + 100, *piVar1 != 1)) {
              iVar19 = iVar16;
            }
            uVar18 = 0;
            bzStateGame__Weapon_rotateImage_0046d85c(GH_ARG(self), GH_ARG(iVar19), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_4), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar29), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24 + param_11));
            break;
          case 9:
            if (param_2 < 1) {
              if (param_2 == 0) {
                if (*piVar1 == 1) {
                  iVar13 = *(int *)(self + (gh_long)*piVar4 * 4 + 0x32c5ec);
                }
                else {
                  if (*piVar1 != 0) goto LAB_0046eadc;
                  iVar13 = *(int *)(self + (gh_long)*piVar4 * 4 + 0x32c170);
                }
                if (0 < iVar13) goto LAB_0046ea08;
              }
LAB_0046eadc:
              if (*(int *)(self + 0x1ae8) == 0xe) break;
              iVar19 = param_2;
              if (param_2 == 0) {
                if (*piVar1 == 1) {
                  iVar19 = *(int *)(self + (gh_long)*piVar4 * 4 + 0x1a64);
joined_r0x0046e520:
                  if (0 < iVar19) {
                    bzStateGame__exeDurability_00449de4(GH_ARG(self));
                    break;
                  }
                }
                else if (*piVar1 == 0) {
                  iVar19 = *(int *)(self + (gh_long)*piVar4 * 4 + 0x1a3c);
                  goto joined_r0x0046e520;
                }
                iVar19 = 0;
              }
              uVar18 = 0;
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xc), GH_ARG(iVar19), GH_ARG(0), GH_ARG(0));
            }
            else {
LAB_0046ea08:
              iVar13 = *(int *)(self + 0x1ae8);
              lVar25 = (gh_long)iVar16;
              if (((iVar13 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
LAB_0046ea34:
                iVar16 = 7;
              }
              else {
                if (param_2 == 0) {
                  iVar16 = *piVar4 + 10;
                  if (*piVar1 != 0) {
                    iVar16 = *piVar4 + 0x129;
                  }
                  *(int *)(self + (gh_long)iVar16 * 4 + 0x32c148) =
                       *(int *)(self + (gh_long)iVar16 * 4 + 0x32c148) + -10;
                  iVar13 = *(int *)(self + 0x1ae8);
                }
                if (((iVar13 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) goto LAB_0046ea34;
                local_b0 = 0x600000000;
                pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                iVar16 = iVar16 + 0x11;
              }
              iVar13 = *(int *)(self + lVar25 * 4 + 0x31af58);
              if (param_10 == 1.0) {
                if (param_6 != 0) goto LAB_0046ea5c;
LAB_0046ec50:
                iVar21 = *(int *)(self + lVar25 * 4 + 0x31b4d0);
                iVar13 = -iVar13;
                if (param_10 != 1.0) {
                  fVar29 = (float)iVar21;
                  if (param_10 <= 1.0) {
                    fVar29 = fVar29 - fVar28 * fVar29;
                  }
                  else {
                    fVar29 = fVar29 * param_10;
                  }
                  iVar21 = (int)fVar29;
                }
                iVar14 = 0;
              }
              else {
                fVar29 = (float)iVar13;
                if (param_10 <= 1.0) {
                  fVar29 = fVar29 - fVar28 * fVar29;
                }
                else {
                  fVar29 = fVar29 * param_10;
                }
                iVar13 = (int)fVar29;
                if (param_6 == 0) goto LAB_0046ec50;
LAB_0046ea5c:
                iVar21 = *(int *)(self + lVar25 * 4 + 0x31b4d0);
                iVar14 = param_6;
                if (param_10 != 1.0) {
                  fVar29 = (float)iVar21;
                  if (param_10 <= 1.0) {
                    fVar29 = fVar29 - fVar28 * fVar29;
                  }
                  else {
                    fVar29 = fVar29 * param_10;
                  }
                  iVar21 = (int)fVar29;
                }
              }
              bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar16), GH_ARG(iVar13 + param_3), GH_ARG(0), GH_ARG(iVar19), GH_ARG(param_4 - iVar21), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(iVar14), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(iVar24 + param_11), GH_ARG(0));
              iVar19 = *(int *)(self + (gh_long)*piVar2 * 4 + 0x12f5c) +
                       *(int *)(self + lVar25 * 4 + 0x31af58);
              if (param_10 != 1.0) {
                fVar29 = (float)iVar19;
                if (param_10 <= 1.0) {
                  fVar29 = fVar29 - fVar28 * fVar29;
                }
                else {
                  fVar29 = fVar29 * param_10;
                }
                iVar19 = (int)fVar29;
              }
              fVar29 = cosf(*pfVar3);
              *(float *)(self + 0x1b14) = fVar29 * (float)iVar19 + (float)param_3;
              fVar29 = sinf(*pfVar3);
              fVar29 = fVar29 * (float)iVar19 + (float)param_4;
              *(float *)(self + 0x1b18) = fVar29;
              iVar24 = *piVar2;
              fVar27 = *(float *)(self + 0x1b14);
              iVar19 = *(int *)(self + 0x1ae8);
              uVar7 = *(undefined4 *)(self + (gh_long)iVar24 * 4 + 0x12fd8);
              uVar8 = *(undefined4 *)(self + (gh_long)iVar24 * 4 + 0x12f5c);
              uVar17 = (uint)fVar29;
              uVar18 = (ulong)uVar17;
              iVar16 = (int)(float)(int)(GH_I2F(float, piVar20[0x9b]) * 100.0);
              puVar23 = puVar6;
              if ((*piVar1 == 1) && (iVar24 - 9U < 2)) {
                if ((((0x3d < iVar19 - 0xdU) ||
                     ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                    (*(int *)(self + 0xba8) != 1)) && (0 < *piVar5)) {
                  lVar25 = 0;
LAB_0046ef14:
                  if (0 < *(int *)(puVar23 + -2)) goto code_r0x0046ef20;
                  *(float *)((gh_long)puVar23 + -4) = *pfVar3;
                  *(int *)((gh_long)puVar23 + -0x24) = (int)fVar27;
                  *(uint *)(puVar23 + -4) = uVar17;
                  *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar7;
                  *(int *)(puVar23 + -1) = iVar16;
                  *puVar23 = 0x3f8000003f800000;
                  puVar23[1] = 0;
                  *(undefined4 *)(puVar23 + 2) = uVar8;
                  *(undefined4 *)((gh_long)puVar23 + 0x14) = 0;
                  *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000002;
                  uVar30 = local_1e0;
LAB_0046e600:
                  *(undefined4 *)((gh_long)puVar23 + -0x1c) = 0;
                  *(int *)(puVar23 + 3) = param_2;
                  *(undefined8 *)((gh_long)puVar23 + 0x1c) = uVar30;
                  *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
                }
              }
              else if (((0x3d < iVar19 - 0xdU) ||
                       ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                      ((*(int *)(self + 0xba8) != 1 && (0 < *piVar5)))) {
                lVar25 = 0;
                do {
                  if (*(int *)(puVar23 + -2) < 1) {
                    *(float *)((gh_long)puVar23 + -4) = *pfVar3;
                    *(int *)((gh_long)puVar23 + -0x24) = (int)fVar27;
                    *(uint *)(puVar23 + -4) = uVar17;
                    *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar7;
                    *(int *)(puVar23 + -1) = iVar16;
                    *puVar23 = 0x3f8000003f800000;
                    puVar23[1] = 0;
                    *(undefined4 *)(puVar23 + 2) = uVar8;
                    *(undefined4 *)((gh_long)puVar23 + 0x14) = 0;
                    *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000002;
                    uVar30 = 0xff00000000;
                    goto LAB_0046e600;
                  }
                  lVar25 = lVar25 + 1;
                  puVar23 = puVar23 + 10;
                } while (lVar25 < *piVar5);
              }
LAB_0046ef60:
              if (*piVar2 == 0xb) {
                uVar7 = *(undefined4 *)(self + 0x13004);
                iVar24 = (int)*(float *)(self + 0x1b14);
                uVar8 = *(undefined4 *)(self + 0x12f88);
                fVar29 = *pfVar3;
                uVar11 = iVar19 - 0xd;
                uVar22 = (ulong)uVar11;
                if (((0x3d < uVar11) || ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) == 0)) &&
                   ((*(int *)(self + 0xba8) != 1 && (0 < *piVar5)))) {
                  lVar25 = 0;
                  puVar23 = puVar6;
                  do {
                    if (*(int *)(puVar23 + -2) < 1) {
                      *(float *)((gh_long)puVar23 + -4) = fVar29;
                      *(int *)((gh_long)puVar23 + -0x24) = iVar24 + -0xc;
                      *(uint *)(puVar23 + -4) = uVar17 + 5;
                      *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar7;
                      *(int *)(puVar23 + -1) = iVar16;
                      *puVar23 = 0x3f8000003f800000;
                      puVar23[1] = 0;
                      *(undefined4 *)(puVar23 + 2) = uVar8;
                      *(undefined4 *)((gh_long)puVar23 + 0x14) = 0;
                      *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000002;
                      *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
                      *(undefined4 *)((gh_long)puVar23 + -0x1c) = 0;
                      *(int *)(puVar23 + 3) = param_2;
                      *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
                      fVar29 = *pfVar3;
                      uVar7 = *(undefined4 *)(self + (gh_long)*piVar2 * 4 + 0x12fd8);
                      uVar8 = *(undefined4 *)(self + (gh_long)*piVar2 * 4 + 0x12f5c);
                      iVar24 = (int)*(float *)(self + 0x1b14);
                      break;
                    }
                    lVar25 = lVar25 + 1;
                    puVar23 = puVar23 + 10;
                  } while (lVar25 < *piVar5);
                }
                if ((uVar11 < 0x3e) && ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0046efbc:
                  iVar24 = 10;
                }
                else {
                  iVar13 = *(int *)(self + 0xba8);
                  if ((iVar13 != 1) && (0 < *piVar5)) {
                    lVar25 = 0;
                    puVar23 = puVar6;
                    do {
                      if (*(int *)(puVar23 + -2) < 1) {
                        *(float *)((gh_long)puVar23 + -4) = fVar29;
                        *(int *)((gh_long)puVar23 + -0x24) = iVar24 + -10;
                        *(uint *)(puVar23 + -4) = uVar17 - 5;
                        *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar7;
                        *(int *)(puVar23 + -1) = iVar16;
                        *puVar23 = 0x3f8000003f800000;
                        puVar23[1] = 0;
                        *(undefined4 *)(puVar23 + 2) = uVar8;
                        *(undefined4 *)((gh_long)puVar23 + 0x14) = 0;
                        *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000002;
                        *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
                        *(undefined4 *)((gh_long)puVar23 + -0x1c) = 0;
                        *(int *)(puVar23 + 3) = param_2;
                        *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
                        break;
                      }
                      lVar25 = lVar25 + 1;
                      puVar23 = puVar23 + 10;
                    } while (lVar25 < *piVar5);
                  }
                  if (((uVar11 < 0x3e) && ((1LL << (uVar22 & 0x3f) & 0x3200000000000081U) != 0)) ||
                     (iVar13 == 1)) goto LAB_0046efbc;
                  local_b0 = 0x900000000;
                  pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar24 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                  iVar19 = *(int *)(self + 0x1ae8);
                  iVar24 = iVar24 + 6;
                  uVar18 = (ulong)(uint)(int)*(float *)(self + 0x1b18);
                }
                fVar29 = *(float *)(self + 0x1b14);
                iVar13 = piVar20[4];
                uVar7 = *(undefined4 *)(self + (gh_long)*piVar2 * 4 + 0x13054);
                if (((iVar19 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar21 = 8;
                }
                else {
                  local_b0 = 0x700000000;
                  pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                  iVar19 = *(int *)(self + 0x1ae8);
                  iVar21 = iVar21 + 2;
                }
                if (((0x3d < iVar19 - 0xdU) ||
                    ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                   ((*(int *)(self + 0xba8) != 1 && (0 < *piVar5)))) {
                  lVar25 = 0;
                  puVar23 = puVar6;
                  do {
                    if (*(int *)(puVar23 + -2) < 1) {
                      *(float *)((gh_long)puVar23 + -4) = *pfVar3;
                      *(int *)((gh_long)puVar23 + -0x24) = (int)fVar29;
                      *(int *)(puVar23 + -4) = (int)uVar18;
                      *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000085;
                      *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
                      *(uint *)((gh_long)puVar23 + -0x1c) = (uint)(iVar13 == 0);
                      *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar7;
                      *(int *)(puVar23 + -1) = iVar16;
                      *puVar23 = 0x3f8000003f800000;
                      puVar23[1] = 0;
                      *(int *)(puVar23 + 2) = iVar21;
                      *(undefined4 *)((gh_long)puVar23 + 0x14) = 0;
                      *(int *)(puVar23 + 3) = -iVar24;
                      *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
                      break;
                    }
                    lVar25 = lVar25 + 1;
                    puVar23 = puVar23 + 10;
                  } while (lVar25 < *piVar5);
                }
              }
              iVar24 = *(int *)(self + (gh_long)*piVar2 * 4 + 0x13054);
              if (0 < iVar24) {
                if (((iVar19 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar13 = 10;
                }
                else {
                  local_b0 = 0x900000000;
                  pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                  iVar24 = *(int *)(self + (gh_long)*piVar2 * 4 + 0x13054);
                  iVar19 = *(int *)(self + 0x1ae8);
                  iVar13 = iVar13 + 6;
                }
                iVar21 = piVar20[4];
                uVar30 = *(undefined8 *)(self + 0x1b14);
                if (((iVar19 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar14 = 8;
                }
                else {
                  local_b0 = 0x700000000;
                  pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
                  iVar19 = *(int *)(self + 0x1ae8);
                  iVar14 = iVar14 + 2;
                }
                fVar29 = *pfVar3;
                if (((0x3d < iVar19 - 0xdU) ||
                    ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                   ((*(int *)(self + 0xba8) != 1 && (0 < *piVar5)))) {
                  lVar25 = 0;
                  puVar23 = (undefined8 *)(self + 0xb0d00);
                  do {
                    if (*(int *)((gh_long)puVar23 + -0x34) < 1) {
                      puVar23[-9] = CONCAT44((int)GH_I2F(float, ((ulong)uVar30 >> 0x20)),(int)GH_I2F(float, uVar30))
                      ;
                      *(float *)(puVar23 + -5) = fVar29;
                      puVar23[-1] = 0xff00000000;
                      puVar23[-7] = 0x6400000085;
                      *(uint *)(puVar23 + -8) = (uint)(iVar21 == 0);
                      *(int *)(puVar23 + -6) = iVar24;
                      *(int *)((gh_long)puVar23 + -0x2c) = iVar16;
                      *(undefined8 *)((gh_long)puVar23 + -0x24) = 0x3f8000003f800000;
                      *(int *)((gh_long)puVar23 + -0x14) = iVar14;
                      *(undefined4 *)(puVar23 + -2) = 0;
                      *(undefined8 *)((gh_long)puVar23 + -0x1c) = 0;
                      *(int *)((gh_long)puVar23 + -0xc) = -iVar13;
                      *puVar23 = 0xff000000ff;
                      break;
                    }
                    lVar25 = lVar25 + 1;
                    puVar23 = puVar23 + 10;
                  } while (lVar25 < *piVar5);
                }
              }
              if (((((((0x3d < iVar19 - 0xdU) ||
                      ((1LL << ((ulong)(iVar19 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                     (*(int *)(self + 0xba8) != 1)) &&
                    ((*(int *)(self + 0x32c160) == 0 && (-0x96 < *(int *)(self + 0x8f418))))) &&
                   (*(int *)(self + 0x8f418) < *(int *)(self + 0x1158) + 0x96)) &&
                  ((-0x1e < *(int *)(self + 0x8f41c) &&
                   (*(uint *)(self + (gh_long)*piVar2 * 4 + 0x1314c) < 0x4b)))) &&
                 (*(int *)(self + 0x8f41c) < *(int *)(self + 0x115c) + 100)) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)
                           (self + (gh_long)(int)*(uint *)(self + (gh_long)*piVar2 * 4 + 0x1314c) * 0x18 +
                                   0x11e8)), GH_ARG(false));
              }
            }
          }
        }
        lVar26 = lVar26 + 7;
      } while (lVar26 < (gh_long)iVar9 * 7);
    }
    uVar17 = *(uint *)(self + (gh_long)iVar10 * 4 + 0xc1660) &
             ((int)*(uint *)(self + (gh_long)iVar10 * 4 + 0xc1660) >> 0x1f ^ 0xffffffffU);
  }
  if (*(gh_long *)(lVar12 + 0x28) == local_a8) {
    return 0;
  }
                    
  __stack_chk_fail(uVar17);
code_r0x0046ef20:
  lVar25 = lVar25 + 1;
  puVar23 = puVar23 + 10;
  if (*piVar5 <= lVar25) goto LAB_0046ef60;
  goto LAB_0046ef14;
  return 0;
}
