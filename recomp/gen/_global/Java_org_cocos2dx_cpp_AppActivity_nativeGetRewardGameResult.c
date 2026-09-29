/* Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardGameResult @ 0x0039ae04 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardGameResult(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  char param_3 = (char)gh_a2;

  undefined *self;
  
  self = DAT_00d23c48;
  if ((param_3 == '\x01') && (DAT_00d23c48 != (undefined *)0x0)) {
    cocos2d__log_005d21e4(GH_ARG("-TEST- GetGameResultDouble"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    cocos2d__log_005d21e4(GH_ARG("GetGameResultDouble Gold == %d"), GH_ARG((ulong)*(uint *)(self + 0x32aad0)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    self[0x32aad4] = 1;
    bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + 0x32aad0)));
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    return 0;
  }
  return 0;
  return 0;
}
