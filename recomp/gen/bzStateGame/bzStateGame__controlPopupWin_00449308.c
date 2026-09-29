/* bzStateGame::controlPopupWin_00449308 @ 0x00449308 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__controlPopupWin_00449308(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(self + 0x1af8) == 2) {
    if (*(int *)(self + 0x1164) <= (int)*(float *)(self + 0x8dac0)) {
      return 0;
    }
    if ((int)*(float *)(self + 0x8dabc) <= *(int *)(self + 0x1160) + 0xba) {
      return 0;
    }
    if (*(int *)(self + 0x1160) + 0x11e <= (int)*(float *)(self + 0x8dabc)) {
      return 0;
    }
    if ((int)*(float *)(self + 0x8dac0) <= *(int *)(self + 0x1164) + -100) {
      return 0;
    }
  }
  else {
    if (*(int *)(self + 0x1af8) != 1) {
      return 0;
    }
    iVar1 = *(int *)(self + 0x1164);
    iVar2 = *(int *)(self + 0x1160);
    iVar3 = (int)*(float *)(self + 0x8dac0);
    iVar5 = (int)*(float *)(self + 0x8dabc);
    if ((((iVar1 + -0x5d <= iVar3) || (iVar5 <= iVar2 + 0xaa)) || (iVar2 + 0xfa <= iVar5)) ||
       (iVar3 <= iVar1 + -0xad)) {
      if (((iVar1 + 0xad <= iVar3) || (iVar2 <= iVar5)) ||
         ((iVar5 <= iVar2 + -100 || (iVar3 <= iVar1 + 0x5d)))) {
        if (iVar1 + 0xad <= iVar3) {
          return 0;
        }
        if (iVar5 <= iVar2 + 0x14) {
          return 0;
        }
        if (iVar2 + 0x78 <= iVar5) {
          return 0;
        }
        if (iVar3 <= iVar1 + 0x5d) {
          return 0;
        }
        *(undefined4 *)(self + 0x1af8) = 0;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        switch(*(undefined4 *)(self + 0x1b00)) {
        case 1:
          uVar4 = 10;
          break;
        case 2:
          uVar4 = 0xb;
          break;
        case 3:
          uVar4 = 0xc;
          break;
        case 4:
          uVar4 = 0xd;
          break;
        default:
          return 0;
        }
        *(undefined4 *)(self + 0x1af0) = uVar4;
        self[0x1af4] = 0;
        return 0;
      }
    }
  }
  *(undefined4 *)(self + 0x1af8) = 0;
  return 0;
  return 0;
}
