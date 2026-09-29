/* dataLoad::MapDatainit_00479594 @ 0x00479594 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a671ac
#define DAT_00a671ac (*(undefined4 *)IMG(0x00a671ac))
#undef DAT_00a900b4
#define DAT_00a900b4 (*(undefined4 *)IMG(0x00a900b4))
gh_long dataLoad__MapDatainit_00479594(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  bool bVar1;
  ulong uVar2;
  
  *(undefined8 *)(self + 0x8befc) = 0x1400000020;
  *(undefined8 *)(self + 0x8bef4) = 0x800000050;
  uVar2 = 0;
  do {
    if ((&DAT_00a900b4)[uVar2] == -0x4d2) {
      cocos2d__log_005d21e4(GH_ARG(" 1 end  ===    MapData[%d]  "), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      break;
    }
    bVar1 = uVar2 < 199999;
    *(undefined4 *)(self + uVar2 * 4 + 0x12e60) = (&DAT_00a900b4)[uVar2];
    uVar2 = uVar2 + 1;
  } while (bVar1);
  uVar2 = 0;
  do {
    if ((&DAT_00a671ac)[uVar2] == -0x4d2) {
      cocos2d__log_005d21e4(GH_ARG(" 2 end  ===    STGData[%d]  "), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      return 0;
    }
    bVar1 = uVar2 < 199999;
    *(undefined4 *)(self + uVar2 * 4 + 0x61060) = (&DAT_00a671ac)[uVar2];
    uVar2 = uVar2 + 1;
  } while (bVar1);
  return 0;
  return 0;
}
