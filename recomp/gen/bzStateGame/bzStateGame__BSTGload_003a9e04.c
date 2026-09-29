/* bzStateGame::BSTGload_003a9e04 @ 0x003a9e04 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a500f8
#define DAT_00a500f8 (*(undefined1 *)IMG(0x00a500f8))
#undef DAT_00a50123
#define DAT_00a50123 (*(undefined1 *)IMG(0x00a50123))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__BSTGload_003a9e04(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined4 uVar5;
  kFile *this;
  ulong uVar6;
  int *piVar7;
  gh_long lVar8;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define auStack_70 (*(undefined1 (*)[8])(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long (*)[2])(gh_fb - 0x58))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar4 = tpidr_el0;
  local_48 = *(gh_long *)(lVar4 + 0x28);
  this = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(this));
  FUN_009d4eac(GH_ARG(local_58), GH_ARG(&DAT_00a500f8), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar6 = kFile__rOpenF_0047a2a0(GH_ARG(this), GH_ARG((string *)local_58), GH_ARG((string *)&local_68));
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
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if ((uVar6 & 1) != 0) {
    lVar8 = 0;
    do {
      uVar5 = kFile__readInt_0047aacc(GH_ARG(this));
      *(undefined4 *)(self + lVar8 + 0x400) = uVar5;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 800);
  }
  uVar6 = 0;
  do {
    cocos2d__log_005d21e4(GH_ARG(&DAT_00a50123), GH_ARG(uVar6 & 0xffffffff), GH_ARG((ulong)*(uint *)(self + uVar6 * 4 + 0x400)), GH_ARG(0), GH_ARG(0));
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x3d);
  cocos2d__log_005d21e4(GH_ARG("-TEST- ===================================================================="), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  kFile__close_00479f64(GH_ARG(this));
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(gh_long *)(lVar4 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
