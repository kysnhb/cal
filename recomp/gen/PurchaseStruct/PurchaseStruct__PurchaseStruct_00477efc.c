/* PurchaseStruct::PurchaseStruct_00477efc @ 0x00477efc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long PurchaseStruct__PurchaseStruct_00477efc(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  gh_long lVar1;
  gh_long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(gh_long *)(lVar1 + 0x28);
  FUN_009d881c(GH_ARG(0), GH_ARG(0));
  FUN_009d881c(GH_ARG(self + 8), GH_ARG(param_2 + 8));
  FUN_009d881c(GH_ARG(self + 0x10), GH_ARG(param_2 + 0x10));
  FUN_009d881c(GH_ARG(self + 0x18), GH_ARG(param_2 + 0x18));
  FUN_009d881c(GH_ARG(self + 0x20), GH_ARG(param_2 + 0x20));
  FUN_009d881c(GH_ARG(self + 0x28), GH_ARG(param_2 + 0x28));
  FUN_009d881c(GH_ARG(self + 0x30), GH_ARG(param_2 + 0x30));
  if (*(gh_long *)(lVar1 + 0x28) == lVar2) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
