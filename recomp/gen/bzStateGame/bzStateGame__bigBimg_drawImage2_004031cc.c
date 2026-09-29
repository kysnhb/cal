/* bzStateGame::bigBimg_drawImage2_004031cc @ 0x004031cc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__bigBimg_drawImage2_004031cc(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  float param_8 = gh_b2f(gh_a7);
  int param_9 = (int)gh_a8;
  float param_10 = gh_b2f(gh_a9);

  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 in_register_00005024 = 0;
  uint64_t gh_frame64[23] = {0};   /* 원작 스택 프레임 (SP-0xa0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xa0;
#define local_a0 (*(ulong *)(gh_fb - 0xa0))
#define uStack_98 (*(ulong *)(gh_fb - 0x98))
#define local_90 (*(float *)(gh_fb - 0x90))
#define fStack_8c (*(float *)(gh_fb - 0x8c))
#define local_88 (*(gh_long (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar5 = tpidr_el0;
  local_78 = *(gh_long *)(lVar5 + 0x28);
  uVar2 = *(uint *)(self + 0x32a69c);
  if (6 < param_2 - 1U) {
    param_2 = 1;
  }
  if (uVar2 != param_2) {
    if (0 < (int)uVar2) {
      kScene__clearSprite_0047daa8(GH_ARG((kScene *)self), GH_ARG(1), GH_ARG((kSprite **)(self + 0x32a690)));
    }
    *(int *)(self + 0x32a69c) = param_2;
    cocos2d__StringUtils__format_0060c028(GH_ARG("img/bg/bg_%d.png"), GH_ARG(local_88), GH_ARG((ulong)(uint)param_2), GH_ARG(0), GH_ARG(0));
    uVar7 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(1), GH_ARG(local_88), GH_ARG(0));
    *(undefined8 *)(self + 0x32a690) = uVar7;
    if ((undefined8 *)(local_88[0] + -0x18) != &DAT_00d40300) {
      piVar6 = (int *)(local_88[0] + -8);
      do {
        iVar1 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_88[0] + -0x18));
      }
    }
  }
  local_90 = (float)param_3;
  fStack_8c = (float)param_4;
  uVar7 = *(undefined8 *)(self + 0x32a690);
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG((float)param_5 / 255.0), GH_ARG((float)param_6 / 255.0), GH_ARG((float)param_7 / 255.0), GH_ARG(param_8));
  kSprite__drawPos_0047f378(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(CONCAT44(in_register_00005024,param_10)), GH_ARG(uVar7), GH_ARG(&local_90), GH_ARG(param_9));
  if (*(gh_long *)(lVar5 + 0x28) == local_78) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
