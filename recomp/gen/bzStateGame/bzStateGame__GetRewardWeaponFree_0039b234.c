/* bzStateGame::GetRewardWeaponFree_0039b234 @ 0x0039b234 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a535c0
#define DAT_00a535c0 (*(undefined1 *)IMG(0x00a535c0))
gh_long bzStateGame__GetRewardWeaponFree_0039b234(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  
  if (*(int *)(self + 0x32c160) == 0) {
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
  }
  puVar2 = (uint *)(self + 0x32c978);
  *(int *)(self + (gh_long)(int)(*puVar2 + 0x136) * 4 + 0x32c148) =
       (*(int *)(self + (gh_long)(int)(*puVar2 + 3) * 4 + 0x133b8) * 0x82) / 100;
  *(int *)(self + (gh_long)(int)(*puVar2 + 300) * 4 + 0x32c148) =
       (*(int *)(self + (gh_long)(int)(*puVar2 + 3) * 4 + 0x133b8) * 0x82) / 100;
  uVar3 = *puVar2;
  lVar1 = (gh_long)(int)uVar3 * 4;
  if (*(int *)(self + lVar1 + 0x32c670) == 0) {
    piVar4 = (int *)(self + lVar1 + 0x32c670);
    if (uVar3 < 10) {
      *piVar4 = *(int *)(&DAT_00a535c0 + (gh_long)(int)uVar3 * 4);
      piVar4 = (int *)(self + (gh_long)(int)*puVar2 * 4 + 0x32c670);
    }
    *piVar4 = (*piVar4 * 0x82) / 100;
  }
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  *(undefined4 *)(self + (gh_long)(int)*puVar2 * 4 + 0x1a98) = 1;
  bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
  *(undefined4 *)(self + 0x1b00) = 0;
  *(undefined8 *)(self + 0x1af8) = 2;
  return 0;
  return 0;
}
