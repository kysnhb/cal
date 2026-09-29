/* Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardTitleMenu @ 0x0039aee4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef DAT_00a533c0
#define DAT_00a533c0 (*(undefined1 *)IMG(0x00a533c0))
#undef DAT_00a533e8
#define DAT_00a533e8 (*(undefined1 *)IMG(0x00a533e8))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeGetRewardTitleMenu(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  char param_3 = (char)gh_a2;

  int iVar1;
  int iVar2;
  undefined *self;
  
  self = DAT_00d23c48;
  if ((param_3 == '\x01') && (DAT_00d23c48 != (undefined *)0x0)) {
    iVar2 = *(int *)(&DAT_00a533e8 + (gh_long)*(int *)(DAT_00d23c48 + 0x1a1c) * 4);
    bzStateGame__Gold_003acc54(GH_ARG(DAT_00d23c48), GH_ARG(*(int *)(&DAT_00a533c0 + (gh_long)*(int *)(DAT_00d23c48 + 0x1a1c) * 4)));
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(iVar2));
    iVar2 = *(int *)(self + 0x1a28) + 1;
    *(int *)(self + 0x1a24) = *(int *)(self + 0x1a24) + 1;
    iVar1 = 9;
    if (*(int *)(self + 0x1a28) < 0x31) {
      iVar1 = iVar2 / 5;
    }
    *(int *)(self + 0x1a28) = iVar2;
    *(int *)(self + 0x1a1c) = iVar1;
    bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
    self[0xb96] = 1;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    return 0;
  }
  return 0;
  return 0;
}
