/* bzStateGame::ComCreate_00429718 @ 0x00429718 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__ComCreate_00429718(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;

  gh_long lVar1;
  int *piVar2;
  int *piVar3;
  gh_long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  mersenne_twister_engine *pmVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  gh_long lVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  uint64_t gh_frame64[19] = {0};   /* 원작 스택 프레임 (SP-0x80 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x80;
#define local_80 (*(undefined8 *)(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar4 = tpidr_el0;
  local_78 = *(gh_long *)(lVar4 + 0x28);
  if (param_3 == 0x1f5) {
    iVar8 = *(int *)(self + 0x32c8ec);
    iVar13 = (int)((gh_long)iVar8 + 1);
    *(int *)(self + 0x32c8ec) = iVar13;
    iVar6 = *(int *)(self + 0x32c8e8);
    iVar5 = 0;
    if (-1 < *(int *)(self + ((gh_long)iVar8 + 1) * 4 + (gh_long)iVar6 * 0x54 + 0x1083c)) {
      iVar5 = iVar13;
    }
    *(int *)(self + 0x32c8ec) = iVar5;
    if (*(int *)(self + 0x32c854) == 100) {
      if (iVar6 < 0x18) {
        puVar10 = self + (gh_long)iVar5 * 4 + (gh_long)(iVar6 / 3) * 0x54;
        uVar11 = 0x2960;
      }
      else {
        puVar10 = self + (gh_long)iVar5 * 4;
        uVar11 = 0x2c00;
      }
    }
    else {
      puVar10 = self + (gh_long)iVar5 * 4 + (gh_long)iVar6 * 0x54;
      uVar11 = 0x83c;
    }
    iVar5 = *(int *)(puVar10 + (uVar11 | 0x10000));
    if (iVar5 < 0x49) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        param_4 = 0x12;
      }
      else {
        local_80 = 0x1100000000;
        pmVar9 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar9), GH_ARG((param_type *)&local_80));
        param_4 = iVar8 + 2;
      }
    }
    else {
      param_4 = *(int *)(self + (gh_long)iVar5 * 0x28 + 0x13b68);
    }
  }
  else {
    iVar5 = 0x15;
    if ((param_3 | 1U) != 0x10b) {
      iVar5 = param_3 + -500;
    }
  }
  iVar8 = *(int *)(self + (gh_long)iVar5 * 0x28 + 0x13b58);
  lVar16 = (gh_long)iVar5;
  if (iVar5 - 0x15U < 7) {
    param_4 = iVar5 + 0xc;
    if (iVar5 == 0x19) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar8 = 0xc;
      }
      else {
        local_80 = 0x1700000000;
        pmVar9 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar9), GH_ARG((param_type *)&local_80));
        if (iVar6 < 8) {
          iVar8 = 7;
        }
        else {
          iVar8 = 8;
          if (0xf < iVar6) {
            iVar8 = 0xc;
          }
        }
      }
    }
    iVar6 = *(int *)(self + lVar16 * 0x28 + 0x13b70);
LAB_00429b84:
    if (*(int *)(self + 0x32c9ac) == 2) {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar5 = 300;
      }
      else {
        local_80 = 0x200000000;
        pmVar9 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar9), GH_ARG((param_type *)&local_80));
        iVar5 = iVar5 * 100;
      }
      piVar2 = (int *)(self + 0x32ba90);
      iVar6 = *piVar2;
      iVar8 = iVar6;
      if (*(int *)(self + 0x32c908) < 1) {
        iVar8 = 9;
        if (iVar6 < 9) {
          iVar8 = iVar6 + 1;
        }
        *(int *)(self + 0x32c908) = iVar6 * 0x3c;
        *piVar2 = iVar8;
      }
      piVar3 = (int *)(self + 0x32c8ec);
      iVar6 = *piVar3;
      *piVar3 = (int)((gh_long)iVar6 + 1);
      iVar19 = *(int *)(self + ((gh_long)iVar6 + 1) * 4 + ((gh_long)iVar8 + 100) * 0x54 + 0x1083c);
      if (iVar19 < 0) {
        *piVar3 = 0;
        iVar19 = *(int *)(self + ((gh_long)iVar8 + 100) * 0x54 + 0x1083c);
        if (iVar19 == 0x19) goto LAB_00429e10;
LAB_0042a0fc:
        iVar12 = *(int *)(self + (gh_long)iVar19 * 0x28 + 0x13b58);
      }
      else {
        if (iVar19 != 0x19) goto LAB_0042a0fc;
LAB_00429e10:
        if (iVar8 < 5) {
          iVar12 = 8;
        }
        else if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                 ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) !=
                  0)) || (*(int *)(self + 0xba8) == 1)) {
          iVar12 = 0xc;
        }
        else {
          local_80 = 0x1700000000;
          pmVar9 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar9), GH_ARG((param_type *)&local_80));
          if (iVar8 < 8) {
            iVar12 = 7;
          }
          else {
            iVar12 = 8;
            if (0xf < iVar8) {
              iVar12 = 0xc;
            }
          }
        }
      }
      iVar6 = *(int *)(self + (gh_long)iVar19 * 0x28 + 0x13b70);
      param_4 = iVar19 + 0xc;
      param_6 = iVar5 + param_6;
      if (param_3 == 0x10a) {
        lVar1 = (gh_long)iVar19 * 0x28;
        iVar18 = *(int *)(self + lVar1 + 0x13b6c);
        lVar16 = (gh_long)*piVar2 * 4;
        iVar14 = *(int *)(self + lVar1 + 0x13b60);
        iVar15 = *(int *)(self + lVar1 + 0x13b64);
        iVar7 = *(int *)(self + lVar1 + 0x13b74);
        iVar13 = *(int *)(self + lVar16 + 0x8d644);
        iVar5 = *(int *)(self + lVar16 + 0x8d73c);
        iVar8 = *(int *)(self + lVar16 + 0x8d54c) + *(int *)(self + lVar1 + 0x13b5c);
        param_5 = param_5 + -0x4b0;
      }
      else {
        lVar1 = (gh_long)iVar19 * 0x28;
        iVar18 = *(int *)(self + lVar1 + 0x13b6c);
        lVar16 = (gh_long)*piVar2 * 4;
        iVar14 = *(int *)(self + lVar1 + 0x13b60);
        iVar15 = *(int *)(self + lVar1 + 0x13b64);
        iVar7 = *(int *)(self + lVar1 + 0x13b74);
        iVar13 = *(int *)(self + lVar16 + 0x8d644);
        iVar5 = *(int *)(self + lVar16 + 0x8d73c);
        iVar8 = *(int *)(self + lVar16 + 0x8d54c) + *(int *)(self + lVar1 + 0x13b5c);
        param_5 = param_5 + 0x514;
      }
      iVar13 = iVar13 + iVar14;
      iVar5 = iVar5 + iVar15;
    }
    else {
      if (*(int *)(self + 0x32c9ac) == 0) {
        lVar16 = lVar16 * 0x28;
        lVar1 = (gh_long)*(int *)(self + 0x32c8e8) * 4;
        iVar19 = iVar5 + 500;
        bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar8), GH_ARG(0), GH_ARG(1), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(*(int *)(self + lVar1 + 0x8d54c) + *(int *)(self + lVar16 + 0x13b5c)), GH_ARG(*(int *)(self + lVar1 + 0x8d644) + *(int *)(self + lVar16 + 0x13b60)), GH_ARG(*(int *)(self + lVar1 + 0x8d73c) + *(int *)(self + lVar16 + 0x13b64)), GH_ARG(param_4), GH_ARG((float)*(int *)(self + lVar16 + 0x13b6c) / 10.0), GH_ARG(iVar6), GH_ARG(*(int *)(self + lVar16 + 0x13b74)), GH_ARG(iVar19));
        if (2 < iVar5 - 0x37U) goto LAB_0042a29c;
        iVar7 = *(int *)(self + 0x32c8e8);
        iVar8 = *(int *)(self + (gh_long)iVar7 * 4 + 0x8d54c) + *(int *)(self + lVar16 + 0x13b5c);
        iVar12 = *(int *)(self + (gh_long)iVar5 * 0x28 + 0x13b58);
        iVar13 = *(int *)(self + (gh_long)iVar7 * 4 + 0x8d644) + *(int *)(self + lVar16 + 0x13b60);
        param_5 = param_5 + -10;
        iVar5 = *(int *)(self + (gh_long)iVar7 * 4 + 0x8d73c) + *(int *)(self + lVar16 + 0x13b64);
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*(int *)(self + 0xba8) == 1)) {
          param_4 = 0x12;
        }
        else {
          local_80 = 0x1100000000;
          pmVar9 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_80), GH_ARG(pmVar9), GH_ARG((param_type *)&local_80));
          param_4 = iVar7 + 2;
        }
        iVar7 = *(int *)(self + lVar16 + 0x13b74);
        fVar17 = (float)*(int *)(self + lVar16 + 0x13b6c) / 10.0;
        goto LAB_0042a298;
      }
      if (*(int *)(self + 0x32c908) < 0x10d6) {
        lVar16 = (gh_long)(*(int *)(self + 0x32c908) / 100 + 7);
      }
      else {
        lVar16 = 0x33;
      }
      iVar19 = *(int *)(self + (gh_long)*(int *)(self + 0x32c8ec) * 4 + lVar16 * 0x54 + 0x1083c);
      lVar16 = lVar16 * 4;
      lVar1 = (gh_long)iVar19 * 0x28;
      iVar18 = *(int *)(self + lVar1 + 0x13b6c);
      iVar12 = *(int *)(self + lVar1 + 0x13b58);
      iVar6 = *(int *)(self + lVar1 + 0x13b70);
      iVar7 = *(int *)(self + lVar1 + 0x13b74);
      iVar8 = *(int *)(self + lVar16 + 0x8d54c) + *(int *)(self + lVar1 + 0x13b5c);
      iVar13 = *(int *)(self + lVar16 + 0x8d644) + *(int *)(self + lVar1 + 0x13b60);
      iVar5 = *(int *)(self + lVar16 + 0x8d73c) + *(int *)(self + lVar1 + 0x13b64);
    }
    iVar19 = iVar19 + 500;
    fVar17 = (float)iVar18 / 10.0;
  }
  else {
    iVar6 = *(int *)(self + lVar16 * 0x28 + 0x13b70);
    if (param_4 != 0x15) goto LAB_00429b84;
    piVar2 = (int *)(self + 0x32c8e8);
    lVar16 = lVar16 * 0x28;
    lVar1 = (gh_long)*piVar2 * 4;
    bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar8), GH_ARG(0), GH_ARG(1), GH_ARG(param_5 + -0x1e), GH_ARG(param_6), GH_ARG(*(int *)(self + lVar16 + 0x13b5c) + *(int *)(self + lVar1 + 0x8d560) + 0x96), GH_ARG(*(int *)(self + lVar1 + 0x8d658) + *(int *)(self + lVar16 + 0x13b60)), GH_ARG(*(int *)(self + lVar1 + 0x8d750) + *(int *)(self + lVar16 + 0x13b64)), GH_ARG(0x15), GH_ARG((float)*(int *)(self + lVar16 + 0x13b6c) / 10.0), GH_ARG(iVar6), GH_ARG(*(int *)(self + lVar16 + 0x13b74)), GH_ARG(iVar5 + 500));
    iVar5 = *piVar2;
    if (*(int *)(self + 0x32c854) == 100) {
      if (iVar5 < 0x15) goto LAB_0042a29c;
      iVar5 = iVar5 + 5;
      bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(param_2), GH_ARG(*(int *)(self + 0x13e28)), GH_ARG(0), GH_ARG(1), GH_ARG(param_5 + 10), GH_ARG(param_6), GH_ARG(*(int *)(self + 0x13e2c) + *(int *)(self + (gh_long)iVar5 * 4 + 0x8d54c) + 100), GH_ARG(*(int *)(self + (gh_long)iVar5 * 4 + 0x8d644) + *(int *)(self + 0x13e30)), GH_ARG(*(int *)(self + (gh_long)iVar5 * 4 + 0x8d73c) + *(int *)(self + 0x13e34)), GH_ARG(0x22), GH_ARG((float)*(int *)(self + 0x13e3c) / 10.0), GH_ARG(iVar6), GH_ARG(0x1c), GH_ARG(0x206));
      if (*piVar2 < 0x1f) goto LAB_0042a29c;
      iVar5 = *piVar2 + 5;
      iVar19 = *(int *)(self + 0x13e14);
      iVar8 = *(int *)(self + 0x13e04) + *(int *)(self + (gh_long)iVar5 * 4 + 0x8d54c);
      iVar12 = *(int *)(self + 0x13e00);
      iVar13 = *(int *)(self + (gh_long)iVar5 * 4 + 0x8d644) + *(int *)(self + 0x13e08);
      iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x8d73c) + *(int *)(self + 0x13e0c);
      param_4 = 0x26;
    }
    else {
      if (iVar5 < 0x15) goto LAB_0042a29c;
      iVar5 = iVar5 + 5;
      bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(param_2), GH_ARG(*(int *)(self + 0x13e28)), GH_ARG(0), GH_ARG(1), GH_ARG(param_5 + 10), GH_ARG(param_6), GH_ARG(*(int *)(self + 0x13e2c) + *(int *)(self + (gh_long)iVar5 * 4 + 0x8d54c) + 100), GH_ARG(*(int *)(self + (gh_long)iVar5 * 4 + 0x8d644) + *(int *)(self + 0x13e30)), GH_ARG(*(int *)(self + (gh_long)iVar5 * 4 + 0x8d73c) + *(int *)(self + 0x13e34)), GH_ARG(0x16), GH_ARG((float)*(int *)(self + 0x13e3c) / 10.0), GH_ARG(iVar6), GH_ARG(0x1c), GH_ARG(0x206));
      if (*piVar2 < 0x1f) goto LAB_0042a29c;
      iVar5 = *piVar2 + 5;
      iVar19 = *(int *)(self + 0x13e14);
      iVar8 = *(int *)(self + 0x13e04) + *(int *)(self + (gh_long)iVar5 * 4 + 0x8d54c);
      iVar12 = *(int *)(self + 0x13e00);
      iVar13 = *(int *)(self + (gh_long)iVar5 * 4 + 0x8d644) + *(int *)(self + 0x13e08);
      iVar5 = *(int *)(self + (gh_long)iVar5 * 4 + 0x8d73c) + *(int *)(self + 0x13e0c);
      param_4 = 0x17;
    }
    iVar7 = 0x1c;
    fVar17 = (float)iVar19 / 10.0;
    iVar8 = iVar8 + 100;
    param_5 = param_5 + 0x1e;
    iVar19 = 0x205;
  }
LAB_0042a298:
  bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar12), GH_ARG(0), GH_ARG(1), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(iVar8), GH_ARG(iVar13), GH_ARG(iVar5), GH_ARG(param_4), GH_ARG(fVar17), GH_ARG(iVar6), GH_ARG(iVar7), GH_ARG(iVar19));
LAB_0042a29c:
  *(undefined4 *)(self + 0x32c8a4) = 1;
  if (*(gh_long *)(lVar4 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
