/* bzStateGame::StopPlay @ 0x00449dd0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__StopPlay(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  SoundClip__stop_0047e6d0(GH_ARG((int)self + param_2 * 0x18 + 0x11e8));
  return 0;
  return 0;
}
