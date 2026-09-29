/* bzStateGame::GRTimeSsave_00471554 @ 0x00471554 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__GRTimeSsave_00471554(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  kFile *this;
  ulong uVar5;
  int *piVar6;
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
  FUN_009d4eac(GH_ARG(local_58), GH_ARG("GRTimedata.bz"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar5 = kFile__wOpenF_0047a5e8(GH_ARG(this), GH_ARG((string *)local_58), GH_ARG((string *)&local_68));
  if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_68 + -8);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete((undefined8 *)(local_68 + -0x18));
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_58[0] + -8);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if ((uVar5 & 1) != 0) {
    kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(param_2));
  }
  kFile__close_00479f64(GH_ARG(this));
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(gh_long *)(lVar4 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
