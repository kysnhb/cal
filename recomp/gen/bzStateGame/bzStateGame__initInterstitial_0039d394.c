/* bzStateGame::initInterstitial_0039d394 @ 0x0039d394 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__initInterstitial_0039d394(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  InterstitialInterface *pIVar1;
  
  pIVar1 = operator_new(8);
  InterstitialInterface__InterstitialInterface_0047fbc0(GH_ARG(pIVar1), GH_ARG(self + 0x898));
  *(InterstitialInterface **)(self + 0x870) = pIVar1;
  pIVar1 = operator_new(8);
  InterstitialInterface__InterstitialInterface_0047fbc0(GH_ARG(pIVar1), GH_ARG(self + 0x8ca));
  *(InterstitialInterface **)(self + 0x878) = pIVar1;
  pIVar1 = operator_new(8);
  InterstitialInterface__InterstitialInterface_0047fbc0(GH_ARG(pIVar1), GH_ARG(self + 0x8fc));
  *(InterstitialInterface **)(self + 0x880) = pIVar1;
  InterstitialInterface__setOnLoadCallback_0047fc58(GH_ARG(*(InterstitialInterface **)(self + 0x870)), GH_ARG(onInterstitialLoad));
  InterstitialInterface__setOnShowCallback_0047fc64(GH_ARG(*(InterstitialInterface **)(self + 0x870)), GH_ARG(onInterstitialShow));
  InterstitialInterface__setOnFailCallback_0047fc70(GH_ARG(*(InterstitialInterface **)(self + 0x870)), GH_ARG(InterstitialFail));
  InterstitialInterface__setOnCloseCallback_0047fc7c(GH_ARG(*(InterstitialInterface **)(self + 0x870)), GH_ARG(InterstitialClose));
  InterstitialInterface__setOnLoadCallback_0047fc58(GH_ARG(*(InterstitialInterface **)(self + 0x878)), GH_ARG(onInterstitialLoad));
  InterstitialInterface__setOnShowCallback_0047fc64(GH_ARG(*(InterstitialInterface **)(self + 0x878)), GH_ARG(onInterstitialShow));
  InterstitialInterface__setOnFailCallback_0047fc70(GH_ARG(*(InterstitialInterface **)(self + 0x878)), GH_ARG(InterstitialFail));
  InterstitialInterface__setOnCloseCallback_0047fc7c(GH_ARG(*(InterstitialInterface **)(self + 0x878)), GH_ARG(InterstitialClose));
  InterstitialInterface__setOnLoadCallback_0047fc58(GH_ARG(*(InterstitialInterface **)(self + 0x880)), GH_ARG(onInterstitialLoad));
  InterstitialInterface__setOnShowCallback_0047fc64(GH_ARG(*(InterstitialInterface **)(self + 0x880)), GH_ARG(onInterstitialShow));
  InterstitialInterface__setOnFailCallback_0047fc70(GH_ARG(*(InterstitialInterface **)(self + 0x880)), GH_ARG(InterstitialFail));
  InterstitialInterface__setOnCloseCallback_0047fc7c(GH_ARG(*(InterstitialInterface **)(self + 0x880)), GH_ARG(InterstitialClose));
  return 0;
  return 0;
}
