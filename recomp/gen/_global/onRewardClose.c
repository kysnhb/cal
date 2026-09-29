/* onRewardClose @ 0x0039ce44 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long onRewardClose(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  cocos2d__log_005d21e4(GH_ARG("onRewardClose %s"), GH_ARG(param_1), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (DAT_00d23c48 != 0) {
    *(undefined4 *)(DAT_00d23c48 + 0xba8) = 0;
  }
  return 0;
  return 0;
}
