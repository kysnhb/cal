/* bzStateGame::OnReflash_0039c438 @ 0x0039c438 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long bzStateGame__OnReflash_0039c438(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  gh_long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint64_t gh_frame64[23] = {0};   /* 원작 스택 프레임 (SP-0xa0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xa0;
#define local_a0 (*(undefined1 **)(gh_fb - 0xa0))
#define puStack_98 (*(undefined1 **)(gh_fb - 0x98))
#define puStack_90 (*(undefined1 **)(gh_fb - 0x90))
#define puStack_88 (*(undefined1 **)(gh_fb - 0x88))
#define local_80 (*(undefined1 **)(gh_fb - 0x80))
#define puStack_78 (*(undefined1 **)(gh_fb - 0x78))
#define local_70 (*(undefined1 **)(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar1 = tpidr_el0;
  local_68 = *(gh_long *)(lVar1 + 0x28);
  local_a0 = &DAT_00d40318;
  puVar2 = *(undefined8 **)param_2;
  uVar5 = 0;
  puVar4 = puVar2;
  puStack_98 = local_a0;
  puStack_90 = local_a0;
  puStack_88 = local_a0;
  local_80 = local_a0;
  puStack_78 = local_a0;
  local_70 = local_a0;
  if ((undefined8 *)param_2 != puVar2) goto LAB_0039c4d8;
  do {
    uVar3 = 0;
    while( true ) {
      if (uVar3 / 7 <= uVar5) {
        PurchaseStruct___PurchaseStruct_0039e140(GH_ARG((undefined *)&local_a0));
        if (*(gh_long *)(lVar1 + 0x28) != local_68) {
                    
          __stack_chk_fail();
        }
        return 0;
      }
      FUN_009d899c(GH_ARG(&local_a0), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG((ulong)&local_a0 | 8), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG(&puStack_90), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG(&puStack_88), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG(&local_80), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG(&puStack_78), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      FUN_009d899c(GH_ARG(&local_70), GH_ARG(puVar4 + 2));
      puVar4 = (undefined8 *)*puVar4;
      if (*(undefined **)(self + 0x390) == *(undefined **)(self + 0x398)) {
        std__vector_PurchaseStruct_std__allocator_PurchaseStruct_____M_emplace_back_aux_PurchaseStruct_const___00477d34(GH_ARG((vector_PurchaseStruct_std__allocator_PurchaseStruct__ *)(self + 0x388)), GH_ARG((PurchaseStruct *)&local_a0));
      }
      else {
        PurchaseStruct__PurchaseStruct_00477efc(GH_ARG(*(undefined **)(self + 0x390)), GH_ARG((undefined *)&local_a0));
        *(gh_long *)(self + 0x390) = *(gh_long *)(self + 0x390) + 0x38;
      }
      puVar2 = *(undefined8 **)param_2;
      uVar5 = uVar5 + 1;
      if ((undefined8 *)param_2 == puVar2) break;
LAB_0039c4d8:
      uVar3 = 0;
      do {
        puVar2 = (undefined8 *)*puVar2;
        uVar3 = uVar3 + 1;
      } while ((undefined8 *)param_2 != puVar2);
    }
  } while( true );
  return 0;
}
