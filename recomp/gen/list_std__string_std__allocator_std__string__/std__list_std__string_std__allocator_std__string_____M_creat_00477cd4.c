/* std::list<std::string,std::allocator<std::string>>::_M_create_node_std__string_const___00477cd4 @ 0x00477cd4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
_List_node * std__list_std__string_std__allocator_std__string_____M_create_node_std__string_const___00477cd4(uint64_t gh_a0, uint64_t gh_a1)
{
  list_std__string_std__allocator_std__string__ * this = (list_std__string_std__allocator_std__string__ *)(uintptr_t)gh_a0;
  string * param_1 = (string *)(uintptr_t)gh_a1;

  _List_node *p_Var1;
  
  p_Var1 = operator_new(0x18);
  *(undefined8 *)p_Var1 = 0;
  *(undefined8 *)(p_Var1 + 8) = 0;
  FUN_009d881c(GH_ARG(p_Var1 + 0x10), GH_ARG(param_1));
  return p_Var1;
}

