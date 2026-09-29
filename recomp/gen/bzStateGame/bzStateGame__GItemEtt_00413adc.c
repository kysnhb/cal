/* bzStateGame::GItemEtt_00413adc @ 0x00413adc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GItemEtt_00413adc(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  uint *puVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  gh_long lVar9;
  gh_long lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  mersenne_twister_engine *pmVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined4 uVar26;
  gh_long lVar27;
  undefined4 uVar28;
  int iVar29;
  int *piVar30;
  undefined8 uVar31;
  int *piVar32;
  gh_long lVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  uint64_t gh_frame64[19] = {0};   /* 원작 스택 프레임 (SP-0x80 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x80;
#define local_80 (*(undefined8 *)(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar9 = tpidr_el0;
  local_78 = *(gh_long *)(lVar9 + 0x28);
  puVar1 = (uint *)(self + (gh_long)param_2 * 0x50 + 0xb0cc8);
  uVar18 = *puVar1;
  if (0x12d < uVar18) goto switchD_00413b54_caseD_1;
  iVar37 = 0;
  lVar33 = (gh_long)param_2;
  piVar19 = (int *)(self + (gh_long)param_2 * 0x50 + 0xb0cb8);
  switch(uVar18) {
  case 0:
    goto switchD_00413b54_caseD_0;
  case 2:
  case 300:
    iVar37 = *piVar19;
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    fVar34 = cosf(*(float *)(self + lVar33 * 0x50 + 0xb0cd8));
    *piVar19 = (int)((float)iVar37 - fVar34 * (float)iVar38);
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    fVar34 = sinf(*(float *)(self + lVar33 * 0x50 + 0xb0cd8));
    *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = (int)((float)iVar37 - fVar34 * (float)iVar38);
    *puVar1 = *puVar1 + 1;
  case 3:
  case 0x12d:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ccc);
    if (*piVar22 < 5) {
      *piVar22 = *piVar22 + -1;
    }
    iVar37 = *piVar19;
    if ((((iVar37 < -0x32) || (*(int *)(self + 0x1158) + 0x32 < iVar37)) ||
        (*(int *)(self + lVar33 * 0x50 + 0xb0cbc) < -0x32)) ||
       (*(int *)(self + 0x115c) + 0x32 < *(int *)(self + lVar33 * 0x50 + 0xb0cbc))) {
      *piVar22 = 0;
    }
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    iVar38 = *piVar30;
    if (iVar38 - 0xb9U < 4) {
      bVar12 = iVar38 == 0xbc;
      iVar13 = 0xb9;
LAB_00414104:
      if (!bVar12) {
        iVar13 = iVar38 + 1;
      }
      *piVar30 = iVar38 + 1;
      *piVar30 = iVar13;
    }
    else if (iVar38 - 0xd1U < 4) {
      bVar12 = iVar38 == 0xd4;
      iVar13 = 0xd1;
      goto LAB_00414104;
    }
    pfVar2 = (float *)(self + lVar33 * 0x50 + 0xb0cd8);
    piVar32 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar38 = 1;
    if (1 < *(int *)(self + lVar33 * 0x50 + 0xb0cec)) {
      piVar3 = (int *)(self + 0x32ba20);
      piVar4 = (int *)(self + 0x32ba14);
      piVar5 = (int *)(self + 0x32ba24);
      while( true ) {
        fVar41 = (float)iVar38;
        fVar34 = cosf(*pfVar2);
        iVar39 = *piVar32;
        fVar35 = sinf(*pfVar2);
        iVar13 = *piVar4;
        iVar14 = 0;
        if (iVar13 != 0) {
          iVar14 = (*piVar3 + (int)((float)iVar37 - fVar34 * fVar41)) / iVar13;
        }
        iVar37 = 0;
        if (iVar13 != 0) {
          iVar37 = (*piVar5 + (int)((float)iVar39 - fVar35 * fVar41)) / iVar13;
        }
        if ((0 < *(int *)(self + (gh_long)iVar37 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598)) &&
           (iVar37 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar37 * 4 +
                                                                 (gh_long)iVar14 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar37)) {
          piVar7 = (int *)(self + lVar33 * 0x50 + 0xb0cd4);
          iVar13 = *piVar7;
          iVar14 = *piVar30;
          if (0x136 < iVar13 - 0x9fU) {
            if (3 < iVar14 - 0xb9U) {
              if (iVar14 - 0xd1U < 4) {
                uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
                iVar37 = *(int *)(self + 0x1ae8);
                iVar14 = *piVar19;
                iVar39 = *piVar32;
                if (((iVar37 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar40 = 0xc;
                }
                else {
                  local_80 = 0xb00000000;
                  pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                  iVar13 = *piVar7;
                  iVar40 = iVar40 + -6;
                  iVar37 = *(int *)(self + 0x1ae8);
                }
                uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
                if (((iVar37 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
                goto LAB_00416ed8;
                lVar27 = 0;
                puVar20 = (undefined4 *)(self + 0xb0ce0);
                goto LAB_004192b4;
              }
              if ((iVar14 == 0xf) || (iVar14 == 1)) {
                uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
                uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
                iVar37 = *(int *)(self + 0x1ae8);
                iVar13 = *piVar19;
                iVar14 = *piVar32;
                if (((iVar37 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar39 = 0xc;
                }
                else {
                  local_80 = 0xb00000000;
                  pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                  iVar39 = iVar39 + -6;
                  iVar37 = *(int *)(self + 0x1ae8);
                }
                if ((((iVar37 - 0xdU < 0x3e) &&
                     ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                    (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
                goto LAB_00417f50;
                lVar27 = 0;
                puVar23 = (undefined8 *)(self + 0xb0cd8);
                goto LAB_0041941c;
              }
              uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
              uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
              iVar37 = *(int *)(self + 0x1ae8);
              iVar14 = *piVar19;
              iVar39 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar40 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar13 = *piVar7;
                iVar40 = iVar40 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              if ((((iVar37 - 0xdU < 0x3e) &&
                   ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                  (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
              goto LAB_00418b74;
              lVar27 = 0;
              puVar23 = (undefined8 *)(self + 0xb0cd8);
              goto LAB_00419c24;
            }
            iVar39 = *piVar19;
            fVar34 = cosf(*pfVar2);
            iVar40 = *piVar32;
            fVar35 = sinf(*pfVar2);
            iVar13 = *piVar4;
            iVar14 = 0;
            if (iVar13 != 0) {
              iVar14 = (*piVar3 + (int)((float)iVar39 - fVar34 * fVar41)) / iVar13;
            }
            iVar39 = 0;
            if (iVar13 != 0) {
              iVar39 = (*piVar5 + (int)(((float)iVar40 - fVar35 * fVar41) + -10.0)) / iVar13;
            }
            if ((*(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
               (iVar13 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 +
                                                                     (gh_long)iVar14 * 0x2d0 + 0x140598
                                                             ) * 0x12 | 1) * 4 + 0x11c378),
               iVar13 < 0x32)) {
              iVar13 = 0;
            }
            uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
            uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
            iVar14 = *piVar19;
            if (iVar37 != 0x32) {
              if (0x31 < iVar13) {
                iVar37 = *(int *)(self + 0x1ae8);
                iVar13 = *piVar32;
                if (((iVar37 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   (*(int *)(self + 0xba8) == 1)) {
                  iVar39 = 0xc;
                }
                else {
                  local_80 = 0xb00000000;
                  pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                  iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                  iVar39 = iVar39 + -6;
                  iVar37 = *(int *)(self + 0x1ae8);
                }
                uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
                if (((iVar37 - 0xdU < 0x3e) &&
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                   ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
                goto LAB_00418810;
                lVar27 = 0;
                puVar20 = (undefined4 *)(self + 0xb0ce0);
                goto LAB_00419aa0;
              }
              iVar37 = *(int *)(self + 0x1ae8);
              iVar13 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar39 = iVar39 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
              goto LAB_00418810;
              lVar27 = 0;
              iVar39 = iVar13 + 0x1a + iVar39;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_00417dc4;
            }
            if (0x31 < iVar13) {
              iVar37 = *(int *)(self + 0x1ae8);
              iVar13 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar39 = iVar39 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
              if ((((iVar37 - 0xdU < 0x3e) &&
                   ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                  (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
              goto LAB_00418810;
              lVar27 = 0;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_004186d4;
            }
            iVar37 = *(int *)(self + 0x1ae8);
            iVar13 = *piVar32;
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar39 = 0xc;
            }
            else {
              local_80 = 0xb00000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar39 = iVar39 + -6;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
            goto LAB_00418810;
            lVar27 = 0;
            iVar39 = iVar13 + 0x1a + iVar39;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_00415f08;
          }
          if (3 < iVar14 - 0xb9U) {
            if (iVar14 - 0xd1U < 4) {
              uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
              iVar37 = *(int *)(self + 0x1ae8);
              iVar14 = *piVar19;
              iVar39 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar40 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar13 = *piVar7;
                iVar40 = iVar40 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
              if ((((iVar37 - 0xdU < 0x3e) &&
                   ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                  (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
              goto LAB_00416dfc;
              lVar27 = 0;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_0041921c;
            }
            if ((iVar14 == 0xf) || (iVar14 == 1)) {
              uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
              uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
              iVar37 = *(int *)(self + 0x1ae8);
              iVar13 = *piVar19;
              iVar14 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar39 = iVar39 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              if ((((iVar37 - 0xdU < 0x3e) &&
                   ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                  (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
              goto LAB_00417e78;
              lVar27 = 0;
              puVar23 = (undefined8 *)(self + 0xb0cd8);
              goto LAB_00419388;
            }
            uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
            uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
            iVar37 = *(int *)(self + 0x1ae8);
            iVar14 = *piVar19;
            iVar39 = *piVar32;
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar40 = 0xc;
            }
            else {
              local_80 = 0xb00000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar13 = *piVar7;
              iVar40 = iVar40 + -6;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            if ((((iVar37 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
            goto LAB_00418ab4;
            lVar27 = 0;
            puVar23 = (undefined8 *)(self + 0xb0cd8);
            goto LAB_00419bb8;
          }
          iVar39 = *piVar19;
          fVar34 = cosf(*pfVar2);
          iVar40 = *piVar32;
          fVar35 = sinf(*pfVar2);
          iVar13 = *piVar4;
          iVar14 = 0;
          if (iVar13 != 0) {
            iVar14 = (*piVar3 + (int)((float)iVar39 - fVar34 * fVar41)) / iVar13;
          }
          iVar39 = 0;
          if (iVar13 != 0) {
            iVar39 = (*piVar5 + (int)(((float)iVar40 - fVar35 * fVar41) + -10.0)) / iVar13;
          }
          if ((*(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
             (iVar13 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 +
                                                                   (gh_long)iVar14 * 0x2d0 + 0x140598)
                                                   * 0x12 | 1) * 4 + 0x11c378), iVar13 < 0x32)) {
            iVar13 = 0;
          }
          uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
          uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
          iVar14 = *piVar19;
          if (iVar37 != 0x32) {
            if (0x31 < iVar13) {
              iVar37 = *(int *)(self + 0x1ae8);
              iVar13 = *piVar32;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 0xc;
              }
              else {
                local_80 = 0xb00000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar39 = iVar39 + -6;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
              goto LAB_00418760;
              lVar27 = 0;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_00419a08;
            }
            iVar37 = *(int *)(self + 0x1ae8);
            iVar13 = *piVar32;
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar39 = 0xc;
            }
            else {
              local_80 = 0xb00000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar39 = iVar39 + -6;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
            goto LAB_00418760;
            lVar27 = 0;
            iVar39 = iVar13 + 0x1a + iVar39;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_00417cf4;
          }
          if (0x31 < iVar13) {
            iVar37 = *(int *)(self + 0x1ae8);
            iVar13 = *piVar32;
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar39 = 0xc;
            }
            else {
              local_80 = 0xb00000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar39 = iVar39 + -6;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
            if ((((iVar37 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
            goto LAB_00418760;
            lVar27 = 0;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_0041860c;
          }
          iVar37 = *(int *)(self + 0x1ae8);
          iVar13 = *piVar32;
          if (((iVar37 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar39 = 0xc;
          }
          else {
            local_80 = 0xb00000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar39 = iVar39 + -6;
            iVar37 = *(int *)(self + 0x1ae8);
          }
          uVar28 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf8);
          if (((iVar37 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1)))) goto LAB_00418760;
          lVar27 = 0;
          iVar39 = iVar13 + 0x1a + iVar39;
          puVar20 = (undefined4 *)(self + 0xb0ce0);
          goto LAB_00415658;
        }
        iVar38 = iVar38 + 1;
        if (*(int *)(self + lVar33 * 0x50 + 0xb0cec) <= iVar38) break;
        iVar37 = *piVar19;
      }
    }
    goto LAB_00418be0;
  case 0x28:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ccc);
    if (iVar37 == 100) {
      piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
      iVar37 = *piVar19;
      if (0 < *(int *)(self + lVar33 * 0x50 + 0xb0ce4)) {
        iVar37 = iVar37 + 1;
        *piVar19 = iVar37;
      }
      if (0x10d < iVar37) {
        if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
           && (*(int *)(self + 0xba8) != 1)) {
          local_80 = 0x1d00000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          if ((iVar37 < 0x15) && (*piVar19 != 0x110)) goto LAB_00415a7c;
        }
        iVar38 = 99;
LAB_00415a78:
        *(int *)(self + lVar33 * 0x50 + 0xb0ccc) = iVar38;
      }
    }
    else {
      iVar38 = iVar37 + -1;
      if (0 < iVar37) goto LAB_00415a78;
    }
    goto LAB_00415a7c;
  case 0x29:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    if (iVar37 == 0) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar37 = 0;
        iVar38 = 0xcc;
      }
      else {
        local_80 = 0x500000000;
        pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
        iVar37 = *piVar22;
        iVar38 = iVar38 + 0xc6;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    }
    else if (0x32 < iVar37) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
    goto LAB_0041636c;
  case 0x2e:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ce4);
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cd4) < iVar37) {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0);
      if (iVar38 < 0x156) {
        iVar37 = 0;
        *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38 + 1;
      }
      else {
        iVar37 = 0;
      }
    }
    else {
      iVar37 = iVar37 + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = iVar37;
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    if (5 < iVar37) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cec) = iVar37 + 1;
    iVar37 = *(int *)(self + 0x32ba14);
    iVar38 = 0;
    if (iVar37 != 0) {
      iVar38 = (*(int *)(self + 0x32ba20) + *piVar19) / iVar37;
    }
    iVar13 = 0;
    if (iVar37 != 0) {
      iVar13 = (*(int *)(self + lVar33 * 0x50 + 0xb0cbc) + *(int *)(self + 0x32ba24) + 0x10) /
               iVar37;
    }
    if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar38 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar38 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    break;
    goto switchD_00413b54_caseD_0;
  case 0x2f:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ce4);
    *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = iVar37 + 1;
    if (199 < iVar37) goto switchD_00413b54_caseD_0;
    iVar37 = *piVar19;
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar13 = *(int *)(self + 0x32ba14);
    iVar14 = 0;
    if (iVar13 != 0) {
      iVar14 = (*(int *)(self + 0x32ba20) + iVar37) / iVar13;
    }
    iVar39 = 0;
    if (iVar13 != 0) {
      iVar39 = (iVar38 + *(int *)(self + 0x32ba24) + 0x1a) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    break;
    iVar13 = *(int *)(self + lVar33 * 0x50 + 0xb0cf4);
    iVar14 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0);
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar39 = 2;
    }
    else {
      local_80 = 0x100000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
      iVar37 = *piVar19;
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
    }
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(iVar13), GH_ARG(0x98), GH_ARG(iVar14), GH_ARG(iVar39), GH_ARG(iVar37), GH_ARG(iVar38), GH_ARG(0), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
    goto LAB_00417a48;
  case 0x30:
    puVar1 = (uint *)(self + lVar33 * 0x50 + 0xb0ce4);
    uVar18 = *puVar1;
    if ((int)uVar18 < 10) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar37 = 0x56;
      }
      else {
        local_80 = 0x1900000000;
        pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
        uVar18 = *puVar1;
        iVar37 = iVar37 + 0x3c;
      }
      iVar38 = -0x273;
      if (*(int *)(self + lVar33 * 0x50 + 0xb0cd4) < 0x274) {
        iVar38 = iVar37;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = iVar38 + *(int *)(self + lVar33 * 0x50 + 0xb0cd4);
    }
    if ((uVar18 < 10) && ((1 << (ulong)(uVar18 & 0x1f) & 0x2abU) != 0)) {
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) - iVar37;
    }
    else {
      piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
      iVar38 = *piVar22;
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) + iVar38;
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar37;
      iVar13 = *piVar19;
      iVar14 = *(int *)(self + 0x32ba14);
      iVar39 = 0;
      if (iVar14 != 0) {
        iVar39 = (*(int *)(self + 0x32ba20) + iVar13) / iVar14;
      }
      iVar40 = 0;
      if (iVar14 != 0) {
        iVar40 = (iVar37 + *(int *)(self + 0x32ba24) + 0x1a) / iVar14;
      }
      if ((*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar38 = *(int *)(self + 0x1ae8);
        uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0);
        uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
        if (((iVar38 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar38 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 5;
        }
        else {
          local_80 = 0x400000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          iVar38 = *(int *)(self + 0x1ae8);
        }
        if ((((0x3d < iVar38 - 0xdU) ||
             ((1LL << ((ulong)(iVar38 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar23 + -2) < 1) {
              *(float *)((gh_long)puVar23 + -4) = (float)*(int *)(self + lVar33 * 0x50 + 0xb0cd4);
              *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000085;
              *(int *)((gh_long)puVar23 + -0x24) = iVar13;
              *(int *)(puVar23 + -4) = iVar37;
              *(undefined4 *)((gh_long)puVar23 + -0x1c) = uVar26;
              *(int *)(puVar23 + 2) = iVar14;
              *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar24;
              *(undefined4 *)(puVar23 + -1) = 1;
              *puVar23 = 0x3f8000003f800000;
              puVar23[1] = 0;
              *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
        iVar38 = *piVar22;
      }
      iVar37 = iVar38 + -2;
      if (iVar38 < 1) {
        iVar37 = 0;
      }
      *piVar22 = iVar37;
    }
    if (0 < iVar37) {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
      if (iVar38 == 0) {
        iVar13 = *piVar19;
        iVar14 = *(int *)(self + 0x32ba14);
        iVar39 = 0;
        if (iVar14 != 0) {
          iVar39 = (iVar13 + iVar37 + *(int *)(self + 0x32ba20)) / iVar14;
        }
        iVar40 = 0;
        if (iVar14 != 0) {
          iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14;
        }
        lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
LAB_00416b04:
        if ((0 < *(int *)(self + lVar27 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar27 + 0x140598) * 0x12 | 1) * 4 +
                                   0x11c378))) goto LAB_00416b58;
      }
      else {
        iVar13 = *piVar19;
        if (iVar38 == 1) {
          iVar14 = *(int *)(self + 0x32ba14);
          iVar39 = 0;
          if (iVar14 != 0) {
            iVar39 = ((iVar13 - iVar37) + *(int *)(self + 0x32ba20)) / iVar14;
          }
          iVar40 = 0;
          if (iVar14 != 0) {
            iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14
            ;
          }
          lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
          goto LAB_00416b04;
        }
      }
      iVar14 = iVar37 + 2;
      if (iVar38 != 0) {
        iVar14 = -2 - iVar37;
      }
      *piVar19 = iVar13 + iVar14;
    }
LAB_00416b58:
    *puVar1 = *puVar1 + 1;
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ccc);
    if (0 < iVar37) {
      *(int *)(self + lVar33 * 0x50 + 0xb0ccc) = iVar37 + -1;
    }
    break;
  case 0x31:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    iVar37 = *piVar22;
    puVar6 = (uint *)(self + lVar33 * 0x50 + 0xb0ce4);
    uVar18 = *puVar6;
    if (iVar37 == 0xdd) {
      if ((int)uVar18 < 10) {
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*(int *)(self + 0xba8) == 1)) {
          iVar37 = 0x1a;
        }
        else {
          local_80 = 0x1900000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
        }
        iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd4);
        if (iVar38 < 0x274) {
          iVar38 = iVar37 + iVar38 + 0x46;
        }
        else {
          iVar38 = iVar38 + -0x273;
        }
        *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = iVar38;
LAB_00417398:
        uVar18 = *puVar6;
      }
      if (9 < uVar18) goto LAB_004175ec;
LAB_004173a4:
      if ((1 << (ulong)(uVar18 & 0x1f) & 0x2abU) == 0) goto LAB_004175ec;
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) - iVar37;
    }
    else {
      if ((int)uVar18 < 10) {
        iVar38 = 0x21d;
        if (iVar37 < 0x220) {
          iVar38 = iVar37 + 1;
        }
        *piVar22 = iVar38;
        goto LAB_00417398;
      }
      *piVar22 = 0x220;
      if (uVar18 < 10) goto LAB_004173a4;
LAB_004175ec:
      piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
      iVar38 = *piVar30;
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) + iVar38;
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar37;
      iVar13 = *piVar19;
      iVar14 = *(int *)(self + 0x32ba14);
      iVar39 = 0;
      if (iVar14 != 0) {
        iVar39 = (*(int *)(self + 0x32ba20) + iVar13) / iVar14;
      }
      iVar40 = 0;
      if (iVar14 != 0) {
        iVar40 = (iVar37 + *(int *)(self + 0x32ba24) + 0x1a) / iVar14;
      }
      if ((*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar38 = *(int *)(self + 0x1ae8);
        iVar14 = *piVar22;
        uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cc0);
        if (((iVar38 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar38 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar39 = 5;
        }
        else {
          local_80 = 0x400000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          iVar38 = *(int *)(self + 0x1ae8);
        }
        uVar18 = iVar38 - 0xd;
        if (iVar14 == 0xdd) {
          if ((((0x3d < uVar18) || ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar27 = 0;
            puVar23 = (undefined8 *)(self + 0xb0cdc);
            do {
              if (*(int *)(puVar23 + -2) < 1) {
                *(float *)((gh_long)puVar23 + -4) = (float)*(int *)(self + lVar33 * 0x50 + 0xb0cd4);
                *(undefined8 *)((gh_long)puVar23 + -0xc) = 0x1000000dd;
                *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000089;
                *(int *)((gh_long)puVar23 + -0x24) = iVar13;
                *(int *)(puVar23 + -4) = iVar37;
                *(undefined4 *)((gh_long)puVar23 + -0x1c) = uVar24;
                *(int *)(puVar23 + 2) = iVar39;
                *puVar23 = 0x3f8000003f800000;
                puVar23[1] = 0;
                *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
                *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
                *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
                break;
              }
              lVar27 = lVar27 + 1;
              puVar23 = puVar23 + 10;
            } while (lVar27 < *(int *)(self + 0x32b828));
          }
        }
        else if (((0x3d < uVar18) || ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) == 0)) &&
                ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar23 + -2) < 1) {
              *(float *)((gh_long)puVar23 + -4) = (float)*(int *)(self + lVar33 * 0x50 + 0xb0cd4);
              *(undefined8 *)((gh_long)puVar23 + -0x14) = 0x6400000086;
              *(int *)((gh_long)puVar23 + -0x24) = iVar13;
              *(int *)(puVar23 + -4) = iVar37;
              *(undefined4 *)((gh_long)puVar23 + -0x1c) = uVar24;
              *(int *)(puVar23 + 2) = iVar39;
              *(int *)((gh_long)puVar23 + -0xc) = iVar14;
              *(undefined4 *)(puVar23 + -1) = 1;
              *puVar23 = 0x3f8000003f800000;
              puVar23[1] = 0;
              *(undefined8 *)((gh_long)puVar23 + 0x1c) = 0xff00000000;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0x24) = 0xff000000ff;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
        iVar38 = *piVar30;
      }
      iVar37 = iVar38 + -2;
      if (iVar38 < 1) {
        iVar37 = 0;
      }
      *piVar30 = iVar37;
    }
    if (0 < iVar37) {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
      if (iVar38 == 0) {
        iVar13 = *piVar19;
        iVar14 = *(int *)(self + 0x32ba14);
        iVar39 = 0;
        if (iVar14 != 0) {
          iVar39 = (iVar13 + iVar37 + *(int *)(self + 0x32ba20)) / iVar14;
        }
        iVar40 = 0;
        if (iVar14 != 0) {
          iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14;
        }
        lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
LAB_004174c4:
        if ((0 < *(int *)(self + lVar27 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar27 + 0x140598) * 0x12 | 1) * 4 +
                                   0x11c378))) goto LAB_00417518;
      }
      else {
        iVar13 = *piVar19;
        if (iVar38 == 1) {
          iVar14 = *(int *)(self + 0x32ba14);
          iVar39 = 0;
          if (iVar14 != 0) {
            iVar39 = ((iVar13 - iVar37) + *(int *)(self + 0x32ba20)) / iVar14;
          }
          iVar40 = 0;
          if (iVar14 != 0) {
            iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14
            ;
          }
          lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
          goto LAB_004174c4;
        }
      }
      iVar14 = iVar37 + 2;
      if (iVar38 != 0) {
        iVar14 = -2 - iVar37;
      }
      *piVar19 = iVar13 + iVar14;
    }
LAB_00417518:
    *puVar6 = *puVar6 + 1;
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0ccc);
    if (0 < *piVar30) {
      *piVar30 = *piVar30 + -1;
    }
    if ((*(int *)(self + 0x8dac8) + -0x3c < *piVar19) &&
       (*piVar19 < *(int *)(self + 0x8dac8) + 0x3c)) {
      piVar32 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
      if ((*(int *)(self + 0x8dacc) + -0x82 < *piVar32) &&
         (*piVar32 < *(int *)(self + 0x8dacc) + 0x1e)) {
        if (*piVar22 == 0xdd) {
          bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba94)));
        }
        else {
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba98)));
        }
        *piVar30 = 0;
      }
    }
    else {
      piVar32 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    }
    piVar22 = (int *)(self + 0x32ba98);
    if (0 < *(int *)(self + 0x32c3fc)) {
      if ((*(int *)(self + 0x8dd50) + -0x3c < *piVar19) &&
         (*piVar19 < *(int *)(self + 0x8dd50) + 0x3c)) {
        if ((*(int *)(self + 0x8dd54) + -0x82 < *piVar32) &&
           (*piVar32 < *(int *)(self + 0x8dd54) + 0x1e)) {
          if (*puVar1 == 0xdd) {
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar22));
          }
          else {
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar22));
          }
          *piVar30 = 0;
        }
      }
    }
    if (0 < *(int *)(self + 0x32c400)) {
      if ((*(int *)(self + 0x8dfd8) + -0x3c < *piVar19) &&
         (*piVar19 < *(int *)(self + 0x8dfd8) + 0x3c)) {
        if ((*(int *)(self + 0x8dfdc) + -0x82 < *piVar32) &&
           (*piVar32 < *(int *)(self + 0x8dfdc) + 0x1e)) {
          if (*puVar1 == 0xdd) {
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar22));
          }
          else {
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar22));
          }
          *piVar30 = 0;
        }
      }
    }
    if (0 < *(int *)(self + 0x32c404)) {
      if ((*(int *)(self + 0x8e260) + -0x3c < *piVar19) &&
         (*piVar19 < *(int *)(self + 0x8e260) + 0x3c)) {
        if ((*(int *)(self + 0x8e264) + -0x82 < *piVar32) &&
           (*piVar32 < *(int *)(self + 0x8e264) + 0x1e)) {
          if (*puVar1 == 0xdd) {
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar22));
            *piVar30 = 0;
          }
          else {
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar22));
            *piVar30 = 0;
          }
        }
      }
    }
    break;
  case 0x32:
  case 0x6f:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ce8);
    if (iVar37 == 0) {
      iVar37 = *(int *)(self + (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4) * 0x288 + 0x8dacc) -
               *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
      *(int *)(self + lVar33 * 0x50 + 0xb0ce8) = iVar37;
    }
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    iVar38 = *piVar22;
    *piVar22 = iVar38 + 1;
    if (iVar38 < 0xc2) {
      if (iVar38 < 0xbc) goto LAB_00414bdc;
    }
    else {
      *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = *(int *)(self + lVar33 * 0x50 + 0xb0ce4) + 1;
LAB_00414bdc:
      *piVar22 = 0xbd;
    }
    if (-1 < *(int *)(self + lVar33 * 0x50 + 0xb0cd4)) {
      lVar27 = (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4);
      *piVar19 = *(int *)(self + lVar33 * 0x50 + 0xb0cec) +
                 *(int *)(self + lVar27 * 0x288 + 0x8dac8);
      if ((*(int *)(self + lVar27 * 0x288 + 0x8daf0) - 0x14cU < 0xe) &&
         ((1 << (ulong)(*(int *)(self + lVar27 * 0x288 + 0x8daf0) - 0x14cU & 0x1f) & 0x20ffU) != 0))
      {
        iVar37 = *(int *)(self + lVar27 * 0x288 + 0x8dacc) + 0x28;
      }
      else {
        iVar37 = *(int *)(self + lVar27 * 0x288 + 0x8dacc) - iVar37;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar37;
    }
    if ((3 < *(int *)(self + lVar33 * 0x50 + 0xb0ce4)) ||
       (0x46 < *(int *)(self + (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4) * 0x288 + 0x8dae0))) {
      fVar34 = *(float *)(self + lVar33 * 0x50 + 0xb0ce0) + -0.1;
      *(float *)(self + lVar33 * 0x50 + 0xb0ce0) = fVar34;
      goto joined_r0x00415270;
    }
    lVar27 = 0xb0ce0;
    puVar21 = self + lVar33 * 0x50;
    iVar37 = 0x3f4ccccd;
    goto LAB_00415a94;
  case 0x33:
  case 0x73:
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    iVar37 = *piVar19;
    *piVar19 = iVar37 + 1;
    if (iVar37 < 0x27) {
      if (iVar37 < 0x1d) goto LAB_00415220;
    }
    else {
      *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = *(int *)(self + lVar33 * 0x50 + 0xb0ce4) + 1;
LAB_00415220:
      *piVar19 = 0x1e;
    }
    pfVar2 = (float *)(self + lVar33 * 0x50 + 0xb0ce0);
    if (*(int *)(self + lVar33 * 0x50 + 0xb0ce4) < 4) {
      *pfVar2 = 0.8;
      break;
    }
    fVar34 = *pfVar2 + -0.1;
    *pfVar2 = fVar34;
joined_r0x00415270:
    if (fVar34 <= 0.0) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0;
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
    break;
  case 0x34:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar37 = 0x1a;
    }
    else {
      local_80 = 0x1900000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
    }
    iVar38 = -0x273;
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cd4) < 0x274) {
      iVar38 = iVar37 + 0x46;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = iVar38 + *(int *)(self + lVar33 * 0x50 + 0xb0cd4);
    puVar1 = (uint *)(self + lVar33 * 0x50 + 0xb0ce4);
    if ((*puVar1 < 10) && ((1 << (ulong)(*puVar1 & 0x1f) & 0x2abU) != 0)) {
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) - iVar37;
    }
    else {
      piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
      piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
      iVar38 = *piVar22;
      iVar37 = *piVar30 + iVar38;
      *piVar30 = iVar37;
      iVar13 = *piVar19;
      iVar14 = *(int *)(self + 0x32ba14);
      iVar39 = 0;
      if (iVar14 != 0) {
        iVar39 = (*(int *)(self + 0x32ba20) + iVar13) / iVar14;
      }
      iVar40 = 0;
      if (iVar14 != 0) {
        iVar40 = (iVar37 + *(int *)(self + 0x32ba24) + 0x1a) / iVar14;
      }
      if ((*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
          iVar13 = *piVar19;
          iVar37 = *piVar30;
        }
        puVar20 = (undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
        uVar24 = *puVar20;
        uVar18 = *(int *)(self + 0x1ae8) - 0xd;
        uVar25 = (ulong)uVar18;
        iVar38 = iVar37 + -0x14;
        if ((((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(int *)(puVar23 + -4) = iVar13 + -0x1e;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar38;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              iVar37 = *piVar30;
              uVar24 = *puVar20;
              iVar13 = *piVar19;
              iVar38 = iVar37 + -0x14;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(int *)(puVar23 + -4) = iVar13 + 0x1e;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar38;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              uVar24 = *puVar20;
              iVar13 = *piVar19;
              iVar37 = *piVar30;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(int *)(puVar23 + -4) = iVar13;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar37 + -0x32;
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              uVar24 = *puVar20;
              iVar13 = *piVar19;
              iVar37 = *piVar30;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        if ((((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(int *)(puVar23 + -4) = iVar13;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar37 + -0x14;
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x1c;
              puVar23[-2] = 0x640000006a;
              *(undefined4 *)(puVar23 + -3) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
        iVar38 = *piVar22;
      }
      iVar37 = iVar38 + -2;
      if (iVar38 < 1) {
        iVar37 = 0;
      }
      *piVar22 = iVar37;
    }
    if (0 < iVar37) {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
      if (iVar38 == 0) {
        iVar13 = *piVar19;
        iVar14 = *(int *)(self + 0x32ba14);
        iVar39 = 0;
        if (iVar14 != 0) {
          iVar39 = (iVar13 + iVar37 + *(int *)(self + 0x32ba20)) / iVar14;
        }
        iVar40 = 0;
        if (iVar14 != 0) {
          iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14;
        }
        lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
LAB_00416be8:
        if ((0 < *(int *)(self + lVar27 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar27 + 0x140598) * 0x12 | 1) * 4 +
                                   0x11c378))) goto LAB_00416c3c;
      }
      else {
        iVar13 = *piVar19;
        if (iVar38 == 1) {
          iVar14 = *(int *)(self + 0x32ba14);
          iVar39 = 0;
          if (iVar14 != 0) {
            iVar39 = ((iVar13 - iVar37) + *(int *)(self + 0x32ba20)) / iVar14;
          }
          iVar40 = 0;
          if (iVar14 != 0) {
            iVar40 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar33 * 0x50 + 0xb0cbc)) / iVar14
            ;
          }
          lVar27 = (gh_long)iVar40 * 4 + (gh_long)iVar39 * 0x2d0;
          goto LAB_00416be8;
        }
      }
      iVar14 = iVar37 + 2;
      if (iVar38 != 0) {
        iVar14 = -2 - iVar37;
      }
      *piVar19 = iVar13 + iVar14;
    }
LAB_00416c3c:
    *puVar1 = *puVar1 + 1;
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ccc);
    if (0 < *piVar22) {
      if ((iVar37 == 0) || (iVar37 = *piVar22 + -1, iVar37 == 0)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        }
        piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
        puVar20 = (undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
        iVar38 = *piVar30;
        uVar24 = *puVar20;
        iVar37 = *piVar19;
        uVar18 = *(int *)(self + 0x1ae8) - 0xd;
        uVar25 = (ulong)uVar18;
        iVar13 = iVar38 + -0x14;
        if ((((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar33 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(int *)(puVar23 + -4) = iVar37 + -0x1e;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar13;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              iVar38 = *piVar30;
              uVar24 = *puVar20;
              iVar37 = *piVar19;
              iVar13 = iVar38 + -0x14;
              break;
            }
            lVar33 = lVar33 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar33 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar33 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(int *)(puVar23 + -4) = iVar37 + 0x1e;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar13;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              uVar24 = *puVar20;
              iVar37 = *piVar19;
              iVar38 = *piVar30;
              break;
            }
            lVar33 = lVar33 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar33 < *(int *)(self + 0x32b828));
        }
        if (((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar33 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(int *)(puVar23 + -4) = iVar37;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar38 + -0x32;
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x85;
              puVar23[-2] = 0x6400000078;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined4 *)(puVar23 + -3) = 1;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              uVar24 = *puVar20;
              iVar37 = *piVar19;
              iVar38 = *piVar30;
              break;
            }
            lVar33 = lVar33 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar33 < *(int *)(self + 0x32b828));
        }
        if ((((0x3d < uVar18) || ((1LL << (uVar25 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar33 = 0;
          puVar23 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
              *(int *)(puVar23 + -4) = iVar37;
              *(int *)((gh_long)puVar23 + -0x1c) = iVar38 + -0x14;
              *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
              puVar23[-1] = 0x1c;
              puVar23[-2] = 0x640000006a;
              *(undefined4 *)(puVar23 + -3) = 0;
              *puVar23 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
              *(undefined4 *)(puVar23 + 1) = 0x3f800000;
              puVar23[5] = 0xff000000ff;
              puVar23[4] = 0xff00000000;
              break;
            }
            lVar33 = lVar33 + 1;
            puVar23 = puVar23 + 10;
          } while (lVar33 < *(int *)(self + 0x32b828));
        }
        *piVar22 = 0;
      }
      else {
        *piVar22 = iVar37;
      }
    }
    break;
  case 99:
  case 0x67:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ce4);
    if (iVar37 == 0) {
      iVar38 = 0x61;
    }
    else {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0) + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    if (uVar18 == 0x67) {
      *piVar19 = *(int *)(self + (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4) * 0x288 + 0x8dac8);
    }
    if (0x6c < iVar38) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0;
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = iVar37 + 1;
    break;
  case 100:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    if (iVar37 == 0) {
      iVar38 = 0x3e;
    }
    else {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0) + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    lVar27 = (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4);
    bVar11 = SBORROW4(iVar38,0x48);
    bVar12 = iVar38 + -0x48 < 0;
    goto LAB_00416024;
  case 0x65:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    if (iVar37 == 0) {
      iVar38 = 0x49;
    }
    else {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0) + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    lVar27 = (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4);
    bVar11 = SBORROW4(iVar38,0x53);
    bVar12 = iVar38 + -0x53 < 0;
    goto LAB_00416024;
  case 0x66:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    if (iVar37 == 0) {
      iVar38 = 0x55;
    }
    else {
      iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0) + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    lVar27 = (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4);
    bVar11 = SBORROW4(iVar38,0x5f);
    bVar12 = iVar38 + -0x5f < 0;
LAB_00416024:
    *piVar19 = *(int *)(self + lVar27 * 0x288 + 0x8dac8);
    if (bVar12 == bVar11) {
LAB_0041603c:
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0;
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
    goto LAB_0041605c;
  case 0x68:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
    iVar37 = *piVar22;
    if (iVar37 < 3) {
      uVar24 = 0x107;
LAB_00415788:
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = uVar24;
      iVar38 = -3;
      if (*(int *)(self + lVar33 * 0x50 + 0xb0cc0) == 0) {
        iVar38 = 3;
      }
      *piVar19 = iVar38 + *piVar19;
    }
    else {
      if (iVar37 < 6) {
        uVar24 = 0x108;
        goto LAB_00415788;
      }
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0x109;
    }
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar38 = *piVar30;
    if (iVar38 < 1) {
      iVar13 = 0;
      piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    }
    else {
      iVar14 = *piVar19;
      iVar40 = *(int *)(self + 0x32ba14);
      piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
      iVar39 = *piVar19;
      iVar16 = 0;
      if (iVar40 != 0) {
        iVar16 = (*(int *)(self + 0x32ba20) + iVar14) / iVar40;
      }
      iVar13 = 0;
      do {
        iVar15 = 0;
        if (iVar40 != 0) {
          iVar15 = (iVar39 + *(int *)(self + 0x32ba24) + iVar13) / iVar40;
        }
        if ((0 < *(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 +
                                                               (gh_long)iVar16 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) {
          iVar37 = *(int *)(self + 0x1ae8);
          if (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) !=
              0x33) {
            if ((((iVar37 - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                (*(int *)(self + 0xba8) == 1)) || (*(int *)(self + 0x32b828) < 1))
            goto LAB_00417c08;
            lVar27 = 0;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_00419014;
          }
          if (((iVar37 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar38 = 0x1e;
          }
          else {
            local_80 = 0x1d00000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar37 = *(int *)(self + 0x1ae8);
            iVar38 = iVar38 + -0x14;
          }
          if (((iVar37 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1)))) goto LAB_00417c08;
          lVar27 = 0;
          puVar20 = (undefined4 *)(self + 0xb0ce0);
          goto LAB_00416a88;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar38);
    }
    goto LAB_00417c24;
  case 0x6a:
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0x1c;
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    if (iVar37 < 4) goto LAB_0041605c;
    goto LAB_0041603c;
  case 0x6e:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    if (iVar37 == 0) {
      *piVar19 = 0x11;
    }
    else {
      iVar38 = *piVar19;
      *piVar19 = iVar38 + 1;
      if (0x16 < iVar38) {
LAB_004153ac:
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
        *piVar19 = 0;
      }
    }
    goto LAB_0041605c;
  case 0x70:
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0);
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar37 + 1;
    if (iVar37 < 0xe6) goto LAB_00415a7c;
LAB_004150d0:
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0;
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    goto LAB_00415a7c;
  case 0x78:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    if (iVar37 == 0) {
      *piVar19 = 0x85;
    }
    else {
      iVar38 = *piVar19;
      *piVar19 = iVar38 + 1;
      if (0x94 < iVar38) goto LAB_004153ac;
    }
    goto LAB_0041605c;
  case 0x7e:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0);
    if (3 < iVar37) {
      iVar38 = iVar38 + 1;
      *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar38;
    }
    if (0x24d < iVar38) goto LAB_0041603c;
    goto LAB_0041605c;
  case 0x82:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
    if (iVar37 == 0) {
      *piVar19 = 0x96;
    }
    else {
      iVar38 = *piVar19;
      *piVar19 = iVar38 + 1;
      if (0x9a < iVar38) goto LAB_004153ac;
    }
    goto LAB_0041605c;
  case 0x83:
    iVar37 = 8;
  case 0x85:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar38 = 0x1a;
    }
    else {
      local_80 = 0x1900000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
    }
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cd4);
    iVar13 = -0x273;
    if (*piVar22 < 0x274) {
      iVar13 = iVar38 + 0x46;
    }
    *piVar22 = iVar13 + *piVar22;
    iVar38 = *piVar19;
    iVar14 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar39 = *(int *)(self + 0x32ba20);
    iVar13 = *piVar30;
    iVar40 = *(int *)(self + 0x32ba24);
    iVar16 = *(int *)(self + 0x32ba14);
    iVar15 = 0;
    if (iVar16 != 0) {
      iVar15 = (iVar14 + iVar38 + iVar39) / iVar16;
    }
    iVar29 = 0;
    if (iVar16 != 0) {
      iVar29 = (iVar40 + iVar13) / iVar16;
    }
    if ((*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar15 * 0x2d0 + 0x140598) < 1) ||
       (iVar15 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar15 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar15 < 0x32)) {
      iVar15 = 0;
    }
    iVar8 = 0;
    if (iVar16 != 0) {
      iVar8 = ((iVar38 - iVar14) + iVar39) / iVar16;
    }
    if ((*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
       (iVar29 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar8 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar29 < 0x32)) {
      iVar29 = 0;
    }
    iVar8 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
    if (((iVar15 < 0x32) || (iVar8 != 0)) && ((iVar29 < 0x32 || (iVar8 != 1)))) {
      if (iVar8 != 0) {
        iVar14 = -iVar14;
      }
      iVar38 = iVar14 + iVar38;
      *piVar19 = iVar38;
    }
    piVar32 = (int *)(self + lVar33 * 0x50 + 0xb0cf4);
    iVar15 = *piVar32;
    iVar14 = iVar15;
    if (0 < iVar15) {
      iVar14 = 1;
      if (iVar15 == 1) {
        iVar15 = 1;
        iVar14 = 1;
      }
      else {
        iVar29 = 0;
        if (iVar16 != 0) {
          iVar29 = (iVar38 + iVar39) / iVar16;
        }
        do {
          iVar39 = 0;
          if (iVar16 != 0) {
            iVar39 = (iVar37 + iVar13 + iVar40 + iVar14) / iVar16;
          }
          if ((0 < *(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar29 * 0x2d0 + 0x140598)) &&
             (iVar39 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 +
                                                                   (gh_long)iVar29 * 0x2d0 + 0x140598)
                                                   * 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar39)) {
            iVar37 = *(int *)(self + 0x1ae8);
            uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0);
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar40 = 2;
            }
            else {
              local_80 = 0x100000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar38 = *piVar19;
              iVar13 = *piVar30;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            uVar18 = iVar37 - 0xd;
            if (iVar39 != 0x33) {
              if (((uVar18 < 0x3e) && ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) != 0))
                 || (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 4;
              }
              else {
                local_80 = 0x300000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar39 = iVar39 + 4;
                iVar37 = *(int *)(self + 0x1ae8);
              }
              iVar16 = *piVar22;
              if (((iVar37 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
              goto LAB_00417aa4;
              lVar27 = 0;
              puVar23 = (undefined8 *)(self + 0xb0ce0);
              goto LAB_00418f1c;
            }
            if (((uVar18 < 0x3e) && ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar15 = 0x14;
            }
            else {
              local_80 = 0x1300000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar15 = iVar15 + -10;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar39 = 4;
            }
            else {
              local_80 = 0x300000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar39 = iVar39 + 4;
              iVar37 = *(int *)(self + 0x1ae8);
            }
            iVar16 = *piVar22;
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
            goto LAB_00417aa4;
            iVar13 = iVar13 + iVar15;
            lVar27 = 0;
            puVar23 = (undefined8 *)(self + 0xb0ce0);
            goto LAB_004168b0;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar15);
      }
    }
    goto LAB_00417ac0;
  case 0x84:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
    iVar37 = *piVar22;
    if (iVar37 < 1) {
      iVar38 = 0;
      if (*(int *)(self + lVar33 * 0x50 + 0xb0ccc) < 1) {
        iVar38 = iVar37;
      }
    }
    else {
      iVar13 = *piVar19;
      iVar14 = *(int *)(self + 0x32ba14);
      iVar39 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
      iVar40 = 0;
      if (iVar14 != 0) {
        iVar40 = (*(int *)(self + 0x32ba20) + iVar13) / iVar14;
      }
      iVar38 = 0;
      do {
        iVar16 = 0;
        if (iVar14 != 0) {
          iVar16 = (iVar39 + *(int *)(self + 0x32ba24) + iVar38) / iVar14;
        }
        if ((0 < *(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar40 * 0x2d0 + 0x140598)) &&
           (iVar16 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar16 * 4 +
                                                                 (gh_long)iVar40 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378), 0x32 < iVar16)) {
          *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
          iVar37 = *(int *)(self + 0x1ae8);
          if (iVar16 == 0x33) {
            if (((iVar37 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar14 = 0x1e;
            }
            else {
              local_80 = 0x1d00000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar37 = *(int *)(self + 0x1ae8);
              iVar14 = iVar14 + -0x14;
            }
            if (((0x3d < iVar37 - 0xdU) ||
                ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
              lVar27 = 0;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_00416798;
            }
          }
          else if ((((0x3d < iVar37 - 0xdU) ||
                    ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                   (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar27 = 0;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_00418e80;
          }
          break;
        }
        iVar38 = iVar38 + 1;
      } while (iVar38 < iVar37);
    }
    goto LAB_004179d0;
  case 0x86:
    iVar37 = 0x21d;
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cd0) < 0x220) {
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cd0) + 1;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd0) = iVar37;
    goto LAB_00415ab0;
  case 0x87:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    if (*piVar22 == 0) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf0) = 0xfffffff4;
    }
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0x24e;
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar37 = 0x1a;
    }
    else {
      local_80 = 0x1900000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
    }
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cd4);
    iVar38 = -0x273;
    if (*piVar30 < 0x274) {
      iVar38 = iVar37 + 0x46;
    }
    iVar38 = iVar38 + *piVar30;
    *piVar30 = iVar38;
    iVar37 = *piVar19;
    iVar13 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    piVar32 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar39 = *(int *)(self + 0x32ba20);
    iVar14 = *piVar32;
    iVar40 = *(int *)(self + 0x32ba24);
    iVar16 = *(int *)(self + 0x32ba14);
    iVar15 = 0;
    if (iVar16 != 0) {
      iVar15 = (iVar13 + iVar37 + iVar39) / iVar16;
    }
    iVar29 = 0;
    if (iVar16 != 0) {
      iVar29 = (iVar40 + iVar14) / iVar16;
    }
    if ((*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar15 * 0x2d0 + 0x140598) < 1) ||
       (iVar15 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar15 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar15 < 0x32)) {
      iVar15 = 0;
    }
    iVar8 = 0;
    if (iVar16 != 0) {
      iVar8 = ((iVar37 - iVar13) + iVar39) / iVar16;
    }
    if ((*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
       (iVar29 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar29 * 4 + (gh_long)iVar8 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar29 < 0x32)) {
      iVar29 = 0;
    }
    iVar8 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
    if (((iVar15 < 0x32) || (iVar8 != 0)) && ((iVar29 < 0x32 || (iVar8 != 1)))) {
      if (*(int *)(self + lVar33 * 0x50 + 0xb0ce8) == 0) {
        if (iVar8 != 0) {
          iVar13 = -iVar13;
        }
        iVar37 = iVar13 + iVar37;
        *piVar19 = iVar37;
      }
    }
    else {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ce8) = 10;
    }
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cf0);
    iVar15 = *piVar19;
    iVar13 = iVar15;
    if (0 < iVar15) {
      iVar13 = 1;
      if (iVar15 == 1) {
        iVar15 = 1;
      }
      else {
        iVar29 = 0;
        if (iVar16 != 0) {
          iVar29 = (iVar37 + iVar39) / iVar16;
        }
        do {
          iVar39 = 0;
          if (iVar16 != 0) {
            iVar39 = (iVar14 + iVar40 + iVar13) / iVar16;
          }
          if ((0 < *(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar29 * 0x2d0 + 0x140598)) &&
             (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 +
                                                                 (gh_long)iVar29 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378))) {
            uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
            iVar40 = *(int *)(self + 0x1ae8);
            if (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar39 * 4 + (gh_long)iVar29 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                != 0x33) {
              if (((iVar40 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar40 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*(int *)(self + 0xba8) == 1)) {
                iVar39 = 4;
              }
              else {
                local_80 = 0x300000000;
                pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
                iVar38 = *piVar30;
                iVar40 = *(int *)(self + 0x1ae8);
                iVar39 = iVar39 + 8;
              }
              if (((iVar40 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar40 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
              goto LAB_00418408;
              lVar27 = 0;
              puVar20 = (undefined4 *)(self + 0xb0ce0);
              goto LAB_0041956c;
            }
            if (((iVar40 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar40 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar38 = 0x14;
            }
            else {
              local_80 = 0x1300000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar38 = iVar38 + -10;
              iVar40 = *(int *)(self + 0x1ae8);
            }
            if (((iVar40 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar40 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar39 = 4;
            }
            else {
              local_80 = 0x300000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar40 = *(int *)(self + 0x1ae8);
              iVar39 = iVar39 + 8;
            }
            iVar16 = *piVar30;
            if (((iVar40 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar40 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
            goto LAB_00418408;
            lVar27 = 0;
            puVar20 = (undefined4 *)(self + 0xb0ce0);
            goto LAB_0041798c;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar15);
      }
    }
    goto LAB_00416358;
  case 0x88:
    if (*(int *)(self + lVar33 * 0x50 + 0xb0ce4) == 0) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf0) = 0xfffffff4;
    }
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0x29;
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cd4);
    iVar37 = *piVar22;
    if (iVar37 < 0x274) {
      *piVar22 = iVar37 + 0x96;
    }
    else {
      *piVar22 = iVar37 + -0x273;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1860)), GH_ARG(false));
      }
    }
    iVar38 = *piVar19;
    iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    iVar13 = *(int *)(self + 0x32ba20);
    iVar14 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar39 = *(int *)(self + 0x32ba14);
    iVar40 = 0;
    if (iVar39 != 0) {
      iVar40 = (iVar37 + iVar38 + iVar13) / iVar39;
    }
    iVar16 = 0;
    if (iVar39 != 0) {
      iVar16 = (*(int *)(self + 0x32ba24) + iVar14) / iVar39;
    }
    if ((*(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar40 * 0x2d0 + 0x140598) < 1) ||
       (iVar40 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar40 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar40 < 0x32)) {
      iVar40 = 0;
    }
    iVar15 = 0;
    if (iVar39 != 0) {
      iVar15 = ((iVar38 - iVar37) + iVar13) / iVar39;
    }
    if ((*(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar15 * 0x2d0 + 0x140598) < 1) ||
       (iVar15 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar15 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar15 < 0x32)) {
      iVar15 = 0;
    }
    iVar29 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
    if (((iVar40 < 0x32) || (iVar29 != 0)) && ((iVar15 < 0x32 || (iVar29 != 1)))) {
      if (iVar29 != 0) {
        iVar37 = -iVar37;
      }
      iVar37 = iVar37 + iVar38;
      *piVar19 = iVar37;
      if (((-0xc9 < iVar37) && (-0x51 < iVar14)) &&
         ((iVar37 <= *(int *)(self + 0x1158) + 200 && (iVar14 <= *(int *)(self + 0x115c) + 0x50))))
      break;
    }
    else {
      iVar37 = 0;
      if (iVar39 != 0) {
        iVar37 = (iVar13 + iVar38) / iVar39;
      }
      piVar22 = (int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar37 * 0x2d0 + 0x140598);
      if (*piVar22 == 0) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x18a8)), GH_ARG(false));
          iVar37 = *(int *)(self + 0x32ba14);
          iVar38 = 0;
          if (iVar37 != 0) {
            iVar38 = (*piVar19 + *(int *)(self + 0x32ba20)) / iVar37;
          }
          iVar29 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
          iVar13 = 0;
          if (iVar37 != 0) {
            iVar13 = (*(int *)(self + lVar33 * 0x50 + 0xb0cbc) + *(int *)(self + 0x32ba24)) / iVar37
            ;
          }
          piVar22 = (int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar38 * 0x2d0 + 0x140598);
        }
        iVar37 = 0x66;
        if (iVar29 != 0) {
          iVar37 = 0x67;
        }
        *piVar22 = iVar37;
      }
      else {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x18c0)), GH_ARG(false));
        }
        iVar37 = *(int *)(self + 0x1ae8);
        if (((iVar37 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar38 = -0x14;
        }
        else {
          local_80 = 0x1300000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          iVar37 = *(int *)(self + 0x1ae8);
          iVar38 = -0xc - iVar38;
        }
        if (((iVar37 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar13 = 2;
        }
        else {
          local_80 = 0x100000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          iVar37 = *(int *)(self + 0x1ae8);
        }
        uVar31 = *(undefined8 *)piVar19;
        if (((iVar37 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*(int *)(self + 0xba8) == 1)) {
          iVar14 = 8;
        }
        else {
          local_80 = 0x700000000;
          pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
          iVar37 = *(int *)(self + 0x1ae8);
          iVar14 = iVar14 + 4;
        }
        if ((((0x3d < iVar37 - 0xdU) ||
             ((1LL << ((ulong)(iVar37 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar27 = 0;
          puVar20 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar20[-5] < 1) {
              puVar20[2] = 0;
              puVar20[3] = iVar14;
              *(undefined8 *)(puVar20 + -4) = 0x100000005;
              *(undefined8 *)(puVar20 + -6) = 0x6400000085;
              *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
              *(undefined8 *)(puVar20 + -10) = uVar31;
              puVar20[-8] = iVar13;
              puVar20[4] = 0;
              puVar20[5] = iVar38;
              *puVar20 = 0x3f800000;
              puVar20[1] = 0;
              *(undefined8 *)(puVar20 + 6) = 0xff00000000;
              *(undefined8 *)(puVar20 + 8) = 0xff000000ff;
              break;
            }
            lVar27 = lVar27 + 1;
            puVar20 = puVar20 + 0x14;
          } while (lVar27 < *(int *)(self + 0x32b828));
        }
      }
    }
    goto switchD_00413b54_caseD_0;
  case 0x89:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar37 = 0x1a;
    }
    else {
      local_80 = 0x1900000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
    }
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cd4);
    if (iVar38 < 0x274) {
      iVar38 = iVar37 + iVar38 + 0x46;
    }
    else {
      iVar38 = iVar38 + -0x273;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = iVar38;
LAB_00415ab0:
    iVar38 = *piVar19;
    iVar13 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    iVar14 = *(int *)(self + 0x32ba20);
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar39 = *(int *)(self + 0x32ba24);
    iVar37 = *piVar22;
    iVar40 = *(int *)(self + 0x32ba14);
    iVar16 = 0;
    if (iVar40 != 0) {
      iVar16 = (iVar13 + iVar38 + iVar14) / iVar40;
    }
    iVar15 = 0;
    if (iVar40 != 0) {
      iVar15 = (iVar39 + iVar37) / iVar40;
    }
    if ((*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598) < 1) ||
       (iVar16 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar16 < 0x32)) {
      iVar16 = 0;
    }
    iVar29 = 0;
    if (iVar40 != 0) {
      iVar29 = ((iVar38 - iVar13) + iVar14) / iVar40;
    }
    if ((*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar29 * 0x2d0 + 0x140598) < 1) ||
       (iVar15 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar29 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
       , iVar15 < 0x32)) {
      iVar15 = 0;
    }
    iVar29 = *(int *)(self + lVar33 * 0x50 + 0xb0cc0);
    if (((iVar16 < 0x32) || (iVar29 != 0)) && ((iVar15 < 0x32 || (iVar29 != 1)))) {
      if (iVar29 != 0) {
        iVar13 = -iVar13;
      }
      iVar38 = iVar13 + iVar38;
      *piVar19 = iVar38;
    }
    piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cf4);
    iVar13 = *piVar30;
    if (0 < iVar13) {
      if (iVar13 == 1) {
        iVar37 = iVar37 + 1;
        iVar13 = 4;
        goto LAB_00415c30;
      }
      iVar16 = 0;
      if (iVar40 != 0) {
        iVar16 = (iVar38 + iVar14) / iVar40;
      }
      iVar14 = 1;
      do {
        iVar15 = 0;
        if (iVar40 != 0) {
          iVar15 = (iVar37 + iVar39 + iVar14) / iVar40;
        }
        if ((0 < *(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598)) &&
           (iVar15 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 +
                                                                 (gh_long)iVar16 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar15)) {
          iVar13 = *(int *)(self + 0x1ae8);
          uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0);
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar39 = 2;
          }
          else {
            local_80 = 0x100000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar38 = *piVar19;
            iVar37 = *piVar22;
            iVar13 = *(int *)(self + 0x1ae8);
          }
          uVar18 = iVar13 - 0xd;
          if (iVar15 != 0x33) {
            if (((uVar18 < 0x3e) && ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*(int *)(self + 0xba8) == 1)) {
              iVar40 = 4;
            }
            else {
              local_80 = 0x300000000;
              pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
              iVar40 = iVar40 + 4;
              iVar13 = *(int *)(self + 0x1ae8);
            }
            uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd4);
            if (((iVar13 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1))))
            goto LAB_00417b34;
            lVar27 = 0;
            puVar23 = (undefined8 *)(self + 0xb0ce0);
            goto LAB_00418fc0;
          }
          if (((uVar18 < 0x3e) && ((1LL << ((ulong)uVar18 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar16 = 0x14;
          }
          else {
            local_80 = 0x1300000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar16 = iVar16 + -10;
            iVar13 = *(int *)(self + 0x1ae8);
          }
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*(int *)(self + 0xba8) == 1)) {
            iVar40 = 4;
          }
          else {
            local_80 = 0x300000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar40 = iVar40 + 4;
            iVar13 = *(int *)(self + 0x1ae8);
          }
          uVar26 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd4);
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             ((*(int *)(self + 0xba8) == 1 || (*(int *)(self + 0x32b828) < 1)))) goto LAB_00417b34;
          iVar37 = iVar37 + iVar16;
          lVar27 = 0;
          puVar23 = (undefined8 *)(self + 0xb0ce0);
          goto LAB_004169d8;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar13);
      goto LAB_00417b50;
    }
    iVar37 = iVar37 + iVar13;
    iVar13 = iVar13 + 3;
LAB_00415c30:
    *piVar22 = iVar37;
    *piVar30 = iVar13;
    goto LAB_00415c3c;
  case 0x98:
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar37 = 0x14;
    }
    else {
      local_80 = 0x1300000000;
      pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
      iVar37 = iVar37 + 10;
    }
    iVar38 = -0x273;
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cd4) < 0x274) {
      iVar38 = iVar37 + 0x32;
    }
    *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = iVar38 + *(int *)(self + lVar33 * 0x50 + 0xb0cd4);
    iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0ce8);
    if (iVar38 == 0) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar38 = 8;
      }
      else {
        local_80 = 0x700000000;
        pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
        iVar38 = iVar38 + 4;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0ce8) = iVar38;
    }
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cc0) != 0) {
      iVar38 = -iVar38;
    }
    iVar38 = *piVar19 + iVar38;
    iVar14 = *(int *)(self + 0x32ba20);
    iVar39 = *(int *)(self + 0x32ba14);
    iVar40 = *(int *)(self + 0x32ba24);
    iVar13 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc);
    iVar16 = 0;
    if (iVar39 != 0) {
      iVar16 = (iVar14 + iVar38) / iVar39;
    }
    iVar15 = 0;
    if (iVar39 != 0) {
      iVar15 = (iVar40 + iVar13) / iVar39;
    }
    if ((*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598) < 1) ||
       (iVar29 = *piVar19,
       *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar15 * 4 + (gh_long)iVar16 * 0x2d0 +
                                                   0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
      *piVar19 = iVar38;
      iVar29 = iVar38;
    }
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cec);
    iVar38 = *piVar19;
    if (iVar38 < 1) {
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar13 + iVar38;
    }
    else {
      iVar16 = 1;
      if (iVar38 == 1) {
LAB_00417864:
        iVar13 = iVar13 + iVar16;
        if (iVar37 == 0x33) {
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*(int *)(self + 0xba8) == 1)) {
            iVar37 = 0x14;
          }
          else {
            local_80 = 0x1300000000;
            pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar37 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar17), GH_ARG((param_type *)&local_80));
            iVar38 = *piVar19;
            iVar37 = iVar37 + -0xf;
          }
          *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar37 + iVar13;
          goto LAB_004178ac;
        }
      }
      else {
        iVar15 = 0;
        if (iVar39 != 0) {
          iVar15 = (iVar14 + iVar29) / iVar39;
        }
        do {
          iVar37 = 0;
          if (iVar39 != 0) {
            iVar37 = (iVar13 + iVar40 + iVar16) / iVar39;
          }
          if ((0 < *(int *)(self + (gh_long)iVar37 * 4 + (gh_long)iVar15 * 0x2d0 + 0x140598)) &&
             (iVar37 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar37 * 4 +
                                                                   (gh_long)iVar15 * 0x2d0 + 0x140598)
                                                   * 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar37)) {
            *puVar1 = 0x2f;
            *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ce4) = 0;
            goto LAB_00417864;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar38);
        iVar13 = iVar13 + iVar16;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar13;
    }
LAB_004178ac:
    *piVar19 = iVar38 + 3;
    break;
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    lVar27 = (gh_long)*piVar22;
    if (*piVar22 == 0) {
      *(int *)(self + lVar33 * 0x50 + 0xb0cf0) = *piVar19;
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cec) =
           *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cbc);
    }
    iVar37 = uVar18 - 0x99;
    lVar10 = lVar27 * 4 + (gh_long)iVar37 * 0x230;
    if (((*(int *)(self + lVar10 + 0x32ab04) == -999) &&
        (*(int *)(self + lVar10 + 0x32ab08) == -999)) &&
       (*(int *)(self + lVar27 * 4 + (gh_long)iVar37 * 0x230 + 0x32ab0c) == -999)) {
      uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
      piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
      if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
           ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar27 = 0;
        puVar23 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar23 + -0x2c) < 1) {
            puVar23[-8] = *(undefined8 *)piVar19;
            puVar23[-5] = 0x85;
            puVar23[-6] = 0x6400000078;
            *(undefined4 *)((gh_long)puVar23 + -4) = uVar24;
            puVar23[-4] = 0x3f80000000000000;
            *(undefined8 *)((gh_long)puVar23 + -0xc) = 0;
            *(undefined8 *)((gh_long)puVar23 + -0x14) = 0;
            *(undefined4 *)(puVar23 + -7) = 1;
            puVar23[1] = 0xff000000ff;
            *puVar23 = 0xff00000000;
            *(undefined4 *)(puVar23 + -3) = 0x3f800000;
            break;
          }
          lVar27 = lVar27 + 1;
          puVar23 = puVar23 + 10;
        } while (lVar27 < *(int *)(self + 0x32b828));
      }
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x900c0))) &&
         (((*(int *)(self + 0x900c0) < *(int *)(self + 0x1158) + 0x96 &&
           ((-0x1e < *(int *)(self + 0x900c4) && (*(uint *)(self + 0x131e4) < 0x4b)))) &&
          (*(int *)(self + 0x900c4) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)*(uint *)(self + 0x131e4) * 0x18 + 0x11e8)), GH_ARG(false))
        ;
      }
    }
    else {
      *(int *)(self + lVar33 * 0x50 + 0xb0cd4) = *(int *)(self + lVar10 + 0x32ab04);
      iVar13 = *(int *)(self + lVar10 + 0x32ab08);
      iVar38 = -iVar13;
      if (*(int *)(self + lVar33 * 0x50 + 0xb0cc0) == 0) {
        iVar38 = iVar13;
      }
      *(int *)(self + lVar33 * 0x50 + 0xb0cb8) = iVar38 + *(int *)(self + lVar33 * 0x50 + 0xb0cf0);
      piVar30 = (int *)(self + lVar33 * 0x50 + 0xb0cbc);
      *piVar30 = *(int *)(self + lVar27 * 4 + (gh_long)iVar37 * 0x230 + 0x32ab0c) +
                 *(int *)(self + lVar33 * 0x50 + 0xb0cec);
    }
    iVar37 = *piVar30;
    iVar38 = *(int *)(self + 0x32ba14);
    iVar13 = 0;
    if (iVar38 != 0) {
      iVar13 = (*(int *)(self + 0x32ba20) + *piVar19) / iVar38;
    }
    iVar14 = 0;
    if (iVar38 != 0) {
      iVar14 = (iVar37 + *(int *)(self + 0x32ba24) + 10) / iVar38;
    }
    if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378))) {
      uVar24 = *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cf4);
      if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar27 = 0;
        puVar23 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
            *(int *)(puVar23 + -4) = *piVar19;
            *(int *)((gh_long)puVar23 + -0x1c) = iVar37;
            puVar23[-1] = 0x85;
            puVar23[-2] = 0x6400000078;
            *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
            *puVar23 = 0x3f80000000000000;
            *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
            *(undefined4 *)(puVar23 + -3) = 1;
            puVar23[5] = 0xff000000ff;
            puVar23[4] = 0xff00000000;
            *(undefined4 *)(puVar23 + 1) = 0x3f800000;
            break;
          }
          lVar27 = lVar27 + 1;
          puVar23 = puVar23 + 10;
        } while (lVar27 < *(int *)(self + 0x32b828));
      }
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x900c0))) &&
          (*(int *)(self + 0x900c0) < *(int *)(self + 0x1158) + 0x96)) &&
         (((-0x1e < *(int *)(self + 0x900c4) && (*(uint *)(self + 0x131e4) < 0x4b)) &&
          (*(int *)(self + 0x900c4) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)*(uint *)(self + 0x131e4) * 0x18 + 0x11e8)), GH_ARG(false))
        ;
      }
    }
    *piVar22 = *piVar22 + 3;
    break;
  case 0xa0:
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0cd0) = 0x2a;
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce8);
    *piVar19 = *(int *)(self + (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4) * 0x288 + 0x8dac8);
    iVar37 = *piVar22;
    if (0 < iVar37) {
      iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0cec);
      *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) - iVar37;
      if (iVar37 < 3) {
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
      }
      else {
        *(int *)(self + lVar33 * 0x50 + 0xb0cec) = iVar37 + -2;
      }
      *(float *)(self + lVar33 * 0x50 + 0xb0cdc) = *(float *)(self + lVar33 * 0x50 + 0xb0cdc) + -0.1
      ;
      *piVar22 = 0;
      break;
    }
LAB_0041605c:
    *piVar22 = iVar37 + 1;
    break;
  case 0xfa:
    piVar22 = (int *)(self + lVar33 * 0x50 + 0xb0ce4);
    iVar37 = *piVar22;
    lVar27 = (gh_long)*(int *)(self + lVar33 * 0x50 + 0xb0cf4);
    if (0 < iVar37) {
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ce0) =
           *(undefined4 *)(self + lVar27 * 0x288 + 0x8db24);
      *(uint *)(self + lVar33 * 0x50 + 0xb0cc0) =
           (uint)(*(int *)(self + lVar27 * 0x288 + 0x8dad8) == 0);
      *(undefined8 *)piVar19 = *(undefined8 *)(self + lVar27 * 0x288 + 0x8dafc);
      piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
      if (iVar37 == 1) {
        *piVar19 = 0x6d;
        iVar37 = 1;
      }
      else {
        iVar38 = *piVar19;
        *piVar19 = iVar38 + 1;
        if (0x72 < iVar38) {
          iVar37 = 0;
          *piVar19 = 0;
          *piVar22 = 0;
        }
      }
      if ((*(int *)(self + lVar27 * 0x288 + 0x8daec) < 1) ||
         (((*(int *)(self + lVar27 * 0x288 + 0x8dae0) == 0x5a &&
           (0x2d < *(int *)(self + lVar27 * 0x288 + 0x8dd08))) ||
          (*(int *)(self + lVar27 * 0x288 + 0x8daf0) == 0)))) {
        *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
      }
    }
    *piVar22 = iVar37 + 1;
    if ((*(int *)(self + lVar27 * 0x288 + 0x8dd3c) - 0x30U < 2) ||
       (*(int *)(self + lVar27 * 0x288 + 0x8dd3c) == 0x209)) break;
switchD_00413b54_caseD_0:
LAB_00417a48:
    *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    break;
  case 0xfb:
    piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0ce8);
    iVar37 = *piVar19;
    if (iVar37 < *(int *)(self + lVar33 * 0x50 + 0xb0cf4)) {
LAB_00414634:
      *piVar19 = iVar37 + 1;
    }
    else if (*(int *)(self + lVar33 * 0x50 + 0xb0ce4) != 0) {
      piVar19 = (int *)(self + lVar33 * 0x50 + 0xb0cd0);
      iVar37 = *piVar19;
      goto LAB_00414634;
    }
    if (*(int *)(self + lVar33 * 0x50 + 0xb0cec) < *(int *)(self + lVar33 * 0x50 + 0xb0cd0))
    goto LAB_004150d0;
LAB_00415a7c:
    puVar21 = self + lVar33 * 0x50;
    lVar27 = 0xb0ce4;
    iVar37 = *(int *)(puVar21 + 0xb0ce4) + 1;
LAB_00415a94:
    *(int *)(puVar21 + lVar27) = iVar37;
  }
  goto switchD_00413b54_caseD_1;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_0041956c:
    if ((int)puVar20[-5] < 1) {
      puVar20[-10] = iVar37;
      puVar20[-9] = iVar14 + iVar13;
      puVar20[2] = 0;
      puVar20[3] = iVar39;
      *(undefined8 *)(puVar20 + -6) = 0x6400000034;
      *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
      puVar20[-8] = iVar8;
      puVar20[4] = 0;
      puVar20[5] = uVar24;
      puVar20[-4] = 0x24e;
      puVar20[-3] = iVar38;
      *puVar20 = 0x3f800000;
      goto LAB_0041a1a0;
    }
  }
LAB_00418408:
  *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
  iVar14 = *piVar32;
  iVar15 = *piVar19;
LAB_00416358:
  *piVar32 = iVar14 + iVar13;
  *piVar19 = iVar15 + 3;
  iVar37 = *piVar22;
LAB_0041636c:
  *piVar22 = iVar37 + 1;
  goto switchD_00413b54_caseD_1;
LAB_0041798c:
  if (0 < (int)puVar20[-5]) goto code_r0x00417998;
  puVar20[-10] = iVar37;
  puVar20[-9] = iVar38 + iVar14 + iVar13;
  puVar20[2] = 0;
  puVar20[3] = iVar39;
  puVar20[-8] = iVar8;
  puVar20[4] = 0;
  puVar20[5] = uVar24;
  *(undefined8 *)(puVar20 + -6) = 0x6400000034;
  *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
  puVar20[-4] = 0x24e;
  puVar20[-3] = iVar16;
  *puVar20 = 0x3f800000;
LAB_0041a1a0:
  puVar20[1] = 0;
  *(undefined8 *)(puVar20 + 6) = 0xff00000000;
  *(undefined8 *)(puVar20 + 8) = 0xff000000ff;
  goto LAB_00418408;
code_r0x00417998:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00418408;
  goto LAB_0041798c;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00418fc0:
    if (*(int *)((gh_long)puVar23 + -0x14) < 1) goto LAB_00419b08;
  }
  goto LAB_00417b34;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_004169d8:
    if (*(int *)((gh_long)puVar23 + -0x14) < 1) goto LAB_00419b08;
  }
LAB_00417b34:
  *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
  iVar13 = *piVar30;
  iVar37 = *piVar22;
LAB_00417b50:
  iVar37 = iVar37 + iVar14;
  *piVar22 = iVar37;
  *piVar30 = iVar13 + 3;
  if (0xd < iVar13) {
    if (((*(int *)(self + 0x8dac8) + -0x28 < *piVar19) &&
        (*piVar19 < *(int *)(self + 0x8dac8) + 0x28)) &&
       ((*(int *)(self + 0x8dacc) + -0x82 < iVar37 && (iVar37 < *(int *)(self + 0x8dacc) + 0x1e))))
    {
      if (*puVar1 == 0x86) {
        bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba94)));
      }
      else {
        bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba98)));
      }
      *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
    }
  }
LAB_00415c3c:
  piVar32 = (int *)(self + 0x32ba94);
  puVar20 = (undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc);
  piVar3 = (int *)(self + 0x32ba98);
  if ((0 < *(int *)(self + 0x32c3fc)) && (0x10 < *piVar30)) {
    if ((*(int *)(self + 0x8dd50) + -0x28 < *piVar19) &&
       (*piVar19 < *(int *)(self + 0x8dd50) + 0x28)) {
      if ((*(int *)(self + 0x8dd54) + -0x82 < *piVar22) &&
         (*piVar22 < *(int *)(self + 0x8dd54) + 0x1e)) {
        if (*puVar1 == 0x86) {
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar32));
        }
        else {
          bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar3));
        }
        *puVar20 = 0;
      }
    }
  }
  if ((0 < *(int *)(self + 0x32c400)) && (0x10 < *piVar30)) {
    if ((*(int *)(self + 0x8dfd8) + -0x28 < *piVar19) &&
       (*piVar19 < *(int *)(self + 0x8dfd8) + 0x28)) {
      if ((*(int *)(self + 0x8dfdc) + -0x82 < *piVar22) &&
         (*piVar22 < *(int *)(self + 0x8dfdc) + 0x1e)) {
        if (*puVar1 == 0x86) {
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar32));
        }
        else {
          bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar3));
        }
        *puVar20 = 0;
      }
    }
  }
  if ((0 < *(int *)(self + 0x32c404)) && (0x10 < *piVar30)) {
    if ((*(int *)(self + 0x8e260) + -0x28 < *piVar19) &&
       (*piVar19 < *(int *)(self + 0x8e260) + 0x28)) {
      if ((*(int *)(self + 0x8e264) + -0x82 < *piVar22) &&
         (*piVar22 < *(int *)(self + 0x8e264) + 0x1e)) {
        if (*puVar1 == 0x86) {
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*piVar32));
          *puVar20 = 0;
        }
        else {
          bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*piVar3));
          *puVar20 = 0;
        }
      }
    }
  }
  goto switchD_00413b54_caseD_1;
LAB_00419b08:
  *(undefined4 *)(puVar23 + -3) = 0x31;
  iVar13 = *(int *)(self + 0x32c9ac);
  puVar23[4] = 0xff000000ff;
  *(int *)(puVar23 + -5) = iVar38;
  *(int *)((gh_long)puVar23 + -0x24) = iVar37 + iVar14;
  *(undefined4 *)(puVar23 + 1) = 0;
  *(int *)((gh_long)puVar23 + 0xc) = iVar40;
  uVar28 = 600;
  if (iVar13 != 1) {
    uVar28 = 100;
  }
  puVar23[-1] = 0x3f80000000000000;
  *(int *)(puVar23 + -4) = iVar39;
  *(undefined4 *)(puVar23 + -2) = uVar24;
  *(undefined4 *)((gh_long)puVar23 + -0xc) = uVar26;
  puVar23[3] = 0xff00000000;
  puVar23[2] = 0;
  *(undefined4 *)((gh_long)puVar23 + -0x14) = uVar28;
  *puVar23 = 0x3f800000;
  goto LAB_00417b34;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00418e80:
    if ((int)puVar20[-5] < 1) {
      puVar20[-10] = iVar13;
      puVar20[-9] = iVar39 + iVar38;
      goto LAB_00419c70;
    }
  }
LAB_004179d0:
  iVar38 = *(int *)(self + lVar33 * 0x50 + 0xb0cbc) + iVar38;
  *(int *)(self + lVar33 * 0x50 + 0xb0cbc) = iVar38;
  *piVar22 = *piVar22 + 1;
  *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = *(int *)(self + lVar33 * 0x50 + 0xb0ce4) + 1;
  if ((((-0x191 < iVar38) && (iVar38 <= *(int *)(self + 0x115c) + 200)) && (-0x259 < *piVar19)) &&
     (*piVar19 <= *(int *)(self + 0x1158) + 600)) goto switchD_00413b54_caseD_1;
  goto switchD_00413b54_caseD_0;
LAB_00416798:
  if (0 < (int)puVar20[-5]) goto code_r0x004167a4;
  puVar20[-10] = iVar13;
  puVar20[-9] = iVar14 + iVar39 + iVar38;
LAB_00419c70:
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  puVar20[-8] = 0;
  *(undefined8 *)(puVar20 + -4) = 0x100000153;
  *(undefined8 *)(puVar20 + -6) = 0x640000002e;
  *(undefined8 *)(puVar20 + 5) = 0;
  *(undefined8 *)(puVar20 + 3) = 0;
  *(undefined8 *)(puVar20 + 1) = 0;
  puVar20[9] = 0xff;
  *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
  *puVar20 = 0x3f800000;
  goto LAB_004179d0;
code_r0x004167a4:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_004179d0;
  goto LAB_00416798;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00418f1c:
    if (*(int *)((gh_long)puVar23 + -0x14) < 1) goto LAB_00419ac0;
  }
  goto LAB_00417aa4;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_004168b0:
    if (*(int *)((gh_long)puVar23 + -0x14) < 1) goto LAB_00419ac0;
  }
LAB_00417aa4:
  *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
  iVar13 = *piVar30;
  iVar15 = *piVar32;
LAB_00417ac0:
  *piVar30 = iVar13 + iVar14;
  *piVar32 = iVar15 + 3;
  goto switchD_00413b54_caseD_1;
LAB_00419ac0:
  puVar23[4] = 0xff000000ff;
  *(int *)(puVar23 + -5) = iVar38;
  *(int *)((gh_long)puVar23 + -0x24) = iVar13 + iVar14;
  *(undefined4 *)(puVar23 + -2) = uVar24;
  *(int *)((gh_long)puVar23 + -0xc) = iVar16;
  puVar23[-3] = 0x6400000030;
  *(undefined4 *)(puVar23 + 1) = 0;
  *(int *)((gh_long)puVar23 + 0xc) = iVar39;
  puVar23[-1] = 0x3f80000000000000;
  *(int *)(puVar23 + -4) = iVar40;
  *puVar23 = 0x3f800000;
  puVar23[3] = 0xff00000000;
  puVar23[2] = 0;
  goto LAB_00417aa4;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00419014:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      uVar36 = 0;
      uVar31 = 0x6400000029;
      puVar20[-10] = iVar14;
      puVar20[-9] = iVar39 + iVar13;
      puVar20[-8] = 0;
      goto LAB_00419cd0;
    }
  }
LAB_00417c08:
  *(undefined4 *)(self + lVar33 * 0x50 + 0xb0ccc) = 0;
  iVar38 = *piVar30;
  iVar37 = *piVar22;
LAB_00417c24:
  *piVar19 = *piVar19 + iVar13;
  *piVar30 = iVar38 + 3;
  *piVar22 = iVar37 + 1;
  goto switchD_00413b54_caseD_1;
LAB_00416a88:
  if (0 < (int)puVar20[-5]) goto code_r0x00416a94;
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  uVar36 = 0x10a;
  uVar31 = 0x6400000028;
  puVar20[-10] = iVar14;
  puVar20[-9] = iVar38 + iVar39 + iVar13;
  puVar20[-8] = 0;
LAB_00419cd0:
  *(undefined8 *)(puVar20 + -4) = uVar36;
  *(undefined8 *)(puVar20 + -6) = uVar31;
  *(undefined8 *)(puVar20 + 5) = 0;
  *(undefined8 *)(puVar20 + 3) = 0;
  *(undefined8 *)(puVar20 + 1) = 0;
  puVar20[9] = 0xff;
  *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
  *puVar20 = 0x3f800000;
  goto LAB_00417c08;
code_r0x00416a94:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00417c08;
  goto LAB_00416a88;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_0041921c:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      puVar20[-10] = iVar14 + -0x14;
      puVar20[-9] = iVar40 + iVar39;
      *(undefined8 *)(puVar20 + -6) = 0x6400000070;
      puVar20[5] = uVar24;
      puVar20[6] = uVar26;
      puVar20[-8] = 0;
      *(undefined8 *)(puVar20 + 3) = 0;
      *(undefined8 *)(puVar20 + 1) = 0;
      puVar20[-4] = 0xe1;
      puVar20[-3] = iVar13;
      puVar20[9] = 0xff;
      *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
      *puVar20 = 0x3f800000;
      break;
    }
  }
LAB_00416dfc:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8fe38))) &&
     (*(int *)(self + 0x8fe38) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0x8fe3c;
    goto LAB_00416f18;
  }
  goto LAB_00418bcc;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00419bb8:
    if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
      *(int *)(puVar23 + -4) = iVar14 + -0x10;
      *(int *)((gh_long)puVar23 + -0x1c) = iVar40 + iVar39;
      puVar23[-2] = 0x640000006e;
      *(undefined4 *)(puVar23 + -3) = uVar26;
      *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
      *puVar23 = 0x3f80000000000000;
      *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
      *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
      *(undefined4 *)(puVar23 + -1) = 0x11;
      *(int *)((gh_long)puVar23 + -4) = iVar13;
      puVar23[5] = 0xff000000ff;
      puVar23[4] = 0xff00000000;
      *(undefined4 *)(puVar23 + 1) = 0x3f800000;
      break;
    }
  }
LAB_00418ab4:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x90348))) &&
     (*(int *)(self + 0x90348) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0x34c;
    goto LAB_00418bb4;
  }
  goto LAB_00418bcc;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00419388:
    if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
      *(int *)(puVar23 + -4) = iVar13 + -6;
      *(int *)((gh_long)puVar23 + -0x1c) = iVar39 + iVar14;
      *(undefined4 *)(puVar23 + -3) = uVar26;
      puVar23[-1] = 0x85;
      puVar23[-2] = 0x6400000078;
      *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
      *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
      *puVar23 = 0x3f80000000000000;
      *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
      *(undefined4 *)(puVar23 + 1) = 0x3f800000;
      puVar23[5] = 0xff000000ff;
      puVar23[4] = 0xff00000000;
      break;
    }
  }
LAB_00417e78:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x900c0))) &&
     (*(int *)(self + 0x900c0) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0xc4;
    goto LAB_00417f90;
  }
  goto LAB_00418bcc;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00415658:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      uVar31 = 0x6400000033;
      goto LAB_0041a264;
    }
  }
  goto LAB_00418760;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_0041860c:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      uVar31 = 0x6400000032;
      puVar20[-10] = iVar14 + -0xc;
      puVar20[-9] = iVar13 + 0x1a + iVar39;
      goto LAB_0041a298;
    }
  }
LAB_00418760:
  if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8fbb0) < -0x95)) ||
     (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8fbb0))) goto LAB_00418bcc;
  uVar18 = 0x8fbb4;
  goto LAB_00418850;
LAB_00417cf4:
  if (0 < (int)puVar20[-5]) goto code_r0x00417d00;
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  uVar31 = 0x6400000073;
LAB_0041a264:
  puVar20[-10] = iVar14;
  puVar20[-9] = iVar39;
LAB_0041a298:
  puVar20[-8] = uVar26;
  goto LAB_0041a2e0;
code_r0x00417d00:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00418760;
  goto LAB_00417cf4;
LAB_00419a08:
  if (0 < (int)puVar20[-5]) goto code_r0x00419a14;
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  uVar31 = 0x640000006f;
  puVar20[-10] = iVar14 + -0xc;
  puVar20[-9] = iVar13 + 0x1a + iVar39;
  puVar20[-8] = uVar26;
LAB_0041a2e0:
  *(undefined8 *)(puVar20 + 3) = 0;
  *(undefined8 *)(puVar20 + -4) = 0xffffffff00000000;
  *(undefined8 *)(puVar20 + -6) = uVar31;
  puVar20[5] = uVar24;
  puVar20[6] = uVar28;
  *(undefined8 *)(puVar20 + 1) = 0;
  puVar20[9] = 0xff;
  *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
  *puVar20 = 0x3f800000;
  goto LAB_00418760;
code_r0x00419a14:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00418760;
  goto LAB_00419a08;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_004192b4:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      puVar20[-10] = iVar14 + 10;
      puVar20[-9] = iVar40 + iVar39;
      *(undefined8 *)(puVar20 + -6) = 0x6400000070;
      puVar20[5] = uVar24;
      puVar20[6] = uVar26;
      puVar20[-8] = 0;
      *(undefined8 *)(puVar20 + 3) = 0;
      *(undefined8 *)(puVar20 + 1) = 0;
      puVar20[-4] = 0xe1;
      puVar20[-3] = iVar13;
      puVar20[9] = 0xff;
      *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
      *puVar20 = 0x3f800000;
      break;
    }
  }
LAB_00416ed8:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x90858))) &&
     (*(int *)(self + 0x90858) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0x9085c;
LAB_00416f18:
    iVar37 = *(int *)(self + uVar18);
    if (-0x1e < iVar37) {
      uVar18 = 0x31f0;
      goto LAB_00418860;
    }
  }
  goto LAB_00418bcc;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00419c24:
    if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
      *(int *)(puVar23 + -4) = iVar14 + 0x10;
      *(int *)((gh_long)puVar23 + -0x1c) = iVar40 + iVar39;
      puVar23[-2] = 0x640000006e;
      *(undefined4 *)(puVar23 + -3) = uVar26;
      *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
      *puVar23 = 0x3f80000000000000;
      *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
      *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
      *(undefined4 *)(puVar23 + -1) = 0x11;
      *(int *)((gh_long)puVar23 + -4) = iVar13;
      puVar23[5] = 0xff000000ff;
      puVar23[4] = 0xff00000000;
      *(undefined4 *)(puVar23 + 1) = 0x3f800000;
      break;
    }
  }
LAB_00418b74:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x90d68))) &&
     (*(int *)(self + 0x90d68) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0xd6c;
LAB_00418bb4:
    iVar37 = *(int *)(self + (uVar18 | 0x90000));
    if (-0x1e < iVar37) {
      uVar18 = 0x31d0;
      goto LAB_00418860;
    }
  }
  goto LAB_00418bcc;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar23 = puVar23 + 10;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_0041941c:
    if (*(int *)((gh_long)puVar23 + -0xc) < 1) {
      *(int *)(puVar23 + -4) = iVar13 + 6;
      *(int *)((gh_long)puVar23 + -0x1c) = iVar39 + iVar14;
      *(undefined4 *)(puVar23 + -3) = uVar26;
      puVar23[-1] = 0x85;
      puVar23[-2] = 0x6400000078;
      *(undefined8 *)((gh_long)puVar23 + 0x14) = 0;
      *(undefined8 *)((gh_long)puVar23 + 0xc) = 0;
      *puVar23 = 0x3f80000000000000;
      *(undefined4 *)((gh_long)puVar23 + 0x1c) = uVar24;
      *(undefined4 *)(puVar23 + 1) = 0x3f800000;
      puVar23[5] = 0xff000000ff;
      puVar23[4] = 0xff00000000;
      break;
    }
  }
LAB_00417f50:
  if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x90ae0) < -0x95)) ||
     (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x90ae0))) goto LAB_00418bcc;
  uVar18 = 0xae4;
LAB_00417f90:
  iVar37 = *(int *)(self + (uVar18 | 0x90000));
  if (iVar37 < -0x1d) goto LAB_00418bcc;
  uVar18 = 0x31e4;
  goto LAB_00418860;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_00415f08:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      uVar31 = 0x6400000033;
      goto LAB_0041a27c;
    }
  }
  goto LAB_00418810;
LAB_00417dc4:
  if (0 < (int)puVar20[-5]) goto code_r0x00417dd0;
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  uVar31 = 0x6400000073;
LAB_0041a27c:
  puVar20[-10] = iVar14;
  puVar20[-9] = iVar39;
LAB_0041a2b8:
  puVar20[-8] = uVar26;
  goto LAB_0041a328;
code_r0x00417dd0:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00418810;
  goto LAB_00417dc4;
LAB_00419aa0:
  if (0 < (int)puVar20[-5]) goto code_r0x00419aac;
  *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
  uVar31 = 0x640000006f;
  puVar20[-10] = iVar14 + 0xc;
  puVar20[-9] = iVar13 + 0x1a + iVar39;
  puVar20[-8] = uVar26;
LAB_0041a328:
  *(undefined8 *)(puVar20 + 3) = 0;
  *(undefined8 *)(puVar20 + -4) = 0xffffffff00000000;
  *(undefined8 *)(puVar20 + -6) = uVar31;
  puVar20[5] = uVar24;
  puVar20[6] = uVar28;
  *(undefined8 *)(puVar20 + 1) = 0;
  puVar20[9] = 0xff;
  *(undefined8 *)(puVar20 + -2) = 0x3f80000000000000;
  *puVar20 = 0x3f800000;
  goto LAB_00418810;
code_r0x00419aac:
  lVar27 = lVar27 + 1;
  puVar20 = puVar20 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar27) goto LAB_00418810;
  goto LAB_00419aa0;
  while( true ) {
    lVar27 = lVar27 + 1;
    puVar20 = puVar20 + 0x14;
    if (*(int *)(self + 0x32b828) <= lVar27) break;
LAB_004186d4:
    if ((int)puVar20[-5] < 1) {
      *(undefined8 *)(puVar20 + 7) = 0xff000000ff;
      uVar31 = 0x6400000032;
      puVar20[-10] = iVar14 + 0xc;
      puVar20[-9] = iVar13 + 0x1a + iVar39;
      goto LAB_0041a2b8;
    }
  }
LAB_00418810:
  if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x905d0))) &&
     (*(int *)(self + 0x905d0) < *(int *)(self + 0x1158) + 0x96)) {
    uVar18 = 0x905d4;
LAB_00418850:
    iVar37 = *(int *)(self + uVar18);
    if (-0x1e < iVar37) {
      uVar18 = 0x31ec;
LAB_00418860:
      if ((*(uint *)(self + (uVar18 | 0x10000)) < 0x4b) && (iVar37 < *(int *)(self + 0x115c) + 100))
      {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)
                   (self + (gh_long)(int)*(uint *)(self + (uVar18 | 0x10000)) * 0x18 + 0x11e8)), GH_ARG(false));
      }
    }
  }
LAB_00418bcc:
  if (5 < *piVar22) {
    *piVar22 = 1;
  }
LAB_00418be0:
  iVar37 = *piVar19;
  fVar34 = cosf(*pfVar2);
  *piVar19 = (int)((float)iVar37 - fVar34 * (float)iVar38);
  iVar37 = *piVar32;
  fVar34 = sinf(*pfVar2);
  *piVar32 = (int)((float)iVar37 - fVar34 * (float)iVar38);
  iVar37 = *(int *)(self + lVar33 * 0x50 + 0xb0ce4);
  *(int *)(self + lVar33 * 0x50 + 0xb0ce4) = iVar37 + 1;
  if (0 < iVar37) {
    *puVar1 = 0x12d;
  }
switchD_00413b54_caseD_1:
  if (*(gh_long *)(lVar9 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
