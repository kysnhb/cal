/* bzStateGame::loadFont_003a439c @ 0x003a439c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__loadFont_003a439c(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  gh_long lVar5;
  undefined8 uVar6;
  int *piVar7;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define local_70 (*(gh_long *)(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
#define local_60 (*(gh_long *)(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  if (*(gh_long *)(self + 0x8da80) == 0) {
    FUN_009d4eac(GH_ARG(local_48), GH_ARG("arial.ttf"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = kScene__makeFont_0047d5c4(GH_ARG((kScene *)self), GH_ARG(local_48), GH_ARG(0x14));
    *(gh_long *)(self + 0x8da80) = lVar5;
    if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
      piVar7 = (int *)(local_48[0] + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_48[0] + -0x18));
      }
    }
  }
  if (*(gh_long *)(self + 0x8da88) == 0) {
    FUN_009d4eac(GH_ARG(&local_58), GH_ARG("arial.ttf"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = kScene__makeFont_0047d5c4(GH_ARG((kScene *)self), GH_ARG(&local_58), GH_ARG(0x18));
    *(gh_long *)(self + 0x8da88) = lVar5;
    if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
      piVar7 = (int *)(local_58 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_58 + -0x18));
      }
    }
  }
  if (*(gh_long *)(self + 0x8da90) == 0) {
    FUN_009d4eac(GH_ARG(&local_60), GH_ARG("arial.ttf"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = kScene__makeFont_0047d5c4(GH_ARG((kScene *)self), GH_ARG(&local_60), GH_ARG(0x1c));
    *(gh_long *)(self + 0x8da90) = lVar5;
    if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
      piVar7 = (int *)(local_60 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_60 + -0x18));
      }
    }
  }
  if (*(gh_long *)(self + 0x8da98) == 0) {
    FUN_009d4eac(GH_ARG(&local_68), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = kScene__makeFont_0047d5c4(GH_ARG((kScene *)self), GH_ARG(&local_68), GH_ARG(0));
    *(gh_long *)(self + 0x8da98) = lVar5;
    if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
      piVar7 = (int *)(local_68 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_68 + -0x18));
      }
    }
  }
  if (*(gh_long *)(self + 0x8daa0) == 0) {
    FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = kScene__makeFont_0047d5c4(GH_ARG((kScene *)self), GH_ARG(&local_70), GH_ARG(0));
    *(gh_long *)(self + 0x8daa0) = lVar5;
    if ((undefined8 *)(local_70 + -0x18) != &DAT_00d40300) {
      piVar7 = (int *)(local_70 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_70 + -0x18));
        lVar5 = *(gh_long *)(self + 0xc38);
        goto joined_r0x003a4568;
      }
    }
  }
  lVar5 = *(gh_long *)(self + 0xc38);
joined_r0x003a4568:
  if (lVar5 == 0) {
    uVar6 = kScene__makeDraw_0047d650(GH_ARG((kScene *)self));
    *(undefined8 *)(self + 0xc38) = uVar6;
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
