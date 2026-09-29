/* std::list<std::string,std::allocator<std::string>>::list_0039c618 @ 0x0039c618 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long std__list_std__string_std__allocator_std__string____list_0039c618(uint64_t gh_a0, uint64_t gh_a1)
{
  list_std__string_std__allocator_std__string__ * this = (list_std__string_std__allocator_std__string__ *)(uintptr_t)gh_a0;
  list * param_1 = (list *)(uintptr_t)gh_a1;

  gh_long lVar1;
  _List_node *p_Var2;
  gh_long lVar3;
  gh_long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(gh_long *)(lVar1 + 0x28);
  *(list_std__string_std__allocator_std__string__ **)this = this;
  *(list_std__string_std__allocator_std__string__ **)(this + 8) = this;
  for (plVar4 = *(gh_long **)param_1; (gh_long *)param_1 != plVar4; plVar4 = (gh_long *)*plVar4) {
    p_Var2 = std__list_std__string_std__allocator_std__string_____M_create_node_std__string_const___00477cd4(GH_ARG(this), GH_ARG((string *)(plVar4 + 2)));
    FUN_0099dbb8(GH_ARG(p_Var2), GH_ARG(this));
  }
  if (*(gh_long *)(lVar1 + 0x28) == lVar3) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
