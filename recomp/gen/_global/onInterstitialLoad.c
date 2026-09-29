/* onInterstitialLoad @ 0x0039c740 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long onInterstitialLoad(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  if ((DAT_00d23c48 != 0) && (*(char *)(DAT_00d23c48 + 0xb04) != '\0')) {
    *(undefined1 *)(DAT_00d23c48 + 0xb06) = 1;
  }
  return 0;
  return 0;
}
