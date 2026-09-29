/* bzStateGame::TilePoper2_0044cbe4 @ 0x0044cbe4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__TilePoper2_0044cbe4(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11)
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

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  gh_long lVar7;
  gh_long lVar8;
  gh_long lVar9;
  gh_long lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  mersenne_twister_engine *pmVar22;
  SoundClip *this;
  uint uVar23;
  undefined4 uVar24;
  undefined *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  gh_long lVar29;
  gh_long lVar30;
  gh_long lVar31;
  gh_long lVar32;
  int in_w15 = 0;
  uint uVar33;
  uint uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar7 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar7 + 0x28);
  iVar21 = *(int *)(self + 0x1ae8);
  uVar23 = iVar21 - 0xd;
  uVar28 = (ulong)uVar23;
  if (((uVar23 < 0x3e) && ((1LL << (uVar28 & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*(int *)(self + 0xba8) == 1)) goto switchD_0044d57c_caseD_10;
  piVar2 = (int *)(self + 0x1ae8);
  piVar1 = (int *)(self + 0xba8);
  if (param_12 == 0) {
    iVar16 = *(int *)(self + (gh_long)param_10 * 0x50 + 0xb0cd0);
    iVar18 = *(int *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
    lVar31 = (gh_long)param_10;
    piVar3 = (int *)(self + (gh_long)param_10 * 0x50 + 0xb0cb8);
    if (iVar16 == 0x29) {
      uVar34 = *(uint *)(self + lVar31 * 0x50 + 0xb0cc0);
      uVar33 = uVar34;
LAB_0044cef4:
      iVar16 = *piVar3;
      iVar13 = *(int *)(self + lVar31 * 0x50 + 0xb0cbc);
      if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
        iVar12 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
        iVar12 = iVar12 + -6;
      }
      uVar24 = *(undefined4 *)(self + lVar31 * 0x50 + 0xb0cd4);
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = iVar16 + in_w15;
            puVar26[-9] = iVar12 + iVar13;
            *(undefined8 *)(puVar26 + -6) = 0x640000006e;
            puVar26[-8] = uVar34;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-4] = 0x11;
            puVar26[-3] = uVar24;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
    }
    else {
      iVar13 = *(int *)(self + lVar31 * 0x50 + 0xb0cd4);
      bVar11 = iVar13 - 0x9fU < 0x137;
      uVar33 = (uint)bVar11;
      in_w15 = 10;
      if (bVar11) {
        in_w15 = -10;
      }
      if (iVar16 - 0xb9U < 4) {
        iVar16 = *piVar3;
        uVar24 = *(undefined4 *)(self + lVar31 * 0x50 + 0xb0cc0);
        iVar13 = *(int *)(self + lVar31 * 0x50 + 0xb0cbc);
        if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
          iVar12 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + -6;
          iVar21 = *piVar2;
        }
        uVar6 = *(undefined4 *)(self + lVar31 * 0x50 + 0xb0cf8);
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar16 + in_w15;
              puVar26[-9] = iVar13 + 0x1a + iVar12;
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              puVar26[-8] = uVar24;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + -4) = 0xffffffff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000032;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[5] = iVar18;
              puVar26[6] = uVar6;
              goto LAB_0045ebb4;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
      else if (iVar16 - 0xd1U < 4) {
        iVar16 = *piVar3;
        iVar12 = *(int *)(self + lVar31 * 0x50 + 0xb0cbc);
        if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
          iVar17 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = *(int *)(self + lVar31 * 0x50 + 0xb0cd4);
          iVar21 = *piVar2;
          iVar17 = iVar17 + -6;
        }
        uVar24 = *(undefined4 *)(self + lVar31 * 0x50 + 0xb0cf8);
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              puVar26[-10] = iVar16 + in_w15;
              puVar26[-9] = iVar17 + iVar12;
              *(undefined8 *)(puVar26 + -6) = 0x6400000070;
              puVar26[5] = 0;
              puVar26[6] = uVar24;
              puVar26[-8] = 0;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[-4] = 0xe1;
              puVar26[-3] = iVar13;
              puVar26[9] = 0xff;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
      else {
        if (((iVar16 != 1) && (iVar16 != 0xf)) && (iVar16 != 0x24e)) {
          uVar34 = *(uint *)(self + lVar31 * 0x50 + 0xb0cc0);
          goto LAB_0044cef4;
        }
        iVar16 = *piVar3;
        uVar24 = *(undefined4 *)(self + lVar31 * 0x50 + 0xb0cc0);
        iVar13 = *(int *)(self + lVar31 * 0x50 + 0xb0cbc);
        if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
          iVar12 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + -6;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
LAB_0045928c:
          if (0 < (int)puVar26[-5]) goto code_r0x00459298;
          puVar26[-10] = iVar16 + in_w15;
          puVar26[-9] = iVar12 + iVar13;
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-8] = uVar24;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + -4) = 0x85;
          *(undefined8 *)(puVar26 + -6) = 0x6400000078;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
LAB_0045ebb4:
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
        }
      }
    }
LAB_0044d348:
    if (((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
        ((-0x1e < *(int *)(self + 0x8dacc) &&
         (*(uint *)(self + (gh_long)*(int *)(self + (gh_long)iVar18 * 0x288 + 0x8db14) * 4 + 0x131c8) <
          0x4b)))) && (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)
                 (self + (gh_long)(int)*(uint *)(self + (gh_long)*(int *)(self + (gh_long)iVar18 * 0x288 +
                                                                           0x8db14) * 4 + 0x131c8) *
                         0x18 + 0x11e8)), GH_ARG(false));
    }
  }
  else {
    uVar34 = *(uint *)(self + (gh_long)param_10 * 0x288 + 0x8dad8);
    uVar33 = uVar34;
    if (param_12 != 1) {
      uVar33 = (uint)(uVar34 == 0);
    }
    iVar16 = 10;
    if ((param_5 | 1U) != 0x3f) {
      iVar16 = 0;
    }
    iVar13 = 0x24;
    if (2 < param_5 - 0xcaU) {
      iVar13 = iVar16;
    }
    lVar31 = (gh_long)param_10;
    iVar18 = param_10;
    if (((*(int *)(self + (gh_long)param_10 * 0x288 + 0x8db14) < 0xf) || (param_3 < 1)) ||
       (0x11 < *(int *)(self + (gh_long)param_10 * 0x288 + 0x8db14))) {
      if (iVar13 == 0) {
        if (((0x3c < uVar23) || ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) == 0)) &&
           (0 < *(int *)(self + 0x32b828))) {
          lVar32 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + -10) = *(undefined8 *)(self + lVar31 * 0x288 + 0x8dafc);
              goto LAB_0044d514;
            }
            lVar32 = lVar32 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar32 < *(int *)(self + 0x32b828));
        }
      }
      else {
        iVar21 = *(int *)(self + lVar31 * 0x288 + 0x8db00);
        if ((param_5 | 1U) == 0xcb) {
          if (((0x3c < uVar23) || ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) == 0)) &&
             (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            iVar21 = iVar21 + 0x28;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_0044d4bc;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
        else if (((0x3c < uVar23) || ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) == 0)) &&
                (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) goto LAB_0044d4bc;
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
    }
    else {
      iVar16 = *(int *)(self + lVar31 * 0x288 + 0x8dafc);
      if (uVar34 == 0) {
        uVar24 = *(undefined4 *)(self + lVar31 * 0x288 + 0x8db00);
        if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
          iVar13 = 0x28;
        }
        else {
          local_b0 = 0x2700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -0x14;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              puVar26[-10] = iVar16 + -0x1e;
              puVar26[-9] = uVar24;
              *(undefined8 *)(puVar26 + -6) = 0x640000007e;
              puVar26[-8] = 0;
              *(undefined8 *)(puVar26 + 5) = 0;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[-4] = 0x24a;
              puVar26[-3] = iVar13 + param_3;
              puVar26[9] = 0xff;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
      else {
        uVar24 = *(undefined4 *)(self + lVar31 * 0x288 + 0x8db00);
        if ((uVar23 < 0x3d) && ((1LL << (uVar28 & 0x3f) & 0x1200000000000081U) != 0)) {
          iVar13 = 0x28;
        }
        else {
          local_b0 = 0x2700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + -0x14;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              puVar26[-10] = iVar16 + 0x1e;
              puVar26[-9] = uVar24;
              *(undefined8 *)(puVar26 + -6) = 0x640000007e;
              puVar26[-8] = uVar34;
              *(undefined8 *)(puVar26 + 5) = 0;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[-4] = 0x24a;
              puVar26[-3] = iVar13 + param_3;
              puVar26[9] = 0xff;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
    }
  }
  goto LAB_0044d558;
code_r0x00459298:
  lVar31 = lVar31 + 1;
  puVar26 = puVar26 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar31) goto LAB_0044d348;
  goto LAB_0045928c;
code_r0x0045fd0c:
  lVar31 = lVar31 + 1;
  puVar26 = puVar26 + 0x14;
  if (*(int *)(self + 0x32b828) <= lVar31) goto LAB_0045d4e4;
  goto LAB_0045fd00;
LAB_0044dfe4:
  iVar21 = 0;
  do {
    if (((0x3d < *piVar2 - 0xdU) ||
        ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
      local_b0 = 0x6300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      if (iVar16 < 0x3c) {
        iVar16 = *piVar2;
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = param_8;
              puVar26[-9] = param_9;
              puVar26[-8] = iVar13;
              *(undefined8 *)(puVar26 + -4) = 0x1000000dd;
              *(undefined8 *)(puVar26 + -6) = 0x6400000089;
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
      }
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 != 3);
  goto switchD_0044d57c_caseD_10;
LAB_00465180:
  puVar26[-10] = param_8;
  goto LAB_00465190;
code_r0x0045b7f0:
  lVar31 = lVar31 + 1;
  puVar26 = puVar26 + 0x14;
  if (*piVar5 <= lVar31) goto switchD_0044d57c_caseD_10;
  goto LAB_0045b7e4;
switchD_0044d57c_caseD_ad:
  piVar3 = (int *)(self + 0x32c160);
  if (*piVar3 == 0) {
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
  }
  switch(param_5) {
  case 0xd5:
    puVar25 = self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    uVar24 = 0x1d6;
    break;
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xda:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
switchD_0045114c_caseD_d6:
    uVar24 = 0xda;
    if (param_5 != 0xd7) {
      uVar24 = 0xdc;
    }
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = uVar24;
    goto LAB_00457b78;
  case 0xd9:
    puVar25 = self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    uVar24 = 0xd6;
    break;
  case 0xdb:
    puVar25 = self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    uVar24 = 0x1d7;
    break;
  case 0xe2:
    puVar25 = self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    uVar24 = 0x1d8;
    break;
  default:
    if (param_5 != 0xad) goto switchD_0045114c_caseD_d6;
    puVar25 = self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    uVar24 = 0xb0;
  }
  *(undefined4 *)(puVar25 + 0x140598) = uVar24;
LAB_00457b78:
  iVar16 = *(int *)(self + 0x1ae8);
  iVar21 = 0;
  piVar4 = (int *)(self + 0x32b828);
  do {
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar18 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar18 = iVar18 + 6;
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar13 = 4;
    }
    else {
      local_b0 = 0x300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar12 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar17 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar19 = 6;
    }
    else {
      local_b0 = 0x500000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar19 = iVar19 + 8;
      iVar16 = *piVar2;
    }
    if ((((0x3d < iVar16 - 0xdU) ||
         ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) &&
       (0 < *piVar4)) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-10] = param_8 + 10 + iVar12;
          puVar26[-9] = (param_9 + 0x14) - iVar17;
          puVar26[2] = 0;
          puVar26[3] = iVar19;
          *(undefined8 *)(puVar26 + -6) = 0x6400000085;
          puVar26[-8] = uVar33;
          puVar26[-4] = iVar13 + 0x18;
          puVar26[-3] = 1;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          puVar26[1] = 0;
          puVar26[4] = 0;
          puVar26[5] = -iVar18;
          *(undefined8 *)(puVar26 + 6) = 0xff00000000;
          *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *piVar4);
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 != 6);
  iVar21 = 0;
  do {
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar18 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar18 = iVar18 + 6;
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar13 = 0x11;
    }
    else {
      local_b0 = 0x1000000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar12 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar17 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = *piVar2;
    }
    if (((iVar16 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar19 = 6;
    }
    else {
      local_b0 = 0x500000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar19 = iVar19 + 8;
      iVar16 = *piVar2;
    }
    uVar23 = iVar16 - 0xd;
    if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
        (*piVar1 != 1)) && (0 < *piVar4)) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-10] = (param_8 + 10) - iVar12;
          puVar26[-9] = (param_9 + 0x14) - iVar17;
          puVar26[2] = 0;
          puVar26[3] = iVar19;
          puVar26[-4] = iVar13 + 0x2b;
          puVar26[-3] = 1;
          *puVar26 = 0x3f800000;
          puVar26[1] = 0;
          puVar26[4] = 0;
          puVar26[5] = -iVar18;
          *(undefined8 *)(puVar26 + 6) = 0xff00000000;
          *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
          *(undefined8 *)(puVar26 + -6) = 0x6400000085;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *piVar4);
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 != 10);
  if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*piVar1 == 1)) {
LAB_004580e4:
    if (*piVar3 == 0) {
      lVar31 = 0x17d0;
LAB_004580f4:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar31)), GH_ARG(false));
      if (*piVar3 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1800)), GH_ARG(false));
      }
    }
  }
  else {
    local_b0 = 0x1300000000;
    pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
    if (9 < iVar21) goto LAB_004580e4;
    if (*piVar3 == 0) {
      lVar31 = 0x1788;
      goto LAB_004580f4;
    }
  }
  if (((0x3d < *piVar2 - 0xdU) ||
      ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
    local_b0 = 0x6300000000;
    pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
    if (iVar21 < 0x3c) {
      iVar21 = *piVar2;
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = -0x14;
      }
      else if (*piVar1 == 1) {
        iVar16 = -0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = -0xc - iVar16;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x220;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x220;
      }
      else {
        local_b0 = 0x200000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 0x21d;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 2;
      }
      else if (*piVar1 == 1) {
        iVar13 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 2;
        iVar21 = *piVar2;
      }
      if ((((0x3d < iVar21 - 0xdU) ||
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
         && (0 < *piVar4)) {
        lVar31 = 0;
        param_9 = param_9 + 10;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) goto LAB_00464b3c;
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *piVar4);
      }
    }
  }
  goto switchD_0044d57c_caseD_10;
LAB_00464b3c:
  puVar26[-10] = param_8;
LAB_00465190:
  puVar26[-9] = param_9;
  puVar26[-8] = iVar13;
  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
  puVar26[2] = 0;
  puVar26[3] = iVar12;
  puVar26[4] = 0;
  puVar26[5] = iVar16;
  *(undefined8 *)(puVar26 + -6) = 0x6400000086;
  puVar26[-4] = iVar18;
  puVar26[-3] = 1;
LAB_004651bc:
  *puVar26 = 0x3f800000;
  puVar26[1] = 0;
  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
  goto switchD_0044d57c_caseD_10;
LAB_004649f8:
  puVar26[-10] = param_8;
LAB_00464a04:
  puVar26[-9] = param_9;
LAB_00464a08:
  puVar26[2] = 0;
  puVar26[3] = iVar12;
  *(undefined8 *)(puVar26 + -6) = 0x6400000086;
  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
  puVar26[-8] = iVar13;
  puVar26[4] = 0;
  puVar26[5] = iVar16;
  puVar26[-4] = iVar18;
  puVar26[-3] = 1;
LAB_00464a3c:
  *puVar26 = 0x3f800000;
  puVar26[1] = 0;
  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
  goto switchD_0044d57c_caseD_10;
LAB_0044d4bc:
  puVar26[-10] = iVar13 + param_8;
  puVar26[-9] = iVar21;
LAB_0044d514:
  *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
  puVar26[-8] = (uint)(uVar34 == 0);
  *(undefined8 *)(puVar26 + -4) = 0x11;
  *(undefined8 *)(puVar26 + -6) = 0x640000006e;
  *(undefined8 *)(puVar26 + 5) = 0;
  *(undefined8 *)(puVar26 + 3) = 0;
  *(undefined8 *)(puVar26 + 1) = 0;
  puVar26[9] = 0xff;
  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
  *puVar26 = 0x3f800000;
LAB_0044d558:
  switch(param_5) {
  case 0xf:
  case 0x4b:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar3 < 0) && (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, iVar21 < 0)) break;
    *piVar3 = 0;
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 0xc;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar20 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar20 = iVar20 + 2;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar20;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = param_8 + 0x14 + iVar17;
            puVar26[-9] = (param_9 + 0x14) - iVar19;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x137;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 5);
    if (*(int *)(self + 0x32c160) != 0) break;
    lVar31 = 0x15c0;
    goto LAB_0045c66c;
  case 0x16:
  case 0x2c:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    lVar31 = (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    *(int *)(self + lVar31 + 0x140598) = *(int *)(self + lVar31 + 0x140598) + 1;
    *(undefined4 *)(self + lVar31 + 0x14059c) = 0;
    *(undefined8 *)(self + lVar31 + 0x140590) = 0;
    *(undefined8 *)(self + lVar31 + 0x140588) = 0;
    iVar21 = *(int *)(self + 0x1ae8);
    if (((iVar21 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + -8 + iVar16;
          puVar26[-9] = param_9 + -0x14;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    if ((((0x3d < iVar21 - 0xdU) ||
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) &&
       (0 < *(int *)(self + 0x32b828))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-10] = param_8 + 0x10 + iVar16;
          puVar26[-9] = param_9 + 10;
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          iVar21 = *piVar3;
          goto joined_r0x00462eb8;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    iVar21 = *piVar3;
    goto joined_r0x00462eb8;
  case 0x23:
  case 0xf6:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x1402c8);
    if (*piVar3 < 0) {
      iVar21 = *piVar3 + param_2;
      *piVar3 = iVar21;
      if (iVar21 < 0) {
        if (-0x1e < iVar21) {
          *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0x23;
        }
        break;
      }
    }
    lVar31 = (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
    *(undefined4 *)(self + lVar31 + 0x14059c) = 0;
    *(undefined8 *)(self + lVar31 + 0x140594) = 0;
    *(undefined4 *)(self + lVar31 + 0x140590) = 0;
    *piVar3 = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 6;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + -10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + 2;
        iVar16 = *piVar2;
      }
      if ((((0x3d < iVar16 - 0xdU) ||
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
         && (iVar19 = *(int *)(self + 0x32b828), 0 < iVar19)) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[-10] = iVar12 + param_8;
            puVar26[-9] = param_9 + -0x32 + iVar21 * 4;
            puVar26[2] = 0;
            puVar26[3] = iVar17;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-8] = uVar33;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < iVar19);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x19);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 5;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + -10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + 2;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (iVar19 = *(int *)(self + 0x32b828), 0 < iVar19)))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[-10] = iVar12 + param_8;
            puVar26[-9] = param_9 + -0x2d + iVar21 * 7;
            puVar26[2] = 0;
            puVar26[3] = iVar17;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-8] = uVar33;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < iVar19);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0xe);
    if (*(int *)(self + 0x32c160) != 0) break;
    lVar31 = 0x16e0;
    goto LAB_0045c66c;
  case 0x2a:
  case 0x2e:
  case 0x2f:
    if ((param_12 == 1) && (*(int *)(self + 0x32c160) == 0)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140868);
    lVar32 = (gh_long)param_6;
    lVar31 = (gh_long)param_7;
    if (*piVar3 < 0) {
      iVar21 = *piVar3 + param_2;
      *piVar3 = iVar21;
      if (iVar21 < 0) {
        piVar1 = (int *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598);
        if (iVar21 + param_2 < -0x13) {
          if ((-0x28 < iVar21 + param_2) && (*piVar1 == 0x2a)) {
            *piVar1 = 0x2e;
          }
        }
        else {
          *piVar1 = 0x2f;
        }
        break;
      }
    }
    lVar30 = lVar31 * 4 + lVar32 * 0x2d0;
    *(undefined4 *)(self + lVar30 + 0x14059c) = 0;
    *(undefined8 *)(self + lVar30 + 0x140590) = 0;
    *(undefined8 *)(self + lVar30 + 0x140588) = 0;
    iVar21 = *(int *)(self + 0x1ae8);
    if (((iVar21 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar30 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + -0x10 + iVar16;
          puVar26[-9] = param_9 + -0x4b;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar30 = lVar30 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar30 < *(int *)(self + 0x32b828));
    }
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
        (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
      lVar30 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + -8 + iVar16;
          puVar26[-9] = param_9 + -0x32;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar30 = lVar30 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar30 < *(int *)(self + 0x32b828));
    }
    iVar16 = param_8 + 0x10;
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*piVar1 == 1)) {
      iVar18 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar18 = iVar18 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if ((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) {
      iVar13 = *piVar1;
      if ((iVar13 != 1) && (0 < *(int *)(self + 0x32b828))) {
        lVar30 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = iVar16 + iVar18;
            puVar26[-9] = param_9 + -0x20;
            *(undefined8 *)(puVar26 + -4) = 0x96;
            *(undefined8 *)(puVar26 + -6) = 0x6400000082;
            puVar26[-8] = uVar33;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar30 = lVar30 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar30 < *(int *)(self + 0x32b828));
      }
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         (iVar13 != 1)) {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
        iVar16 = iVar16 + param_8 + -8;
      }
    }
    if (((0x3d < iVar21 - 0xdU) ||
        ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar30 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = iVar16;
          puVar26[-9] = param_9;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar30 = lVar30 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar30 < *(int *)(self + 0x32b828));
    }
    *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0;
    *piVar3 = 0;
    iVar21 = *(int *)(self + 0x32c160);
    goto joined_r0x00462eb8;
  case 0x3e:
  case 0x3f:
    if (*(int *)(self + 0x32c160) == 0) {
      lVar31 = 0x17b8;
LAB_00453dd4:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar31)), GH_ARG(false));
    }
    goto LAB_00453de4;
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0xb0:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar4 < 0) && (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, iVar21 < 0)) break;
    if (param_5 == 0x1d7) {
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0xb;
        }
        else {
          local_b0 = 0xa00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x172;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0x10);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 7;
        }
        else {
          local_b0 = 0x600000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 0x28 + iVar17;
              puVar26[-9] = (param_9 + -0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x233;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xc);
LAB_004522a8:
      if (*piVar3 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
      }
    }
    else {
      if (param_5 == 0x1d6) {
        iVar16 = *(int *)(self + 0x1ae8);
        iVar21 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 8;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 2;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = (param_9 + -0x14) - iVar19;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x221;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x10);
        goto LAB_004522a8;
      }
      if ((param_5 == 0x1d8) || (param_5 == 0xb0)) {
        iVar16 = *(int *)(self + 0x1ae8);
        iVar21 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 7;
          }
          else {
            local_b0 = 0x600000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 2;
            iVar16 = *piVar2;
          }
          if ((((0x3d < iVar16 - 0xdU) ||
               ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = (param_9 + -0x14) - iVar19;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0xa8;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar15);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x12);
        if (param_5 == 0xb0) {
          iVar21 = 0;
          do {
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar18 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar18 = iVar18 + 0xc;
              iVar16 = *piVar2;
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar16 = *piVar2;
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar16 = *piVar2;
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar17 = 0x20;
            }
            else {
              local_b0 = 0x1f00000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar17 = iVar17 + -0x10;
              iVar16 = *piVar2;
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar19 = 0x10;
            }
            else {
              local_b0 = 0xf00000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar16 = *piVar2;
            }
            if (((iVar16 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar20 = 6;
            }
            else {
              local_b0 = 0x500000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar20 = iVar20 + 2;
              iVar16 = *piVar2;
            }
            if (((0x3d < iVar16 - 0xdU) ||
                ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
              lVar31 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[2] = 0;
                  puVar26[3] = iVar20;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                  puVar26[-10] = param_8 + 0x32 + iVar17;
                  puVar26[-9] = (param_9 + -0x14) - iVar19;
                  puVar26[-8] = iVar12;
                  puVar26[-4] = iVar13 + 0x22b;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar18;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar31 = lVar31 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar31 < iVar15);
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 != 0xc);
        }
        goto LAB_004522a8;
      }
    }
    if ((param_5 < 0x1d6) && (param_5 != 0xb0)) {
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 10 + iVar17;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x18;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 6);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x11;
        }
        else {
          local_b0 = 0x1000000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = (param_8 + 10) - iVar17;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x2b;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 10);
    }
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x15a8)), GH_ARG(false));
    }
    if (param_5 < 100) {
      if (((*piVar2 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
      {
LAB_00452954:
        if (*piVar3 != 0) goto LAB_004529a4;
        lVar31 = 0x17d0;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (9 < iVar21) goto LAB_00452954;
        if (*piVar3 != 0) goto LAB_004529a4;
        lVar31 = 0x1788;
      }
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar31)), GH_ARG(false));
      if (*piVar3 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1818)), GH_ARG(false));
      }
    }
LAB_004529a4:
    if ((param_5 == 0x1d8) || (param_5 == 0xb0)) {
      iVar21 = -0x3c;
    }
    else {
      iVar21 = 0;
    }
    if (1 < param_5 - 0xd7U) {
      uVar23 = *piVar2 - 0xd;
      iVar16 = param_9 + iVar21 + 0x1e;
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = param_8 + 10;
            puVar26[-9] = iVar16;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      uVar24 = *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(int *)(puVar27 + -4) = param_8 + 10;
            *(int *)((gh_long)puVar27 + -0x1c) = iVar16;
            *(undefined4 *)(puVar27 + -3) = 0;
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *puVar27 = 0x3f80000000000000;
            *(undefined4 *)((gh_long)puVar27 + 0x1c) = uVar24;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
    }
    iVar16 = -0x3c;
    if ((param_5 | 1U) != 0x1d7) {
      iVar16 = 0;
    }
    lVar32 = (gh_long)param_6;
    lVar31 = (gh_long)param_7;
    *piVar4 = iVar16;
    if (param_5 < 0x1d6) {
      if (param_5 == 0xb0) {
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0xaf;
      }
      else {
        if (param_5 == 0xdc) goto LAB_00452ac4;
LAB_00455f98:
        uVar24 = 0x105;
        if (param_5 != 0x1d7) {
          uVar24 = 0;
        }
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = uVar24;
      }
    }
    else if (param_5 == 0x1d6) {
LAB_00452ac4:
      *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0x103;
    }
    else {
      if (param_5 != 0x1d8) goto LAB_00455f98;
      *piVar4 = -0xa0;
      *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0x102;
    }
    if (((0x3d < *piVar2 - 0xdU) ||
        ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
      local_b0 = 0x6300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      if (iVar16 < 0x3c) {
        iVar17 = *piVar2;
        if ((iVar17 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = -0x14;
        }
        else if (*piVar1 == 1) {
          iVar16 = -0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = -0xc - iVar16;
          iVar17 = *piVar2;
        }
        if ((iVar17 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x220;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x220;
        }
        else {
          local_b0 = 0x200000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0x21d;
          iVar17 = *piVar2;
        }
        if ((iVar17 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = *piVar2;
        }
        if ((iVar17 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar17 = *piVar2;
        }
        if ((((0x3d < iVar17 - 0xdU) ||
             ((1LL << ((ulong)(iVar17 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          param_9 = param_9 + iVar21 + 10;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) goto LAB_004649f8;
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
    }
    break;
  case 0x6f:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      *piVar3 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      iVar21 = *(int *)(self + 0x1ae8);
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9 + 0x20;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 7;
        }
        else {
          local_b0 = 0x600000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = iVar19 + param_9 + 0x20;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x196;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 10);
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if ((((0x3d < iVar21 - 0xdU) ||
               ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (iVar21 = *(int *)(self + 0x32b828), 0 < iVar21)) {
            lVar31 = 0;
            param_9 = param_9 + 0x14;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_00464b3c;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar21);
          }
        }
      }
    }
    break;
  case 0x77:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x1402c8);
    if ((*piVar4 < 0) && (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, iVar21 < 0)) break;
    *piVar4 = 0;
    lVar30 = (gh_long)param_7 * 4;
    lVar31 = (gh_long)param_6 * 0x2d0 + 0x140868;
    lVar32 = (gh_long)param_6 * 0x2d0 + 0x140598;
    *(undefined4 *)(self + lVar30 + lVar31) = 0;
    *(undefined4 *)(self + lVar30 + lVar32) = 0;
    *(undefined4 *)(self + lVar30 + 4 + lVar31) = 0;
    *(undefined4 *)(self + lVar30 + 4 + lVar32) = 0;
    iVar21 = *(int *)(self + 0x1ae8);
    uVar23 = iVar21 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-8] = 1;
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + 0x14;
          puVar26[-9] = param_9 + 0x1e;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + -4) = 0x85;
          *(undefined8 *)(puVar26 + -6) = 0x6400000078;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    uVar24 = *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
    if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
        (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
      lVar31 = 0;
      puVar27 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
          *(int *)(puVar27 + -4) = param_8 + 0x14;
          *(int *)((gh_long)puVar27 + -0x1c) = param_9 + 0x1e;
          *(undefined4 *)(puVar27 + -3) = 0;
          puVar27[-1] = 0x1c;
          puVar27[-2] = 0x640000006a;
          *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
          *puVar27 = 0x3f80000000000000;
          *(undefined4 *)((gh_long)puVar27 + 0x1c) = uVar24;
          *(undefined4 *)(puVar27 + 1) = 0x3f800000;
          puVar27[5] = 0xff000000ff;
          puVar27[4] = 0xff00000000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar27 = puVar27 + 10;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    iVar16 = 0;
    piVar4 = (int *)(self + 0x32b828);
    do {
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 0xc;
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + 2;
        iVar21 = *piVar2;
      }
      uVar23 = iVar21 - 0xd;
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x14;
      }
      else {
        iVar20 = *piVar1;
        if ((iVar20 != 1) && (0 < *piVar4)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar19;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 0x1e + iVar12;
              puVar26[-9] = (param_9 + 0x14) - iVar17;
              puVar26[-8] = 0;
              puVar26[-4] = iVar13 + 0x137;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar4);
        }
        if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar20 == 1)) {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar21 = *piVar2;
        }
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if (((iVar21 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + 2;
        iVar21 = *piVar2;
      }
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *piVar4)))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar19;
            puVar26[-10] = param_8 - iVar12;
            puVar26[-9] = (param_9 + 0x14) - iVar17;
            puVar26[-4] = iVar13 + 0x137;
            puVar26[-3] = 1;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *piVar4);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 10);
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       (*piVar1 != 1)) {
      local_b0 = 0x6300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      if (iVar21 < 0x3c) {
        iVar21 = *piVar2;
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar16 = -0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = -0xc - iVar16;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x220;
        }
        else {
          local_b0 = 0x200000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0x21d;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar4)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              puVar26[-10] = param_8;
              puVar26[-9] = param_9 + 10;
              *(undefined8 *)(puVar26 + -6) = 0x6400000086;
              puVar26[4] = 0;
              puVar26[5] = iVar16;
              puVar26[-4] = iVar18;
              puVar26[-3] = 1;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              puVar26[-8] = iVar13;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              iVar21 = *piVar3;
              goto joined_r0x004652dc;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar4);
        }
      }
    }
    iVar21 = *piVar3;
joined_r0x004652dc:
    if (iVar21 != 0) break;
    this = (SoundClip *)(self + 0x1590);
    goto LAB_0045c670;
  case 0x79:
  case 0x7a:
  case 0x7b:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    lVar31 = (gh_long)param_6;
    lVar32 = (gh_long)param_7;
    piVar3 = (int *)(self + (lVar32 + 1) * 4 + (lVar31 + 1) * 0x2d0 + 0x140598);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      iVar21 = *piVar2;
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar30 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = param_8 + 0x3c;
            puVar26[-9] = param_9 + 0x1e;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar30 = lVar30 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar30 < *(int *)(self + 0x32b828));
      }
      uVar24 = *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar30 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(int *)(puVar27 + -4) = param_8 + 0x3c;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9 + 0x1e;
            *(undefined4 *)(puVar27 + -3) = 0;
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *puVar27 = 0x3f80000000000000;
            *(undefined4 *)((gh_long)puVar27 + 0x1c) = uVar24;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar30 = lVar30 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar30 < *(int *)(self + 0x32b828));
      }
      iVar16 = 0;
      if (*(int *)(self + lVar32 * 4 + lVar31 * 0x2d0 + 0x140598) == 0x7b) {
        do {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + 3;
            iVar21 = *piVar2;
          }
          uVar23 = iVar21 - 0xd;
          if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar18 = 0x14;
          }
          else {
            iVar20 = *piVar1;
            if ((iVar20 != 1) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
              lVar30 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[2] = 0;
                  puVar26[3] = iVar19;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                  puVar26[-10] = param_8 + 100 + iVar12;
                  puVar26[-9] = (param_9 + 0x14) - iVar17;
                  puVar26[-8] = 0;
                  puVar26[-4] = iVar13 + 0x137;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar18;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar30 = lVar30 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar30 < iVar15);
            }
            if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (iVar20 == 1)) {
              iVar18 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar18 = iVar18 + 0xc;
              iVar21 = *piVar2;
            }
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + 3;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (iVar20 = *(int *)(self + 0x32b828), 0 < iVar20)))) {
            lVar30 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = (param_8 + 0x14) - iVar12;
                puVar26[-9] = (param_9 + 0x14) - iVar17;
                puVar26[-8] = 1;
                puVar26[-4] = iVar13 + 0x137;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar30 = lVar30 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar30 < iVar20);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0xe);
      }
      else {
        do {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 9;
          }
          else {
            local_b0 = 0x800000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + 3;
            iVar21 = *piVar2;
          }
          uVar23 = iVar21 - 0xd;
          if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
            iVar18 = 0x14;
          }
          else {
            iVar20 = *piVar1;
            if ((iVar20 != 1) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
              lVar30 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[2] = 0;
                  puVar26[3] = iVar19;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                  puVar26[-10] = param_8 + 100 + iVar12;
                  puVar26[-9] = (param_9 + 0x14) - iVar17;
                  puVar26[-8] = 0;
                  puVar26[-4] = iVar13 + 0xaf;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar18;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar30 = lVar30 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar30 < iVar15);
            }
            if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
               (iVar20 == 1)) {
              iVar18 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar18 = iVar18 + 0xc;
              iVar21 = *piVar2;
            }
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 9;
          }
          else {
            local_b0 = 0x800000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + 3;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (iVar20 = *(int *)(self + 0x32b828), 0 < iVar20)))) {
            lVar30 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = param_8 + 0x14 + iVar12;
                puVar26[-9] = (param_9 + 0x14) - iVar17;
                puVar26[-8] = 1;
                puVar26[-4] = iVar13 + 0xaf;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar30 = lVar30 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar30 < iVar20);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0xe);
      }
      lVar8 = lVar31 * 0x2d0 + 0x140598;
      lVar29 = lVar32 * 4;
      lVar9 = (lVar31 + 1) * 0x2d0 + 0x140598;
      lVar10 = lVar31 * 0x2d0 + 0x140b38;
      lVar30 = lVar29 + 8;
      *(undefined4 *)(self + lVar29 + lVar10) = 0;
      *(undefined4 *)(self + lVar29 + lVar9) = 0;
      lVar29 = (lVar32 + 1) * 4;
      *(int *)(self + lVar32 * 4 + lVar31 * 0x2d0 + 0x140598) = 0;
      *(undefined4 *)(self + lVar29 + lVar10) = 0;
      *piVar3 = 0;
      *(undefined4 *)(self + lVar29 + lVar8) = 0;
      *(undefined4 *)(self + lVar30 + lVar10) = 0;
      *(undefined4 *)(self + lVar30 + lVar9) = 0;
      uVar24 = 0x31;
      if (*(int *)(self + lVar30 + lVar8) != 0x34) {
        uVar24 = 0;
      }
      *(undefined4 *)(self + lVar30 + lVar8) = uVar24;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1590)), GH_ARG(false));
      }
      iVar21 = *piVar2;
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
        if (iVar16 < 0x3c) {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                puVar26[-10] = param_8;
                puVar26[-9] = param_9 + 10;
                *(undefined8 *)(puVar26 + -6) = 0x6400000086;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-8] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                puVar26[-4] = iVar18;
                puVar26[-3] = 1;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
      }
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0xc700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[-10] = param_8;
                puVar26[2] = 0;
                puVar26[3] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = iVar16;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-9] = param_9;
                puVar26[-8] = iVar18;
                *(undefined8 *)(puVar26 + -4) = 0x1000000dd;
                *(undefined8 *)(puVar26 + -6) = 0x6400000089;
                goto LAB_00464a3c;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
      }
    }
    break;
  case 0x9e:
  case 0xf8:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar4) || (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, -1 < iVar21)) {
      if ((param_5 == 0xf8) ||
         ((*(uint *)(self + (gh_long)iVar18 * 0x288 + 0x8db14) < 0xb &&
          ((1 << (ulong)(*(uint *)(self + (gh_long)iVar18 * 0x288 + 0x8db14) & 0x1f) & 0x4c0U) != 0))))
      {
        *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xf9;
        *piVar4 = 0;
        iVar21 = *(int *)(self + 0x1ae8);
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              *(undefined8 *)(puVar26 + 5) = 0;
              puVar26[-10] = param_8;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[-9] = param_9 + -0xb4;
              puVar26[-8] = 1;
              *(undefined8 *)(puVar26 + -4) = 0x85;
              *(undefined8 *)(puVar26 + -6) = 0x6400000078;
              puVar26[9] = 0xff;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              iVar16 = *piVar3;
              goto joined_r0x00463000;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar16 = *piVar3;
joined_r0x00463000:
        if (iVar16 == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
          iVar21 = *(int *)(self + 0x1ae8);
        }
        iVar16 = 0;
        do {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 8;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -8;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 4;
            iVar21 = *piVar2;
          }
          if ((((0x3d < iVar21 - 0xdU) ||
               ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = iVar19 + param_9 + -0xb4;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x1be;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 7);
      }
      else {
        *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xf8;
        *piVar4 = -0x28;
        if (*piVar3 == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1710)), GH_ARG(false));
        }
      }
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 4;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -8;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = param_9 + -0xaa + iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1b9;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 10);
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (iVar21 = *(int *)(self + 0x32b828), 0 < iVar21)))) {
            lVar31 = 0;
            param_9 = param_9 + -0xa0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_00464b3c;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar21);
          }
        }
      }
    }
    break;
  case 0xa8:
  case 0xa9:
  case 0xaa:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar4 < 0) && (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, iVar21 < 0)) break;
    *piVar4 = 0;
    lVar32 = (gh_long)param_6;
    lVar31 = (gh_long)param_7;
    if (((*piVar2 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
joined_r0x00450680:
      if (param_5 == 0xa8) {
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0xbe;
      }
      else {
        uVar24 = 0xbf;
        if (param_5 != 0xa9) {
          uVar24 = 0x1d3;
        }
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = uVar24;
      }
    }
    else {
      local_b0 = 0x6300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      if (0x4f < iVar21) goto joined_r0x00450680;
      if (param_5 == 0xa8) {
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0x1d4;
      }
      else {
        uVar24 = 0x1d5;
        if (param_5 != 0xa9) {
          uVar24 = 0x1d2;
        }
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = uVar24;
      }
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 3;
        }
        else {
          local_b0 = 0x200000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000086;
              puVar26[-10] = param_8 - iVar17;
              puVar26[-9] = iVar19 + param_9;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x21d;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 5);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (iVar17 = *(int *)(self + 0x32b828), 0 < iVar17)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = param_8;
              puVar26[-9] = param_9;
              puVar26[-8] = iVar13;
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + -4) = 0x1000000dd;
              *(undefined8 *)(puVar26 + -6) = 0x6400000089;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar17);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 2);
    }
    uVar23 = *piVar2 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          *(undefined8 *)(puVar26 + 5) = 0;
          puVar26[-10] = param_8;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[-9] = param_9;
          puVar26[-8] = 1;
          *(undefined8 *)(puVar26 + -4) = 0x85;
          *(undefined8 *)(puVar26 + -6) = 0x6400000078;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar27 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
          *(undefined4 *)((gh_long)puVar27 + 0x1c) =
               *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
          puVar27[-1] = 0x1c;
          puVar27[-2] = 0x640000006a;
          *(int *)(puVar27 + -4) = param_8;
          *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
          *(undefined4 *)(puVar27 + 1) = 0x3f800000;
          *(int *)((gh_long)puVar27 + -0x1c) = param_9;
          *(undefined4 *)(puVar27 + -3) = 0;
          *puVar27 = 0x3f80000000000000;
          puVar27[5] = 0xff000000ff;
          puVar27[4] = 0xff00000000;
          iVar21 = *piVar3;
          goto joined_r0x00461e28;
        }
        lVar31 = lVar31 + 1;
        puVar27 = puVar27 + 10;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    iVar21 = *piVar3;
joined_r0x00461e28:
    if (iVar21 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x15a8)), GH_ARG(false));
    }
    if (param_5 == 0xaa) {
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -0x28) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x213;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -10) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x213;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x213;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
    }
    else {
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 7;
        }
        else {
          local_b0 = 0x600000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -0x1e) - iVar19;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1ee;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = param_9 - iVar19;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1f5;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 7;
        }
        else {
          local_b0 = 0x600000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + 0x1e) - iVar19;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1ee;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 8);
    }
    break;
  case 0xad:
  case 0xd5:
  case 0xdb:
  case 0xe2:
    goto switchD_0044d57c_caseD_ad;
  case 0xb3:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x17e8)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xb4;
      *piVar3 = 0;
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(2), GH_ARG(0));
      if ((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar21 = 8;
      }
      else if (*piVar1 == 1) {
        iVar21 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      }
      bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(iVar21 + 1), GH_ARG((uint)(*(int *)(self + 0x8dad8) == 0)), GH_ARG(param_8), GH_ARG(param_9 + 0x32), GH_ARG(*(int *)(self + 0x13b84)), GH_ARG(*(int *)(self + 0x13b88)), GH_ARG(*(int *)(self + 0x13b8c)), GH_ARG(*(int *)(self + 0x13b90)), GH_ARG((float)*(int *)(self + (gh_long)iVar21 * 0x28 + 0x14044) / 10.0), GH_ARG(*(int *)(self + (gh_long)iVar21 * 0x28 + 0x14048)), GH_ARG(*(int *)(self + (gh_long)iVar21 * 0x28 + 0x1404c)), GH_ARG(0x5dd));
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x17b8)), GH_ARG(false));
      }
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x1e;
        }
        else {
          local_b0 = 0x1d00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 0x10 + iVar17;
              puVar26[-9] = param_9 + -0x1e + iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1a7;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0x14);
    }
    break;
  case 0xbb:
  case 0xc1:
  case 0xc2:
    if ((param_12 == 1) && (*(int *)(self + 0x32c160) == 0)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140868);
    if (*piVar3 < 0) {
      iVar21 = *piVar3 + param_2;
      *piVar3 = iVar21;
      if (iVar21 < 0) {
        piVar1 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598);
        if (iVar21 + param_2 < -0x1d) {
          if ((-0x3c < iVar21 + param_2) && (*piVar1 == 0xbb)) {
            *piVar1 = 0xc1;
          }
        }
        else {
          *piVar1 = 0xc2;
        }
        break;
      }
    }
    iVar21 = *piVar2;
    if (((iVar21 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + 0x12 + iVar16;
          puVar26[-9] = param_9 + -0x4c;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_004507a8:
      iVar16 = 0x10;
    }
    else {
      iVar18 = *piVar1;
      if ((iVar18 != 1) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = param_8 + -0x12 + iVar16;
            puVar26[-9] = param_9 + -0x34;
            *(undefined8 *)(puVar26 + -4) = 0x96;
            *(undefined8 *)(puVar26 + -6) = 0x6400000082;
            puVar26[-8] = uVar33;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0))
      goto LAB_004507a8;
      if (iVar18 == 1) {
        iVar16 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = iVar16 + -8;
        iVar21 = *piVar2;
      }
    }
    if ((((0x3d < iVar21 - 0xdU) ||
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) &&
       (0 < *(int *)(self + 0x32b828))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-10] = iVar16 + param_8;
          puVar26[-9] = param_9 + -0x20;
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xc6;
    *piVar3 = 0;
    iVar21 = *(int *)(self + 0x32c8e8);
    bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(100), GH_ARG(0x14), GH_ARG(0), GH_ARG((uint)(*(int *)(self + 0x8dad8) == 0)), GH_ARG(param_8), GH_ARG(param_9 + -0x3c), GH_ARG(*(int *)(self + (gh_long)iVar21 * 4 + 0x8d54c) + *(int *)(self + 0x13ea4)), GH_ARG(*(int *)(self + (gh_long)iVar21 * 4 + 0x8d644) + *(int *)(self + 0x13ea8)), GH_ARG(*(int *)(self + (gh_long)iVar21 * 4 + 0x8d73c) + *(int *)(self + 0x13eac)), GH_ARG(0x21), GH_ARG((float)*(int *)(self + 0x13eb4) / 10.0), GH_ARG(*(int *)(self + 0x13eb8)), GH_ARG(*(int *)(self + 0x13ebc)), GH_ARG(0x209));
    iVar21 = *(int *)(self + 0x1ae8);
    uVar23 = 0;
    do {
      uVar33 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar16 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + -6;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0xe;
        }
        else {
          local_b0 = 0xd00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -7;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 1;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar27 = (undefined8 *)(self + 0xb0cdc);
          do {
            if (*(int *)(puVar27 + -2) < 1) {
              *(uint *)((gh_long)puVar27 + -0x24) = param_8 + -0x28 + uVar33 + iVar16;
              *(uint *)(puVar27 + -4) = param_9 + -0x41 + uVar23 + iVar18;
              *puVar27 = 0x3f8000003f800000;
              puVar27[1] = 0;
              *(float *)((gh_long)puVar27 + -4) = (float)iVar12;
              *(undefined4 *)((gh_long)puVar27 + -0x1c) = 0;
              *(undefined8 *)((gh_long)puVar27 + -0xc) = 0x151;
              *(undefined8 *)((gh_long)puVar27 + -0x14) = 0x6400000084;
              *(int *)(puVar27 + 2) = iVar13;
              *(undefined8 *)((gh_long)puVar27 + 0x1c) = 0xff00000000;
              *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar27 + 0x24) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar27 = puVar27 + 10;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        bVar11 = uVar33 < 0x50;
        uVar33 = uVar33 + 5;
      } while (bVar11);
      bVar11 = uVar23 < 0x84;
      uVar23 = uVar23 + 5;
    } while (bVar11);
    if (*(int *)(self + 0x32c160) != 0) break;
    this = (SoundClip *)(self + 0x16e0);
    goto LAB_0045c670;
  case 0xc3:
  case 0xc4:
  case 0xc5:
    if ((param_12 == 1) && (*(int *)(self + 0x32c160) == 0)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140868);
    if (*piVar3 < 0) {
      iVar21 = *piVar3 + param_2;
      *piVar3 = iVar21;
      if (iVar21 < 0) {
        piVar1 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598);
        if (iVar21 + param_2 < -0x1d) {
          if ((-0x3c < iVar21 + param_2) && (*piVar1 == 0xc3)) {
            *piVar1 = 0xc4;
          }
        }
        else {
          *piVar1 = 0xc5;
        }
        break;
      }
    }
    iVar21 = *piVar2;
    if (((iVar21 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-10] = param_8 + 0x12 + iVar16;
          puVar26[-9] = param_9 + -0x46;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*piVar1 == 1)) {
      iVar16 = 0x10;
    }
    else {
      local_b0 = 0xf00000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      iVar16 = iVar16 + -8;
      iVar21 = *piVar2;
    }
    uVar23 = iVar21 - 0xd;
    if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_00450c8c:
      iVar16 = 0x10;
    }
    else {
      iVar18 = *piVar1;
      if ((iVar18 != 1) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-10] = param_8 + -0x12 + iVar16;
            puVar26[-9] = param_9 + -0x34;
            *(undefined8 *)(puVar26 + -4) = 0x96;
            *(undefined8 *)(puVar26 + -6) = 0x6400000082;
            puVar26[-8] = uVar33;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0))
      goto LAB_00450c8c;
      if (iVar18 == 1) {
        iVar16 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = iVar16 + -8;
        iVar21 = *piVar2;
      }
    }
    if ((((0x3d < iVar21 - 0xdU) ||
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) &&
       (0 < *(int *)(self + 0x32b828))) {
      lVar31 = 0;
      puVar26 = (undefined4 *)(self + 0xb0ce0);
      do {
        if ((int)puVar26[-5] < 1) {
          puVar26[-10] = iVar16 + param_8;
          puVar26[-9] = param_9 + -0x20;
          *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
          puVar26[-8] = uVar33;
          *(undefined8 *)(puVar26 + -4) = 0x96;
          *(undefined8 *)(puVar26 + -6) = 0x6400000082;
          *(undefined8 *)(puVar26 + 5) = 0;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[9] = 0xff;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          *puVar26 = 0x3f800000;
          break;
        }
        lVar31 = lVar31 + 1;
        puVar26 = puVar26 + 0x14;
      } while (lVar31 < *(int *)(self + 0x32b828));
    }
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xc6;
    *piVar3 = 0;
    if (*(int *)(self + 0x32c160) != 0) break;
    this = (SoundClip *)(self + 0x16e0);
    goto LAB_0045c670;
  case 0xca:
  case 0xcb:
    if (*(int *)(self + 0x32c160) == 0) {
      lVar31 = 0x1560;
      goto LAB_00453dd4;
    }
LAB_00453de4:
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140868);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      iVar16 = *piVar2;
      iVar21 = param_8 + 10;
      uVar23 = iVar16 - 0xd;
      uVar28 = (ulong)uVar23;
      if (((0x3d < uVar23) || ((1LL << (uVar28 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = iVar21;
            puVar26[-9] = param_9 + 0x1e;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if (param_5 == 0x3f) {
        if ((uVar23 < 0x3e) && ((1LL << (uVar28 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        iVar20 = param_9 + 0x14;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else {
          iVar15 = *piVar1;
          if ((iVar15 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -4) = 0x1000000ed;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar12 + iVar21;
                puVar26[-9] = iVar20 - iVar17;
                puVar26[-8] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar15 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar16 = *piVar2;
          }
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar19;
              *(undefined8 *)(puVar26 + -4) = 0x1000000ee;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar12 + iVar21;
              puVar26[-9] = iVar20 - iVar17;
              puVar26[-8] = iVar13;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar18 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 3;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar14 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar14 = iVar14 + 4;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar14;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar19 + iVar21;
                puVar26[-9] = iVar20 - iVar15;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0xef;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 8);
      }
      else if (param_5 == 0x3e) {
        if ((uVar23 < 0x3e) && ((1LL << (uVar28 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0xc;
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        iVar20 = param_9 + 0x14;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else {
          iVar15 = *piVar1;
          if ((iVar15 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -4) = 0x1000000ea;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar12 + iVar21;
                puVar26[-9] = iVar20 - iVar17;
                puVar26[-8] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar15 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar16 = *piVar2;
          }
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else {
          iVar15 = *piVar1;
          if ((iVar15 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -4) = 0x1000000eb;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar12 + iVar21;
                puVar26[-9] = iVar20 - iVar17;
                puVar26[-8] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar15 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar16 = *piVar2;
          }
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x14;
        }
        else {
          iVar15 = *piVar1;
          if ((iVar15 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -4) = 0x1000000ec;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar12 + iVar21;
                puVar26[-9] = iVar20 - iVar17;
                puVar26[-8] = iVar13;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar15 == 1)) {
            iVar18 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0xc;
            iVar16 = *piVar2;
          }
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 2;
        }
        else if (*piVar1 == 1) {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar12 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar17 = 0x10;
        }
        else if (*piVar1 == 1) {
          iVar17 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if ((iVar16 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar19 = 8;
        }
        else if (*piVar1 == 1) {
          iVar19 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + 4;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar19;
              *(undefined8 *)(puVar26 + -4) = 0x1000000ec;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar12 + iVar21;
              puVar26[-9] = iVar20 - iVar17;
              puVar26[-8] = iVar13;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar18 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar14 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar14 = iVar14 + 4;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar14;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar19 + iVar21;
                puVar26[-9] = iVar20 - iVar15;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0xe8;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 6);
      }
      else {
        iVar18 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0xb;
          }
          else {
            local_b0 = 0xa00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar15 = iVar15 + 4;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar15;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar19 + iVar21;
                puVar26[-9] = (param_9 + 0x32) - iVar20;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0x17d;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x14);
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = iVar21;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9 + 0x1e;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      *piVar3 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
      }
      if (((0x3d < *piVar2 - 0xdU) ||
          ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
      {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            param_9 = param_9 + 0x14;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_004649f8;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
      }
    }
    break;
  case 0xcc:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x1402c8);
    if ((-1 < *piVar4) || (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, -1 < iVar21)) {
      iVar21 = *piVar2;
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8 + 0x14;
            puVar26[-9] = param_9 + 0x1e;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            puVar26[-8] = 0;
            puVar26[-10] = param_8 + 0x2c;
            puVar26[-9] = param_9 + -10;
            *(undefined8 *)(puVar26 + 5) = 0;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + 1) = 0;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = param_8 + 0x1e;
      iVar18 = 0;
      piVar5 = (int *)(self + 0x32b828);
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 0xc;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 4;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar5)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar16 + iVar19;
              puVar26[-9] = (param_9 + 0x14) - iVar20;
              puVar26[-4] = iVar12 + 0x35;
              puVar26[-3] = 1;
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = iVar17;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar5);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 10);
      iVar18 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar5)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar16 - iVar17;
              puVar26[-9] = (param_9 + -10) - iVar19;
              puVar26[-4] = iVar12 + 0x167;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = 0;
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar5);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x10);
      iVar18 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar5)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar16 - iVar17;
              puVar26[-9] = (param_9 + 0x1e) - iVar19;
              puVar26[-4] = iVar12 + 0x167;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = 1;
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar5);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x10);
      lVar30 = (gh_long)param_7 * 4;
      lVar31 = (gh_long)param_6 * 0x2d0 + 0x140598;
      lVar32 = (gh_long)param_6 * 0x2d0 + 0x140868;
      *(undefined4 *)(self + lVar30 + 8 + lVar31) = 0;
      *(undefined4 *)(self + lVar30 + 4 + lVar31) = 0;
      *(undefined4 *)(self + lVar30 + -8 + lVar31) = 0;
      *(undefined4 *)(self + lVar30 + -4 + lVar31) = 0;
      *(undefined4 *)(self + lVar30 + lVar31) = 0;
      *(undefined4 *)(self + lVar30 + 8 + lVar32) = 0;
      *(undefined4 *)(self + lVar30 + 4 + lVar32) = 0;
      *(undefined4 *)(self + lVar30 + -8 + lVar32) = 0;
      *(undefined4 *)(self + lVar30 + -4 + lVar32) = 0;
      *(undefined4 *)(self + lVar30 + lVar32) = 0;
      *piVar4 = 0;
      iVar21 = *(int *)(self + 0x1ae8);
      uVar24 = *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *piVar5)))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) = uVar24;
            *(undefined4 *)(puVar27 + -3) = 0;
            *(int *)(puVar27 + -4) = iVar16;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9 + -0x1e;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *puVar27 = 0x3f80000000000000;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            uVar24 = *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *piVar5);
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *piVar5)) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) = uVar24;
            *(undefined4 *)(puVar27 + -3) = 0;
            *(int *)(puVar27 + -4) = iVar16;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9 + 0x32;
            *puVar27 = 0x3f80000000000000;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            iVar16 = *piVar3;
            goto joined_r0x00463b98;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *piVar5);
      }
      iVar16 = *piVar3;
joined_r0x00463b98:
      if (iVar16 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
        if (iVar16 < 0x3c) {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if ((((0x3d < iVar21 - 0xdU) ||
               ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *piVar5)) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[-10] = param_8;
                puVar26[-9] = param_9;
                puVar26[-8] = iVar13;
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                puVar26[-4] = iVar18;
                puVar26[-3] = 1;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + -6) = 0x6400000086;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar5);
          }
        }
      }
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = -0xc - iVar13;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar5)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
LAB_0045b7e4:
            if (0 < (int)puVar26[-5]) goto code_r0x0045b7f0;
            puVar26[-10] = param_8;
            puVar26[-9] = param_9;
            puVar26[-8] = iVar16;
LAB_00462f34:
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
LAB_00462f3c:
            puVar26[2] = 0;
            puVar26[3] = iVar17;
            *(undefined8 *)(puVar26 + -4) = 0x1000000dd;
            *(undefined8 *)(puVar26 + -6) = 0x6400000089;
            puVar26[4] = 0;
            puVar26[5] = iVar13;
            goto LAB_004651bc;
          }
        }
      }
    }
    break;
  case 0xd0:
    if ((param_12 == 1) && (*(int *)(self + 0x32c160) == 0)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xb7;
      *piVar3 = 0;
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 4;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 2;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x148;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xd);
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1710)), GH_ARG(false));
        iVar16 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if ((((0x3d < iVar21 - 0xdU) ||
               ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (iVar21 = *(int *)(self + 0x32b828), 0 < iVar21)) {
            lVar31 = 0;
            param_9 = param_9 + 10;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_00464b3c;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar21);
          }
        }
      }
    }
    break;
  case 0xd1:
  case 0xd2:
  case 0xd3:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      iVar21 = *piVar2;
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = param_8;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = 0;
      if (param_5 == 0xd3) {
        do {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 8;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0xb;
          }
          else {
            local_b0 = 0xa00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x28;
          }
          else {
            local_b0 = 0x2700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x14;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x1e;
          }
          else {
            local_b0 = 0x1d00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -10;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 4;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = iVar19 + param_9;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x172;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x1a);
      }
      else {
        do {
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 8;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0xf;
          }
          else {
            local_b0 = 0xe00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x28;
          }
          else {
            local_b0 = 0x2700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x14;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x1e;
          }
          else {
            local_b0 = 0x1d00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -10;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 4;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = iVar19 + param_9;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x187;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x1a);
        lVar31 = (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
        *(undefined4 *)(self + lVar31 + 0x14086c) = 0;
        *(undefined4 *)(self + lVar31 + 0x14059c) = 0;
        *(undefined4 *)(self + lVar31 + 0x1402cc) = 0;
        *(undefined4 *)(self + lVar31 + 0x13fffc) = 0;
      }
      *piVar3 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
      }
      if (((0x3d < *piVar2 - 0xdU) ||
          ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
      {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = -0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = -iVar19;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[-10] = param_8 - iVar17;
                puVar26[-9] = param_9 + 0x14 + iVar19;
                goto LAB_00464a08;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
      }
    }
    break;
  case 0xd6:
  case 0xdc:
  case 0x103:
  case 0x104:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      lVar32 = (gh_long)param_6;
      *piVar3 = 0;
      lVar31 = (gh_long)param_7;
      if ((param_5 == 0x103) || (param_5 == 0xdc)) {
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0xbc;
        lVar31 = lVar31 * 4 + lVar32 * 0x2d0;
        *(undefined4 *)(self + lVar31 + 0x140868) = 0;
        *(undefined4 *)(self + lVar31 + 0x1402c8) = 0;
        *(undefined4 *)(self + lVar31 + 0x13fff8) = 0;
        iVar16 = *(int *)(self + 0x1ae8);
        iVar21 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 8;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0xe;
          }
          else {
            local_b0 = 0xd00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 2;
            iVar16 = *piVar2;
          }
          if ((((0x3d < iVar16 - 0xdU) ||
               ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar17 + param_8;
                puVar26[-9] = (param_9 + 0x40) - iVar19;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x1c4;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x1e);
      }
      else {
        *(undefined4 *)(self + lVar31 * 4 + lVar32 * 0x2d0 + 0x140598) = 0xbd;
        lVar31 = lVar31 * 4 + lVar32 * 0x2d0;
        *(undefined4 *)(self + lVar31 + 0x14086c) = 0;
        *(undefined4 *)(self + lVar31 + 0x14059c) = 0;
        iVar16 = *(int *)(self + 0x1ae8);
        iVar21 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 6;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 10;
          }
          else {
            local_b0 = 0x900000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 2;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = param_8 + 0x20 + iVar17;
                puVar26[-9] = (param_9 + 0x46) - iVar19;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x1cf;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar18;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x14);
      }
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x15c0)), GH_ARG(false));
        iVar16 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            param_9 = param_9 + 0x32;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_004649f8;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
        }
      }
    }
    break;
  case 0xd7:
  case 0xd8:
  case 0xd9:
    if (*(int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594) < 0) {
      *(int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594) = -0x14;
    }
    goto switchD_0044d57c_caseD_ad;
  case 0xda:
  case 0x105:
  case 0x1ca:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      lVar31 = (gh_long)param_7;
      *(undefined4 *)(self + lVar31 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      *piVar3 = 0;
      if (param_5 == 0x1ca) {
        iVar16 = -1;
        iVar21 = 1;
      }
      else {
        lVar31 = lVar31 + 1;
        lVar32 = lVar31 * 4 + (gh_long)param_6 * 0x2d0;
        iVar16 = -2;
        *(undefined4 *)(self + lVar32 + 0x140b38) = 0;
        *(undefined4 *)(self + lVar32 + 0x140868) = 0;
        *(undefined4 *)(self + lVar32 + 0x140598) = 0;
        iVar21 = -1;
      }
      *(undefined4 *)(self + lVar31 * 4 + (gh_long)(iVar21 + param_6) * 0x2d0 + 0x140598) = 0;
      *(undefined4 *)(self + lVar31 * 4 + (gh_long)(iVar16 + param_6) * 0x2d0 + 0x140598) = 0;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1590)), GH_ARG(false));
      }
      iVar16 = *(int *)(self + 0x1ae8);
      iVar21 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0xb;
        }
        else {
          local_b0 = 0xa00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar16 = *piVar2;
        }
        if ((((0x3d < iVar16 - 0xdU) ||
             ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 0x10 + iVar17;
              puVar26[-9] = param_9 - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1c4;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0x1a);
      iVar21 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 6;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0xb;
        }
        else {
          local_b0 = 0xa00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 3;
          iVar16 = *piVar2;
        }
        uVar23 = iVar16 - 0xd;
        if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = param_8 + 0x10 + iVar17;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x1da;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0x1a);
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_00465180;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
        }
      }
    }
    break;
  case 0xde:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xe8;
      *piVar3 = 0;
      iVar21 = *(int *)(self + 0x1ae8);
      uVar23 = iVar21 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = param_8;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 7;
        }
        else {
          local_b0 = 0x600000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x1e;
        }
        else {
          local_b0 = 0x1d00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = iVar19 + param_9;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0xa8;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar15);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x14);
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar18 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = iVar18 + 0x21d;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 2;
            iVar21 = *piVar2;
          }
          if (((0x3d < iVar21 - 0xdU) ||
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (iVar21 = *(int *)(self + 0x32b828), 0 < iVar21)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) goto LAB_00465180;
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar21);
          }
        }
      }
    }
    break;
  case 0xe4:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar3 < 0) && (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, iVar21 < 0)) break;
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xe7;
    *piVar3 = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 4;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + -0x10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 0x28;
      }
      else {
        local_b0 = 0x2700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + -0x14;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar20 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar20 = iVar20 + 2;
        iVar16 = *piVar2;
      }
      if ((((0x3d < iVar16 - 0xdU) ||
           ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
         && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar20;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = iVar17 + param_8;
            puVar26[-9] = iVar19 + param_9;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x1e);
    iVar21 = *(int *)(self + 0x32c160);
    goto joined_r0x00459c5c;
  case 0xe9:
    cocos2d__log_005d21e4(GH_ARG("Bump_233"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar3 < 0) && (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, iVar21 < 0)) break;
    if (*(int *)(self + 0x32c7d0) < 0) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xeb;
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x12), GH_ARG(0));
    }
    else {
      if ((*piVar2 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar21 = 0xee;
      }
      else {
        iVar21 = 0xee;
        if (*piVar1 != 1) {
          local_b0 = 0x300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          if (iVar16 + 0xea != 0xed) {
            iVar21 = iVar16 + 0xea;
          }
        }
      }
      *(int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = iVar21;
    }
    *piVar3 = -0x3c;
    if (*(int *)(self + 0x32c160) != 0) break;
    this = (SoundClip *)(self + 0x1560);
    goto LAB_0045c670;
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar4) || (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, -1 < iVar21)) {
      *piVar4 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      iVar21 = *(int *)(self + 0x1ae8);
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8 + 0x10;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            iVar16 = *piVar3;
            goto joined_r0x00461684;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = *piVar3;
joined_r0x00461684:
      if (iVar16 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      iVar16 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8 + 0x10;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0x11f;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0xc);
    }
    break;
  case 0xef:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar1 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar1 < 0) && (iVar21 = *piVar1 + param_2, *piVar1 = iVar21, iVar21 < 0)) break;
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xf3;
    *piVar1 = -0x3c;
    if (*(int *)(self + 0x32c160) != 0) break;
    this = (SoundClip *)(self + 0x1560);
    goto LAB_0045c670;
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar4) || (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, -1 < iVar21)) {
      if (param_5 == 0xf3) {
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        *(undefined4 *)(self + 0x1ae8) = 0x46;
        *(undefined4 *)(self + 0x32c990) = 0;
        *(int *)(self + 0xb9c) = param_8;
        *(int *)(self + 0xba0) = param_9;
      }
      *piVar4 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      iVar21 = *(int *)(self + 0x1ae8);
      if ((((0x3d < iVar21 - 0xdU) ||
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
         && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8 + 0x10;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            iVar16 = *piVar3;
            goto joined_r0x004616e4;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = *piVar3;
joined_r0x004616e4:
      if (iVar16 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      iVar16 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 5;
        }
        else {
          local_b0 = 0x400000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 4;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar17 + param_8 + 0x10;
              puVar26[-9] = (param_9 + 0x14) - iVar19;
              puVar26[-8] = iVar12;
              puVar26[-4] = iVar13 + 0xcc;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0xc);
    }
    break;
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x17a0)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar3 < 0) && (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, iVar21 < 0)) break;
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0xf5;
    *piVar3 = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 8;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 6;
      }
      else {
        local_b0 = 0x500000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + -0x10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar20 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar20 = iVar20 + 4;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar20;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = param_8 + 0x10 + iVar17;
            puVar26[-9] = (param_9 + 0x14) - iVar19;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x1a7;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0xd);
    if (*(int *)(self + 0x32c160) != 0) break;
    lVar31 = 0x17b8;
    goto LAB_0045c66c;
  case 0x102:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      lVar31 = (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
      *(undefined4 *)(self + lVar31 + 0x140598) = 0x1f1;
      *piVar3 = 0;
      *(undefined4 *)(self + lVar31 + 0x140868) = 0;
      *(undefined4 *)(self + lVar31 + 0x1402c8) = 0;
      *(undefined4 *)(self + lVar31 + 0x13fff8) = 0;
      iVar16 = *(int *)(self + 0x1ae8);
      uVar23 = iVar16 - 0xd;
      iVar21 = param_8 + 0x10;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = iVar21;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = iVar21;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar18 = 0;
      do {
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 10;
        }
        else {
          local_b0 = 0x900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 4;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -0x10;
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x1a;
        }
        else {
          local_b0 = 0x1900000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = *piVar2;
        }
        if (((iVar16 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 4;
          iVar16 = *piVar2;
        }
        if (((0x3d < iVar16 - 0xdU) ||
            ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (iVar14 = *(int *)(self + 0x32b828), 0 < iVar14)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar19 + iVar21;
              puVar26[-9] = (param_9 + 0x32) - iVar20;
              puVar26[-8] = iVar17;
              puVar26[-4] = iVar12 + 0x23e;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < iVar14);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x24);
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1848)), GH_ARG(false));
        iVar16 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar21 < 0x3c) {
          iVar21 = *piVar2;
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = -0xc - iVar13;
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar21 = *piVar2;
          }
          if (((iVar21 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + 2;
            iVar21 = *piVar2;
          }
          if ((((0x3d < iVar21 - 0xdU) ||
               ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (iVar21 = *(int *)(self + 0x32b828), 0 < iVar21)) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = param_8;
                puVar26[-9] = param_9;
                puVar26[-8] = iVar16;
                goto LAB_00462f3c;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < iVar21);
          }
        }
      }
    }
    break;
  case 0x106:
  case 0x107:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    if (*(int *)(self + 0x32c9ac) != 2) {
      piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
      if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
        iVar16 = *piVar2;
        iVar21 = param_8 + 0x1e;
        uVar23 = iVar16 - 0xd;
        if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
              *(undefined8 *)(puVar26 + 5) = 0;
              puVar26[-10] = iVar21;
              *(undefined8 *)(puVar26 + 3) = 0;
              *(undefined8 *)(puVar26 + 1) = 0;
              puVar26[-9] = param_9;
              puVar26[-8] = 1;
              *(undefined8 *)(puVar26 + -4) = 0x85;
              *(undefined8 *)(puVar26 + -6) = 0x6400000078;
              puVar26[9] = 0xff;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar27 = (undefined8 *)(self + 0xb0cd8);
          do {
            if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
              *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                   *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
              puVar27[-1] = 0x1c;
              puVar27[-2] = 0x640000006a;
              *(int *)(puVar27 + -4) = iVar21;
              *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
              *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
              *(undefined4 *)(puVar27 + 1) = 0x3f800000;
              *(int *)((gh_long)puVar27 + -0x1c) = param_9;
              *(undefined4 *)(puVar27 + -3) = 0;
              *puVar27 = 0x3f80000000000000;
              puVar27[5] = 0xff000000ff;
              puVar27[4] = 0xff00000000;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar27 = puVar27 + 10;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar18 = 0;
        do {
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 8;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -0x10;
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 0xe;
          }
          else {
            local_b0 = 0xd00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = *piVar2;
          }
          if (((iVar16 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 6;
          }
          else {
            local_b0 = 0x500000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar15 = iVar15 + 8;
            iVar16 = *piVar2;
          }
          if (((0x3d < iVar16 - 0xdU) ||
              ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar15;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar19 + iVar21;
                puVar26[-9] = (param_9 + -0x1e) - iVar20;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0x293;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x1e);
        *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
        *piVar3 = 0;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x12f0)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x32ba84) = 0;
        if ((*(int *)(self + 0x8dae0) == 0x3b) || (*(int *)(self + 0x8dae0) == 0xf)) {
          joyX2 = *(undefined4 *)(self + 0x1b08);
          joyY2 = *(undefined4 *)(self + 0x1b0c);
          *(undefined4 *)(self + 0x8dd38) = 0;
          *(undefined4 *)(self + 0x8dd24) = 0;
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
        }
      }
    }
    break;
  case 0x108:
  case 0x1f2:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    if (param_5 == 0x108) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0x109;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594) = 0xffffffa6;
    }
    else {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
    }
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140868) = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 4;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + -0x10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + 2;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar19;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = iVar17 + param_8;
            puVar26[-9] = param_9;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x1e);
    iVar21 = *(int *)(self + 0x32c160);
joined_r0x00462eb8:
    if (iVar21 != 0) break;
    this = (SoundClip *)(self + 0x16c8);
    goto LAB_0045c670;
  case 0x10c:
  case 499:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1560)), GH_ARG(false));
    }
    lVar31 = (gh_long)param_6;
    if (param_5 == 0x10c) {
      lVar32 = (gh_long)param_7 * 4 + lVar31 * 0x2d0;
      *(undefined8 *)(self + lVar32 + 0x140594) = 0x10dffffffa6;
      *(undefined4 *)(self + lVar32 + 0x14058c) = 0;
      param_7 = param_7 + -2;
    }
    else {
      lVar32 = (gh_long)param_7 * 4 + lVar31 * 0x2d0;
      *(undefined8 *)(self + lVar32 + 0x14058c) = 0;
      *(undefined4 *)(self + lVar32 + 0x140594) = 0;
    }
    *(undefined4 *)(self + (gh_long)param_7 * 4 + lVar31 * 0x2d0 + 0x140598) = 0;
    iVar16 = *(int *)(self + 0x1ae8);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 4;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + -8;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + -10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar20 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar20 = iVar20 + 2;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar20;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = iVar17 + param_8;
            puVar26[-9] = param_9 + -0x28 + iVar19;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < iVar15);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x19);
    iVar21 = 0;
    do {
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar18 = 0xc;
      }
      else {
        local_b0 = 0xb00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + 4;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar13 = 0xf;
      }
      else {
        local_b0 = 0xe00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar12 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar17 = 0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar17 = iVar17 + -8;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar19 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar19 = iVar19 + -10;
        iVar16 = *piVar2;
      }
      if (((iVar16 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
        iVar20 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar20 = iVar20 + 2;
        iVar16 = *piVar2;
      }
      if (((0x3d < iVar16 - 0xdU) ||
          ((1LL << ((ulong)(iVar16 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (iVar15 = *(int *)(self + 0x32b828), 0 < iVar15)))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            puVar26[2] = 0;
            puVar26[3] = iVar20;
            *(undefined8 *)(puVar26 + 6) = 0xff00000000;
            *(undefined8 *)(puVar26 + -6) = 0x6400000085;
            puVar26[-10] = iVar17 + param_8;
            puVar26[-9] = param_9 + -0x14 + iVar19;
            puVar26[-8] = iVar12;
            puVar26[-4] = iVar13 + 0x125;
            puVar26[-3] = 1;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            puVar26[1] = 0;
            puVar26[4] = 0;
            puVar26[5] = -iVar18;
            *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < iVar15);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x19);
    iVar21 = *(int *)(self + 0x32c160);
joined_r0x00459c5c:
    if (iVar21 != 0) break;
    lVar31 = 0x16c8;
LAB_0045c66c:
    this = (SoundClip *)(self + lVar31);
LAB_0045c670:
    SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
    break;
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar3 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar3) || (iVar21 = *piVar3 + param_2, *piVar3 = iVar21, -1 < iVar21)) {
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
      *piVar3 = 0;
      fVar35 = *(float *)(self + 0x32ba28);
      iVar21 = *(int *)(self + (gh_long)param_5 * 0x48 + 0x11c3a0);
      if (fVar35 == 1.0) {
        iVar16 = *(int *)(self + (gh_long)(param_5 * 0x12) * 4 + 0x11c3a4);
      }
      else {
        fVar37 = (float)iVar21;
        if (fVar35 <= 1.0) {
          fVar37 = fVar37 - (1.0 - fVar35) * fVar37;
        }
        else {
          fVar37 = fVar35 * fVar37;
        }
        iVar21 = (int)fVar37;
        fVar37 = (float)*(int *)(self + (gh_long)(param_5 * 0x12) * 4 + 0x11c3a4);
        if (fVar35 <= 1.0) {
          fVar35 = fVar37 - (1.0 - fVar35) * fVar37;
        }
        else {
          fVar35 = fVar35 * fVar37;
        }
        iVar16 = (int)fVar35;
      }
      iVar21 = iVar21 + param_8;
      iVar18 = *piVar2;
      iVar16 = iVar16 + param_9;
      uVar23 = iVar18 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = iVar21;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = iVar16;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = iVar21;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = iVar16;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar13 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 8;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + -0x10;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar14 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar14 = iVar14 + 4;
          iVar18 = *piVar2;
        }
        if (((0x3d < iVar18 - 0xdU) ||
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar20 + iVar21;
              puVar26[-9] = iVar16 - iVar15;
              puVar26[-4] = iVar17 + 0x1ad;
              puVar26[-3] = 1;
              puVar26[2] = 0;
              puVar26[3] = iVar14;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-8] = iVar19;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar12;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0x14);
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        iVar18 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar18 - 0xdU) ||
          ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = *piVar2;
        if (iVar13 < 0x3c) {
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0x220;
          }
          else {
            local_b0 = 0x200000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar12 = iVar12 + 0x21d;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + 2;
            iVar18 = *piVar2;
          }
          if (((0x3d < iVar18 - 0xdU) ||
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[-10] = iVar21;
                puVar26[-9] = iVar16;
                puVar26[-8] = iVar17;
                puVar26[2] = 0;
                puVar26[3] = iVar19;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                puVar26[-4] = iVar12;
                puVar26[-3] = 1;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + -6) = 0x6400000086;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
        }
      }
      if (((0x3d < iVar18 - 0xdU) ||
          ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
        local_b0 = 0x6300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        if (iVar18 < 0x3c) {
          iVar18 = *piVar2;
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = -0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = -0xc - iVar13;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + 2;
            iVar18 = *piVar2;
          }
          if ((((0x3d < iVar18 - 0xdU) ||
               ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *piVar3)) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[-10] = iVar21;
                puVar26[-9] = iVar16;
                puVar26[-8] = iVar12;
                goto LAB_00462f34;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
        }
      }
    }
    break;
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
    if (((*piVar2 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*piVar2 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1)) {
      uVar23 = 3;
    }
    else {
      local_b0 = 0x200000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      uVar23 = iVar21 + 1;
    }
    piVar3 = (int *)(self + 0x32c160);
    if ((uVar23 < 0x4b) && (*piVar3 == 0)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)(int)uVar23 * 0x18 + 0x11e8)), GH_ARG(false));
    }
    *(undefined4 *)(self + 0x32ba60) = 1;
    *(uint *)(self + 0x32ba64) = uVar33;
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((-1 < *piVar4) || (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, -1 < iVar21)) {
      *piVar4 = 0;
      *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0x1c9;
      iVar21 = *(int *)(self + 0x1ae8);
      if (((0x3d < iVar21 - 0xdU) ||
          ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = param_8;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            iVar16 = *piVar3;
            goto joined_r0x0045e050;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = *piVar3;
joined_r0x0045e050:
      if (iVar16 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false));
        iVar21 = *(int *)(self + 0x1ae8);
      }
      iVar16 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 1;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -0x1e) - iVar19;
              puVar26[-4] = iVar13 + 0x207;
              puVar26[-3] = 1;
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-8] = iVar12;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x14);
      iVar16 = 0;
      do {
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x10;
        }
        else {
          local_b0 = 0xf00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 8;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar17 = iVar17 + -0x10;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 6;
        }
        else {
          local_b0 = 0x500000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar20 = iVar20 + 1;
          iVar21 = *piVar2;
        }
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar17 + param_8;
              puVar26[-9] = (param_9 + -0x3c) - iVar19;
              puVar26[-4] = iVar13 + 0x207;
              puVar26[-3] = 1;
              puVar26[2] = 0;
              puVar26[3] = iVar20;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-8] = iVar12;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar18;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x14);
      iVar16 = 0;
      do {
        if (((0x3d < iVar21 - 0xdU) ||
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
        {
          local_b0 = 0x6300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          if (iVar21 < 0x3c) {
            iVar21 = *piVar2;
            if (((iVar21 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar18 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar18 = iVar18 + 0xc;
              iVar21 = *piVar2;
            }
            if (((iVar21 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar13 = 3;
            }
            else {
              local_b0 = 0x200000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar21 = *piVar2;
            }
            if (((iVar21 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar12 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar21 = *piVar2;
            }
            if (((iVar21 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar1 == 1)) {
              iVar17 = 8;
            }
            else {
              local_b0 = 0x700000000;
              pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
              iVar17 = iVar17 + 2;
              iVar21 = *piVar2;
            }
            if (((0x3d < iVar21 - 0xdU) ||
                ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar1 != 1 && (0 < *piVar3)))) {
              lVar31 = 0;
              puVar26 = (undefined4 *)(self + 0xb0ce0);
              do {
                if ((int)puVar26[-5] < 1) {
                  puVar26[-4] = iVar13 + 0x21d;
                  puVar26[-3] = 1;
                  *(undefined8 *)(puVar26 + -6) = 0x6400000086;
                  puVar26[-8] = iVar12;
                  puVar26[-10] = param_8;
                  puVar26[-9] = param_9 + -0x32;
                  puVar26[2] = 0;
                  puVar26[3] = iVar17;
                  *puVar26 = 0x3f800000;
                  puVar26[1] = 0;
                  puVar26[4] = 0;
                  puVar26[5] = -iVar18;
                  *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                  *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                  *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                  break;
                }
                lVar31 = lVar31 + 1;
                puVar26 = puVar26 + 0x14;
              } while (lVar31 < *piVar3);
            }
          }
        }
        iVar16 = iVar16 + 1;
        if (iVar16 == 5) goto LAB_0044dfe4;
        iVar21 = *piVar2;
      } while( true );
    }
    break;
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1470)), GH_ARG(false));
    }
    piVar4 = (int *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594);
    if ((*piVar4 < 0) && (iVar21 = *piVar4 + param_2, *piVar4 = iVar21, iVar21 < 0)) break;
    *(undefined4 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140598) = 0;
    *piVar4 = 0;
    if (param_5 == 0x1ce) {
      lVar31 = (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0;
      *(undefined4 *)(self + lVar31 + 0x140b3c) = 0;
      *(undefined4 *)(self + lVar31 + 0x14086c) = 0;
      *(undefined4 *)(self + lVar31 + 0x14059c) = 0;
      *(undefined4 *)(self + lVar31 + 0x1402cc) = 0;
      *(undefined4 *)(self + lVar31 + 0x13fffc) = 0;
LAB_004556a8:
      if (*piVar3 == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x15c0)), GH_ARG(false));
      }
      if (param_5 == 0x1ce) {
        iVar21 = param_9 + 0x1e;
        iVar18 = *(int *)(self + 0x1ae8);
        iVar16 = 0;
        piVar3 = (int *)(self + 0x32b828);
        do {
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0xb;
          }
          else {
            local_b0 = 0xa00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -0x10;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar15 = iVar15 + 4;
            iVar18 = *piVar2;
          }
          if (((0x3d < iVar18 - 0xdU) ||
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar15;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = iVar19 + param_8;
                puVar26[-9] = iVar21 - iVar20;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0x1c4;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x12);
        iVar16 = 0;
        do {
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0xb;
          }
          else {
            local_b0 = 0xa00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -0x10;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar15 = iVar15 + 4;
            iVar18 = *piVar2;
          }
          if (((0x3d < iVar18 - 0xdU) ||
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
             ((*piVar1 != 1 && (0 < *piVar3)))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar15;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = param_8 + -0x40 + iVar19;
                puVar26[-9] = iVar21 - iVar20;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0x1da;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x12);
        iVar16 = 0;
        do {
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 0x10;
          }
          else {
            local_b0 = 0xf00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar13 = iVar13 + 0xc;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 0xb;
          }
          else {
            local_b0 = 0xa00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar19 = iVar19 + -0x10;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar15 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar15 = iVar15 + 4;
            iVar18 = *piVar2;
          }
          if ((((0x3d < iVar18 - 0xdU) ||
               ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *piVar3)) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar15;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = param_8 + 0x40 + iVar19;
                puVar26[-9] = iVar21 - iVar20;
                puVar26[-8] = iVar17;
                puVar26[-4] = iVar12 + 0x1c4;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar13;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *piVar3);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x12);
      }
      else {
        iVar18 = *(int *)(self + 0x1ae8);
        iVar21 = 0;
        do {
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar16 = 0xc;
          }
          else {
            local_b0 = 0xb00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 8;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar13 = 9;
          }
          else {
            local_b0 = 0x800000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar12 = 2;
          }
          else {
            local_b0 = 0x100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar17 = 0x20;
          }
          else {
            local_b0 = 0x1f00000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar17 = iVar17 + -0x10;
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar19 = 0x14;
          }
          else {
            local_b0 = 0x1300000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar18 = *piVar2;
          }
          if (((iVar18 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar1 == 1)) {
            iVar20 = 8;
          }
          else {
            local_b0 = 0x700000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar20 = iVar20 + 4;
            iVar18 = *piVar2;
          }
          if ((((0x3d < iVar18 - 0xdU) ||
               ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
              (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar20;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                puVar26[-10] = param_8 + 0x14 + iVar17;
                puVar26[-9] = (param_9 + 0x28) - iVar19;
                puVar26[-8] = iVar12;
                puVar26[-4] = iVar13 + 0x1e5;
                puVar26[-3] = 1;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x10);
      }
    }
    else {
      if (param_5 != 0x1cd) goto LAB_004556a8;
      iVar21 = param_8 + 0x10;
      uVar23 = *piVar2 - 0xd;
      if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar1 != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            *(undefined8 *)(puVar26 + 7) = 0xff000000ff;
            *(undefined8 *)(puVar26 + 5) = 0;
            puVar26[-10] = iVar21;
            *(undefined8 *)(puVar26 + 3) = 0;
            *(undefined8 *)(puVar26 + 1) = 0;
            puVar26[-9] = param_9;
            puVar26[-8] = 1;
            *(undefined8 *)(puVar26 + -4) = 0x85;
            *(undefined8 *)(puVar26 + -6) = 0x6400000078;
            puVar26[9] = 0xff;
            *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
            *puVar26 = 0x3f800000;
            break;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      if ((((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*piVar1 != 1)) && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar27 = (undefined8 *)(self + 0xb0cd8);
        do {
          if (*(int *)((gh_long)puVar27 + -0xc) < 1) {
            *(undefined4 *)((gh_long)puVar27 + 0x1c) =
                 *(undefined4 *)(self + (gh_long)param_10 * 0x50 + 0xb0cf4);
            puVar27[-1] = 0x1c;
            puVar27[-2] = 0x640000006a;
            *(int *)(puVar27 + -4) = iVar21;
            *(undefined8 *)((gh_long)puVar27 + 0x14) = 0;
            *(undefined8 *)((gh_long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 1) = 0x3f800000;
            *(int *)((gh_long)puVar27 + -0x1c) = param_9;
            *(undefined4 *)(puVar27 + -3) = 0;
            *puVar27 = 0x3f80000000000000;
            puVar27[5] = 0xff000000ff;
            puVar27[4] = 0xff00000000;
            iVar16 = *piVar3;
            goto joined_r0x0046397c;
          }
          lVar31 = lVar31 + 1;
          puVar27 = puVar27 + 10;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
      iVar16 = *piVar3;
joined_r0x0046397c:
      if ((iVar16 == 0) &&
         (SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14d0)), GH_ARG(false)), *piVar3 == 0)) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x15c0)), GH_ARG(false));
      }
      iVar18 = *(int *)(self + 0x1ae8);
      iVar16 = 0;
      piVar3 = (int *)(self + 0x32b828);
      do {
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 8;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 9;
        }
        else {
          local_b0 = 0x800000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -0x10;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 1;
          iVar18 = *piVar2;
        }
        if (((0x3d < iVar18 - 0xdU) ||
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar19 + iVar21;
              puVar26[-9] = param_9 - iVar20;
              puVar26[-8] = iVar17;
              puVar26[-4] = iVar12 + 0x13a;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0xd);
      iVar16 = 0;
      do {
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 8;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 9;
        }
        else {
          local_b0 = 0x800000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -0x10;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 1;
          iVar18 = *piVar2;
        }
        if ((((0x3d < iVar18 - 0xdU) ||
             ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *piVar3)) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar19 + iVar21;
              puVar26[-9] = (param_9 + 0x28) - iVar20;
              puVar26[-8] = iVar17;
              puVar26[-4] = iVar12 + 0x13a;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0xd);
      iVar16 = 0;
      do {
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 8;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 9;
        }
        else {
          local_b0 = 0x800000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -0x10;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 1;
          iVar18 = *piVar2;
        }
        if (((0x3d < iVar18 - 0xdU) ||
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar19 + iVar21;
              puVar26[-9] = (param_9 + 0x32) - iVar20;
              puVar26[-8] = iVar17;
              puVar26[-4] = iVar12 + 0x13a;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0xd);
      iVar16 = 0;
      do {
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar13 = iVar13 + 0xc;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar17 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar17 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar19 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar19 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar19 = iVar19 + -0x10;
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar20 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar20 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = *piVar2;
        }
        if (((iVar18 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar15 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar15 = iVar15 + 1;
          iVar18 = *piVar2;
        }
        if (((0x3d < iVar18 - 0xdU) ||
            ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
           ((*piVar1 != 1 && (0 < *piVar3)))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar15;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              puVar26[-10] = iVar19 + iVar21;
              puVar26[-9] = (param_9 + 0x14) - iVar20;
              puVar26[-8] = iVar17;
              puVar26[-4] = iVar12 + 0x1fa;
              puVar26[-3] = 1;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              puVar26[4] = 0;
              puVar26[5] = -iVar13;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *piVar3);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x1e);
    }
    if (((0x3d < iVar18 - 0xdU) ||
        ((1LL << ((ulong)(iVar18 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)) {
      local_b0 = 0x6300000000;
      pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar21 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
      if (iVar21 < 0x3c) {
        iVar21 = *piVar2;
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar16 = -0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = -0xc - iVar16;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar18 = 0x220;
        }
        else {
          local_b0 = 0x200000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + 0x21d;
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar13 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if (((iVar21 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar1 == 1))
        {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 2;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = param_8;
              goto LAB_00464a04;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
      }
    }
    break;
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
    piVar3 = (int *)(self + 0x32c160);
    if (*piVar3 == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1818)), GH_ARG(false));
    }
    if (param_5 == 0x1d1) {
      iVar21 = *piVar2;
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = 0x12;
      }
      else if (*piVar1 == 1) {
        iVar16 = 0x12;
      }
      else {
        local_b0 = 0x1100000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar16 = iVar16 + 0xc;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x20;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + -0x10;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 0x14;
      }
      else if (*piVar1 == 1) {
        iVar13 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 4;
        iVar21 = *piVar2;
      }
      iVar17 = param_8 + 0x10;
      uVar23 = iVar21 - 0xd;
      iVar19 = param_9 + 0x14;
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = 0x12;
      }
      else {
        iVar20 = *piVar1;
        if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *(undefined8 *)(puVar26 + -4) = 0x10000002b;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar18 + iVar17;
              puVar26[-9] = iVar19 - iVar13;
              puVar26[-8] = uVar33;
              puVar26[4] = 0;
              puVar26[5] = -iVar16;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar20 == 1)) {
          iVar16 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + 0xc;
          iVar21 = *piVar2;
        }
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x20;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + -0x10;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 0x14;
      }
      else if (*piVar1 == 1) {
        iVar13 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 4;
        iVar21 = *piVar2;
      }
      uVar23 = iVar21 - 0xd;
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = 0x12;
      }
      else {
        iVar20 = *piVar1;
        if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *(undefined8 *)(puVar26 + -4) = 0x10000002e;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar18 + iVar17;
              puVar26[-9] = iVar19 - iVar13;
              puVar26[-8] = uVar33;
              puVar26[4] = 0;
              puVar26[5] = -iVar16;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar20 == 1)) {
          iVar16 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + 0xc;
          iVar21 = *piVar2;
        }
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x20;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + -0x10;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 0x14;
      }
      else if (*piVar1 == 1) {
        iVar13 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 4;
        iVar21 = *piVar2;
      }
      uVar23 = iVar21 - 0xd;
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = 0x12;
      }
      else {
        iVar20 = *piVar1;
        if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *(undefined8 *)(puVar26 + -4) = 0x100000038;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar18 + iVar17;
              puVar26[-9] = iVar19 - iVar13;
              puVar26[-8] = uVar33;
              puVar26[4] = 0;
              puVar26[5] = -iVar16;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar20 == 1)) {
          iVar16 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + 0xc;
          iVar21 = *piVar2;
        }
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x20;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + -0x10;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 0x14;
      }
      else if (*piVar1 == 1) {
        iVar13 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 4;
        iVar21 = *piVar2;
      }
      uVar23 = iVar21 - 0xd;
      if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar16 = -0x12;
      }
      else {
        iVar20 = *piVar1;
        if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *(undefined8 *)(puVar26 + -4) = 0x10000003a;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-10] = iVar18 + iVar17;
              puVar26[-9] = iVar19 - iVar13;
              puVar26[-8] = uVar33;
              puVar26[4] = 0;
              puVar26[5] = -iVar16;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              break;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
           (iVar20 == 1)) {
          iVar16 = -0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = -0xc - iVar16;
          iVar21 = *piVar2;
        }
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar18 = 0x20;
      }
      else if (*piVar1 == 1) {
        iVar18 = 0x20;
      }
      else {
        local_b0 = 0x1f00000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar18 = iVar18 + -0x10;
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar13 = 0x14;
      }
      else if (*piVar1 == 1) {
        iVar13 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar21 = *piVar2;
      }
      if ((iVar21 - 0xdU < 0x3e) &&
         ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
        iVar12 = 8;
      }
      else if (*piVar1 == 1) {
        iVar12 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
        iVar12 = iVar12 + 4;
        iVar21 = *piVar2;
      }
      if ((((0x3d < iVar21 - 0xdU) ||
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1))
         && (0 < *(int *)(self + 0x32b828))) {
        lVar31 = 0;
        puVar26 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar26[-5] < 1) {
            uVar36 = 0x10000003b;
            puVar26[-10] = iVar18 + iVar17;
            puVar26[-9] = iVar19 - iVar13;
            puVar26[-8] = uVar33;
            goto LAB_00464588;
          }
          lVar31 = lVar31 + 1;
          puVar26 = puVar26 + 0x14;
        } while (lVar31 < *(int *)(self + 0x32b828));
      }
LAB_0045d4e4:
      iVar21 = *piVar3;
joined_r0x004645b4:
      if (iVar21 == 0) {
        lVar31 = 0x1788;
LAB_0045d4f0:
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar31)), GH_ARG(false));
      }
    }
    else {
      if (param_5 == 0x1d0) {
        iVar21 = *piVar2;
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else if (*piVar1 == 1) {
          iVar16 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + 0xc;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        iVar17 = param_8 + 0x10;
        uVar23 = iVar21 - 0xd;
        iVar19 = param_9 + 0x14;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000036;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000037;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x10000002d;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = -0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000030;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = -0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
LAB_0045fd00:
          if (0 < (int)puVar26[-5]) goto code_r0x0045fd0c;
          uVar36 = 0x100000032;
          puVar26[-10] = iVar18 + iVar17;
          puVar26[-9] = iVar19 - iVar13;
          puVar26[-8] = uVar33;
LAB_00464588:
          puVar26[2] = 0;
          puVar26[3] = iVar12;
          *(undefined8 *)(puVar26 + -4) = uVar36;
          *(undefined8 *)(puVar26 + -6) = 0x6400000085;
          *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
          puVar26[4] = 0;
          puVar26[5] = iVar16;
          *puVar26 = 0x3f800000;
          puVar26[1] = 0;
          *(undefined8 *)(puVar26 + 6) = 0xff00000000;
          *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
          iVar21 = *piVar3;
          goto joined_r0x004645b4;
        }
        goto LAB_0045d4e4;
      }
      if (param_5 == 0x1cf) {
        iVar21 = *piVar2;
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else if (*piVar1 == 1) {
          iVar16 = 0x12;
        }
        else {
          local_b0 = 0x1100000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar16 = iVar16 + 0xc;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        iVar17 = param_8 + 0x10;
        uVar23 = iVar21 - 0xd;
        iVar19 = param_9 + 0x14;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000018;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000019;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000033;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = 0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000036;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = 0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = iVar16 + 0xc;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        uVar23 = iVar21 - 0xd;
        if ((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar16 = -0x12;
        }
        else {
          iVar20 = *piVar1;
          if ((iVar20 != 1) && (0 < *(int *)(self + 0x32b828))) {
            lVar31 = 0;
            puVar26 = (undefined4 *)(self + 0xb0ce0);
            do {
              if ((int)puVar26[-5] < 1) {
                puVar26[2] = 0;
                puVar26[3] = iVar12;
                *(undefined8 *)(puVar26 + -4) = 0x100000037;
                *(undefined8 *)(puVar26 + -6) = 0x6400000085;
                *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
                puVar26[-10] = iVar18 + iVar17;
                puVar26[-9] = iVar19 - iVar13;
                puVar26[-8] = uVar33;
                puVar26[4] = 0;
                puVar26[5] = -iVar16;
                *puVar26 = 0x3f800000;
                puVar26[1] = 0;
                *(undefined8 *)(puVar26 + 6) = 0xff00000000;
                *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
                break;
              }
              lVar31 = lVar31 + 1;
              puVar26 = puVar26 + 0x14;
            } while (lVar31 < *(int *)(self + 0x32b828));
          }
          if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar20 == 1)) {
            iVar16 = -0x12;
          }
          else {
            local_b0 = 0x1100000000;
            pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
            iVar16 = -0xc - iVar16;
            iVar21 = *piVar2;
          }
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar18 = 0x20;
        }
        else if (*piVar1 == 1) {
          iVar18 = 0x20;
        }
        else {
          local_b0 = 0x1f00000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar18 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar18 = iVar18 + -0x10;
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar13 = 0x14;
        }
        else if (*piVar1 == 1) {
          iVar13 = 0x14;
        }
        else {
          local_b0 = 0x1300000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar21 = *piVar2;
        }
        if ((iVar21 - 0xdU < 0x3e) &&
           ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
          iVar12 = 8;
        }
        else if (*piVar1 == 1) {
          iVar12 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar22 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar22), GH_ARG((param_type *)&local_b0));
          iVar12 = iVar12 + 4;
          iVar21 = *piVar2;
        }
        if ((((0x3d < iVar21 - 0xdU) ||
             ((1LL << ((ulong)(iVar21 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar1 != 1)
            ) && (0 < *(int *)(self + 0x32b828))) {
          lVar31 = 0;
          puVar26 = (undefined4 *)(self + 0xb0ce0);
          do {
            if ((int)puVar26[-5] < 1) {
              puVar26[-10] = iVar18 + iVar17;
              puVar26[-9] = iVar19 - iVar13;
              puVar26[2] = 0;
              puVar26[3] = iVar12;
              *(undefined8 *)(puVar26 + -4) = 0x100000035;
              *(undefined8 *)(puVar26 + -6) = 0x6400000085;
              *(undefined8 *)(puVar26 + -2) = 0x3f80000000000000;
              puVar26[-8] = uVar33;
              puVar26[4] = 0;
              puVar26[5] = iVar16;
              *puVar26 = 0x3f800000;
              puVar26[1] = 0;
              *(undefined8 *)(puVar26 + 6) = 0xff00000000;
              *(undefined8 *)(puVar26 + 8) = 0xff000000ff;
              iVar21 = *piVar3;
              goto joined_r0x00464064;
            }
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 0x14;
          } while (lVar31 < *(int *)(self + 0x32b828));
        }
        iVar21 = *piVar3;
joined_r0x00464064:
        if (iVar21 != 0) goto LAB_0045d500;
        lVar31 = 0x1800;
        goto LAB_0045d4f0;
      }
    }
LAB_0045d500:
    *(undefined8 *)(self + (gh_long)param_7 * 4 + (gh_long)param_6 * 0x2d0 + 0x140594) = 0x1caffffffec;
  }
switchD_0044d57c_caseD_10:
  if (*(gh_long *)(lVar7 + 0x28) != local_a8) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
