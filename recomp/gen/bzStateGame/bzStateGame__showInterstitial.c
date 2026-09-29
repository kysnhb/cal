/* bzStateGame::showInterstitial @ 0x0039d4e8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__showInterstitial(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  bool bVar1;
  ulong uVar2;
  
  uVar2 = InterstitialInterface__isLoaded_0047fc3c(GH_ARG(*(InterstitialInterface **)(self + (gh_long)param_2 * 8 + 0x870)));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    InterstitialInterface__show_0047fc34(GH_ARG(*(InterstitialInterface **)(self + (gh_long)param_2 * 8 + 0x870)));
  }
  self[0xb89] = bVar1;
  return 0;
  return 0;
}
