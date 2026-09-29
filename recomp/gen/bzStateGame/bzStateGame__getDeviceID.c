/* bzStateGame::getDeviceID @ 0x003a3970 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__getDeviceID(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  char *__s;
  size_t sVar1;
  
  __s = self + 0xd38;
  kScene__getSysInfo_0047e070(GH_ARG((kScene *)self), GH_ARG(1), GH_ARG(__s));
  sVar1 = strlen(__s);
  FUN_009d7480(GH_ARG(param_2), GH_ARG(__s), GH_ARG(sVar1));
  cocos2d__log_005d21e4(GH_ARG(" deviceID %s "), GH_ARG(*(undefined8 *)param_2), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
