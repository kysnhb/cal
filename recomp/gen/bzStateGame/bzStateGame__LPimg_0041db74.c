/* bzStateGame::LPimg_0041db74 @ 0x0041db74 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
extern void aos5_stickrig_begin(int actor, int frame, int record);
extern void aos5_stickrig_end(void);
int bzStateGame__LPimg_0041db74(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  gh_long lVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  mersenne_twister_engine *pmVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  gh_long lVar32;
  gh_long lVar33;
  int iVar34;
  uint uVar35;
  gh_long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  int in_stack_fffffffffffffd88 = 0;
  uint uVar43;
  int iVar44;
  int iVar45;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar16 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar16 + 0x28);
  if (param_5 == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = *(uint *)(self + (gh_long)param_2 * 0x288 + 0x8dd4c);
    lVar32 = (gh_long)param_2;
    if (((uVar30 != 9) && (0 < param_2)) && (uVar30 != 0xd)) {
      bzStateGame__LPSOimg_0046bd40(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_3), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(in_stack_fffffffffffffd88));
    }
    iVar14 = param_5 * 0x12;
    *(uint *)(self + lVar32 * 0x288 + 0x8daf4) = 0;
    iVar13 = *(int *)(self + (gh_long)iVar14 * 4 + 0xc1658);
    lVar36 = (gh_long)*(int *)(self + (gh_long)(iVar14 + -0x12) * 4 + 0xc1658) * 7;
    if ((int)lVar36 < (int)((gh_long)iVar13 * 7)) {
      piVar3 = (int *)(self + lVar32 * 0x288 + 0x8dd28);
      piVar4 = (int *)(self + lVar32 * 0x288 + 0x8dd38);
      piVar5 = (int *)(self + lVar32 * 0x288 + 0x8dafc);
      piVar6 = (int *)(self + lVar32 * 0x288 + 0x8db00);
      piVar7 = (int *)(self + lVar32 * 0x288 + 0x8dad8);
      puVar8 = (undefined8 *)(self + 0xb0cdc);
      piVar2 = (int *)(self + 0xba8);
      iVar15 = param_3 + -99;
      iVar1 = param_3 + 0x2d;
      fVar38 = 1.0;
      uVar27 = 0x8f418;
      fVar40 = 1.0 - param_10;
      piVar9 = (int *)(self + 0x32c858);
      piVar10 = (int *)(self + 0x32b828);
      uVar30 = (uint)(param_6 == 0);
      do {
        aos5_stickrig_begin(param_2, param_5, (int)(lVar36 / 7));
        iVar21 = *(int *)(self + lVar32 * 0x288 + 0x8db14);
        lVar33 = (gh_long)iVar21;
        fVar41 = *(float *)(self + lVar32 * 0x288 + 0x8db20);
        iVar22 = *(int *)(self + lVar36 * 4 + 0xd00cc);
        iVar20 = *(int *)(self + lVar36 * 4 + 0xd00c4);
        piVar11 = (int *)(self + lVar36 * 4 + 0xd00c0);
        iVar34 = *piVar11;
        if (param_10 != 1.0) {
          fVar37 = (float)iVar34;
          if (param_10 <= 1.0) {
            fVar37 = fVar37 - fVar40 * fVar37;
          }
          else {
            fVar37 = fVar37 * param_10;
          }
          iVar34 = (int)fVar37;
        }
        uVar35 = *(uint *)(self + lVar36 * 4 + 0xd00c8);
        if (0x17 < uVar35) goto switchD_0041e3e8_caseD_1;
        iVar26 = *(int *)(self + lVar36 * 4 + 0xd00b8) + (uint)(0x1d < param_2 && lVar33 == 0x17);
        iVar24 = iVar26;
        iVar28 = param_7;
        iVar29 = param_8;
        iVar25 = param_3;
        iVar42 = param_9;
        iVar44 = param_6;
        uVar43 = param_6;
        iVar45 = param_3;
        switch(uVar35) {
        case 0:
          goto switchD_0041e3e8_caseD_0;
        case 2:
          piVar11 = (int *)(self + lVar36 * 4 + 0xd00bc);
          iVar21 = *piVar11;
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          iVar34 = iVar34 + param_4;
          if (iVar22 < 0xb) {
            uVar27 = 0;
            bzStateGame__PHead_rotateImage_0046cbd0(GH_ARG(self), GH_ARG(*(int *)(self + lVar32 * 0x288 + 0x8db10)), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(fVar41), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34), GH_ARG(iVar20));
          }
          else {
            uVar27 = 0;
            bzStateGame__PHead_rotateImage2_0046c5d4(GH_ARG(self), GH_ARG(*(int *)(self + lVar32 * 0x288 + 0x8db10)), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(fVar41), GH_ARG(uVar30), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34), GH_ARG(iVar20));
          }
          if (param_2 == 0) {
            iVar21 = *piVar11;
            if (param_10 != 1.0) {
              fVar37 = (float)iVar21;
              if (param_10 <= 1.0) {
                fVar37 = fVar37 - fVar40 * fVar37;
              }
              else {
                fVar37 = fVar37 * param_10;
              }
              iVar21 = (int)fVar37;
            }
            if (iVar22 < 0xb) {
              uVar27 = 0;
              bzStateGame__PHead_rotateImage_0046cbd0(GH_ARG(self), GH_ARG(0x29), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(param_6), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34), GH_ARG(iVar20));
            }
            else {
              uVar27 = 0;
              bzStateGame__PHead_rotateImage2_0046c5d4(GH_ARG(self), GH_ARG(0x29), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(uVar30), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34), GH_ARG(iVar20));
            }
          }
          if (*(int *)(self + lVar32 * 0x288 + 0x8db1c) < 2) {
            iVar20 = *(int *)(self + lVar32 * 4 + 0x32baa0);
            if ((0 < iVar20) && (param_2 < *(int *)(self + 0x32c134))) {
              if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                  ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) ==
                   0)) && (*piVar2 != 1)) {
                *(int *)(self + lVar32 * 4 + 0x32baa0) = iVar20 + -1;
              }
              iVar20 = *piVar11;
              if (param_6 != 0) {
                iVar20 = -iVar20;
              }
              uVar27 = 0xff;
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(param_3 + -8 + iVar20), GH_ARG(iVar34 + -0x1e), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.3), GH_ARG((uint)(param_6 != 0)), GH_ARG(0.4));
            }
          }
          else {
            iVar20 = *(int *)(self + 0x1ae8);
            uVar35 = iVar20 - 0xd;
            if ((((0x3d < uVar35) || ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0)) &&
                (*piVar2 != 1)) && ((0 < param_2 && (*(int *)(self + 0x32c79c) < 0)))) {
              *(int *)(self + 0x32c79c) = -2;
            }
            if (*(int *)(self + lVar32 * 0x288 + 0x8daec) < 2) {
              if ((0 < param_2) && (*piVar9 == param_2)) {
                *piVar9 = 0;
              }
            }
            else {
              iVar22 = *piVar11;
              if (param_6 == 0) {
                if (param_10 != 1.0) {
                  fVar41 = (float)iVar22;
                  if (param_10 <= 1.0) {
                    fVar41 = fVar41 - fVar40 * fVar41;
                  }
                  else {
                    fVar41 = fVar41 * param_10;
                  }
                  iVar22 = (int)fVar41;
                }
                iVar22 = iVar22 + param_3;
                if (uVar35 < 0x3e) goto LAB_0041df64;
LAB_0041dff0:
                if (*piVar2 == 1) goto LAB_0041df7c;
                local_b0 = 0x400000000;
                pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
                iVar20 = *(int *)(self + 0x1ae8);
                iVar21 = iVar21 + -2;
              }
              else {
                if (param_10 != 1.0) {
                  fVar41 = (float)iVar22;
                  if (param_10 <= 1.0) {
                    fVar41 = fVar41 - fVar40 * fVar41;
                  }
                  else {
                    fVar41 = fVar41 * param_10;
                  }
                  iVar22 = (int)fVar41;
                }
                iVar22 = (param_3 + -5) - iVar22;
                if (0x3d < uVar35) goto LAB_0041dff0;
LAB_0041df64:
                if ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0) goto LAB_0041dff0;
LAB_0041df7c:
                iVar21 = 5;
              }
              if (((iVar20 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar20 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar2 == 1)) {
                iVar20 = 5;
              }
              else {
                local_b0 = 0x400000000;
                pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
                iVar20 = iVar20 + -2;
              }
              uVar27 = 0xff;
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(iVar22 + iVar21), GH_ARG(iVar34 + -0x3c + iVar20), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.6))
              ;
              if (0 < param_2) {
                *piVar9 = param_2;
              }
            }
          }
          break;
        case 3:
          if (iVar21 - 1U < 0x12) {
            if (iVar21 - 3U < 10) {
              iVar21 = iVar21 * 2;
              if (*(int *)(self + lVar32 * 0x288 + 0x8db18) == 0) goto LAB_0041ec44;
              iVar24 = iVar21 + 99;
            }
            else {
              iVar21 = iVar21 << 1;
LAB_0041ec44:
              iVar24 = iVar21 + -1;
            }
            iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
            if (param_10 != 1.0) {
              fVar37 = (float)iVar21;
              if (param_10 <= 1.0) {
                fVar37 = fVar37 - fVar40 * fVar37;
              }
              else {
                fVar37 = fVar37 * param_10;
              }
              iVar21 = (int)fVar37;
            }
            fVar37 = param_10;
            if (iVar22 < 0xb) goto LAB_0041fcf8;
LAB_0041fca0:
            uVar27 = 0;
            bzStateGame__Weapon_rotateImage2_0046d184(GH_ARG(self), GH_ARG(iVar24), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34 + param_4), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(uVar30), GH_ARG(fVar37), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34 + param_4), GH_ARG(iVar20));
          }
          break;
        case 6:
          if (*(int *)(self + lVar32 * 0x288 + 0x8dd24) < 1) {
            uVar35 = 0x12de8;
          }
          else {
            lVar33 = (gh_long)(*piVar4 / 10);
            uVar35 = 0x8cdf0;
          }
          uVar35 = *(uint *)(self + (ulong)uVar35 + lVar33 * 4);
          iVar20 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 != 1.0) {
            fVar41 = (float)iVar20;
            if (param_10 <= 1.0) {
              iVar20 = (int)(fVar41 - fVar40 * fVar41);
            }
            else {
              iVar20 = (int)(fVar41 * param_10);
            }
          }
          if (param_6 != 0) {
            iVar20 = -iVar20;
          }
          uVar27 = (ulong)uVar35;
          bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(param_2), GH_ARG(param_3 + iVar20), GH_ARG(iVar34 + param_4), GH_ARG(uVar35), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(param_11));
          *(uint *)(self + lVar32 * 0x288 + 0x8daf4) = uVar35;
          iVar20 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 != 1.0) {
            fVar41 = (float)iVar20;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar20 = (int)fVar41;
          }
          *(int *)(self + lVar32 * 0x288 + 0x8dad0) = iVar20;
          *(int *)(self + lVar32 * 0x288 + 0x8dad4) = iVar34;
          break;
        case 7:
          uVar35 = *(uint *)(self + lVar33 * 4 + 0x12e64);
          if (*(int *)(self + lVar33 * 4 + 0x12ee0) < *piVar3) {
            *piVar3 = 0;
            iVar22 = *(int *)(self + 0x1ae8);
            if (((iVar22 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar22 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar2 == 1)) {
              iVar20 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = *(int *)(self + 0x1ae8);
              iVar20 = iVar20 + -2;
            }
            if (((iVar22 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar22 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar2 == 1)) {
              iVar22 = 2;
              uVar35 = uVar35 + 1;
            }
            else {
              local_b0 = 0x100000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = iVar22 + -1;
              uVar35 = uVar35 + 1;
            }
          }
          else {
            if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0
                )) && (*piVar2 != 1)) {
              *piVar3 = *piVar3 + 1;
            }
            iVar22 = 0;
            iVar20 = 0;
          }
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 == 1.0) {
            if (param_6 == 0) goto LAB_0041f178;
LAB_0041e9fc:
            iVar21 = (iVar20 + param_3) - iVar21;
            iVar20 = *piVar4;
            iVar26 = param_6;
          }
          else {
            fVar41 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar21 = (int)fVar41;
            if (param_6 != 0) goto LAB_0041e9fc;
LAB_0041f178:
            iVar21 = iVar20 + param_3 + iVar21;
            iVar20 = *piVar4;
            iVar26 = 0;
          }
          uVar27 = (ulong)uVar35;
          bzStateGame__LPimg2_0046df14(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar21), GH_ARG(iVar34 + param_4 + iVar22), GH_ARG(uVar35), GH_ARG(iVar26), GH_ARG(param_7), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(iVar20), GH_ARG(param_11));
          break;
        case 8:
          iVar34 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 == 1.0) {
            iVar20 = -iVar34;
            if (param_6 == 0) {
              iVar20 = iVar34;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            iVar34 = *piVar11;
          }
          else {
            fVar37 = (float)iVar34;
            fVar41 = fVar37 * param_10;
            if (param_10 <= 1.0) {
              fVar41 = fVar37 - fVar40 * fVar37;
            }
            iVar20 = -(int)fVar41;
            if (param_6 == 0) {
              iVar20 = (int)fVar41;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            fVar41 = (float)*piVar11;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar34 = (int)fVar41;
          }
          iVar34 = iVar34 + param_4;
          *piVar6 = iVar34;
          if (iVar21 == 0x17) {
            if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0
                )) || (*piVar2 == 1)) {
              iVar22 = 7;
            }
            else {
              local_b0 = 0x600000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = iVar22 + 0x11;
              iVar20 = *piVar5;
              iVar34 = *piVar6;
            }
            bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar22), GH_ARG(iVar20), GH_ARG(0), GH_ARG((int)uVar27), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(param_6), GH_ARG(1.0), GH_ARG(0), GH_ARG(iVar20), GH_ARG(iVar34), GH_ARG(0x17), GH_ARG(0));
            iVar34 = *piVar7;
            if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0
                )) || (*piVar2 == 1)) {
              iVar22 = 7;
            }
            else {
              local_b0 = 0x600000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = iVar22 + 0x11;
            }
            iVar20 = *piVar5;
            if (iVar34 == 0) {
              iVar34 = 0x6e;
              iVar26 = iVar20 + 0x6a;
            }
            else {
              iVar34 = -0x6e;
              iVar26 = iVar20 + -0x6a;
            }
            iVar20 = iVar20 + iVar34;
            iVar34 = *piVar6;
            iVar21 = 0x17;
          }
          else {
            if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0
                )) || (*piVar2 == 1)) {
              iVar22 = 7;
            }
            else {
              local_b0 = 0x600000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = iVar22 + 0x11;
              iVar20 = *piVar5;
              iVar34 = *piVar6;
            }
            iVar26 = iVar20;
            if (iVar21 == 0x19) {
              iVar21 = 0x22d;
            }
            else {
              iVar21 = 0x17;
            }
          }
          goto LAB_0041f790;
        case 9:
        case 0xd:
          if (*(uint *)(self + (gh_long)param_2 * 0x288 + 0x8dd4c) == uVar35)
          goto switchD_0041e3e8_caseD_b;
switchD_0041e3e8_caseD_0:
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          iVar24 = iVar26 + param_11;
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          if (iVar22 < 0xb) goto LAB_0041fe08;
LAB_0041ea78:
          iVar26 = iVar26 + param_11;
LAB_0041ed0c:
          uVar27 = 0;
          bzStateGame__Pimg_rotateImage2_0046bfec(GH_ARG(self), GH_ARG(iVar26), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34 + param_4), GH_ARG(iVar28), GH_ARG(iVar29), GH_ARG(iVar42), GH_ARG(fVar41), GH_ARG(uVar30), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34 + param_4), GH_ARG(iVar20));
          break;
        case 10:
          if ((iVar26 - 0x83U < 3) || (*(int *)(self + 0x32c158) == 1)) {
            iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
            if (param_10 != 1.0) {
              fVar41 = (float)iVar21;
              if (param_10 <= 1.0) {
                fVar41 = fVar41 - fVar40 * fVar41;
              }
              else {
                fVar41 = fVar41 * param_10;
              }
              iVar21 = (int)fVar41;
            }
            fVar41 = (float)iVar22 / 10.0;
            iVar28 = 0xff;
            iVar29 = 0xff;
            iVar42 = 0xff;
            goto LAB_0041fe08;
          }
          break;
        case 0xb:
switchD_0041e3e8_caseD_b:
          iVar34 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 == 1.0) {
            iVar20 = -iVar34;
            if (param_6 == 0) {
              iVar20 = iVar34;
            }
            *piVar5 = iVar20 + param_3;
            iVar34 = *piVar11;
          }
          else {
            fVar37 = (float)iVar34;
            fVar41 = fVar37 * param_10;
            if (param_10 <= 1.0) {
              fVar41 = fVar37 - fVar40 * fVar37;
            }
            iVar34 = -(int)fVar41;
            if (param_6 == 0) {
              iVar34 = (int)fVar41;
            }
            *piVar5 = iVar34 + param_3;
            fVar41 = (float)*piVar11;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar34 = (int)fVar41;
          }
          *piVar6 = iVar34 + param_4;
          break;
        case 0xc:
          if (iVar21 != 0x15) {
            fVar37 = fVar38;
            if ((iVar21 == 0x11) || (iVar26 == 0x22)) {
              iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
              if (param_10 != 1.0) {
                fVar39 = (float)iVar21;
                if (param_10 <= 1.0) {
                  fVar39 = fVar39 - fVar40 * fVar39;
                }
                else {
                  fVar39 = fVar39 * param_10;
                }
                iVar21 = (int)fVar39;
              }
              if (10 < iVar22) {
                iVar24 = 0x22;
                goto LAB_0041fca0;
              }
              iVar24 = 0x21;
            }
            else {
              if ((iVar21 - 1U < 0xc) &&
                 (iVar24 = iVar26 + 100, *(int *)(self + lVar32 * 0x288 + 0x8db18) != 1)) {
                iVar24 = iVar26;
              }
              iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
              if (param_10 != 1.0) {
                fVar39 = (float)iVar21;
                if (param_10 <= 1.0) {
                  fVar39 = fVar39 - fVar40 * fVar39;
                }
                else {
                  fVar39 = fVar39 * param_10;
                }
                iVar21 = (int)fVar39;
              }
            }
LAB_0041fcf8:
            uVar27 = 0;
            bzStateGame__Weapon_rotateImage_0046d85c(GH_ARG(self), GH_ARG(iVar24), GH_ARG(param_3), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34 + param_4), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(param_6), GH_ARG(fVar37), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34 + param_4), GH_ARG(iVar20));
            break;
          }
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          iVar24 = iVar26 + param_11;
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          if (iVar22 < 0xb) goto LAB_0041fde8;
          iVar28 = 0xff;
          iVar29 = 0xff;
          iVar42 = 0xff;
          goto LAB_0041ea78;
        case 0xe:
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if ((param_6 != 1) || (iVar26 != 0xbf)) {
            if (param_10 != 1.0) {
              fVar37 = (float)iVar21;
              if (1.0 <= param_10) goto LAB_0041e908;
LAB_0041e97c:
              fVar37 = fVar37 - fVar40 * fVar37;
LAB_0041e984:
              iVar21 = (int)fVar37;
            }
            goto LAB_0041fde8;
          }
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          iVar24 = 0xbf;
          iVar25 = param_3 + -0x28;
LAB_0041fd3c:
          iVar28 = 0xff;
          iVar29 = 0xff;
          iVar42 = 0xff;
          iVar44 = 0;
          goto LAB_0041fe08;
        case 0xf:
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 != 1.0) {
            fVar41 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar21 = (int)fVar41;
          }
          if (iVar22 < 0xb) {
            fVar41 = 0.7;
            iVar28 = 0xff;
            iVar29 = 0xff;
            iVar42 = 0xff;
            goto LAB_0041fe08;
          }
          iVar28 = 0xff;
          iVar29 = 0xff;
          iVar42 = 0xff;
          fVar41 = 1.0;
          goto LAB_0041ed0c;
        case 0x10:
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          goto LAB_0041fe08;
        case 0x11:
          iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 != 1.0) {
            fVar37 = (float)iVar21;
            if (param_10 <= 1.0) {
              fVar37 = fVar37 - fVar40 * fVar37;
            }
            else {
              fVar37 = fVar37 * param_10;
            }
            iVar21 = (int)fVar37;
          }
          iVar20 = iVar20 + *(int *)(self + lVar32 * 0x288 + 0x8dd08) * 0x1e;
          goto LAB_0041fde8;
        case 0x13:
          iVar34 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 == 1.0) {
            iVar20 = -iVar34;
            if (param_6 == 0) {
              iVar20 = iVar34;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            iVar34 = *piVar11;
          }
          else {
            fVar37 = (float)iVar34;
            fVar41 = fVar37 * param_10;
            if (param_10 <= 1.0) {
              fVar41 = fVar37 - fVar40 * fVar37;
            }
            iVar20 = -(int)fVar41;
            if (param_6 == 0) {
              iVar20 = (int)fVar41;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            fVar41 = (float)*piVar11;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar34 = (int)fVar41;
          }
          iVar34 = iVar34 + param_4;
          *piVar6 = iVar34;
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*piVar2 == 1)) {
            iVar22 = 7;
          }
          else {
            local_b0 = 0x600000000;
            pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
            iVar22 = iVar22 + 0x11;
            iVar20 = *piVar5;
            iVar34 = *piVar6;
          }
          iVar21 = 0x17;
          iVar26 = iVar20;
          goto LAB_0041f790;
        case 0x14:
          iVar34 = *(int *)(self + lVar36 * 4 + 0xd00bc);
          if (param_10 == 1.0) {
            iVar20 = -iVar34;
            if (param_6 == 0) {
              iVar20 = iVar34;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            iVar34 = *piVar11;
          }
          else {
            fVar37 = (float)iVar34;
            fVar41 = fVar37 * param_10;
            if (param_10 <= 1.0) {
              fVar41 = fVar37 - fVar40 * fVar37;
            }
            iVar20 = -(int)fVar41;
            if (param_6 == 0) {
              iVar20 = (int)fVar41;
            }
            iVar20 = iVar20 + param_3;
            *piVar5 = iVar20;
            fVar41 = (float)*piVar11;
            if (param_10 <= 1.0) {
              fVar41 = fVar41 - fVar40 * fVar41;
            }
            else {
              fVar41 = fVar41 * param_10;
            }
            iVar34 = (int)fVar41;
          }
          iVar34 = iVar34 + param_4;
          *piVar6 = iVar34;
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*piVar2 == 1)) {
            iVar22 = 7;
          }
          else {
            local_b0 = 0x600000000;
            pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
            iVar22 = iVar22 + 0x11;
            iVar20 = *piVar5;
            iVar34 = *piVar6;
          }
          iVar21 = 0x17;
          uVar43 = uVar30;
          iVar26 = iVar20;
LAB_0041f790:
          bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar22), GH_ARG(iVar20), GH_ARG(0), GH_ARG((int)uVar27), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(uVar43), GH_ARG(1.0), GH_ARG(0), GH_ARG(iVar26), GH_ARG(iVar34), GH_ARG(iVar21), GH_ARG(0));
          break;
        case 0x15:
          if (*(int *)(self + 0x32c140) == 0) goto switchD_0041e3e8_caseD_0;
          break;
        case 0x16:
          if (iVar26 == 0x129) {
            iVar22 = *piVar4;
            if (param_6 == 0) {
              if (iVar22 - 0x47U < 0xef) {
                iVar26 = 0x46;
              }
              else {
                iVar26 = 0x237;
                if (0x100 < iVar22 - 0x136U) {
                  iVar26 = iVar22;
                }
              }
              iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
              if (param_10 != 1.0) {
                fVar37 = (float)iVar21;
                if (param_10 <= 1.0) {
                  fVar37 = fVar37 - fVar40 * fVar37;
                }
                else {
                  fVar37 = fVar37 * param_10;
                }
                iVar21 = (int)fVar37;
              }
              iVar20 = iVar26 + iVar20;
              iVar44 = 0;
            }
            else {
              if (iVar22 != 0) {
                if (0x17b < iVar22) {
                  iVar22 = 0x17c;
                }
                iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
                if (iVar22 < 0x105) {
                  iVar22 = 0x104;
                }
                if (param_10 != 1.0) {
                  fVar37 = (float)iVar21;
                  if (param_10 <= 1.0) {
                    fVar37 = fVar37 - fVar40 * fVar37;
                  }
                  else {
                    fVar37 = fVar37 * param_10;
                  }
                  iVar21 = (int)fVar37;
                }
                iVar20 = iVar22 + iVar20;
                iVar24 = 0x129;
                iVar25 = iVar15;
                iVar45 = iVar15;
                goto LAB_0041fd3c;
              }
              iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
              if (param_10 != 1.0) {
                fVar37 = (float)iVar21;
                if (param_10 <= 1.0) {
                  fVar37 = fVar37 - fVar40 * fVar37;
                }
                else {
                  fVar37 = fVar37 * param_10;
                }
                iVar21 = (int)fVar37;
              }
              iVar20 = 0;
            }
            iVar24 = 0x129;
          }
          else {
            iVar21 = *(int *)(self + lVar36 * 4 + 0xd00bc);
            if (param_10 != 1.0) {
              fVar37 = (float)iVar21;
              if (param_10 <= 1.0) goto LAB_0041e97c;
LAB_0041e908:
              fVar37 = fVar37 * param_10;
              goto LAB_0041e984;
            }
          }
LAB_0041fde8:
          iVar28 = 0xff;
          iVar29 = 0xff;
          iVar42 = 0xff;
LAB_0041fe08:
          uVar27 = 0;
          bzStateGame__Pimg_rotateImage_004331e8(GH_ARG(self), GH_ARG(iVar24), GH_ARG(iVar25), GH_ARG(iVar21), GH_ARG(0), GH_ARG(iVar34 + param_4), GH_ARG(iVar28), GH_ARG(iVar29), GH_ARG(iVar42), GH_ARG(fVar41), GH_ARG(iVar44), GH_ARG(param_10), GH_ARG(0), GH_ARG(iVar45), GH_ARG(iVar34 + param_4), GH_ARG(iVar20));
          break;
        case 0x17:
          iVar22 = *piVar4;
          if (param_6 == 0) {
            if (iVar22 - 0x42U < 0xf4) {
              iVar21 = 0x41;
            }
            else {
              iVar21 = 0x237;
              if (0x100 < iVar22 - 0x136U) {
                iVar21 = iVar22;
              }
            }
            fVar37 = *(float *)(self + lVar32 * 0x288 + 0x8dd30);
            if ((0.0 <= fVar37) || (fVar37 <= -2.4)) {
              bVar17 = false;
              bVar18 = true;
              bVar19 = false;
              if (fVar37 < 2.4) {
                bVar17 = false;
                bVar18 = false;
                bVar19 = true;
                if (!isnan(fVar37)) {
                  bVar17 = fVar37 < 0.0;
                  bVar18 = fVar37 == 0.0;
                  bVar19 = false;
                }
              }
              fVar39 = 2.4;
              if (bVar18 || bVar17 != bVar19) {
                fVar39 = fVar37;
              }
            }
            else {
              fVar39 = -2.4;
            }
            if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0
                )) || (*piVar2 == 1)) {
              iVar22 = 7;
            }
            else {
              local_b0 = 0x600000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar22 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = iVar22 + 0x11;
            }
            iVar26 = *(int *)(self + lVar36 * 4 + 0xd00bc);
            if (param_10 != 1.0) {
              fVar37 = (float)iVar26;
              if (param_10 <= 1.0) {
                fVar37 = fVar37 - fVar40 * fVar37;
              }
              else {
                fVar37 = fVar37 * param_10;
              }
              iVar26 = (int)fVar37;
            }
            iVar34 = iVar34 + param_4;
            bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar22), GH_ARG(iVar1), GH_ARG(iVar26), GH_ARG((int)uVar27), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(0), GH_ARG(param_10), GH_ARG(0), GH_ARG(param_3), GH_ARG(iVar34), GH_ARG(iVar21 + iVar20), GH_ARG(0));
            iVar22 = *(int *)(self + 0x1ae8);
            uVar12 = *(undefined4 *)(self + 0x12f6c);
            uVar35 = iVar22 - 0xd;
            if ((uVar35 < 0x3e) && ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0041f8d4:
              iVar20 = 10;
            }
            else {
              iVar26 = *piVar2;
              if ((iVar26 != 1) && (0 < *piVar10)) {
                lVar33 = 0;
                puVar31 = puVar8;
                do {
                  if (*(int *)(puVar31 + -2) < 1) {
                    *(undefined4 *)((gh_long)puVar31 + -0x1c) = 0;
                    *(undefined8 *)((gh_long)puVar31 + -0x14) = 0x6400000002;
                    *(int *)((gh_long)puVar31 + -0x24) = iVar1;
                    *(int *)(puVar31 + -4) = iVar34;
                    *(undefined4 *)((gh_long)puVar31 + -0xc) = 0xd;
                    *(int *)(puVar31 + -1) = iVar21 + iVar20;
                    *(float *)((gh_long)puVar31 + -4) = fVar39;
                    *puVar31 = 0x3f8000003f800000;
                    puVar31[1] = 0;
                    *(undefined4 *)(puVar31 + 2) = uVar12;
                    *(undefined4 *)((gh_long)puVar31 + 0x14) = 0;
                    *(int *)(puVar31 + 3) = param_2;
                    *(undefined8 *)((gh_long)puVar31 + 0x1c) = 0xff00000000;
                    *(undefined8 *)((gh_long)puVar31 + 0x24) = 0xff000000ff;
                    break;
                  }
                  lVar33 = lVar33 + 1;
                  puVar31 = puVar31 + 10;
                } while (lVar33 < *piVar10);
              }
              if (((uVar35 < 0x3e) && ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) != 0))
                 || (iVar26 == 1)) goto LAB_0041f8d4;
              local_b0 = 0x900000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = *(int *)(self + 0x1ae8);
              iVar20 = iVar20 + 6;
            }
            iVar21 = *piVar7;
            uVar12 = *(undefined4 *)(self + 0x13064);
            if (((iVar22 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar22 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar2 == 1)) {
              iVar26 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar26 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar22 = *(int *)(self + 0x1ae8);
              iVar26 = iVar26 + 2;
            }
            uVar35 = iVar22 - 0xd;
            if ((0x3d < uVar35) || ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0)) {
              iVar22 = *piVar2;
              if ((iVar22 != 1) && (0 < *piVar10)) {
                lVar33 = 0;
                puVar31 = puVar8;
                do {
                  if (*(int *)(puVar31 + -2) < 1) {
                    *(uint *)((gh_long)puVar31 + -0x1c) = (uint)(iVar21 == 0);
                    *(undefined8 *)((gh_long)puVar31 + -0x14) = 0x6400000085;
                    *(int *)((gh_long)puVar31 + -0x24) = iVar1;
                    *(int *)(puVar31 + -4) = iVar34 + -0xf;
                    *(undefined4 *)((gh_long)puVar31 + -0xc) = uVar12;
                    *(int *)(puVar31 + -1) = (int)fVar41;
                    *(float *)((gh_long)puVar31 + -4) = fVar39;
                    *puVar31 = 0x3f8000003f800000;
                    puVar31[1] = 0;
                    *(int *)(puVar31 + 2) = iVar26;
                    *(undefined4 *)((gh_long)puVar31 + 0x14) = 0;
                    *(int *)(puVar31 + 3) = -iVar20;
                    *(undefined8 *)((gh_long)puVar31 + 0x1c) = 0xff00000000;
                    *(undefined8 *)((gh_long)puVar31 + 0x24) = 0xff000000ff;
                    break;
                  }
                  lVar33 = lVar33 + 1;
                  puVar31 = puVar31 + 10;
                } while (lVar33 < *piVar10);
              }
              if ((((((0x3d < uVar35) || ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0)
                     ) && (iVar22 != 1)) &&
                   ((*(int *)(self + 0x32c160) == 0 &&
                    (iVar34 = *(int *)(self + 0x8f418), -0x96 < iVar34)))) &&
                  ((iVar34 < *(int *)(self + 0x1158) + 0x96 &&
                   ((iVar34 = *(int *)(self + 0x8f41c), -0x1e < iVar34 &&
                    (uVar35 = *(uint *)(self + 0x1315c), uVar35 < 0x4b)))))) &&
                 (iVar34 < *(int *)(self + 0x115c) + 100)) goto LAB_0041e290;
            }
          }
          else {
            fVar37 = *(float *)(self + lVar32 * 0x288 + 0x8dd30);
            if (0x17b < iVar22) {
              iVar22 = 0x17c;
            }
            if (iVar22 < 0xfb) {
              iVar22 = 0xfa;
            }
            fVar39 = 0.6;
            if ((fVar37 <= 0.6) && (fVar39 = fVar37, fVar37 < -0.7)) {
              fVar39 = -0.7;
            }
            if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0
                )) || (*piVar2 == 1)) {
              iVar21 = 7;
            }
            else {
              local_b0 = 0x600000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar21 = iVar21 + 0x11;
            }
            iVar26 = *(int *)(self + lVar36 * 4 + 0xd00bc);
            if (param_10 != 1.0) {
              fVar37 = (float)iVar26;
              if (param_10 <= 1.0) {
                fVar37 = fVar37 - fVar40 * fVar37;
              }
              else {
                fVar37 = fVar37 * param_10;
              }
              iVar26 = (int)fVar37;
            }
            iVar34 = iVar34 + param_4;
            bzStateGame__Obj_rotateImage_0046f164(GH_ARG(self), GH_ARG(iVar21), GH_ARG(param_3 + -0x36), GH_ARG(iVar26), GH_ARG((int)uVar27), GH_ARG(iVar34), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar41), GH_ARG(0), GH_ARG(param_10), GH_ARG(0), GH_ARG(iVar15), GH_ARG(iVar34), GH_ARG(iVar22 + iVar20), GH_ARG(0));
            iVar21 = *(int *)(self + 0x1ae8);
            uVar12 = *(undefined4 *)(self + 0x12f6c);
            uVar35 = iVar21 - 0xd;
            if ((uVar35 < 0x3e) && ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0041f394:
              iVar20 = 10;
            }
            else {
              iVar26 = *piVar2;
              if ((iVar26 != 1) && (0 < *piVar10)) {
                lVar33 = 0;
                puVar31 = puVar8;
                do {
                  if (*(int *)(puVar31 + -2) < 1) {
                    *(undefined4 *)((gh_long)puVar31 + -0x1c) = 0;
                    *(undefined8 *)((gh_long)puVar31 + -0x14) = 0x6400000002;
                    *(int *)((gh_long)puVar31 + -0x24) = param_3 + -0x2d;
                    *(int *)(puVar31 + -4) = iVar34;
                    *(undefined4 *)((gh_long)puVar31 + -0xc) = 0xd;
                    *(int *)(puVar31 + -1) = iVar22 + iVar20;
                    *(float *)((gh_long)puVar31 + -4) = fVar39;
                    *puVar31 = 0x3f8000003f800000;
                    puVar31[1] = 0;
                    *(undefined4 *)(puVar31 + 2) = uVar12;
                    *(undefined4 *)((gh_long)puVar31 + 0x14) = 0;
                    *(int *)(puVar31 + 3) = param_2;
                    *(undefined8 *)((gh_long)puVar31 + 0x1c) = 0xff00000000;
                    *(undefined8 *)((gh_long)puVar31 + 0x24) = 0xff000000ff;
                    break;
                  }
                  lVar33 = lVar33 + 1;
                  puVar31 = puVar31 + 10;
                } while (lVar33 < *piVar10);
              }
              if (((uVar35 < 0x3e) && ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) != 0))
                 || (iVar26 == 1)) goto LAB_0041f394;
              local_b0 = 0x900000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar21 = *(int *)(self + 0x1ae8);
              iVar20 = iVar20 + 6;
            }
            iVar22 = *piVar7;
            uVar12 = *(undefined4 *)(self + 0x13064);
            if (((iVar21 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar2 == 1)) {
              iVar26 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar23 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar26 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar23), GH_ARG((param_type *)&local_b0));
              iVar21 = *(int *)(self + 0x1ae8);
              iVar26 = iVar26 + 2;
            }
            uVar35 = iVar21 - 0xd;
            if ((0x3d < uVar35) || ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0)) {
              iVar21 = *piVar2;
              if ((iVar21 != 1) && (0 < *piVar10)) {
                lVar33 = 0;
                puVar31 = puVar8;
                do {
                  if (*(int *)(puVar31 + -2) < 1) {
                    *(uint *)((gh_long)puVar31 + -0x1c) = (uint)(iVar22 == 0);
                    *(undefined8 *)((gh_long)puVar31 + -0x14) = 0x6400000085;
                    *(int *)((gh_long)puVar31 + -0x24) = param_3 + -0x2d;
                    *(int *)(puVar31 + -4) = iVar34 + -0xf;
                    *(undefined4 *)((gh_long)puVar31 + -0xc) = uVar12;
                    *(int *)(puVar31 + -1) = (int)fVar41;
                    *(float *)((gh_long)puVar31 + -4) = fVar39;
                    *puVar31 = 0x3f8000003f800000;
                    puVar31[1] = 0;
                    *(int *)(puVar31 + 2) = iVar26;
                    *(undefined4 *)((gh_long)puVar31 + 0x14) = 0;
                    *(int *)(puVar31 + 3) = -iVar20;
                    *(undefined8 *)((gh_long)puVar31 + 0x1c) = 0xff00000000;
                    *(undefined8 *)((gh_long)puVar31 + 0x24) = 0xff000000ff;
                    break;
                  }
                  lVar33 = lVar33 + 1;
                  puVar31 = puVar31 + 10;
                } while (lVar33 < *piVar10);
              }
              if (((0x3d < uVar35) || ((1LL << ((ulong)uVar35 & 0x3f) & 0x3200000000000081U) == 0))
                 && ((iVar21 != 1 &&
                     (((((*(int *)(self + 0x32c160) == 0 &&
                         (iVar34 = *(int *)(self + 0x8f418), -0x96 < iVar34)) &&
                        (iVar34 < *(int *)(self + 0x1158) + 0x96)) &&
                       ((iVar34 = *(int *)(self + 0x8f41c), -0x1e < iVar34 &&
                        (uVar35 = *(uint *)(self + 0x1315c), uVar35 < 0x4b)))) &&
                      (iVar34 < *(int *)(self + 0x115c) + 100)))))) {
LAB_0041e290:
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)uVar35 * 0x18 + 0x11e8)), GH_ARG(false));
              }
            }
          }
        }
switchD_0041e3e8_caseD_1:
        aos5_stickrig_end();
        lVar36 = lVar36 + 7;
      } while (lVar36 < (gh_long)iVar13 * 7);
    }
    uVar30 = *(uint *)(self + (gh_long)iVar14 * 4 + 0xc1660) &
             ((int)*(uint *)(self + (gh_long)iVar14 * 4 + 0xc1660) >> 0x1f ^ 0xffffffffU);
  }
  if (*(gh_long *)(lVar16 + 0x28) != local_a8) {
                    
    __stack_chk_fail();
  }
  return uVar30;
}

