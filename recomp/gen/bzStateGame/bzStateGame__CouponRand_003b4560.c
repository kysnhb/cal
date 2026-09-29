/* bzStateGame::CouponRand_003b4560 @ 0x003b4560 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
uint bzStateGame__CouponRand_003b4560(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  uint uVar1;
  gh_long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  mersenne_twister_engine *pmVar7;
  gh_long lVar8;
  uint uVar9;
  int *piVar10;
  uint64_t gh_frame64[13] = {0};   /* 원작 스택 프레임 (SP-0x50 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x50;
#define local_50 (*(undefined8 *)(gh_fb - 0x50))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar2 = tpidr_el0;
  local_48 = *(gh_long *)(lVar2 + 0x28);
  piVar10 = (int *)(self + 0x32c048);
  if (*piVar10 == 0) {
    uVar9 = 0;
  }
  else {
    piVar10 = (int *)(self + 0x32c058);
    if (*piVar10 == 0) {
      uVar9 = 4;
    }
    else {
      piVar10 = (int *)(self + 0x32c068);
      if (*piVar10 == 0) {
        uVar9 = 8;
      }
      else {
        piVar10 = (int *)(self + 0x32c078);
        if (*piVar10 == 0) {
          uVar9 = 0xc;
        }
        else {
          piVar10 = (int *)(self + 0x32c088);
          if (*piVar10 == 0) {
            uVar9 = 0x10;
          }
          else {
            piVar10 = (int *)(self + 0x32c098);
            if (*piVar10 == 0) {
              uVar9 = 0x14;
            }
            else {
              piVar10 = (int *)(self + 0x32c0a8);
              if (*piVar10 == 0) {
                uVar9 = 0x18;
              }
              else {
                piVar10 = (int *)(self + 0x32c0b8);
                if (*piVar10 == 0) {
                  uVar9 = 0x1c;
                }
                else {
                  piVar10 = (int *)(self + 0x32c0c8);
                  if (*piVar10 == 0) {
                    uVar9 = 0x20;
                  }
                  else {
                    piVar10 = (int *)(self + 0x32c0d8);
                    if (*piVar10 != 0) {
                      uVar9 = 0xfffffff7;
                      goto LAB_003b48d4;
                    }
                    uVar9 = 0x24;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar6 = *(int *)(self + 0x1ae8);
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar3 = 9;
  }
  else {
    local_50 = 0x800000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar3 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar6 = *(int *)(self + 0x1ae8);
    iVar3 = iVar3 + 1;
  }
  iVar5 = 36000000;
  iVar4 = iVar3 * 100000000;
  *piVar10 = iVar4;
  if (((0x3d < iVar6 - 0xdU) || ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
     && (*(int *)(self + 0xba8) != 1)) {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar4 = *piVar10;
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 * 1000000 + 1000000;
  }
  iVar4 = iVar4 + iVar5;
  iVar5 = 360000;
  *piVar10 = iVar4;
  if (((0x3d < iVar6 - 0xdU) || ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0))
     && (*(int *)(self + 0xba8) != 1)) {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar4 = *piVar10;
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 * 10000 + 10000;
  }
  iVar4 = iVar4 + iVar5;
  *piVar10 = iVar4;
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar5 = 0xe10;
  }
  else {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar4 = *piVar10;
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 * 100 + 100;
  }
  iVar4 = iVar4 + iVar5;
  *piVar10 = iVar4;
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar5 = 0x24;
  }
  else {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar4 = *piVar10;
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 + 1;
  }
  *piVar10 = iVar4 + iVar5;
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar4 = 0xe10;
  }
  else {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar4 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar6 = *(int *)(self + 0x1ae8);
    iVar4 = iVar4 * 100 + 100;
  }
  piVar10 = (int *)(self + (ulong)(uVar9 | 1) * 4 + 0x32c048);
  *piVar10 = iVar4;
  if (((iVar6 - 0xdU < 0x3e) && ((1LL << ((ulong)(iVar6 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
     || (*(int *)(self + 0xba8) == 1)) {
    iVar5 = 0x24;
  }
  else {
    local_50 = 0x2300000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar5 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar4 = *piVar10;
    iVar6 = *(int *)(self + 0x1ae8);
    iVar5 = iVar5 + 1;
  }
  uVar1 = iVar6 - 0xd;
  *piVar10 = iVar4 + iVar5;
  if (iVar3 < 8) {
    if (((uVar1 < 0x3e) && ((1LL << ((ulong)uVar1 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar6 = 8000;
    }
    else {
      local_50 = 0x1f3f00000000;
      pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
      iVar6 = iVar6 + 3000;
    }
  }
  else if (((uVar1 < 0x3e) && ((1LL << ((ulong)uVar1 & 0x3f) & 0x3200000000000081U) != 0)) ||
          (*(int *)(self + 0xba8) == 1)) {
    iVar6 = 2000;
  }
  else {
    local_50 = 0x7cf00000000;
    pmVar7 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar7), GH_ARG((param_type *)&local_50));
    iVar6 = iVar6 + 1000;
  }
  lVar8 = (ulong)(uVar9 | 3) * 4;
  *(int *)(self + (ulong)(uVar9 | 2) * 4 + 0x32c048) = iVar6;
  *(undefined4 *)(self + lVar8 + 0x32c048) = 0;
  iVar6 = *(int *)(self + 0x32bb98);
  *(int *)(self + lVar8 + 0x32c048) = iVar6 * 10000;
  iVar6 = iVar6 * 10000 + *(int *)(self + 0x32bb9c) * 100;
  *(int *)(self + lVar8 + 0x32c048) = iVar6;
  *(int *)(self + lVar8 + 0x32c048) = iVar6 + *(int *)(self + 0x32bba0);
LAB_003b48d4:
  if (*(gh_long *)(lVar2 + 0x28) == local_48) {
    return uVar9;
  }
                    
  __stack_chk_fail();
}

