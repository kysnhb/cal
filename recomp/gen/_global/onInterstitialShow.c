/* onInterstitialShow @ 0x0039c760 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long onInterstitialShow(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  gh_long lVar1;
  
  lVar1 = DAT_00d23c48;
  if (DAT_00d23c48 != 0) {
    *(undefined1 *)(DAT_00d23c48 + 0xb06) = 0;
    *(undefined4 *)(lVar1 + 0xba8) = 0;
  }
  return 0;
  return 0;
}
