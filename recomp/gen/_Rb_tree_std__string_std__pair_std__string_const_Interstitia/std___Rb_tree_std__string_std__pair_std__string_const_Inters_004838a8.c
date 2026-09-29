/* std::_Rb_tree<std::string,std::pair<std::string_const,InterstitialController*>,std::_Select1st<std::pair<std::string_const,InterstitialController*>>,std::less<std::string>,std::allocator<std::pair<std::string_const,InterstitialController*>>>::_M_insert_unique_std__pair_std__string_InterstitialController____004838a8 @ 0x004838a8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
void * std___Rb_tree_std__string_std__pair_std__string_const_InterstitialController___std___Select1st_std__pair_std__string_const_InterstitialController____std__less_std__string__std__allocator_std__pair_std__string_const_InterstitialController_______M_insert_unique_std__pair_std__string_InterstitialController____004838a8(uint64_t gh_a0, uint64_t gh_a1)
{
  _Rb_tree_std__string_std__pair_std__string__InterstitialController___std___Select1st_std__pair_std__string__InterstitialController____std__less_std__string__std__allocator_std__pair_std__string__InterstitialController____
           * this = (_Rb_tree_std__string_std__pair_std__string__InterstitialController___std___Select1st_std__pair_std__string__InterstitialController____std__less_std__string__std__allocator_std__pair_std__string__InterstitialController____
           *)(uintptr_t)gh_a0;
  pair_conflict * param_1 = (pair_conflict *)(uintptr_t)gh_a1;

  gh_long lVar1;
  uint uVar2;
  void *pvVar3;
  _Rb_tree_std__string_std__pair_std__string_const_InterstitialController___std___Select1st_std__pair_std__string_const_InterstitialController____std__less_std__string__std__allocator_std__pair_std__string_const_InterstitialController____
  *p_Var4;
  ulong uVar5;
  size_t __n;
  undefined8 uVar6;
  gh_u128 auVar7;
  
  GH_SET128(auVar7, std___Rb_tree_std__string_std__pair_std__string_const_InterstitialController___std___Select1st_std__pair_std__string_const_InterstitialController____std__less_std__string__std__allocator_std__pair_std__string_const_InterstitialController_______M_get_insert_unique_pos_0048398c(GH_ARG(this), GH_ARG((string *)param_1)));
  p_Var4 = GH_PART(auVar7, 8, uint64_t);
  pvVar3 = GH_PART(auVar7, 0, uint64_t);
  if (p_Var4 != (_Rb_tree_std__string_std__pair_std__string_const_InterstitialController___std___Select1st_std__pair_std__string_const_InterstitialController____std__less_std__string__std__allocator_std__pair_std__string_const_InterstitialController____
                 *)0x0) {
    if ((pvVar3 == (void *)0x0) && (this + 8 != p_Var4)) {
      uVar5 = *(ulong *)((gh_long)*(void **)param_1 + -0x18);
      __n = *(ulong *)((gh_long)*(void **)(p_Var4 + 0x20) + -0x18);
      lVar1 = uVar5 - __n;
      if (uVar5 < __n || lVar1 == 0) {
        __n = uVar5;
      }
      uVar2 = memcmp(*(void **)param_1,*(void **)(p_Var4 + 0x20),__n);
      uVar5 = (ulong)uVar2;
      if ((uVar2 == 0) && (uVar5 = 0, lVar1 < 0x80000000)) {
        uVar2 = (uint)lVar1;
        if (lVar1 < -0x7fffffff) {
          uVar2 = 0x80000000;
        }
        uVar5 = (ulong)uVar2;
      }
      uVar5 = uVar5 >> 0x1f;
    }
    else {
      uVar5 = 1;
    }
    pvVar3 = operator_new(0x30);
    uVar6 = *(undefined8 *)param_1;
    *(undefined1 **)param_1 = &DAT_00d40318;
    *(undefined8 *)((gh_long)pvVar3 + 0x28) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((gh_long)pvVar3 + 0x20) = uVar6;
    FUN_009c0aac(GH_ARG(uVar5), GH_ARG(pvVar3), GH_ARG(p_Var4), GH_ARG(this + 8));
    *(gh_long *)(this + 0x28) = *(gh_long *)(this + 0x28) + 1;
  }
  return pvVar3;
}

