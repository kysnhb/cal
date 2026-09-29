/* FUN_003af38c @ 0x003af38c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long FUN_003af38c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gh_a0;
  char * param_2 = (char *)(uintptr_t)gh_a1;
  gh_long * param_3 = (gh_long *)(uintptr_t)gh_a2;

  gh_long lVar1;
  size_t sVar2;
  gh_long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(gh_long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  *param_1 = &DAT_00d40318;
  FUN_009d537c(GH_ARG(param_1), GH_ARG(*(gh_long *)(*param_3 + -0x18) + sVar2));
  FUN_009d5ac8(GH_ARG(param_1), GH_ARG(param_2), GH_ARG(sVar2));
  FUN_009d5908(GH_ARG(param_1), GH_ARG(param_3));
  if (*(gh_long *)(lVar1 + 0x28) == lVar3) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
