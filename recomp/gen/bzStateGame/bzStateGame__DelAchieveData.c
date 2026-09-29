/* bzStateGame::DelAchieveData @ 0x0047208c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__DelAchieveData(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
  gh_long lVar5;
  undefined8 *puVar6;
  gh_long lVar7;
  int *piVar8;
  ulong uVar9;
  gh_long *plVar10;
  gh_long lVar11;
  size_t __n;
  ulong *puVar12;
  void *pvVar13;
  gh_long lVar14;
  ulong uVar15;
  uint64_t gh_frame64[20] = {0};   /* 원작 스택 프레임 (SP-0x88 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x88;
#define local_88 (*(gh_long *)(gh_fb - 0x88))
#define lStack_80 (*(gh_long *)(gh_fb - 0x80))
#define local_78 (*(void *(*)[2])(gh_fb - 0x78))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar3 = tpidr_el0;
  local_68 = *(gh_long *)(lVar3 + 0x28);
  lVar7 = *(gh_long *)(self + 0x1938);
  if (*(gh_long *)(self + 0x1940) != lVar7) {
    uVar15 = 0;
    lVar14 = lVar7;
    do {
      FUN_009d881c(GH_ARG(local_78), GH_ARG(lVar7 + uVar15 * 8));
      pvVar13 = local_78[0];
      puVar12 = (ulong *)((gh_long)local_78[0] + -0x18);
      uVar9 = *puVar12;
      __n = *(ulong *)((gh_long)*(void **)param_2 + -0x18);
      lVar7 = uVar9 - __n;
      if (uVar9 < __n || lVar7 == 0) {
        __n = uVar9;
      }
      iVar4 = memcmp(local_78[0],*(void **)param_2,__n);
      if ((iVar4 == 0) && (lVar7 < 0x80000000)) {
        iVar4 = (int)lVar7;
        if (lVar7 < -0x7fffffff) {
          iVar4 = -0x80000000;
        }
        if (iVar4 != 0) goto LAB_00472240;
        lVar11 = *(gh_long *)(self + 0x1940);
        lVar7 = lVar14 + 8;
        lVar5 = lVar7;
        if ((lVar7 != lVar11) && (lVar5 = lVar11, 0 < lVar11 - lVar7)) {
          lVar7 = ((ulong)(lVar11 - lVar7) >> 3) + 1;
          lVar5 = lVar14;
          do {
            FUN_009d5ec8(GH_ARG(lVar5), GH_ARG(lVar5 + 8));
            lVar7 = lVar7 + -1;
            lVar5 = lVar5 + 8;
          } while (1 < lVar7);
          lVar5 = *(gh_long *)(self + 0x1940);
        }
        *(gh_long *)(self + 0x1940) = lVar5 + -8;
        puVar6 = (undefined8 *)(*(gh_long *)(lVar5 + -8) + -0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar8 = (int *)(*(gh_long *)(lVar5 + -8) + -8);
          do {
            iVar4 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar4 < 1) {
            operator_delete(puVar6);
          }
        }
        plVar10 = &lStack_80;
        puVar12 = (ulong *)((gh_long)local_78[0] + -0x18);
        pvVar13 = local_78[0];
        lVar5 = lVar14;
      }
      else {
LAB_00472240:
        plVar10 = &local_88;
        lVar5 = lVar14 + 8;
      }
      *plVar10 = lVar14;
      if (puVar12 != &DAT_00d40300) {
        piVar8 = (int *)((gh_long)pvVar13 + -8);
        do {
          iVar4 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 < 1) {
          operator_delete(puVar12);
        }
      }
      lVar7 = *(gh_long *)(self + 0x1938);
      uVar15 = uVar15 + 1;
      lVar14 = lVar5;
    } while (uVar15 < (ulong)(*(gh_long *)(self + 0x1940) - lVar7 >> 3));
  }
  if (*(gh_long *)(lVar3 + 0x28) != local_68) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
