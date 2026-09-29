/* bzStateGame::SoundPlay @ 0x003acf5c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__SoundPlay(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  bool param_4 = (bool)gh_a3;

  if (*(int *)(self + 0x32c160) == 0) {
    if (param_3 == -1) {
      if ((uint)param_2 < 0x4b) goto LAB_003acfec;
    }
    else if ((((-1 < param_3) && (-0x96 < *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dac8))) &&
             (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
            (((-0x1e < *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dacc) && ((uint)param_2 < 0x4b))
             && (*(int *)(self + (gh_long)param_3 * 0x288 + 0x8dacc) < *(int *)(self + 0x115c) + 100)))
            ) {
LAB_003acfec:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + (gh_long)param_2 * 0x18 + 0x11e8)), GH_ARG(param_4));
      return 0;
    }
  }
  return 0;
  return 0;
}
