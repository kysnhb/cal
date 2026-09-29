/* bzStateGame::PEXP_0043b314 @ 0x0043b314 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__PEXP_0043b314(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  gh_long lVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  gh_long lVar13;
  uint64_t gh_frame64[11] = {0};   /* 원작 스택 프레임 (SP-0x40 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x40;
#define auStack_40 (*(undefined1 (*)[8])(gh_fb - 0x40))
#define local_38 (*(gh_long (*)[2])(gh_fb - 0x38))
#define local_28 (*(gh_long *)(gh_fb - 0x28))
  
  lVar5 = tpidr_el0;
  local_28 = *(gh_long *)(lVar5 + 0x28);
  iVar10 = *(int *)(self + 0x1ae8);
  if (1 < iVar10 - 8U) {
    if (iVar10 == 0xb) {
      *(int *)(self + 0x32c900) = *(int *)(self + 0x32c900) + param_2;
    }
    piVar6 = (int *)(self + 0x32c154);
    iVar7 = *piVar6 + param_2;
    *piVar6 = iVar7;
    piVar1 = (int *)(self + 0x32c16c);
    iVar8 = *piVar1;
    if ((iVar8 < 0xf) && (lVar9 = (gh_long)iVar8, *(int *)(self + lVar9 * 4 + 0x13a68) <= iVar7)) {
      uVar2 = *(undefined4 *)(self + 0x8dac8);
      iVar12 = *(int *)(self + 0x8dacc);
      if (((0x3d < iVar10 - 0xdU) ||
          ((1LL << ((ulong)(iVar10 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
        lVar13 = 0;
        puVar11 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar11[-5] < 1) {
            *(undefined8 *)(puVar11 + 8) = 0xff000000ff;
            puVar11[-10] = uVar2;
            puVar11[-9] = iVar12 + -200;
            *(undefined8 *)(puVar11 + -4) = 0x10000002a;
            *(undefined8 *)(puVar11 + -6) = 0x64000000a0;
            puVar11[-8] = 0;
            *(undefined8 *)(puVar11 + 5) = 0;
            *(undefined8 *)(puVar11 + -2) = 0x3f80000000000000;
            puVar11[7] = 0xff;
            *puVar11 = 0x3f800000;
            *(undefined8 *)(puVar11 + 3) = 0xe;
            *(undefined8 *)(puVar11 + 1) = 0;
            iVar8 = *piVar1;
            iVar7 = *piVar6;
            lVar9 = (gh_long)iVar8;
            break;
          }
          lVar13 = lVar13 + 1;
          puVar11 = puVar11 + 0x14;
        } while (lVar13 < *(int *)(self + 0x32b828));
      }
      iVar12 = (int)(((float)*(int *)(self + 0x32c170) / 10.0) *
                     (float)*(int *)(self + lVar9 * 4 + 0x138d8) + (float)*(int *)(self + 0x32c170))
      ;
      *(int *)(self + 0x32c170) = iVar12;
      iVar10 = (int)(((float)*(int *)(self + 0x32c174) / 10.0) *
                     (float)*(int *)(self + lVar9 * 4 + 0x13928) + (float)*(int *)(self + 0x32c174))
      ;
      *(int *)(self + 0x32c174) = iVar10;
      *piVar1 = iVar8 + 1;
      *(int *)(self + 0x32c904) = iVar7;
      *(int *)(self + 0x8daec) = iVar12;
      *(int *)(self + 0x8db04) = iVar10;
      *piVar6 = 0;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1320)), GH_ARG(false));
      }
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      if (*(int *)(self + 0x196c) == -1) {
        FUN_009d4eac(GH_ARG(local_38), GH_ARG("FirstLevelUp"), GH_ARG(auStack_40), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(7), GH_ARG((undefined *)local_38));
        if ((undefined8 *)(local_38[0] + -0x18) != &DAT_00d40300) {
          piVar6 = (int *)(local_38[0] + -8);
          do {
            iVar10 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 < 1) {
            operator_delete((undefined8 *)(local_38[0] + -0x18));
          }
        }
      }
    }
  }
  if (*(gh_long *)(lVar5 + 0x28) == local_28) {
    return 0;
  }
                    
  __stack_chk_fail(*(undefined4 *)(self + 0x32c154));
  return 0;
}
