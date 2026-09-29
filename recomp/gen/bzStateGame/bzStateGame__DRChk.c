/* bzStateGame::DRChk @ 0x0043a548 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__DRChk(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  gh_long lVar1;
  uint uVar2;
  mersenne_twister_engine *pmVar3;
  uint64_t gh_frame64[9] = {0};   /* 원작 스택 프레임 (SP-0x30 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x30;
#define local_30 (*(undefined8 *)(gh_fb - 0x30))
#define local_28 (*(gh_long *)(gh_fb - 0x28))
  
  lVar1 = tpidr_el0;
  local_28 = *(gh_long *)(lVar1 + 0x28);
  if (param_3 == 2) {
    local_30 = 0x100000000;
    pmVar3 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    uVar2 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_30), GH_ARG(pmVar3), GH_ARG((param_type *)&local_30));
  }
  else if (param_3 == 1) {
    uVar2 = (uint)(param_4 < param_5);
  }
  else if (param_3 == 0) {
    uVar2 = (uint)(param_5 <= param_4);
  }
  else {
    uVar2 = 0;
  }
  if (*(gh_long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    
  __stack_chk_fail(uVar2);
  return 0;
}
