/* bzStateGame::GetRewardAdFirstAidKit_0039b068 @ 0x0039b068 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GetRewardAdFirstAidKit_0039b068(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  uint uVar1;
  int in_w4 = 0;
  undefined4 uVar2;
  
  cocos2d__log_005d21e4(GH_ARG("-TEST- GetRewardAdFirstAidKit"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar1 = *(uint *)(self + 0x32c9ac);
  if ((uVar1 | 2) == 2) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 0x16;
  }
  *(undefined4 *)(self + 0x1ae8) = uVar2;
  if (uVar1 == 1) {
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(0x19));
  }
  else {
    bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba94) * 5));
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + 0x32ba98) * 5));
    in_w4 = 1;
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x19), GH_ARG(0), GH_ARG(0), GH_ARG(1));
    if (uVar1 != 2) goto LAB_0039b130;
  }
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x15), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
LAB_0039b130:
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  return 0;
  return 0;
}
