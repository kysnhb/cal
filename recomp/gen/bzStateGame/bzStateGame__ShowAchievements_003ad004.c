/* bzStateGame::ShowAchievements_003ad004 @ 0x003ad004 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__ShowAchievements_003ad004(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined *puVar5;
  int *piVar6;
  uint64_t gh_frame64[12] = {0};   /* 원작 스택 프레임 (SP-0x48 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x48;
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  cocos2d__Application__getInstance_00484a3c();
  puVar5 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
  if (((ulong)puVar5 & 1) != 0) {
    if (param_2 == 0) {
      puVar5 = (undefined *)bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar5));
      if (((ulong)puVar5 & 1) == 0) {
        *(undefined4 *)(self + 0x32c9c8) = 2;
        bzStateGame__ExeGoogleLogin_003a7e90(GH_ARG(puVar5));
      }
      else {
        *(undefined4 *)(self + 0x32c9cc) = 1;
        bzStateGame__ExeShowAchievements_00473ca8(GH_ARG(puVar5));
      }
    }
    else {
      *(undefined4 *)(self + 0x32c9cc) = 1;
      puVar5 = (undefined *)
               std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string_____find_00478438(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                                *)(self + 0x3d0)), GH_ARG((string *)param_3));
      if (self + 0x3d8 != puVar5) {
        puVar5 = (undefined *)FUN_009d881c(GH_ARG(local_48), GH_ARG(puVar5 + 0x28));
        bzStateGame__ExeAchievementUnlocked_00473ea0(GH_ARG(puVar5), GH_ARG((undefined *)local_48), GH_ARG(true));
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
      }
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
