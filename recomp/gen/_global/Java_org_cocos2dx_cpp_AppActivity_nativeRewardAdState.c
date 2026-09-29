/* Java_org_cocos2dx_cpp_AppActivity_nativeRewardAdState @ 0x0039b3ec — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeRewardAdState(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  char param_3 = (char)gh_a2;
  undefined4 param_4 = (undefined4)gh_a3;

  if ((param_3 == '\x01') && (DAT_00d23c48 != 0)) {
    *(undefined4 *)(DAT_00d23c48 + 0xba8) = param_4;
  }
  return 0;
  return 0;
}
