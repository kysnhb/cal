/* std::function<void(cocos2d::Ref*)>::operator__0047c274 @ 0x0047c274 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
function_void_cocos2d__Ref___ * std__function_void_cocos2d__Ref_____operator__0047c274(uint64_t gh_a0, uint64_t gh_a1)
{
  function_void_cocos2d__Ref___ * this = (function_void_cocos2d__Ref___ *)(uintptr_t)gh_a0;
  function * param_1 = (function *)(uintptr_t)gh_a1;

  gh_long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define local_70 (*(undefined8 *)(gh_fb - 0x70))
#define uStack_68 (*(undefined8 *)(gh_fb - 0x68))
#define local_60 (*(code **)(gh_fb - 0x60))
#define uStack_58 (*(undefined8 *)(gh_fb - 0x58))
#define local_50 (*(undefined8 *)(gh_fb - 0x50))
#define uStack_48 (*(undefined8 *)(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar1 = tpidr_el0;
  local_38 = *(gh_long *)(lVar1 + 0x28);
  local_60 = (code *)0x0;
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_70,param_1,2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  uVar5 = *(undefined8 *)(this + 8);
  uVar4 = *(undefined8 *)this;
  local_60 = *(code **)(this + 0x10);
  uStack_58 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 8) = uStack_68;
  *(undefined8 *)this = local_70;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar2;
  local_70 = uVar4;
  uStack_68 = uVar5;
  if (local_60 != (code *)0x0) {
    (*local_60)(&local_70,&local_70,3);
  }
  if (*(gh_long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    
  __stack_chk_fail();
}

