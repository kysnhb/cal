/* bzStateGame::OBJimg_003fd2e4 @ 0x003fd2e4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__OBJimg_003fd2e4(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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

  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  gh_long lVar8;
  int iVar9;
  uint uVar10;
  mersenne_twister_engine *pmVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  gh_long lVar17;
  gh_long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  uVar12 = (ulong)(uint)param_5;
  lVar8 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar8 + 0x28);
  if (param_5 == 0) {
    uVar10 = 0;
  }
  else {
    iVar7 = param_5 * 0x12;
    iVar6 = *(int *)(self + (gh_long)iVar7 * 4 + 0x104c78);
    lVar18 = (gh_long)*(int *)(self + (gh_long)(iVar7 + -0x12) * 4 + 0x104c78) * 7;
    if ((int)lVar18 < (int)((gh_long)iVar6 * 7)) {
      piVar1 = (int *)(self + (gh_long)param_2 * 0x50 + 0xb0cd4);
      fVar21 = 1.0 - param_10;
      do {
        if (9 < *(uint *)(self + lVar18 * 4 + 0x115628)) goto switchD_003fd708_caseD_1;
        iVar5 = *(int *)(self + lVar18 * 4 + 0x115618);
        iVar15 = *(int *)(self + lVar18 * 4 + 0x115624);
        switch(*(uint *)(self + lVar18 * 4 + 0x115628)) {
        case 0:
        case 5:
          iVar9 = *(int *)(self + lVar18 * 4 + 0x11561c);
          iVar13 = *(int *)(self + lVar18 * 4 + 0x115620) + param_4;
          iVar15 = *piVar1;
          iVar16 = *(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cf8);
          goto LAB_003fd888;
        case 6:
          iVar15 = *(int *)(self + lVar18 * 4 + 0x11561c);
          if (param_10 == 1.0) {
            iVar13 = *(int *)(self + lVar18 * 4 + 0x115620);
            iVar5 = -iVar15;
            if (param_6 == 0) {
              iVar5 = iVar15;
            }
          }
          else {
            fVar19 = (float)iVar15;
            fVar20 = fVar19 * param_10;
            if (param_10 <= 1.0) {
              fVar20 = fVar19 - fVar21 * fVar19;
            }
            iVar5 = -(int)fVar20;
            if (param_6 == 0) {
              iVar5 = (int)fVar20;
            }
            fVar20 = (float)*(int *)(self + lVar18 * 4 + 0x115620);
            if (param_10 <= 1.0) {
              fVar20 = fVar20 - fVar21 * fVar20;
            }
            else {
              fVar20 = fVar20 * param_10;
            }
            iVar13 = (int)fVar20;
          }
          if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
             && ((*(int *)(self + 0xba8) != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15))))
          {
            lVar17 = 0;
            puVar14 = (undefined8 *)(self + 0xb0ce0);
            do {
              if (*(int *)((gh_long)puVar14 + -0x14) < 1) {
                *(int *)(puVar14 + -5) = iVar5 + param_3;
                *(int *)((gh_long)puVar14 + -0x24) = iVar13 + param_4;
                *(undefined4 *)((gh_long)puVar14 + 0x24) = 0xff;
                *(int *)(puVar14 + -4) = param_6;
                puVar14[-2] = 0x107;
                puVar14[-3] = 0x6400000068;
                puVar14[-1] = 0x3f80000000000000;
                *(undefined8 *)((gh_long)puVar14 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar14 + 0xc) = 0;
                *(undefined8 *)((gh_long)puVar14 + 4) = 0;
                *(undefined8 *)((gh_long)puVar14 + 0x1c) = 0xff000000ff;
                *(undefined4 *)puVar14 = 0x3f800000;
                break;
              }
              lVar17 = lVar17 + 1;
              puVar14 = puVar14 + 10;
            } while (lVar17 < iVar15);
          }
          break;
        case 7:
          iVar9 = *(int *)(self + lVar18 * 4 + 0x11561c);
          iVar16 = 0;
          iVar13 = *(int *)(self + lVar18 * 4 + 0x115620) + param_4;
          goto LAB_003fd888;
        case 8:
          iVar9 = *(int *)(self + lVar18 * 4 + 0x11561c);
          param_3 = *(int *)(self + (gh_long)*(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cf4) * 0x288 +
                                    0x8dafc);
          param_4 = *(int *)(self + (gh_long)*(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cf4) * 0x288 +
                                    0x8db00);
          iVar13 = *(int *)(self + lVar18 * 4 + 0x115620) + param_4;
          iVar15 = *piVar1;
          iVar16 = 0;
LAB_003fd888:
          bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar5), GH_ARG(param_3), GH_ARG(iVar9), GH_ARG((int)uVar12), GH_ARG(iVar13), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(*(float *)(self + (gh_long)param_2 * 0x50 + 0xb0cdc)), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar13), GH_ARG(iVar15), GH_ARG(iVar16));
          break;
        case 9:
          piVar2 = (int *)(self + lVar18 * 4 + 0x115620);
          bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar5), GH_ARG(param_3), GH_ARG(*(int *)(self + lVar18 * 4 + 0x11561c)), GH_ARG((int)uVar12), GH_ARG(*piVar2 + param_4), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(*(float *)(self + (gh_long)param_2 * 0x50 + 0xb0cdc)), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(*piVar2 + param_4), GH_ARG(iVar15), GH_ARG(0));
          iVar15 = *(int *)(self + lVar18 * 4 + 0x11561c);
          if (param_10 == 1.0) {
            iVar16 = *piVar2;
            iVar13 = -iVar15;
            if (param_6 == 0) {
              iVar13 = iVar15;
            }
          }
          else {
            fVar19 = (float)iVar15;
            fVar20 = fVar19 * param_10;
            if (param_10 <= 1.0) {
              fVar20 = fVar19 - fVar21 * fVar19;
            }
            iVar13 = -(int)fVar20;
            if (param_6 == 0) {
              iVar13 = (int)fVar20;
            }
            fVar20 = (float)*piVar2;
            if (param_10 <= 1.0) {
              fVar20 = fVar20 - fVar21 * fVar20;
            }
            else {
              fVar20 = fVar20 * param_10;
            }
            iVar16 = (int)fVar20;
          }
          iVar15 = *(int *)(self + 0x1ae8);
          uVar3 = *(undefined4 *)(self + (gh_long)param_2 * 0x50 + 0xb0cc0);
          if (((iVar15 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar9 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar11 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar11), GH_ARG((param_type *)&local_b0));
            iVar15 = *(int *)(self + 0x1ae8);
            iVar9 = iVar9 + 2;
          }
          iVar4 = *piVar1;
          if (((0x3d < iVar15 - 0xdU) ||
              ((1LL << ((ulong)(iVar15 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*(int *)(self + 0xba8) != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
            lVar17 = 0;
            puVar14 = (undefined8 *)(self + 0xb0ce0);
            do {
              if (*(int *)((gh_long)puVar14 + -0x14) < 1) {
                *(int *)(puVar14 + -5) = iVar13 + param_3;
                *(int *)((gh_long)puVar14 + -0x24) = iVar16 + param_4;
                *(int *)(puVar14 + -2) = iVar5 + 0x21;
                *(int *)((gh_long)puVar14 + -0xc) = iVar4;
                *(undefined4 *)(puVar14 + 1) = 0;
                *(int *)((gh_long)puVar14 + 0xc) = iVar9;
                puVar14[-3] = 0x6400000083;
                *(undefined4 *)(puVar14 + -4) = uVar3;
                puVar14[-1] = 0x3f80000000000000;
                puVar14[3] = 0xff00000000;
                puVar14[2] = 0;
                puVar14[4] = 0xff000000ff;
                *puVar14 = 0x3f800000;
                break;
              }
              lVar17 = lVar17 + 1;
              puVar14 = puVar14 + 10;
            } while (lVar17 < iVar15);
          }
        }
switchD_003fd708_caseD_1:
        lVar18 = lVar18 + 7;
      } while (lVar18 < (gh_long)iVar6 * 7);
    }
    uVar10 = *(uint *)(self + (gh_long)iVar7 * 4 + 0x104c80) &
             ((int)*(uint *)(self + (gh_long)iVar7 * 4 + 0x104c80) >> 0x1f ^ 0xffffffffU);
  }
  if (*(gh_long *)(lVar8 + 0x28) == local_a8) {
    return uVar10;
  }
                    
  __stack_chk_fail();
}

