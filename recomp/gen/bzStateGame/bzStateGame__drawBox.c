/* bzStateGame::drawBox @ 0x003b4274 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__drawBox(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  int param_8 = (int)gh_a7;
  float param_9 = gh_b2f(gh_a8);

  gh_long lVar1;
  undefined8 uVar2;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define local_70 (*(ulong *)(gh_fb - 0x70))
#define uStack_68 (*(ulong *)(gh_fb - 0x68))
  Rect aRStack_58 [16];
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar1 = tpidr_el0;
  local_48 = *(gh_long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(self + 0xc38);
  cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_58), GH_ARG((float)param_2), GH_ARG((float)param_3), GH_ARG((float)param_4), GH_ARG((float)param_5));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG((float)param_6 / 255.0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG(param_9));
  kDraw__drawRect_00479ae8(GH_ARG(local_70), GH_ARG(local_70 >> 0x20), GH_ARG(uStack_68 & 0xffffffff), GH_ARG(uStack_68 >> 0x20), GH_ARG(uVar2), GH_ARG(aRStack_58));
  if (*(gh_long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
