/* bzStateGame::lastDaySaveFile_004494b0 @ 0x004494b0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a50a7e
#define DAT_00a50a7e (*(undefined1 *)IMG(0x00a50a7e))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__lastDaySaveFile_004494b0(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  kFile *this;
  ulong uVar5;
  int *piVar6;
  uint64_t gh_frame64[19] = {0};   /* 원작 스택 프레임 (SP-0x80 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x80;
#define auStack_80 (*(undefined1 (*)[8])(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
#define auStack_70 (*(undefined1 (*)[8])(gh_fb - 0x70))
#define local_68 (*(gh_long (*)[2])(gh_fb - 0x68))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar4 = tpidr_el0;
  local_58 = *(gh_long *)(lVar4 + 0x28);
  this = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(this));
  FUN_009d4eac(GH_ARG(local_68), GH_ARG("daySave.bz"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_78), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_80), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar5 = kFile__wOpenF_0047a5e8(GH_ARG(this), GH_ARG((string *)local_68), GH_ARG((string *)&local_78));
  if ((undefined8 *)(local_78 + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_78 + -8);
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
      operator_delete((undefined8 *)(local_78 + -0x18));
    }
  }
  if ((undefined8 *)(local_68[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_68[0] + -8);
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
      operator_delete((undefined8 *)(local_68[0] + -0x18));
    }
  }
  if ((uVar5 & 1) != 0) {
    *(int *)(self + 0xb7c) = param_2;
    *(int *)(self + 0xb80) = param_3;
    *(int *)(self + 0xb84) = param_4;
    kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(param_2));
    kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*(int *)(self + 0xb80)));
    kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*(int *)(self + 0xb84)));
  }
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a50a7e), GH_ARG((ulong)*(uint *)(self + 0xb7c)), GH_ARG((ulong)*(uint *)(self + 0xb80)), GH_ARG((ulong)*(uint *)(self + 0xb84)), GH_ARG(0));
  kFile__close_00479f64(GH_ARG(this));
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(gh_long *)(lVar4 + 0x28) == local_58) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
