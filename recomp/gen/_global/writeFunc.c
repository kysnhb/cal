/* writeFunc @ 0x0047e294 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
size_t writeFunc(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  uint8_t * param_1 = (uint8_t *)(uintptr_t)gh_a0;
  ulong param_2 = (ulong)gh_a1;
  ulong param_3 = (ulong)gh_a2;
  CurlResData * param_4 = (CurlResData *)(uintptr_t)gh_a3;

  void *pvVar1;
  size_t __n;
  gh_long lVar2;
  
  __n = param_3 * param_2;
  pvVar1 = realloc(*(void **)param_4,__n + *(gh_long *)(param_4 + 8) + 1);
  *(void **)param_4 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    __n = 0;
  }
  else {
    lVar2 = *(gh_long *)(param_4 + 8);
    memcpy((void *)((gh_long)pvVar1 + lVar2),param_1,__n);
    lVar2 = lVar2 + __n;
    *(gh_long *)(param_4 + 8) = lVar2;
    *(undefined1 *)((gh_long)pvVar1 + lVar2) = 0;
  }
  return __n;
}

