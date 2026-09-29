/* bzStateGame::Gvib @ 0x0041fe7c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a534cc
#define DAT_00a534cc (*(undefined4 *)IMG(0x00a534cc))
gh_long bzStateGame__Gvib(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(self + 0x32ba38);
  iVar2 = *piVar1;
  if (9 < iVar2) {
    iVar2 = 4;
    *piVar1 = 4;
  }
  *(undefined4 *)(self + 0x32ba40) = (&DAT_00a534cc)[iVar2];
  *piVar1 = iVar2 + -1;
  return 0;
  return 0;
}
