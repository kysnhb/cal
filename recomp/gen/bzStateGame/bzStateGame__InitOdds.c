/* bzStateGame::InitOdds @ 0x0046bc68 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__InitOdds(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  gh_long lVar1;
  int iVar2;
  int iVar3;
  mersenne_twister_engine *pmVar4;
  undefined8 uVar5;
  int iVar6;
  uint64_t gh_frame64[13] = {0};   /* 원작 스택 프레임 (SP-0x50 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x50;
#define local_50 (*(undefined8 *)(gh_fb - 0x50))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar1 = tpidr_el0;
  local_48 = *(gh_long *)(lVar1 + 0x28);
  local_50 = 0x1300000000;
  pmVar4 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
  iVar2 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar4), GH_ARG((param_type *)&local_50));
  if (0 < param_2) {
    iVar6 = 0;
    do {
      local_50 = 0x6300000000;
      pmVar4 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar3 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_50), GH_ARG(pmVar4), GH_ARG((param_type *)&local_50));
      if ((iVar2 + 5 <= iVar3) && (iVar3 <= iVar2 + 10)) {
        uVar5 = 1;
        goto LAB_0046bd10;
      }
      iVar6 = iVar6 + 5;
    } while (iVar6 < param_2);
  }
  uVar5 = 0;
LAB_0046bd10:
  if (*(gh_long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail(uVar5);
  return 0;
}
