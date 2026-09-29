/* bzStateGame::GRandom @ 0x003b4b24 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__GRandom(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  gh_long lVar1;
  int iVar2;
  mersenne_twister_engine *pmVar3;
  uint64_t gh_frame64[9] = {0};   /* 원작 스택 프레임 (SP-0x30 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x30;
#define local_30 (*(undefined4 *)(gh_fb - 0x30))
#define iStack_2c (*(int *)(gh_fb - 0x2c))
#define local_28 (*(gh_long *)(gh_fb - 0x28))
  
  lVar1 = tpidr_el0;
  local_28 = *(gh_long *)(lVar1 + 0x28);
  if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
      ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
     (*(int *)(self + 0xba8) != 1)) {
    iStack_2c = param_2 + -1;
    local_30 = 0;
    pmVar3 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar2 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_30), GH_ARG(pmVar3), GH_ARG((param_type *)&local_30));
    param_2 = iVar2 + param_3;
  }
  if (*(gh_long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    
  __stack_chk_fail();
}

