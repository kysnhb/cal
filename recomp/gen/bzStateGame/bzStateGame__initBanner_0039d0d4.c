/* bzStateGame::initBanner_0039d0d4 @ 0x0039d0d4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__initBanner_0039d0d4(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  BannerInterface *this;
  gh_long lVar2;
  uint64_t gh_frame64[13] = {0};   /* 원작 스택 프레임 (SP-0x50 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x50;
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar1 = tpidr_el0;
  local_48 = *(gh_long *)(lVar1 + 0x28);
  this = operator_new(8);
  BannerInterface__BannerInterface_0047fb04(GH_ARG(this), GH_ARG("4344e7c4-eb4a-41c0-a189-b9b373cd52d4"));
  *(BannerInterface **)(self + 0x820) = this;
  BannerInterface__setInterval_0047fb08(GH_ARG((int)this));
  cocos2d__Device__getDPI_00487800();
  lVar2 = cocos2d__Director__getInstance_005dff80();
  gh_vcall(GH_ARG(*(gh_long **)(lVar2 + 0x148)), 0x48, GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  cocos2d__Device__getDPI_00487800();
  BannerInterface__load_0047fb10(GH_ARG((int)*(undefined8 *)(self + 0x820)), GH_ARG(0));
  BannerInterface__setOnLoadCallback_0047fb40(GH_ARG(*(_func_void_char_ptr **)(self + 0x820)));
  BannerInterface__setOnFailCallback_0047fb44(GH_ARG(*(_func_void_char_ptr **)(self + 0x820)));
  if (*(gh_long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
