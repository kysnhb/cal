/* bzStateGame::Poper_0046827c @ 0x0046827c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__Poper_0046827c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
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

  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  gh_long lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  SoundClip *pSVar15;
  mersenne_twister_engine *pmVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint extraout_w10 = 0;
  uint extraout_w10_00 = 0;
  uint extraout_w10_01 = 0;
  uint uVar22;
  undefined4 *puVar23;
  int *piVar24;
  gh_long lVar25;
  gh_long lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint *puVar29;
  gh_long lVar30;
  float fVar31;
  float fVar32;
  uint64_t gh_frame64[19] = {0};   /* 원작 스택 프레임 (SP-0x80 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x80;
#define local_80 (*(undefined8 *)(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  uVar19 = (ulong)(uint)param_5;
  lVar9 = tpidr_el0;
  local_78 = *(gh_long *)(lVar9 + 0x28);
  uVar17 = *(int *)(self + 0x1ae8) - 0xd;
  uVar20 = (ulong)uVar17;
  if (((uVar17 < 0x3e) && ((1LL << (uVar20 & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) goto LAB_004682f0;
  puVar2 = (uint *)(self + (gh_long)param_8 * 0x288 + 0x8db14);
  uVar22 = *puVar2;
  piVar3 = (int *)(self + (gh_long)param_8 * 0x288 + 0x8dac8);
  if ((param_8 == 0) && (uVar22 == 0xd)) {
    param_2 = *(int *)(self + 0x32c174) / 10;
  }
  piVar1 = (int *)(self + 0xba8);
  lVar30 = (gh_long)param_8;
  if ((param_8 == 0) && (*(int *)(self + 0x8daf0) == 0xb1)) {
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
    }
    lVar30 = (gh_long)*(int *)(self + 0x32c134);
    if (*(int *)(self + 0x32c134) < *(int *)(self + 0x32b824)) {
      piVar4 = (int *)(self + (gh_long)param_7 * 0x288 + 0x8daec);
      do {
        if (*(int *)(self + lVar30 * 0x288 + 0x8daec) < 1) goto LAB_00469fa8;
        piVar5 = (int *)(self + lVar30 * 0x288 + 0x8dac8);
        if ((*piVar5 < -0x27) || (*(int *)(self + 0x1158) + 0x28 <= *piVar5)) goto LAB_00469fa8;
        piVar6 = (int *)(self + lVar30 * 0x288 + 0x8dacc);
        if ((*piVar6 < -0x45) || (*(int *)(self + 0x115c) + 0x46 <= *piVar6)) goto LAB_00469fa8;
        iVar13 = (int)lVar30;
        bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(0), GH_ARG(iVar13), GH_ARG(param_2));
        puVar2 = (uint *)(self + lVar30 * 0x288 + 0x8dad8);
        uVar17 = (uint)(*piVar3 < *piVar5);
        *puVar2 = uVar17;
        iVar11 = *piVar6;
        if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
             ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
            && (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar25 = 0;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) {
              *(int *)(puVar21 + -4) = *piVar5;
              *(int *)((gh_long)puVar21 + -0x1c) = iVar11 + -0x46;
              *(uint *)(puVar21 + -3) = uVar17;
              *puVar21 = 0x3f80000000000000;
              puVar21[-1] = 0x11;
              puVar21[-2] = 0x640000006e;
              *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
              *(int *)((gh_long)puVar21 + 0x1c) = iVar13;
              puVar21[5] = 0xff000000ff;
              puVar21[4] = 0xff00000000;
              *(undefined4 *)(puVar21 + 1) = 0x3f800000;
              break;
            }
            lVar25 = lVar25 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar25 < *(int *)(self + 0x32b828));
        }
        switch(*(undefined4 *)(self + lVar30 * 0x288 + 0x8db14)) {
        case 0x15:
          uVar17 = *puVar2;
          iVar11 = 0x83;
          goto LAB_00469ea0;
        default:
          uVar17 = *puVar2;
          iVar11 = param_3;
LAB_00469ea0:
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar13), GH_ARG(iVar11), GH_ARG(uVar17), GH_ARG((int)uVar19));
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*piVar1 == 1)) {
            iVar11 = 4;
          }
          else {
            local_80 = 0x300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            iVar11 = iVar11 + 100;
          }
          uVar19 = (ulong)(*puVar2 == 0);
          bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(iVar13), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar2 == 0)), GH_ARG(*piVar5), GH_ARG(*piVar6 + -0x46), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar30 * 0x288 + 0x8dd30)), GH_ARG(0));
          goto LAB_00469fa8;
        case 0x17:
          if (*piVar4 < 2) {
            iVar11 = 0xae;
LAB_00469f8c:
            uVar17 = *(uint *)(self + (gh_long)param_7 * 0x288 + 0x8dad8);
            iVar13 = param_7;
          }
          else {
            uVar17 = *puVar2;
            iVar11 = 0xad;
          }
          break;
        case 0x18:
          if (*piVar4 < 2) {
            iVar11 = 0xb8;
            goto LAB_00469f8c;
          }
          uVar17 = *puVar2;
          iVar11 = 0xb7;
          break;
        case 0x19:
          if (*piVar4 < 2) {
            iVar11 = 0xc0;
            goto LAB_00469f8c;
          }
          uVar17 = *puVar2;
          iVar11 = 0xc1;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar13), GH_ARG(iVar11), GH_ARG(uVar17), GH_ARG((int)uVar19));
LAB_00469fa8:
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)(self + 0x32b824));
    }
    goto LAB_004682f0;
  }
  piVar4 = (int *)(self + (gh_long)param_7 * 0x288 + 0x8db14);
  iVar11 = *piVar4;
  lVar25 = (gh_long)param_7;
  piVar5 = (int *)(self + (gh_long)param_7 * 0x288 + 0x8dac8);
  switch(iVar11) {
  case 0x13:
    goto switchD_004684c4_caseD_13;
  case 0x17:
    iVar11 = param_5;
    if ((uVar22 - 0xf < 2) && (0x1fe < *(int *)(self + lVar30 * 0x288 + 0x8daf0))) {
      if (*(int *)(self + 0x32c160) == 0) {
        pSVar15 = (SoundClip *)(self + 0x1878);
LAB_00468bdc:
        SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
      }
    }
    else {
      if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
        uVar17 = 3;
      }
      else {
        local_80 = 0x200000000;
        pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
        uVar17 = iVar13 + 1;
        if (0x4a < uVar17) goto LAB_00468bf0;
      }
      if (*(int *)(self + 0x32c160) == 0) {
        pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
        goto LAB_00468bdc;
      }
    }
LAB_00468bf0:
    if (4 < *(int *)(self + lVar30 * 0x288 + 0x8daf0) - 0x19aU) {
      bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
    }
    if ((((int)*puVar2 < 0xf) || (param_5 < 1)) || (0x11 < (int)*puVar2)) {
      uVar28 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dad8);
      if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar26 = 0;
        puVar21 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
            puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
            *(undefined4 *)(puVar21 + -7) = uVar28;
            puVar21[-5] = 0x11;
            puVar21[-6] = 0x640000006e;
            *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
            *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
            puVar21[-4] = 0x3f80000000000000;
            *(int *)((gh_long)puVar21 + -4) = param_7;
            *(undefined4 *)(puVar21 + -3) = 0x3f800000;
            puVar21[1] = 0xff000000ff;
            *puVar21 = 0xff00000000;
            break;
          }
          lVar26 = lVar26 + 1;
          puVar21 = puVar21 + 10;
        } while (lVar26 < *(int *)(self + 0x32b828));
      }
    }
    else {
      uVar28 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dad8);
      iVar13 = *(int *)(self + lVar30 * 0x288 + 0x8dafc);
      if (*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0) {
        iVar12 = *(int *)(self + 0x1ae8);
        uVar27 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar12 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar14 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar12 = *(int *)(self + 0x1ae8);
          iVar14 = iVar14 + -0x14;
        }
        if ((((0x3d < iVar12 - 0xdU) ||
             ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar30 = 0;
          iVar13 = iVar13 + -0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046af38;
            lVar30 = lVar30 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar30 < *(int *)(self + 0x32b828));
        }
      }
      else {
        iVar12 = *(int *)(self + 0x1ae8);
        uVar27 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar12 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar14 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar12 = *(int *)(self + 0x1ae8);
          iVar14 = iVar14 + -0x14;
        }
        if (((0x3d < iVar12 - 0xdU) ||
            ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar30 = 0;
          iVar13 = iVar13 + 0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046af38;
            lVar30 = lVar30 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar30 < *(int *)(self + 0x32b828));
        }
      }
    }
    goto LAB_00468d80;
  case 0x18:
  case 0x19:
    puVar29 = (uint *)(self + lVar25 * 0x288 + 0x8dad8);
    *puVar29 = (uint)(*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0);
    uVar18 = param_5;
    if ((uVar22 - 0xf < 2) && (0x1fe < *(int *)(self + lVar30 * 0x288 + 0x8daf0))) {
      if (*(int *)(self + 0x32c160) == 0) {
        pSVar15 = (SoundClip *)(self + 0x1878);
LAB_00468594:
        SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
      }
    }
    else {
      if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
        uVar17 = 3;
      }
      else {
        local_80 = 0x200000000;
        pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
        uVar17 = iVar11 + 1;
      }
      if ((uVar17 < 0x4b) && (*(int *)(self + 0x32c160) == 0)) {
        pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
        goto LAB_00468594;
      }
    }
    bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
    if ((((int)*puVar2 < 0xf) || (param_5 < 1)) || (0x11 < (int)*puVar2)) {
      uVar17 = *puVar29;
      if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar26 = 0;
        puVar21 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
            puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
            *(uint *)(puVar21 + -7) = uVar17;
            puVar21[-5] = 0x11;
            puVar21[-6] = 0x640000006e;
            *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
            *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
            puVar21[-4] = 0x3f80000000000000;
            *(int *)((gh_long)puVar21 + -4) = param_7;
            *(undefined4 *)(puVar21 + -3) = 0x3f800000;
            puVar21[1] = 0xff000000ff;
            *puVar21 = 0xff00000000;
            break;
          }
          lVar26 = lVar26 + 1;
          puVar21 = puVar21 + 10;
        } while (lVar26 < *(int *)(self + 0x32b828));
      }
    }
    else {
      uVar17 = *puVar29;
      iVar11 = *(int *)(self + lVar30 * 0x288 + 0x8dafc);
      if (*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0) {
        iVar13 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar13 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar13 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if ((((0x3d < iVar13 - 0xdU) ||
             ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar30 = 0;
          iVar11 = iVar11 + -0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046adb4;
            lVar30 = lVar30 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar30 < *(int *)(self + 0x32b828));
        }
      }
      else {
        iVar13 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar13 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar13 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if (((0x3d < iVar13 - 0xdU) ||
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar30 = 0;
          iVar11 = iVar11 + 0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046adb4;
            lVar30 = lVar30 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar30 < *(int *)(self + 0x32b828));
        }
      }
    }
    goto LAB_004686f8;
  case 0x1a:
    uVar28 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dad8);
    if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
LAB_00468abc:
      uVar17 = 3;
LAB_00468ac8:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8)), GH_ARG(false));
      }
    }
    else {
      if (0 < *(int *)(self + 0x32b828)) {
        lVar26 = 0;
        puVar21 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
            puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
            *(undefined4 *)(puVar21 + -7) = uVar28;
            puVar21[-5] = 0x11;
            puVar21[-6] = 0x640000006e;
            *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
            *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
            puVar21[-4] = 0x3f80000000000000;
            *(int *)((gh_long)puVar21 + -4) = param_7;
            *(undefined4 *)(puVar21 + -3) = 0x3f800000;
            puVar21[1] = 0xff000000ff;
            *puVar21 = 0xff00000000;
            break;
          }
          lVar26 = lVar26 + 1;
          puVar21 = puVar21 + 10;
        } while (lVar26 < *(int *)(self + 0x32b828));
      }
      if ((uVar17 < 0x3e) && ((1LL << (uVar20 & 0x3f) & 0x3200000000000081U) != 0))
      goto LAB_00468abc;
      local_80 = 0x200000000;
      pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
      uVar17 = iVar11 + 1;
      if (uVar17 < 0x4b) goto LAB_00468ac8;
    }
    if (4 < *(int *)(self + lVar30 * 0x288 + 0x8daf0) - 0x19aU) {
      bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
    }
    uVar28 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dad8);
    if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
         ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
        (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
      lVar25 = 0;
      puVar21 = (undefined8 *)(self + 0xb0cf8);
      do {
        if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
          puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
          *(undefined4 *)(puVar21 + -7) = uVar28;
          puVar21[-5] = 0x11;
          puVar21[-6] = 0x640000006e;
          *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
          *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
          puVar21[-4] = 0x3f80000000000000;
          *(int *)((gh_long)puVar21 + -4) = param_7;
          *(undefined4 *)(puVar21 + -3) = 0x3f800000;
          puVar21[1] = 0xff000000ff;
          *puVar21 = 0xff00000000;
          break;
        }
        lVar25 = lVar25 + 1;
        puVar21 = puVar21 + 10;
      } while (lVar25 < *(int *)(self + 0x32b828));
    }
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(9), GH_ARG(param_7), GH_ARG(0));
    goto LAB_004682f0;
  }
  if (*(float *)(self + lVar25 * 0x288 + 0x8db24) <= 1.4) {
    if (iVar11 == 0x16) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
      }
      bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
      uVar28 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dad8);
      if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
           ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar26 = 0;
        puVar21 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
            puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
            *(undefined4 *)(puVar21 + -7) = uVar28;
            puVar21[-5] = 0x11;
            puVar21[-6] = 0x640000006e;
            *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
            *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
            puVar21[-4] = 0x3f80000000000000;
            puVar21[1] = 0xff000000ff;
            *puVar21 = 0xff00000000;
            *(int *)((gh_long)puVar21 + -4) = param_7;
            *(undefined4 *)(puVar21 + -3) = 0x3f800000;
            break;
          }
          lVar26 = lVar26 + 1;
          puVar21 = puVar21 + 10;
        } while (lVar26 < *(int *)(self + 0x32b828));
      }
      if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 1) {
        *(int *)(self + lVar25 * 0x288 + 0x8daec) = 2;
      }
      goto LAB_004682f0;
    }
    if (iVar11 != 0x15) {
      piVar6 = (int *)(self + lVar25 * 0x288 + 0x8dae0);
      if (*piVar6 == 3) {
        if ((uVar22 - 0xf < 2) && (0x1fe < *(int *)(self + lVar30 * 0x288 + 0x8daf0))) {
          if (*(int *)(self + 0x32c160) == 0) {
            pSVar15 = (SoundClip *)(self + 0x1878);
LAB_00469a00:
            SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
          }
        }
        else {
          if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
            uVar17 = 3;
          }
          else {
            local_80 = 0x200000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            uVar17 = iVar11 + 1;
            if (0x4a < uVar17) goto LAB_00469a0c;
          }
          if (*(int *)(self + 0x32c160) == 0) {
            pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
            goto LAB_00469a00;
          }
        }
LAB_00469a0c:
        bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
        piVar3 = (int *)(self + lVar25 * 0x288 + 0x8dad8);
        iVar11 = *piVar3;
        if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
          iVar13 = 0x14;
          if (iVar11 == 0) {
            iVar13 = -0x14;
          }
          *piVar5 = *piVar5 + iVar13;
          *(int *)(self + lVar25 * 0x288 + 0x8dacc) =
               *(int *)(self + lVar25 * 0x288 + 0x8dacc) + 0x3c;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x45), GH_ARG(iVar11), GH_ARG(param_5));
          iVar11 = 1;
        }
        else {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x31), GH_ARG(iVar11), GH_ARG(param_5));
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*piVar1 == 1)) {
            iVar11 = 2;
          }
          else {
            local_80 = 0x100000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            iVar11 = iVar11 + 1;
          }
        }
        *(int *)(self + lVar25 * 0x288 + 0x8dd08) = iVar11;
        iVar11 = *piVar3;
        uVar17 = *(int *)(self + 0x1ae8) - 0xd;
        if ((uVar17 < 0x3e) && ((1LL << ((ulong)uVar17 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_0046a088:
          iVar11 = 4;
        }
        else {
          iVar13 = *piVar1;
          if ((iVar13 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar26 = 0;
            puVar21 = (undefined8 *)(self + 0xb0cf8);
            do {
              if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
                puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
                *(int *)(puVar21 + -7) = iVar11;
                puVar21[-5] = 0x11;
                puVar21[-6] = 0x640000006e;
                *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
                *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
                puVar21[-4] = 0x3f80000000000000;
                puVar21[1] = 0xff000000ff;
                *puVar21 = 0xff00000000;
                *(int *)((gh_long)puVar21 + -4) = param_7;
                *(undefined4 *)(puVar21 + -3) = 0x3f800000;
                break;
              }
              lVar26 = lVar26 + 1;
              puVar21 = puVar21 + 10;
            } while (lVar26 < *(int *)(self + 0x32b828));
          }
          if ((uVar17 < 0x3e) && ((1LL << ((ulong)uVar17 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar11 = 4;
          }
          else {
            if (iVar13 == 1) goto LAB_0046a088;
            local_80 = 0x300000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            iVar11 = iVar11 + 100;
          }
        }
        bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*piVar3 == 0)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8dafc)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8db00)), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar25 * 0x288 + 0x8dd30)), GH_ARG(0));
        goto LAB_004682f0;
      }
      iVar11 = param_5;
      if ((uVar22 - 0xf < 2) && (0x1fe < *(int *)(self + lVar30 * 0x288 + 0x8daf0))) {
        if (*(int *)(self + 0x32c160) == 0) {
          pSVar15 = (SoundClip *)(self + 0x1878);
LAB_00469ae8:
          SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
        }
      }
      else {
        if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
          uVar17 = 3;
        }
        else {
          local_80 = 0x200000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          uVar17 = iVar13 + 1;
          if (0x4a < uVar17) goto LAB_00469af4;
        }
        if (*(int *)(self + 0x32c160) == 0) {
          pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
          goto LAB_00469ae8;
        }
      }
LAB_00469af4:
      if (param_3 == 0x47) {
        if (1 < *(int *)(self + lVar25 * 0x288 + 0x8dd20) - 0x15U) {
          iVar13 = *(int *)(self + lVar25 * 0x288 + 0x8daf0);
          if ((((iVar13 - 0x85U < 0x40) &&
               ((1LL << ((ulong)(iVar13 - 0x85U) & 0x3f) & 0x8000000000000003U) != 0)) ||
              (iVar13 - 0x60U < 2)) || (iVar13 - 0xf6U < 4)) {
            iVar13 = *(int *)(self + lVar25 * 0x288 + 0x8dad8);
            iVar12 = 0x47;
          }
          else {
            if ((0xb < iVar13 - 0x73U) || ((1 << (ulong)(iVar13 - 0x73U & 0x1f) & 0xe3fU) == 0))
            goto LAB_004682f0;
            iVar13 = *(int *)(self + lVar25 * 0x288 + 0x8dad8);
            iVar12 = 0x48;
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar12), GH_ARG(iVar13), GH_ARG(iVar11));
        }
        bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
        if ((*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) &&
           (*(int *)(self + lVar25 * 0x288 + 0x8dd20) - 0x15U < 2)) {
          *(int *)(self + lVar25 * 0x288 + 0x8daec) = 2;
        }
        iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dad8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8dafc);
        uVar27 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        uVar17 = *(int *)(self + 0x1ae8) - 0xd;
        if ((((0x3d < uVar17) || ((1LL << ((ulong)uVar17 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar26 = 0;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) {
              *(undefined4 *)(puVar21 + -4) = uVar28;
              *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar27;
              puVar21[-1] = 0x11;
              puVar21[-2] = 0x640000006e;
              *(int *)(puVar21 + -3) = iVar11;
              *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
              *puVar21 = 0x3f80000000000000;
              *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
              *(int *)((gh_long)puVar21 + 0x1c) = param_7;
              *(undefined4 *)(puVar21 + 1) = 0x3f800000;
              puVar21[5] = 0xff000000ff;
              puVar21[4] = 0xff00000000;
              iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dad8);
              uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8dafc);
              uVar27 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
              break;
            }
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
        uVar7 = *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd30);
        if (((0x3d < uVar17) || ((1LL << ((ulong)uVar17 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar30 = 0;
          puVar23 = (undefined4 *)(self + 0xb0cd8);
          do {
            if ((int)puVar23[-3] < 1) {
              puVar23[-8] = uVar28;
              puVar23[-7] = uVar27;
              *puVar23 = uVar7;
              puVar23[-6] = (uint)(iVar11 == 0);
              *(undefined8 *)(puVar23 + 5) = 0;
              *(undefined8 *)(puVar23 + 3) = 0;
              puVar23[7] = param_7;
              *(undefined8 *)(puVar23 + 1) = 0x3f8000003f800000;
              *(undefined8 *)(puVar23 + -2) = 0x3c;
              *(undefined8 *)(puVar23 + -4) = 0x6400000063;
              *(undefined8 *)(puVar23 + 10) = 0xff000000ff;
              *(undefined8 *)(puVar23 + 8) = 0xff00000000;
              break;
            }
            lVar30 = lVar30 + 1;
            puVar23 = puVar23 + 0x14;
          } while (lVar30 < *(int *)(self + 0x32b828));
        }
        goto LAB_004682f0;
      }
      if ((param_7 == 0) && ((*piVar6 == 0x3b || (*piVar6 == 0xf)))) {
        *(undefined4 *)(self + 0x32ba84) = 0;
        joyX2 = *(undefined4 *)(self + 0x1b08);
        joyY2 = *(undefined4 *)(self + 0x1b0c);
        *(undefined4 *)(self + 0x8dd38) = 0;
        *(undefined4 *)(self + 0x8dd24) = 0;
        bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
      }
      piVar24 = (int *)(self + lVar30 * 0x288 + 0x8dad8);
      puVar29 = (uint *)(self + lVar25 * 0x288 + 0x8dad8);
      *puVar29 = (uint)(*piVar24 == 0);
      bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
      if ((((int)*puVar2 < 0xf) || (param_5 < 1)) || (0x11 < (int)*puVar2)) {
        uVar17 = *puVar29;
        iVar13 = *(int *)(self + 0x1ae8);
        if (((0x3d < iVar13 - 0xdU) ||
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar26 = 0;
          puVar21 = (undefined8 *)(self + 0xb0cf8);
          do {
            if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
              puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
              *(uint *)(puVar21 + -7) = uVar17;
              puVar21[-5] = 0x11;
              puVar21[-6] = 0x640000006e;
              *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
              *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
              puVar21[-4] = 0x3f80000000000000;
              puVar21[1] = 0xff000000ff;
              *puVar21 = 0xff00000000;
              *(int *)((gh_long)puVar21 + -4) = param_7;
              *(undefined4 *)(puVar21 + -3) = 0x3f800000;
              break;
            }
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
      }
      else {
        uVar17 = *puVar29;
        iVar12 = *(int *)(self + lVar30 * 0x288 + 0x8dafc);
        if (*piVar24 == 0) {
          iVar13 = *(int *)(self + 0x1ae8);
          uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar14 = 0x28;
          }
          else {
            local_80 = 0x2700000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar14 = iVar14 + -0x14;
          }
          if ((((0x3d < iVar13 - 0xdU) ||
               ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar26 = 0;
            iVar12 = iVar12 + -0x1e;
            puVar21 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046b430;
              lVar26 = lVar26 + 1;
              puVar21 = puVar21 + 10;
            } while (lVar26 < *(int *)(self + 0x32b828));
          }
        }
        else {
          iVar13 = *(int *)(self + 0x1ae8);
          uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
          if (((iVar13 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar14 = 0x28;
          }
          else {
            local_80 = 0x2700000000;
            pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
            iVar13 = *(int *)(self + 0x1ae8);
            iVar14 = iVar14 + -0x14;
          }
          if (((0x3d < iVar13 - 0xdU) ||
              ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar26 = 0;
            iVar12 = iVar12 + 0x1e;
            puVar21 = (undefined8 *)(self + 0xb0cd8);
            do {
              if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046b430;
              lVar26 = lVar26 + 1;
              puVar21 = puVar21 + 10;
            } while (lVar26 < *(int *)(self + 0x32b828));
          }
        }
      }
      goto LAB_0046b48c;
    }
    puVar29 = (uint *)(self + lVar25 * 0x288 + 0x8dad8);
    *puVar29 = (uint)(*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0);
    if ((uVar22 - 0xf < 2) && (0x1fe < *(int *)(self + lVar30 * 0x288 + 0x8daf0))) {
      if (*(int *)(self + 0x32c160) == 0) {
        pSVar15 = (SoundClip *)(self + 0x1878);
LAB_00469418:
        SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
      }
    }
    else {
      if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
        uVar17 = 3;
      }
      else {
        local_80 = 0x200000000;
        pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
        uVar17 = iVar11 + 1;
      }
      if ((uVar17 < 0x4b) && (*(int *)(self + 0x32c160) == 0)) {
        pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
        goto LAB_00469418;
      }
    }
    bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
    if ((((int)*puVar2 < 0xf) || (param_5 < 1)) || (0x11 < (int)*puVar2)) {
      iVar11 = *(int *)(self + 0x1ae8);
      uVar17 = *puVar29;
      if (((0x3d < iVar11 - 0xdU) ||
          ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar26 = 0;
        puVar21 = (undefined8 *)(self + 0xb0cf8);
        do {
          if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
            puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
            *(uint *)(puVar21 + -7) = uVar17;
            puVar21[-5] = 0x11;
            puVar21[-6] = 0x640000006e;
            *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
            puVar21[-4] = 0x3f80000000000000;
            *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
            *(int *)((gh_long)puVar21 + -4) = param_7;
            puVar21[1] = 0xff000000ff;
            *puVar21 = 0xff00000000;
            *(undefined4 *)(puVar21 + -3) = 0x3f800000;
            break;
          }
          lVar26 = lVar26 + 1;
          puVar21 = puVar21 + 10;
        } while (lVar26 < *(int *)(self + 0x32b828));
      }
    }
    else {
      uVar17 = *puVar29;
      iVar13 = *(int *)(self + lVar30 * 0x288 + 0x8dafc);
      if (*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0) {
        iVar11 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if ((iVar11 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x28;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar11 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if ((((0x3d < iVar11 - 0xdU) ||
             ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar26 = 0;
          iVar13 = iVar13 + -0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046b290;
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
      }
      else {
        iVar11 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if ((iVar11 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x28;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar11 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if (((0x3d < iVar11 - 0xdU) ||
            ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar26 = 0;
          iVar13 = iVar13 + 0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046b290;
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
      }
    }
    goto LAB_0046957c;
  }
switchD_004684c4_caseD_13:
  bVar10 = *(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0;
  puVar29 = (uint *)(self + lVar25 * 0x288 + 0x8dad8);
  *puVar29 = (uint)bVar10;
  uVar18 = (uint)bVar10;
  if (uVar22 - 0xf < 2) {
    uVar22 = 0x8daf0;
    uVar18 = 0x8daf0;
    if (*(int *)(self + lVar30 * 0x288 + 0x8daf0) < 0x1ff) goto LAB_00468928;
    if (*(int *)(self + 0x32c160) == 0) {
      pSVar15 = (SoundClip *)(self + 0x1878);
      goto LAB_00468974;
    }
  }
  else {
LAB_00468928:
    uVar22 = uVar18;
    if ((uVar17 < 0x3d) && ((1LL << (uVar20 & 0x3f) & 0x1200000000000081U) != 0)) {
      uVar17 = 3;
    }
    else {
      local_80 = 0x200000000;
      pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
      uVar17 = iVar11 + 1;
      uVar22 = extraout_w10_01;
      if (0x4a < uVar17) goto LAB_00468988;
    }
    if (*(int *)(self + 0x32c160) == 0) {
      pSVar15 = (SoundClip *)(self + (gh_long)(int)uVar17 * 0x18 + 0x11e8);
LAB_00468974:
      SoundClip__play_0047e570(GH_ARG(pSVar15), GH_ARG(false));
      uVar22 = extraout_w10;
    }
  }
LAB_00468988:
  if (4 < *(int *)(self + lVar30 * 0x288 + 0x8daf0) - 0x19aU) {
    bzStateGame__PCDamage_004398c8(GH_ARG(self), GH_ARG(param_8), GH_ARG(param_7), GH_ARG(param_2));
    uVar22 = extraout_w10_00;
  }
  uVar17 = *puVar2;
  if (uVar17 == 0x13) {
    if ((param_3 != 0x49) && (*(int *)(self + lVar30 * 0x288 + 0x8dae0) != 0x2e)) {
      fVar31 = *(float *)(self + lVar30 * 0x288 + 0x8db24);
      if (fVar31 != 1.0) {
        if (fVar31 <= 1.0) {
          fVar32 = 0.0 - (1.0 - fVar31) * 0.0;
        }
        else {
          fVar32 = fVar31 * 0.0;
        }
        uVar22 = (uint)fVar32;
      }
      if (((int)(*piVar3 - uVar22) < *piVar5) && (*piVar5 < (int)(uVar22 + *piVar3))) {
        if (fVar31 == 1.0) {
          iVar11 = 0x28;
        }
        else {
          if (fVar31 <= 1.0) {
            fVar31 = 40.0 - (1.0 - fVar31) * 40.0;
          }
          else {
            fVar31 = fVar31 * 40.0;
          }
          iVar11 = (int)fVar31;
        }
        if ((*(int *)(self + lVar30 * 0x288 + 0x8dacc) - iVar11 <
             *(int *)(self + lVar25 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar25 * 0x288 + 0x8dacc) <
            iVar11 + *(int *)(self + lVar30 * 0x288 + 0x8dacc))) {
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(*(int *)(self + lVar25 * 0x288 + 0x8dae0)), GH_ARG(1), GH_ARG(0x2e), GH_ARG(*puVar29))
          ;
          uVar17 = *puVar2;
          goto LAB_0046a354;
        }
      }
    }
  }
  else {
LAB_0046a354:
    if (((0xe < (int)uVar17) && (0 < param_5)) && ((int)uVar17 < 0x12)) {
      uVar17 = *puVar29;
      iVar11 = *(int *)(self + lVar30 * 0x288 + 0x8dafc);
      if (*(int *)(self + lVar30 * 0x288 + 0x8dad8) == 0) {
        iVar13 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar13 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar13 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if (((0x3d < iVar13 - 0xdU) ||
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar26 = 0;
          iVar11 = iVar11 + -0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046af84;
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
      }
      else {
        iVar13 = *(int *)(self + 0x1ae8);
        uVar28 = *(undefined4 *)(self + lVar30 * 0x288 + 0x8db00);
        if (((iVar13 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0x28;
        }
        else {
          local_80 = 0x2700000000;
          pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
          iVar13 = *(int *)(self + 0x1ae8);
          iVar12 = iVar12 + -0x14;
        }
        if (((0x3d < iVar13 - 0xdU) ||
            ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar26 = 0;
          iVar11 = iVar11 + 0x1e;
          puVar21 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar21 + -0xc) < 1) goto LAB_0046af84;
            lVar26 = lVar26 + 1;
            puVar21 = puVar21 + 10;
          } while (lVar26 < *(int *)(self + 0x32b828));
        }
      }
      goto LAB_0046a494;
    }
  }
  iVar13 = *(int *)(self + 0x1ae8);
  uVar17 = *puVar29;
  if (((0x3d < iVar13 - 0xdU) ||
      ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
     ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
    lVar26 = 0;
    puVar21 = (undefined8 *)(self + 0xb0cf8);
    do {
      if (*(int *)((gh_long)puVar21 + -0x2c) < 1) {
        puVar21[-8] = *(undefined8 *)(self + lVar30 * 0x288 + 0x8dafc);
        *(uint *)(puVar21 + -7) = uVar17;
        puVar21[-5] = 0x11;
        puVar21[-6] = 0x640000006e;
        *(undefined8 *)((gh_long)puVar21 + -0xc) = 0;
        *(undefined8 *)((gh_long)puVar21 + -0x14) = 0;
        puVar21[-4] = 0x3f80000000000000;
        *(int *)((gh_long)puVar21 + -4) = param_7;
        *(undefined4 *)(puVar21 + -3) = 0x3f800000;
        puVar21[1] = 0xff000000ff;
        *puVar21 = 0xff00000000;
        break;
      }
      lVar26 = lVar26 + 1;
      puVar21 = puVar21 + 10;
    } while (lVar26 < *(int *)(self + 0x32b828));
  }
LAB_0046a494:
  if (((iVar13 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
    iVar11 = 4;
  }
  else {
    local_80 = 0x300000000;
    pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
    iVar11 = iVar11 + 100;
  }
  lVar30 = lVar30 * 0x288;
  uVar18 = (uint)(*puVar29 == 0);
  bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar29 == 0)), GH_ARG(*(int *)(self + lVar30 + 0x8dafc)), GH_ARG(*(int *)(self + lVar30 + 0x8db00)), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar25 * 0x288 + 0x8dd30)), GH_ARG(0));
  if (*(int *)(self + lVar30 + 0x8dae0) - 0x34U < 5) {
    *(int *)(self + 0x32c138) = param_7;
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(param_3), GH_ARG(*puVar29), GH_ARG(uVar18));
    goto LAB_004682f0;
  }
  if (*(int *)(self + lVar25 * 0x288 + 0x8dae0) < 0x4c) {
    iVar13 = *(int *)(self + 0x32ba14);
    iVar11 = *(int *)(self + 0x32ba20) + *piVar5;
    iVar12 = 0;
    if (iVar13 != 0) {
      iVar12 = iVar11 / iVar13;
    }
    iVar14 = 0;
    if (iVar13 != 0) {
      iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    goto LAB_0046a684;
    iVar12 = 0;
    if (iVar13 != 0) {
      iVar12 = (iVar11 + -0x14) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    goto LAB_0046a684;
    iVar12 = 0;
    if (iVar13 != 0) {
      iVar12 = (iVar11 + 0x14) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    goto LAB_0046a684;
    uVar17 = *puVar29;
    iVar11 = 0x45;
  }
  else {
LAB_0046a684:
    if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
      iVar11 = 0;
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x3a), GH_ARG(*puVar29), GH_ARG(iVar11));
      goto LAB_004682f0;
    }
    if ((*(int *)(self + lVar30 + 0x8dae0) - 0x46U < 0x51) ||
       (*(int *)(self + lVar25 * 0x288 + 0x8dae0) == 3)) goto LAB_004682f0;
    if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       (*piVar1 != 1)) {
      local_80 = 0x6300000000;
      pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
      if (iVar11 < 0x33) goto LAB_004682f0;
    }
    uVar17 = *puVar29;
    iVar11 = 0x7c;
  }
LAB_0046a7c4:
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(uVar17), GH_ARG(uVar18));
LAB_004682f0:
  if (*(gh_long *)(lVar9 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
LAB_0046adb4:
  *(int *)(puVar21 + -4) = iVar11;
  *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar28;
  puVar21[-2] = 0x640000007e;
  *(uint *)(puVar21 + -3) = uVar17;
  *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
  *puVar21 = 0x3f80000000000000;
  *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
  *(int *)((gh_long)puVar21 + 0x1c) = param_7;
  *(undefined4 *)(puVar21 + -1) = 0x24a;
  *(int *)((gh_long)puVar21 + -4) = iVar12 + param_5;
  puVar21[5] = 0xff000000ff;
  puVar21[4] = 0xff00000000;
  *(undefined4 *)(puVar21 + 1) = 0x3f800000;
LAB_004686f8:
  if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
    uVar17 = *puVar29;
    if (*piVar4 == 0x18) {
      iVar11 = 0xb8;
    }
    else {
      iVar11 = 0xc0;
    }
  }
  else {
    if (*(int *)(self + lVar25 * 0x288 + 0x8dae0) < 0x4c) {
      iVar13 = *(int *)(self + 0x32ba14);
      iVar11 = *(int *)(self + 0x32ba20) + *piVar5;
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = iVar11 / iVar13;
      }
      iVar14 = 0;
      if (iVar13 != 0) {
        iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) / iVar13;
      }
      if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar12 = 0;
        if (iVar13 != 0) {
          iVar12 = (iVar11 + -0x14) / iVar13;
        }
        if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar12 = 0;
          if (iVar13 != 0) {
            iVar12 = (iVar11 + 0x14) / iVar13;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) goto LAB_004682f0;
        }
      }
    }
    if (*piVar4 == 0x18) {
      if ((*puVar2 | 4) == 0x17) {
        uVar17 = *puVar29;
        iVar11 = 0xb7;
      }
      else {
        uVar17 = *puVar29;
        iVar11 = 0xb6;
      }
    }
    else if ((*puVar2 | 4) == 0x17) {
      uVar17 = *puVar29;
      iVar11 = 0xc1;
    }
    else {
      uVar17 = *puVar29;
      iVar11 = 0xbe;
    }
  }
  goto LAB_0046a7c4;
LAB_0046af38:
  *(int *)(puVar21 + -4) = iVar13;
  *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar27;
  puVar21[-2] = 0x640000007e;
  *(undefined4 *)(puVar21 + -3) = uVar28;
  *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
  *puVar21 = 0x3f80000000000000;
  *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
  *(int *)((gh_long)puVar21 + 0x1c) = param_7;
  *(undefined4 *)(puVar21 + -1) = 0x24a;
  *(int *)((gh_long)puVar21 + -4) = iVar14 + param_5;
  puVar21[5] = 0xff000000ff;
  puVar21[4] = 0xff00000000;
  *(undefined4 *)(puVar21 + 1) = 0x3f800000;
LAB_00468d80:
  if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
    uVar17 = *(uint *)(self + lVar25 * 0x288 + 0x8dad8);
    iVar13 = 0xae;
  }
  else {
    if (*(int *)(self + lVar25 * 0x288 + 0x8dae0) < 0x4c) {
      iVar12 = *(int *)(self + 0x32ba14);
      iVar13 = *(int *)(self + 0x32ba20) + *piVar5;
      iVar14 = 0;
      if (iVar12 != 0) {
        iVar14 = iVar13 / iVar12;
      }
      iVar8 = 0;
      if (iVar12 != 0) {
        iVar8 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) / iVar12;
      }
      if ((*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar14 = 0;
        if (iVar12 != 0) {
          iVar14 = (iVar13 + -0x14) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar14 = 0;
          if (iVar12 != 0) {
            iVar14 = (iVar13 + 0x14) / iVar12;
          }
          if ((*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar8 * 4 + (gh_long)iVar14 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) goto LAB_004682f0;
        }
      }
    }
    if ((*puVar2 | 4) != 0x17) goto LAB_004682f0;
    iVar13 = 0xad;
    uVar17 = (uint)(*piVar3 < *piVar5);
    *(uint *)(self + lVar25 * 0x288 + 0x8dad8) = (uint)(*piVar3 < *piVar5);
  }
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar13), GH_ARG(uVar17), GH_ARG(iVar11));
  goto LAB_004682f0;
LAB_0046b430:
  *(int *)(puVar21 + -4) = iVar12;
  *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar28;
  *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
  puVar21[-2] = 0x640000007e;
  *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
  *(uint *)(puVar21 + -3) = uVar17;
  *(undefined4 *)(puVar21 + -1) = 0x24a;
  *(int *)((gh_long)puVar21 + -4) = iVar14 + param_5;
  *puVar21 = 0x3f80000000000000;
  *(int *)((gh_long)puVar21 + 0x1c) = param_7;
  *(undefined4 *)(puVar21 + 1) = 0x3f800000;
  puVar21[5] = 0xff000000ff;
  puVar21[4] = 0xff00000000;
LAB_0046b48c:
  uVar17 = *puVar2;
  if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
    if (uVar17 - 0xd < 2) {
      if (param_4 == 0x42) {
        iVar12 = 0x12;
        iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dacc) + -0xa0;
        iVar13 = 0;
        goto LAB_0046b5d4;
      }
    }
    else {
      if (((uVar17 == 0x13) || (uVar17 == 0)) || (2 < uVar17 - 0xf)) goto switchD_0046b56c_caseD_3d;
      switch(param_4) {
      case 0x3a:
        iVar12 = 0x14;
        iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dacc) + -0x14;
        iVar13 = *(int *)(self + lVar25 * 0x288 + 0x8dacc) + -0x28;
        break;
      case 0x3b:
        iVar12 = 0x13;
        iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dacc) + -100;
        iVar13 = *(int *)(self + lVar25 * 0x288 + 0x8dacc) + -0x8c;
        break;
      case 0x3c:
        param_4 = 0x91;
        goto LAB_0046b5e8;
      default:
        goto switchD_0046b56c_caseD_3d;
      case 0x42:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x93), GH_ARG(*puVar29), GH_ARG(iVar11));
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(0), GH_ARG(0x12), GH_ARG(*(int *)(self + lVar25 * 0x288 + 0x8dacc) + -0xa0), GH_ARG(0));
        goto LAB_0046b5f4;
      }
LAB_0046b5d4:
      bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(0), GH_ARG(iVar12), GH_ARG(iVar11), GH_ARG(iVar13));
    }
switchD_0046b56c_caseD_3d:
LAB_0046b5e8:
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(param_4), GH_ARG(*puVar29), GH_ARG(iVar11));
LAB_0046b5f4:
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
    if (((param_3 == 0x49) && (0 < param_7)) && (*(int *)(self + 0x32c134) <= param_8)) {
      *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd3c) = 0x5dc;
      *piVar4 = 0;
    }
  }
  else {
    iVar12 = 0x3c;
    if (uVar17 != 0) {
      iVar12 = 0x5a;
    }
    if ((param_3 != 0x49) && (*(int *)(self + lVar30 * 0x288 + 0x8dae0) != 0x2e)) {
      fVar31 = *(float *)(self + lVar30 * 0x288 + 0x8db24);
      if (fVar31 != 1.0) {
        fVar32 = (float)iVar12;
        if (fVar31 <= 1.0) {
          fVar32 = fVar32 - (1.0 - fVar31) * fVar32;
        }
        else {
          fVar32 = fVar31 * fVar32;
        }
        iVar12 = (int)fVar32;
      }
      if ((*piVar3 - iVar12 < *piVar5) && (*piVar5 < iVar12 + *piVar3)) {
        if (fVar31 == 1.0) {
          iVar12 = 0x28;
        }
        else {
          if (fVar31 <= 1.0) {
            fVar31 = 40.0 - (1.0 - fVar31) * 40.0;
          }
          else {
            fVar31 = fVar31 * 40.0;
          }
          iVar12 = (int)fVar31;
        }
        if ((*(int *)(self + lVar30 * 0x288 + 0x8dacc) - iVar12 <
             *(int *)(self + lVar25 * 0x288 + 0x8dacc)) &&
           (*(int *)(self + lVar25 * 0x288 + 0x8dacc) <
            iVar12 + *(int *)(self + lVar30 * 0x288 + 0x8dacc))) {
          if (uVar17 == 0) {
            if (((iVar13 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar13 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar11 = 0xc;
            }
            else {
              local_80 = 0x800000000;
              pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
              iVar11 = 0x15 - iVar11;
            }
          }
          else {
            iVar11 = 0x4c;
          }
          bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(*piVar6), GH_ARG(1), GH_ARG(iVar11), GH_ARG(*puVar29));
          uVar17 = *puVar2;
          if (uVar17 == 0x13) {
            if (*(int *)(self + 0x32ba38) == 0) {
              *(int *)(self + 0x32ba38) = 2;
            }
            uVar17 = 0x13;
          }
        }
      }
    }
    *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd48) = 0;
    iVar13 = *(int *)(self + lVar30 * 0x288 + 0x8dae0);
    if (iVar13 - 0x34U < 5) {
      *(int *)(self + 0x32c138) = param_7;
    }
    if (param_3 == 0x79) {
      if (uVar17 == 0x14) {
        if (*(int *)(self + lVar25 * 4 + 0x32baa0) == 0) {
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_8), GH_ARG(0x5f), GH_ARG(*piVar24), GH_ARG(iVar11));
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x7c), GH_ARG(*puVar29), GH_ARG(iVar11));
          iVar11 = 0x14;
          if (*piVar5 < *piVar3) {
            iVar11 = -0x14;
          }
          *(int *)(self + lVar25 * 0x288 + 0x8dac8) = iVar11 + *piVar3;
        }
      }
      else {
        *(int *)(self + lVar25 * 0x288 + 0x8db1c) = -param_8;
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x79), GH_ARG(*puVar29), GH_ARG(iVar11));
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_8), GH_ARG(0x78), GH_ARG(*piVar24), GH_ARG(iVar11));
      }
    }
    else {
      if (0x50 < iVar13 - 0x46U) {
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(param_3), GH_ARG(*puVar29), GH_ARG(iVar11));
      }
      if (((param_3 == 0x49) && (*(int *)(self + 0x32c134) <= param_8)) &&
         ((*(int *)(self + lVar25 * 4 + 0x32baa0) == 0 &&
          (*(int *)(self + lVar25 * 0x288 + 0x8db1c) = param_8, 0 < param_7)))) {
        iVar11 = *(int *)(self + lVar25 * 0x288 + 0x8dd3c);
        if (1000 < iVar11) {
          iVar13 = 0x210;
          if (iVar11 == 0x5dd) {
            iVar13 = 0x211;
          }
          iVar12 = iVar11 + -0x386;
          if (iVar11 < 0x5de) {
            iVar12 = iVar13;
          }
          *(int *)(self + lVar25 * 0x288 + 0x8dd3c) = iVar12;
          *piVar4 = 0x14;
        }
      }
    }
  }
  if ((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
     ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
    iVar11 = 4;
  }
  else if (*piVar1 == 1) {
    iVar11 = 4;
  }
  else {
    local_80 = 0x300000000;
    pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
    iVar11 = iVar11 + 100;
  }
  uVar17 = (uint)(*puVar29 == 0);
  bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar29 == 0)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8dafc)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8db00)), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar25 * 0x288 + 0x8dd30)), GH_ARG(0));
  if (0x4b < *piVar6) goto LAB_004682f0;
  iVar13 = *(int *)(self + 0x32ba14);
  iVar11 = *(int *)(self + 0x32ba20) + *piVar5;
  iVar12 = 0;
  if (iVar13 != 0) {
    iVar12 = iVar11 / iVar13;
  }
  iVar14 = 0;
  if (iVar13 != 0) {
    iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) / iVar13;
  }
  if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
     (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378)))
  goto LAB_004682f0;
  iVar12 = 0;
  if (iVar13 != 0) {
    iVar12 = (iVar11 + -0x14) / iVar13;
  }
  if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
     (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378)))
  goto LAB_004682f0;
  iVar12 = 0;
  if (iVar13 != 0) {
    iVar12 = (iVar11 + 0x14) / iVar13;
  }
  if ((0 < *(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
     (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378)))
  goto LAB_004682f0;
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(0x45), GH_ARG(*puVar29), GH_ARG(uVar17));
  uVar17 = 0xdd08;
  uVar28 = 1;
  goto LAB_004698a0;
LAB_0046b290:
  *(int *)(puVar21 + -4) = iVar13;
  *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar28;
  *(uint *)(puVar21 + -3) = uVar17;
  puVar21[-2] = 0x640000007e;
  *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
  *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
  *puVar21 = 0x3f80000000000000;
  *(int *)((gh_long)puVar21 + 0x1c) = param_7;
  *(undefined4 *)(puVar21 + -1) = 0x24a;
  *(int *)((gh_long)puVar21 + -4) = iVar12 + param_5;
  puVar21[5] = 0xff000000ff;
  puVar21[4] = 0xff00000000;
  *(undefined4 *)(puVar21 + 1) = 0x3f800000;
LAB_0046957c:
  if (((iVar11 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar11 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
    iVar11 = 4;
  }
  else {
    local_80 = 0x300000000;
    pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
    iVar11 = iVar11 + 100;
  }
  uVar17 = (uint)(*puVar29 == 0);
  bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(0x3c), GH_ARG((uint)(*puVar29 == 0)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8dafc)), GH_ARG(*(int *)(self + lVar30 * 0x288 + 0x8db00)), GH_ARG(0), GH_ARG(0), GH_ARG(*(float *)(self + lVar25 * 0x288 + 0x8dd30)), GH_ARG(0));
  if (*(int *)(self + lVar25 * 0x288 + 0x8daec) < 2) {
    uVar17 = 0;
    bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(param_7), GH_ARG(0), GH_ARG(0x15), GH_ARG(0), GH_ARG(0));
    uVar22 = *puVar29;
    iVar11 = 0x83;
  }
  else {
    if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       (*piVar1 != 1)) {
      local_80 = 0x6300000000;
      pmVar16 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar16), GH_ARG((param_type *)&local_80));
      if (iVar11 < 0x33) goto LAB_004682f0;
    }
    iVar13 = *(int *)(self + 0x32ba14);
    iVar11 = *(int *)(self + 0x32ba20) + *piVar5;
    iVar12 = 0;
    if (iVar13 != 0) {
      iVar12 = iVar11 / iVar13;
    }
    iVar14 = 0;
    if (iVar13 != 0) {
      iVar14 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) / iVar13;
    }
    if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
       (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                    0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = (iVar11 + -0x14) / iVar13;
      }
      if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar12 = 0;
        if (iVar13 != 0) {
          iVar12 = (iVar11 + 0x14) / iVar13;
        }
        if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar12 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) goto LAB_004682f0;
      }
    }
    uVar22 = *puVar29;
    iVar11 = 0x82;
  }
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_7), GH_ARG(iVar11), GH_ARG(uVar22), GH_ARG(uVar17));
  uVar17 = 0xdd3c;
  uVar28 = 0x23a;
LAB_004698a0:
  *(undefined4 *)(self + (ulong)(uVar17 | 0x80000) + lVar25 * 0x288) = uVar28;
  goto LAB_004682f0;
LAB_0046af84:
  *(int *)(puVar21 + -4) = iVar11;
  *(undefined4 *)((gh_long)puVar21 + -0x1c) = uVar28;
  *(uint *)(puVar21 + -3) = uVar17;
  puVar21[-2] = 0x640000007e;
  *(undefined8 *)((gh_long)puVar21 + 0x14) = 0;
  *(undefined8 *)((gh_long)puVar21 + 0xc) = 0;
  *puVar21 = 0x3f80000000000000;
  *(int *)((gh_long)puVar21 + 0x1c) = param_7;
  *(undefined4 *)(puVar21 + -1) = 0x24a;
  *(int *)((gh_long)puVar21 + -4) = iVar12 + param_5;
  puVar21[5] = 0xff000000ff;
  puVar21[4] = 0xff00000000;
  *(undefined4 *)(puVar21 + 1) = 0x3f800000;
  goto LAB_0046a494;
  return 0;
}
