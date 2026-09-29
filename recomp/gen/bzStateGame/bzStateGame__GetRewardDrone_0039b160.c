/* bzStateGame::GetRewardDrone_0039b160 @ 0x0039b160 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GetRewardDrone_0039b160(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  int in_w4 = 0;
  undefined4 uVar2;
  
  cocos2d__log_005d21e4(GH_ARG("-TEST- GetRewardDrone"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(int *)(self + 0xc28) == 0) {
    if ((*(uint *)(self + 0x32c9ac) | 2) == 2) {
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0x16;
    }
    *(undefined4 *)(self + 0x1ae8) = uVar2;
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x15), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
  }
  else {
    *(undefined4 *)(self + 0x1ae8) = 0x14;
  }
  if (*(int *)(self + 0xbd4) == 1) {
    iVar1 = 600;
  }
  else {
    iVar1 = 200;
  }
  bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(iVar1));
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  *(undefined4 *)(self + 0xc04) = 0;
  *(undefined8 *)(self + 0xbd0) = 0;
  return 0;
  return 0;
}
