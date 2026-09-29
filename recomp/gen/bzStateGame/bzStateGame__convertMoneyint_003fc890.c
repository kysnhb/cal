/* bzStateGame::convertMoneyint_003fc890 @ 0x003fc890 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
int bzStateGame__convertMoneyint_003fc890(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  ulong uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  gh_long lVar6;
  char *pcVar7;
  int iVar8;
  gh_long lVar9;
  int *piVar10;
  gh_long *plVar11;
  ulong uVar12;
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define local_68 (*(char *(*)[2])(gh_fb - 0x68))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar6 = tpidr_el0;
  local_58 = *(gh_long *)(lVar6 + 0x28);
  local_68[0] = &DAT_00d40318;
  lVar9 = *(gh_long *)param_2;
  iVar8 = (int)*(gh_long *)(lVar9 + -0x18);
  if (iVar8 < 1) {
LAB_003fc9a0:
    pcVar7 = local_68[0];
    plVar11 = (gh_long *)(local_68[0] + -0x18);
    if (*plVar11 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = atoi(local_68[0]);
    }
    if (plVar11 != &DAT_00d40300) {
      piVar10 = (int *)(pcVar7 + -8);
      do {
        iVar2 = *piVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 < 1) {
        operator_delete(plVar11);
      }
    }
    if (*(gh_long *)(lVar6 + 0x28) != local_58) {
                    
      __stack_chk_fail();
    }
    return iVar8;
  }
  uVar12 = 0;
  if (*(gh_long *)(lVar9 + -0x18) != 0) {
    do {
      if (-1 < *(int *)(lVar9 + -8)) {
        FUN_009d719c(GH_ARG(param_2));
        lVar9 = *(gh_long *)param_2;
      }
      bVar3 = *(byte *)(lVar9 + uVar12);
      if ((((bVar3 | 2) != 0x2e) && (bVar3 != 0x2e)) && ((byte)(bVar3 - 0x30) < 10)) {
        lVar9 = *(gh_long *)(local_68[0] + -0x18);
        uVar1 = lVar9 + 1;
        if ((*(ulong *)(local_68[0] + -0x10) < uVar1) || (0 < *(int *)(local_68[0] + -8))) {
          FUN_009d537c(GH_ARG(local_68), GH_ARG(uVar1));
          lVar9 = *(gh_long *)(local_68[0] + -0x18);
        }
        local_68[0][lVar9] = bVar3;
        if (local_68[0] != &DAT_00d40318) {
          local_68[0][-8] = '\0';
          local_68[0][-7] = '\0';
          local_68[0][-6] = '\0';
          local_68[0][-5] = '\0';
          *(ulong *)(local_68[0] + -0x18) = uVar1;
          local_68[0][uVar1] = '\0';
        }
      }
      uVar12 = uVar12 + 1;
      if ((gh_long)iVar8 <= (gh_long)uVar12) goto LAB_003fc9a0;
      lVar9 = *(gh_long *)param_2;
    } while (uVar12 < *(ulong *)(lVar9 + -0x18));
  }
                    
  FUN_009d1e68(GH_ARG("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"), GH_ARG(uVar12));
}

