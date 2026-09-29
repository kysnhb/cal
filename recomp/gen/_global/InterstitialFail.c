/* InterstitialFail @ 0x0039c790 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long InterstitialFail(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  gh_long lVar1;
  
  cocos2d__log_005d21e4(GH_ARG("InterstitialFail = %s"), GH_ARG(param_1), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  lVar1 = DAT_00d23c48;
  if (DAT_00d23c48 != 0) {
    *(undefined1 *)(DAT_00d23c48 + 0xb06) = 0;
    *(undefined4 *)(lVar1 + 0xba8) = 0;
  }
  return 0;
  return 0;
}
