/* bzStateGame::OpenFirstAidKit @ 0x00438f1c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__OpenFirstAidKit(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  gh_long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(gh_long *)(self + 3000) - *(gh_long *)(self + 0xbb0);
  if (lVar1 != 0) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(*(gh_long *)(self + 0xbb0) + 8);
    do {
      if ((*(int *)(puVar3 + -1) == param_2) && (*(int *)((gh_long)puVar3 + -4) == param_3)) {
        *puVar3 = 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < (ulong)(lVar1 >> 4));
  }
  return 0;
  return 0;
}
