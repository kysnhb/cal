/* std::_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>::find_00478438 @ 0x00478438 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
* std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string_____find_00478438(uint64_t gh_a0, uint64_t gh_a1)
{
  _Rb_tree_std__string_std__pair_std__string__std__string__std___Select1st_std__pair_std__string__std__string___std__less_std__string__std__allocator_std__pair_std__string__std__string___
                * this = (_Rb_tree_std__string_std__pair_std__string__std__string__std___Select1st_std__pair_std__string__std__string___std__less_std__string__std__allocator_std__pair_std__string__std__string___
                *)(uintptr_t)gh_a0;
  string * param_1 = (string *)(uintptr_t)gh_a1;

  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var1;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var2;
  gh_long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__s2;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var7;
  ulong uVar8;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var9;
  
  p_Var1 = this + 8;
  if (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
        **)(this + 0x10) ==
      (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
       *)0x0) {
    return p_Var1;
  }
  __s2 = *(void **)param_1;
  uVar8 = *(ulong *)((gh_long)__s2 + -0x18);
  p_Var7 = p_Var1;
  p_Var9 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
             **)(this + 0x10);
  do {
    while( true ) {
      uVar5 = *(ulong *)((gh_long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar3 = uVar5 - uVar8;
      sVar6 = uVar8;
      if (uVar5 < uVar8 || lVar3 == 0) {
        sVar6 = uVar5;
      }
      iVar4 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar6);
      if (iVar4 != 0) break;
      if (lVar3 < 0x80000000) {
        iVar4 = (int)lVar3;
        if (lVar3 < -0x7fffffff) {
          iVar4 = -0x80000000;
        }
        if (iVar4 < 0) goto LAB_0047849c;
      }
LAB_004784c0:
      p_Var2 = p_Var9 + 0x10;
      p_Var7 = p_Var9;
      p_Var9 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                 **)p_Var2;
      if (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
            **)p_Var2 ==
          (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
           *)0x0) goto LAB_004784d0;
    }
    if (-1 < iVar4) goto LAB_004784c0;
LAB_0047849c:
    p_Var2 = p_Var9 + 0x18;
    p_Var9 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
               **)p_Var2;
  } while (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
             **)p_Var2 !=
           (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
            *)0x0);
LAB_004784d0:
  if (p_Var7 == p_Var1) {
    return p_Var1;
  }
  uVar8 = *(ulong *)((gh_long)*(void **)param_1 + -0x18);
  sVar6 = *(ulong *)((gh_long)*(void **)(p_Var7 + 0x20) + -0x18);
  lVar3 = uVar8 - sVar6;
  if (uVar8 < sVar6 || lVar3 == 0) {
    sVar6 = uVar8;
  }
  iVar4 = memcmp(*(void **)param_1,*(void **)(p_Var7 + 0x20),sVar6);
  if (iVar4 == 0) {
    if (0x7fffffff < lVar3) {
      return p_Var7;
    }
    iVar4 = (int)lVar3;
    if (lVar3 < -0x7fffffff) {
      iVar4 = -0x80000000;
    }
  }
  if (-1 < iVar4) {
    return p_Var7;
  }
  return p_Var1;
}

