/* bzStateGame::checkFirstAidKit @ 0x00438e9c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
bool bzStateGame__checkFirstAidKit(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  bool bVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = *(int **)(self + 0xbb0);
  if (*(gh_long *)(self + 3000) - (gh_long)piVar4 != 0) {
    uVar3 = *(gh_long *)(self + 3000) - (gh_long)piVar4 >> 4;
    if (*piVar4 == param_2) {
      bVar1 = piVar4[1] != param_3;
    }
    else {
      bVar1 = true;
    }
    if (1 < uVar3) {
      piVar4 = piVar4 + 5;
      uVar5 = 1;
      bVar2 = bVar1;
      do {
        bVar1 = bVar2;
        if ((piVar4[-1] == param_2) && (bVar1 = false, *piVar4 != param_3)) {
          bVar1 = bVar2;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 4;
        bVar2 = bVar1;
      } while (uVar5 < uVar3);
    }
    return bVar1;
  }
  return true;
}

