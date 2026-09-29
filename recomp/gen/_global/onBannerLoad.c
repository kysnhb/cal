/* onBannerLoad @ 0x0039ceac — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
char * onBannerLoad(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  gh_long lVar1;
  char *pcVar2;
  
  if (DAT_00d23c48 != 0) {
    param_1 = (char *)cocos2d__log_005d21e4(GH_ARG("onBannerLoad"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar1 = DAT_00d23c48;
    pcVar2 = (char *)(DAT_00d23c48 + 0xb03);
    *(undefined1 *)(DAT_00d23c48 + 0xb02) = 1;
    if (*pcVar2 == '\0') {
      *(undefined1 *)(lVar1 + 0xb03) = 1;
      pcVar2 = (char *)BannerInterface__hideBannerView_0047fb18();
      return pcVar2;
    }
  }
  return param_1;
}

