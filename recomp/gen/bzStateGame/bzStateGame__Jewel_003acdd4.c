/* bzStateGame::Jewel_003acdd4 @ 0x003acdd4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__Jewel_003acdd4(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(self + 0x1ae8);
  if (iVar4 - 8U < 2) goto LAB_003acf34;
  if ((iVar4 == 0x16) || (iVar4 == 0xb)) {
    *(int *)(self + 0x32c8f8) = *(int *)(self + 0x32c8f8) + param_2;
    if (param_2 < 1) {
LAB_003aced8:
      if (param_2 < 0) {
        piVar2 = (int *)(self + 0x32c168);
        iVar4 = *piVar2;
        if (iVar4 + param_2 < 1) {
          *piVar2 = 0;
          piVar3 = (int *)(self + 0x32c438);
          iVar1 = *piVar3 + iVar4 + param_2;
          *piVar3 = iVar1;
          if (iVar1 < 2) goto LAB_003acf34;
          iVar4 = 0;
          param_2 = 1;
          *piVar3 = iVar1 + -1;
        }
        *piVar2 = iVar4 + param_2;
      }
      goto LAB_003acf34;
    }
    *(undefined4 *)(self + 0x32c920) = 8;
    if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
        (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
       ((-0x1e < *(int *)(self + 0x8dacc) &&
        (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
    }
  }
  else if (param_2 < 1) goto LAB_003aced8;
  *(int *)(self + 0x32c168) = param_2 + *(int *)(self + 0x32c168) + -1;
  *(int *)(self + 0x32c438) = *(int *)(self + 0x32c438) + 1;
LAB_003acf34:
  return *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168);
}

