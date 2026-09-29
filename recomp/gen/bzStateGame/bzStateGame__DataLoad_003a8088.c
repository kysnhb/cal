/* bzStateGame::DataLoad_003a8088 @ 0x003a8088 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__DataLoad_003a8088(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
  undefined4 uVar5;
  kFile *pkVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  uint64_t gh_frame64[17] = {0};   /* 원작 스택 프레임 (SP-0x70 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x70;
#define auStack_70 (*(undefined1 (*)[8])(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long (*)[2])(gh_fb - 0x58))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar3 = tpidr_el0;
  local_48 = *(gh_long *)(lVar3 + 0x28);
  pkVar6 = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(pkVar6));
  FUN_009d4eac(GH_ARG(local_58), GH_ARG("data/imgdata1"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG("txt"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar7 = kFile__rOpenR_0047a018(GH_ARG(pkVar6), GH_ARG((string *)local_58), GH_ARG((string *)&local_68));
  if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
    piVar9 = (int *)(local_68 + -8);
    do {
      iVar4 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_68 + -0x18));
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar9 = (int *)(local_58[0] + -8);
    do {
      iVar4 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if ((uVar7 & 1) == 0) {
    cocos2d__log_005d21e4(GH_ARG("I\'m not have imgdata1.txt"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  else {
    cocos2d__log_005d21e4(GH_ARG("I\'m have imgdata1.txt"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar4 = kFile__getSize_0047a88c(GH_ARG(pkVar6));
    pvVar8 = malloc((gh_long)iVar4);
    *(void **)(self + 0x1b28) = pvVar8;
    kFile__read_0047a894(GH_ARG(pkVar6), GH_ARG(pvVar8), GH_ARG(iVar4));
    kFile__close_00479f64(GH_ARG(pkVar6));
    uVar5 = dataLoad__InitData_00478e1c(GH_ARG(self + 0x1b30), GH_ARG(*(undefined **)(self + 0x1b28)), GH_ARG(iVar4), GH_ARG(self + 0xc1658));
    *(undefined4 *)(self + 0x1b20) = uVar5;
    free(*(void **)(self + 0x1b28));
  }
  gh_vcall(GH_ARG((gh_long *)pkVar6), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  pkVar6 = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(pkVar6));
  FUN_009d4eac(GH_ARG(local_58), GH_ARG("data/imgdata2"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG("txt"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar7 = kFile__rOpenR_0047a018(GH_ARG(pkVar6), GH_ARG((string *)local_58), GH_ARG((string *)&local_68));
  if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
    piVar9 = (int *)(local_68 + -8);
    do {
      iVar4 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_68 + -0x18));
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar9 = (int *)(local_58[0] + -8);
    do {
      iVar4 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if ((uVar7 & 1) == 0) {
    cocos2d__log_005d21e4(GH_ARG("I\'m not have imgdata2.txt"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  else {
    cocos2d__log_005d21e4(GH_ARG("I\'m have imgdata2.txt"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar4 = kFile__getSize_0047a88c(GH_ARG(pkVar6));
    pvVar8 = malloc((gh_long)iVar4);
    *(void **)(self + 0x1b28) = pvVar8;
    kFile__read_0047a894(GH_ARG(pkVar6), GH_ARG(pvVar8), GH_ARG(iVar4));
    kFile__close_00479f64(GH_ARG(pkVar6));
    uVar5 = dataLoad__InitData_00478e1c(GH_ARG(self + 0x1b30), GH_ARG(*(undefined **)(self + 0x1b28)), GH_ARG(iVar4), GH_ARG(self + 0xd00b8));
    *(undefined4 *)(self + 0x1b20) = uVar5;
    free(*(void **)(self + 0x1b28));
  }
  gh_vcall(GH_ARG((gh_long *)pkVar6), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(gh_long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
