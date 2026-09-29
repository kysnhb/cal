/* bzStateGame::loadInterstitial @ 0x0039d4d0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__loadInterstitial(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  *(int *)(self + 0xaf0) = param_2;
  self[0xb04] = 1;
  InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + (gh_long)param_2 * 8 + 0x870)));
  return 0;
  return 0;
}
