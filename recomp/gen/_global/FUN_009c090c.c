/* FUN_009c090c @ 0x009c090c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long FUN_009c090c(uint64_t gh_a0)
{
  int * param_1 = (int *)(uintptr_t)gh_a0;

  bool bVar1;
  gh_long lVar2;
  gh_long lVar3;
  
  if ((*param_1 == 0) && (param_1 == *(int **)(*(gh_long *)(param_1 + 2) + 8))) {
    return *(gh_long *)(param_1 + 6);
  }
  lVar3 = *(gh_long *)(param_1 + 4);
  if (*(gh_long *)(param_1 + 4) != 0) {
    do {
      lVar2 = lVar3;
      lVar3 = *(gh_long *)(lVar2 + 0x18);
    } while (lVar3 != 0);
    return lVar2;
  }
  lVar3 = *(gh_long *)(param_1 + 2);
  if (param_1 != *(int **)(lVar3 + 0x10)) {
    return lVar3;
  }
  do {
    lVar2 = *(gh_long *)(lVar3 + 8);
    bVar1 = *(gh_long *)(lVar2 + 0x10) == lVar3;
    lVar3 = lVar2;
  } while (bVar1);
  return lVar2;
}

