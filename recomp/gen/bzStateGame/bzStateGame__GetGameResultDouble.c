/* bzStateGame::GetGameResultDouble @ 0x0039ae84 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GetGameResultDouble(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  cocos2d__log_005d21e4(GH_ARG("-TEST- GetGameResultDouble"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  cocos2d__log_005d21e4(GH_ARG("GetGameResultDouble Gold == %d"), GH_ARG((ulong)*(uint *)(self + 0x32aad0)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  self[0x32aad4] = 1;
  bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + 0x32aad0)));
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  return 0;
  return 0;
}
