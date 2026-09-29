/* FUN_009c07ec @ 0x009c07ec — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long FUN_009c07ec(uint64_t gh_a0, uint64_t gh_a1)
{
  gh_long param_1 = (gh_long)gh_a0;
  gh_long * param_2 = (gh_long *)(uintptr_t)gh_a1;

  gh_long lVar1;
  gh_long lVar2;
  
  lVar1 = *(gh_long *)(param_1 + 0x10);
  lVar2 = *(gh_long *)(lVar1 + 0x18);
  *(gh_long *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(gh_long *)(lVar2 + 8) = param_1;
  }
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  if (*param_2 != param_1) {
    lVar2 = *(gh_long *)(param_1 + 8);
    if (*(gh_long *)(lVar2 + 0x18) == param_1) {
      *(gh_long *)(lVar2 + 0x18) = lVar1;
    }
    else {
      *(gh_long *)(lVar2 + 0x10) = lVar1;
    }
    *(gh_long *)(lVar1 + 0x18) = param_1;
    *(gh_long *)(param_1 + 8) = lVar1;
    return 0;
  }
  *param_2 = lVar1;
  *(gh_long *)(lVar1 + 0x18) = param_1;
  *(gh_long *)(param_1 + 8) = lVar1;
  return 0;
  return 0;
}
