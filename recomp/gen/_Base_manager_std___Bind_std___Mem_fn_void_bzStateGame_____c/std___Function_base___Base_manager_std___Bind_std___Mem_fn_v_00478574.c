/* std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void(bzStateGame::*)(cocos2d::Ref*)>(bzStateGame*,std::_Placeholder<1>)>>::_M_manager @ 0x00478574 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef typeinfo
#define typeinfo (*(uint8_t * *)IMG(0x00cc2b90))
static undefined1 _Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_____typeinfo;
undefined8 std___Function_base___Base_manager_std___Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_______M_manager(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  gh_long * param_1 = (gh_long *)(uintptr_t)gh_a0;
  gh_long * param_2 = (gh_long *)(uintptr_t)gh_a1;
  undefined4 param_3 = (undefined4)gh_a2;

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  switch(param_3) {
  case 0:
    *param_1 = (gh_long)&_Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_____typeinfo;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    puVar1 = operator_new(0x18);
    puVar2 = (undefined8 *)*param_2;
    puVar1[2] = puVar2[2];
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    *param_1 = (gh_long)puVar1;
    break;
  case 3:
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete((void *)*param_1);
    }
  }
  return 0;
}

