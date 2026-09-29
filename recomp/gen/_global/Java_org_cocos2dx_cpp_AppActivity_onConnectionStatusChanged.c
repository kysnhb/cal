/* Java_org_cocos2dx_cpp_AppActivity_onConnectionStatusChanged @ 0x004761e0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
gh_long Java_org_cocos2dx_cpp_AppActivity_onConnectionStatusChanged(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  int param_3 = (int)gh_a2;

  if (DAT_00d23c48 != (undefined *)0x0) {
    bzStateGame__onConnectionStatusChanged_00474190(GH_ARG(DAT_00d23c48), GH_ARG(param_3));
    return 0;
  }
  return 0;
  return 0;
}
