/* bzStateGame::loadBanner @ 0x0039d1f8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__loadBanner(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  gh_long lVar2;
  uint64_t gh_frame64[11] = {0};   /* 원작 스택 프레임 (SP-0x40 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x40;
#define auStack_40 (*(undefined1 (*)[8])(gh_fb - 0x40))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar1 = tpidr_el0;
  local_38 = *(gh_long *)(lVar1 + 0x28);
  cocos2d__Device__getDPI_00487800();
  lVar2 = cocos2d__Director__getInstance_005dff80();
  gh_vcall(GH_ARG(*(gh_long **)(lVar2 + 0x148)), 0x48, GH_ARG(auStack_40), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  cocos2d__Device__getDPI_00487800();
  BannerInterface__load_0047fb10(GH_ARG((int)*(undefined8 *)(self + 0x820)), GH_ARG(0));
  if (*(gh_long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
