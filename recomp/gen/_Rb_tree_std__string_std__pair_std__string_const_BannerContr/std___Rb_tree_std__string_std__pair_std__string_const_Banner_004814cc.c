/* std::_Rb_tree<std::string,std::pair<std::string_const,BannerController*>,std::_Select1st<std::pair<std::string_const,BannerController*>>,std::less<std::string>,std::allocator<std::pair<std::string_const,BannerController*>>>::_M_erase_004814cc @ 0x004814cc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long std___Rb_tree_std__string_std__pair_std__string_const_BannerController___std___Select1st_std__pair_std__string_const_BannerController____std__less_std__string__std__allocator_std__pair_std__string_const_BannerController_______M_erase_004814cc(uint64_t gh_a0, uint64_t gh_a1)
{
  _Rb_tree_std__string_std__pair_std__string__BannerController___std___Select1st_std__pair_std__string__BannerController____std__less_std__string__std__allocator_std__pair_std__string__BannerController____
                    * this = (_Rb_tree_std__string_std__pair_std__string__BannerController___std___Select1st_std__pair_std__string__BannerController____std__less_std__string__std__allocator_std__pair_std__string__BannerController____
                    *)(uintptr_t)gh_a0;
  _Rb_tree_node * param_1 = (_Rb_tree_node *)(uintptr_t)gh_a1;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined8 *puVar5;
  gh_long lVar6;
  int *piVar7;
  _Rb_tree_node *p_Var8;
  
  lVar4 = tpidr_el0;
  lVar6 = *(gh_long *)(lVar4 + 0x28);
  while (param_1 != (_Rb_tree_node *)0x0) {
    std___Rb_tree_std__string_std__pair_std__string_const_BannerController___std___Select1st_std__pair_std__string_const_BannerController____std__less_std__string__std__allocator_std__pair_std__string_const_BannerController_______M_erase_004814cc(GH_ARG(this), GH_ARG(*(_Rb_tree_node **)(param_1 + 0x18)));
    p_Var8 = *(_Rb_tree_node **)(param_1 + 0x10);
    puVar5 = (undefined8 *)(*(gh_long *)(param_1 + 0x20) + -0x18);
    if (puVar5 != &DAT_00d40300) {
      piVar7 = (int *)(*(gh_long *)(param_1 + 0x20) + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete(puVar5);
      }
    }
    operator_delete(param_1);
    param_1 = p_Var8;
  }
  if (*(gh_long *)(lVar4 + 0x28) != lVar6) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
