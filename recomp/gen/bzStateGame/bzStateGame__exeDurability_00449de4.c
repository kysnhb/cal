/* bzStateGame::exeDurability_00449de4 @ 0x00449de4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__exeDurability_00449de4(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
  if (*(int *)(self + 0x32c160) == 0) {
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
  }
  *(undefined4 *)(self + 0x1ae8) = 0x4a;
  *(undefined4 *)(self + 0x32c990) = 3;
  if (0 < *(int *)(self + 0x8dd24)) {
    joyX2 = *(undefined4 *)(self + 0x1b08);
    joyY2 = *(undefined4 *)(self + 0x1b0c);
    *(undefined4 *)(self + 0x8dd38) = 0;
    *(int *)(self + 0x8dd24) = 0;
    if ((*(int *)(self + 0x8dae0) == 0x3b) || (*(int *)(self + 0x8dae0) == 0xf)) {
      *(undefined4 *)(self + 0x32ba84) = 0;
    }
  }
  *(undefined4 *)(self + 0x8dadc) = 2;
  bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
