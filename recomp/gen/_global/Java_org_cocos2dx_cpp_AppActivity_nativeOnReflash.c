/* Java_org_cocos2dx_cpp_AppActivity_nativeOnReflash @ 0x0039c048 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeOnReflash(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  gh_long * param_1 = (gh_long *)(uintptr_t)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  undefined8 param_3 = (undefined8)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined *self;
  int iVar5;
  _jstring *p_Var6;
  _List_node *p_Var7;
  undefined8 ****ppppuVar8;
  int *piVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  int iVar12;
  undefined8 *****pppppuVar13;
  uint64_t gh_frame64[20] = {0};   /* 원작 스택 프레임 (SP-0x88 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x88;
#define local_88 (*(undefined8 ****(*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
#define local_70 (*(undefined8 *****)(gh_fb - 0x70))
#define ppppuStack_68 (*(undefined8 *****)(gh_fb - 0x68))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar4 = tpidr_el0;
  local_58 = *(gh_long *)(lVar4 + 0x28);
  if (DAT_00d23c48 != (undefined *)0x0) {
    local_70 = &local_70;
    ppppuStack_68 = local_70;
    iVar5 = gh_vcall(GH_ARG(param_1), 0x558, GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    if (0 < iVar5) {
      iVar12 = 0;
      do {
        p_Var6 = (_jstring *)gh_vcall(GH_ARG(param_1), 0x568, GH_ARG(param_3), GH_ARG(iVar12), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        cocos2d__JniHelper__jstring2string_0048f9b4(GH_ARG(p_Var6));
        p_Var7 = std__list_std__string_std__allocator_std__string_____M_create_node_std__string_const___00477cd4(GH_ARG((list_std__string_std__allocator_std__string__ *)&local_70), GH_ARG((string *)&local_78));
        FUN_0099dbb8(GH_ARG(p_Var7), GH_ARG(&local_70));
        if ((undefined8 *)(local_78 + -0x18) != &DAT_00d40300) {
          piVar9 = (int *)(local_78 + -8);
          do {
            iVar1 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 < 1) {
            operator_delete((undefined8 *)(local_78 + -0x18));
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar5);
    }
    self = DAT_00d23c48;
    std__list_std__string_std__allocator_std__string____list_0039c618(GH_ARG((list_std__string_std__allocator_std__string__ *)local_88), GH_ARG((list *)&local_70));
    bzStateGame__OnReflash_0039c438(GH_ARG(self), GH_ARG((undefined *)local_88));
    if ((undefined8 *****)local_88[0] != local_88) {
      pppppuVar11 = (undefined8 *****)local_88[0];
      do {
        pppppuVar13 = (undefined8 *****)*pppppuVar11;
        ppppuVar8 = pppppuVar11[2] + -3;
        if (ppppuVar8 != (undefined8 ****)&DAT_00d40300) {
          ppppuVar10 = pppppuVar11[2] + -1;
          do {
            iVar5 = *(int *)ppppuVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
            if (bVar3) {
              *(int *)ppppuVar10 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete(ppppuVar8);
          }
        }
        operator_delete(pppppuVar11);
        pppppuVar11 = pppppuVar13;
      } while (pppppuVar13 != local_88);
    }
    pppppuVar11 = (undefined8 *****)local_70;
    while (pppppuVar11 != &local_70) {
      pppppuVar13 = (undefined8 *****)*pppppuVar11;
      ppppuVar8 = pppppuVar11[2] + -3;
      if (ppppuVar8 != (undefined8 ****)&DAT_00d40300) {
        ppppuVar10 = pppppuVar11[2] + -1;
        do {
          iVar5 = *(int *)ppppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
          if (bVar3) {
            *(int *)ppppuVar10 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(ppppuVar8);
        }
      }
      operator_delete(pppppuVar11);
      pppppuVar11 = pppppuVar13;
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_58) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
