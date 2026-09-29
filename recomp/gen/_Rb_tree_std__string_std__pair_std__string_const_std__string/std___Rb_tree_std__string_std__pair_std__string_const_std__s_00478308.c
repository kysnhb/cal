/* std::_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>::_M_get_insert_unique_pos_00478308 @ 0x00478308 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_u128 std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_get_insert_unique_pos_00478308(uint64_t gh_a0, uint64_t gh_a1)
{
  _Rb_tree_std__string_std__pair_std__string__std__string__std___Select1st_std__pair_std__string__std__string___std__less_std__string__std__allocator_std__pair_std__string__std__string___
           * this = (_Rb_tree_std__string_std__pair_std__string__std__string__std___Select1st_std__pair_std__string__std__string___std__less_std__string__std__allocator_std__pair_std__string__std__string___
           *)(uintptr_t)gh_a0;
  string * param_1 = (string *)(uintptr_t)gh_a1;

  gh_long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var5;
  void *__s1;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *p_Var6;
  ulong uVar7;
  gh_u128 auVar8;
  
  if (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
        **)(this + 0x10) ==
      (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
       *)0x0) {
    p_Var5 = this + 8;
LAB_004783ac:
    if (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
          **)(this + 0x18) != p_Var5) {
      p_Var6 = (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                *)FUN_009c090c(GH_ARG(p_Var5));
      goto LAB_004783c4;
    }
LAB_00478414:
    p_Var6 = (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
              *)0x0;
  }
  else {
    __s1 = *(void **)param_1;
    uVar7 = *(ulong *)((gh_long)__s1 + -0x18);
    p_Var6 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
               **)(this + 0x10);
    do {
      while( true ) {
        p_Var5 = p_Var6;
        sVar4 = *(ulong *)((gh_long)*(void **)(p_Var5 + 0x20) + -0x18);
        lVar1 = uVar7 - sVar4;
        if (uVar7 < sVar4 || lVar1 == 0) {
          sVar4 = uVar7;
        }
        iVar3 = memcmp(__s1,*(void **)(p_Var5 + 0x20),sVar4);
        if (iVar3 != 0) break;
        if (lVar1 < 0x80000000) {
          iVar3 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar3 = -0x80000000;
          }
          break;
        }
LAB_0047838c:
        bVar2 = false;
        p_Var6 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                   **)(p_Var5 + 0x18);
        if (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
              **)(p_Var5 + 0x18) ==
            (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
             *)0x0) goto LAB_0047839c;
      }
      if (-1 < iVar3) goto LAB_0047838c;
      bVar2 = true;
      p_Var6 = *(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                 **)(p_Var5 + 0x10);
    } while (*(_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
               **)(p_Var5 + 0x10) !=
             (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
              *)0x0);
LAB_0047839c:
    p_Var6 = p_Var5;
    if (bVar2) goto LAB_004783ac;
LAB_004783c4:
    uVar7 = *(ulong *)((gh_long)*(void **)(p_Var6 + 0x20) + -0x18);
    sVar4 = *(ulong *)((gh_long)*(void **)param_1 + -0x18);
    lVar1 = uVar7 - sVar4;
    if (uVar7 < sVar4 || lVar1 == 0) {
      sVar4 = uVar7;
    }
    iVar3 = memcmp(*(void **)(p_Var6 + 0x20),*(void **)param_1,sVar4);
    if (iVar3 == 0) {
      if (lVar1 < 0x80000000) {
        iVar3 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar3 = -0x80000000;
        }
        goto joined_r0x00478408;
      }
    }
    else {
joined_r0x00478408:
      if (iVar3 < 0) goto LAB_00478414;
    }
    p_Var5 = (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
              *)0x0;
  }
  GH_PART(auVar8, 8, uint64_t) = p_Var5;
  GH_PART(auVar8, 0, uint64_t) = p_Var6;
  return auVar8;
}

