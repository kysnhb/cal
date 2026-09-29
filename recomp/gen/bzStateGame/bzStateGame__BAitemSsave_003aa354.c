/* bzStateGame::BAitemSsave_003aa354 @ 0x003aa354 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a500eb
#define DAT_00a500eb (*(undefined1 *)IMG(0x00a500eb))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__BAitemSsave_003aa354(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  kFile *this;
  ulong uVar5;
  int *piVar6;
  gh_long lVar7;
  uint64_t gh_frame64[15] = {0};   /* 원작 스택 프레임 (SP-0x60 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x60;
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  if ((*(int *)(self + 0x32c148) != 0) && (*(int *)(self + 0x32c14c) != 0)) {
    this = operator_new(0x30);
    kFile__kFile_00479ebc(GH_ARG(this));
    FUN_009d4eac(GH_ARG(local_48), GH_ARG(&DAT_00a500eb), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_58), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar5 = kFile__wOpenF_0047a5e8(GH_ARG(this), GH_ARG((string *)local_48), GH_ARG((string *)&local_58));
    if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
      piVar6 = (int *)(local_58 + -8);
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
        uVar5 = uVar5 & 0xffffffff;
        operator_delete((undefined8 *)(local_58 + -0x18));
      }
    }
    if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
      piVar6 = (int *)(local_48[0] + -8);
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
        operator_delete((undefined8 *)(local_48[0] + -0x18));
      }
    }
    if ((uVar5 & 1) != 0) {
      kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(0x1a05));
      lVar7 = 0;
      do {
        kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*(int *)(self + lVar7 + 0x32c14c)));
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0x63c);
    }
    kFile__close_00479f64(GH_ARG(this));
    gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  if (*(gh_long *)(lVar4 + 0x28) == local_38) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
