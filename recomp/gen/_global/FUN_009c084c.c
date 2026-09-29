/* FUN_009c084c @ 0x009c084c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long FUN_009c084c(uint64_t gh_a0)
{
  gh_long param_1 = (gh_long)gh_a0;

  gh_long lVar1;
  gh_long lVar2;
  
  lVar2 = *(gh_long *)(param_1 + 0x18);
  if (*(gh_long *)(param_1 + 0x18) != 0) {
    do {
      lVar1 = lVar2;
      lVar2 = *(gh_long *)(lVar1 + 0x10);
    } while (lVar2 != 0);
    return lVar1;
  }
  lVar2 = *(gh_long *)(param_1 + 8);
  if (param_1 == *(gh_long *)(lVar2 + 0x18)) {
    do {
      lVar1 = lVar2;
      lVar2 = *(gh_long *)(lVar1 + 8);
    } while (*(gh_long *)(lVar2 + 0x18) == lVar1);
    if (lVar2 == *(gh_long *)(lVar1 + 0x18)) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  return lVar2;
}

