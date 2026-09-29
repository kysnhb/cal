/* bzStateGame::imgLoad_00470ad8 @ 0x00470ad8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__imgLoad_00470ad8(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(gh_long *)(lVar3 + 0x28);
  if ((0x2d < param_2 - 0x88U) || ((1LL << ((ulong)(param_2 - 0x88U) & 0x3f) & 0x200008000001U) == 0)
     ) goto LAB_00470ce0;
  *(undefined4 *)(self + 0x8da3c) = 0;
  sprintf(self + 0xd38,"img/UI/MenuUi[%d]",(ulong)(uint)param_2);
  this = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(this));
  FUN_009d4eac(GH_ARG(local_58), GH_ARG(self + 0xd38), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG("png"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar5 = kFile__rOpenR_0047a018(GH_ARG(this), GH_ARG((string *)local_58), GH_ARG((string *)&local_68));
  if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_68 + -8);
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_68 + -0x18));
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_58[0] + -8);
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if ((uVar5 & 1) != 0) {
    iVar4 = kFile__getSize_0047a88c(GH_ARG(this));
    kFile__close_00479f64(GH_ARG(this));
    *(undefined4 *)(self + 0x8da38) = 0xff;
    if (param_2 == 0xb5) {
      *(int *)(self + 0x8da48) = iVar4;
      if (((iVar4 == 0xece2) && (*(int *)(self + 0x329ffc) == 0x24f)) &&
         (*(int *)(self + 0x32a4ac) == 0x7f)) goto LAB_00470ccc;
    }
    else if (param_2 == 0xa3) {
      *(int *)(self + 0x8da44) = iVar4;
      if (((iVar4 == 0x230c) && (*(int *)(self + 0x329fb4) == 0x5a)) &&
         (*(int *)(self + 0x32a464) == 0x32)) goto LAB_00470ccc;
    }
    else if (((param_2 == 0x88) && (*(int *)(self + 0x8da40) = iVar4, iVar4 == 0x375c)) &&
            ((*(int *)(self + 0x329f48) == 0x89 && (*(int *)(self + 0x32a3f8) == 0x70)))) {
LAB_00470ccc:
      *(undefined4 *)(self + 0x8da38) = 0;
    }
  }
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
LAB_00470ce0:
  if (*(gh_long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
