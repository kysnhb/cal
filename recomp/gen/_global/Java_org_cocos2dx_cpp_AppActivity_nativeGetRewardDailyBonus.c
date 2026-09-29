/* Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardDailyBonus @ 0x0039acbc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef DAT_00a534f8
#define DAT_00a534f8 (*(undefined1 *)IMG(0x00a534f8))
#undef DAT_00a53514
#define DAT_00a53514 (*(undefined1 *)IMG(0x00a53514))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardDailyBonus(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  char param_3 = (char)gh_a2;

  undefined *self;
  
  if (param_3 != '\x01') {
    return 0;
  }
  if (DAT_00d23c48 != (undefined *)0x0) {
    cocos2d__log_005d21e4(GH_ARG("Bump tbzStateGame Not Null -- DailyBonus"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    self = DAT_00d23c48;
    bzStateGame__Gold_003acc54(GH_ARG(DAT_00d23c48), GH_ARG(*(int *)(&DAT_00a534f8 + (gh_long)*(int *)(DAT_00d23c48 + 0x32aacc) * 4)));
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(&DAT_00a53514 + (gh_long)*(int *)(self + 0x32aacc) * 4)));
    self[0xb94] = 0;
    *(undefined4 *)(self + 0x32aac8) = 1;
    *(undefined4 *)(self + 0x32aaa8) = 2;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__GetDailyReward_SaveTime_003fc798(GH_ARG(self));
    return 0;
  }
  cocos2d__log_005d21e4(GH_ARG("Bump tbzStateGame Null"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
