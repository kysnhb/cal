/* onBannerFail @ 0x0039cf0c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
char * onBannerFail(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  if (DAT_00d23c48 != 0) {
    param_1 = (char *)cocos2d__log_005d21e4(GH_ARG("onBannerFail"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    *(undefined1 *)(DAT_00d23c48 + 0xb02) = 0;
  }
  return param_1;
}

