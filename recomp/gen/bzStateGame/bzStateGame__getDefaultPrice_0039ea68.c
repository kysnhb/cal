/* bzStateGame::getDefaultPrice_0039ea68 @ 0x0039ea68 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4d796
#define DAT_00a4d796 (*(undefined1 *)IMG(0x00a4d796))
#undef DAT_00a4d7b1
#define DAT_00a4d7b1 (*(undefined1 *)IMG(0x00a4d7b1))
#undef DAT_00a4d7d1
#define DAT_00a4d7d1 (*(undefined1 *)IMG(0x00a4d7d1))
#undef DAT_00a4d7e4
#define DAT_00a4d7e4 (*(undefined1 *)IMG(0x00a4d7e4))
#undef DAT_00a4d7eb
#define DAT_00a4d7eb (*(undefined1 *)IMG(0x00a4d7eb))
#undef DAT_00a4d7f0
#define DAT_00a4d7f0 (*(undefined1 *)IMG(0x00a4d7f0))
#undef DAT_00a4d7f5
#define DAT_00a4d7f5 (*(undefined1 *)IMG(0x00a4d7f5))
#undef DAT_00a4d7fa
#define DAT_00a4d7fa (*(undefined1 *)IMG(0x00a4d7fa))
#undef DAT_00a4d7ff
#define DAT_00a4d7ff (*(undefined1 *)IMG(0x00a4d7ff))
#undef DAT_00a4d804
#define DAT_00a4d804 (*(undefined1 *)IMG(0x00a4d804))
#undef DAT_00a4d805
#define DAT_00a4d805 (*(undefined1 *)IMG(0x00a4d805))
#undef DAT_00a4e18a
#define DAT_00a4e18a (*(undefined1 *)IMG(0x00a4e18a))
#undef DAT_00a4e191
#define DAT_00a4e191 (*(undefined1 *)IMG(0x00a4e191))
#undef DAT_00a4e197
#define DAT_00a4e197 (*(undefined1 *)IMG(0x00a4e197))
#undef DAT_00a4e198
#define DAT_00a4e198 (*(undefined1 *)IMG(0x00a4e198))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long bzStateGame__getDefaultPrice_0039ea68(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * ret = (undefined *)(uintptr_t)gh_a0;
  undefined * self = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gh_a3;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  uint64_t gh_frame64[83] = {0};   /* 원작 스택 프레임 (SP-0x280 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x280;
#define auStack_280 (*(undefined1 (*)[8])(gh_fb - 0x280))
#define auStack_278 (*(undefined1 (*)[8])(gh_fb - 0x278))
#define auStack_270 (*(undefined1 (*)[8])(gh_fb - 0x270))
#define auStack_268 (*(undefined1 (*)[8])(gh_fb - 0x268))
#define auStack_260 (*(undefined1 (*)[8])(gh_fb - 0x260))
#define auStack_258 (*(undefined1 (*)[8])(gh_fb - 0x258))
#define auStack_250 (*(undefined1 (*)[8])(gh_fb - 0x250))
#define auStack_248 (*(undefined1 (*)[8])(gh_fb - 0x248))
#define auStack_240 (*(undefined1 (*)[8])(gh_fb - 0x240))
#define auStack_238 (*(undefined1 (*)[8])(gh_fb - 0x238))
#define auStack_230 (*(undefined1 (*)[8])(gh_fb - 0x230))
#define auStack_228 (*(undefined1 (*)[8])(gh_fb - 0x228))
#define auStack_220 (*(undefined1 (*)[8])(gh_fb - 0x220))
#define auStack_218 (*(undefined1 (*)[8])(gh_fb - 0x218))
#define auStack_210 (*(undefined1 (*)[8])(gh_fb - 0x210))
#define auStack_208 (*(undefined1 (*)[8])(gh_fb - 0x208))
#define auStack_200 (*(undefined1 (*)[8])(gh_fb - 0x200))
#define auStack_1f8 (*(undefined1 (*)[8])(gh_fb - 0x1f8))
#define auStack_1f0 (*(undefined1 (*)[8])(gh_fb - 0x1f0))
#define auStack_1e8 (*(undefined1 (*)[8])(gh_fb - 0x1e8))
#define auStack_1e0 (*(undefined1 (*)[8])(gh_fb - 0x1e0))
#define auStack_1d8 (*(undefined1 (*)[8])(gh_fb - 0x1d8))
#define puStack_1d0 (*(undefined1 **)(gh_fb - 0x1d0))
#define auStack_1c8 (*(undefined1 (*)[8])(gh_fb - 0x1c8))
#define auStack_1c0 (*(undefined1 (*)[8])(gh_fb - 0x1c0))
#define auStack_1b8 (*(undefined1 (*)[8])(gh_fb - 0x1b8))
#define auStack_1b0 (*(undefined1 (*)[8])(gh_fb - 0x1b0))
#define auStack_1a8 (*(undefined1 (*)[8])(gh_fb - 0x1a8))
#define auStack_1a0 (*(undefined1 (*)[8])(gh_fb - 0x1a0))
#define auStack_198 (*(undefined1 (*)[8])(gh_fb - 0x198))
#define auStack_190 (*(undefined1 (*)[8])(gh_fb - 0x190))
#define auStack_188 (*(undefined1 (*)[8])(gh_fb - 0x188))
#define auStack_180 (*(undefined1 (*)[8])(gh_fb - 0x180))
#define auStack_178 (*(undefined1 (*)[8])(gh_fb - 0x178))
#define auStack_170 (*(undefined1 (*)[8])(gh_fb - 0x170))
#define auStack_168 (*(undefined1 (*)[8])(gh_fb - 0x168))
#define auStack_160 (*(undefined1 (*)[8])(gh_fb - 0x160))
#define auStack_158 (*(undefined1 (*)[8])(gh_fb - 0x158))
#define auStack_150 (*(undefined1 (*)[8])(gh_fb - 0x150))
#define auStack_148 (*(undefined1 (*)[8])(gh_fb - 0x148))
#define auStack_140 (*(undefined1 (*)[8])(gh_fb - 0x140))
#define auStack_138 (*(undefined1 (*)[8])(gh_fb - 0x138))
#define auStack_130 (*(undefined1 (*)[8])(gh_fb - 0x130))
#define local_128 (*(undefined1 **)(gh_fb - 0x128))
#define local_120 (*(undefined1 *(*)[2])(gh_fb - 0x120))
#define puStack_110 (*(undefined1 **)(gh_fb - 0x110))
#define puStack_108 (*(undefined1 **)(gh_fb - 0x108))
#define local_100 (*(undefined1 **)(gh_fb - 0x100))
#define puStack_f8 (*(undefined1 **)(gh_fb - 0xf8))
#define puStack_f0 (*(undefined1 **)(gh_fb - 0xf0))
#define puStack_e8 (*(undefined1 **)(gh_fb - 0xe8))
#define local_e0 (*(undefined1 **)(gh_fb - 0xe0))
#define puStack_d8 (*(undefined1 **)(gh_fb - 0xd8))
#define puStack_d0 (*(undefined1 **)(gh_fb - 0xd0))
#define puStack_c8 (*(undefined1 **)(gh_fb - 0xc8))
#define local_c0 (*(undefined1 **)(gh_fb - 0xc0))
#define puStack_b8 (*(undefined1 **)(gh_fb - 0xb8))
#define puStack_b0 (*(undefined1 **)(gh_fb - 0xb0))
#define puStack_a8 (*(undefined1 **)(gh_fb - 0xa8))
#define local_a0 (*(undefined1 **)(gh_fb - 0xa0))
#define puStack_98 (*(undefined1 **)(gh_fb - 0x98))
#define puStack_90 (*(undefined1 **)(gh_fb - 0x90))
#define puStack_88 (*(undefined1 **)(gh_fb - 0x88))
#define local_80 (*(undefined1 **)(gh_fb - 0x80))
#define apuStack_78 (*(undefined1 *(*)[2])(gh_fb - 0x78))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar3 = tpidr_el0;
  local_68 = *(gh_long *)(lVar3 + 0x28);
  local_120[0] = &DAT_00d40318;
  ppuVar8 = apuStack_78 + 1;
  local_120[1] = local_120[0];
  puStack_110 = local_120[0];
  puStack_108 = local_120[0];
  local_100 = local_120[0];
  puStack_f8 = local_120[0];
  puStack_f0 = local_120[0];
  puStack_e8 = local_120[0];
  local_e0 = local_120[0];
  puStack_d8 = local_120[0];
  puStack_d0 = local_120[0];
  puStack_c8 = local_120[0];
  local_c0 = local_120[0];
  puStack_b8 = local_120[0];
  puStack_b0 = local_120[0];
  puStack_a8 = local_120[0];
  local_a0 = local_120[0];
  puStack_98 = local_120[0];
  puStack_90 = local_120[0];
  puStack_88 = local_120[0];
  local_80 = local_120[0];
  apuStack_78[0] = local_120[0];
  iVar4 = FUN_009d6cd4(GH_ARG(param_4), GH_ARG(&DAT_00a4d796), GH_ARG(0));
  if (iVar4 == 0) {
    FUN_009d4eac(GH_ARG(&puStack_1d0), GH_ARG("1,100"), GH_ARG(auStack_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1c8), GH_ARG("5,900"), GH_ARG(auStack_1e0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1c0), GH_ARG("36,000"), GH_ARG(auStack_1e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1b8), GH_ARG("1,100"), GH_ARG(auStack_1f0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1b0), GH_ARG("5,900"), GH_ARG(auStack_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1a8), GH_ARG(&DAT_00a4d7b1), GH_ARG(auStack_200), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1a0), GH_ARG("4,600"), GH_ARG(auStack_208), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_198), GH_ARG("4,600"), GH_ARG(auStack_210), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_190), GH_ARG("7,000"), GH_ARG(auStack_218), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_188), GH_ARG("8,000"), GH_ARG(auStack_220), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_180), GH_ARG("9,500"), GH_ARG(auStack_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_178), GH_ARG("9,500"), GH_ARG(auStack_230), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_170), GH_ARG(&DAT_00a4d7d1), GH_ARG(auStack_238), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_168), GH_ARG("2,000"), GH_ARG(auStack_240), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_160), GH_ARG("5,000"), GH_ARG(auStack_248), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_158), GH_ARG("9,000"), GH_ARG(auStack_250), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_150), GH_ARG("2,000"), GH_ARG(auStack_258), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_148), GH_ARG("5,000"), GH_ARG(auStack_260), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_140), GH_ARG("9,000"), GH_ARG(auStack_268), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_138), GH_ARG("4,000"), GH_ARG(auStack_270), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_130), GH_ARG("5,000"), GH_ARG(auStack_278), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_128), GH_ARG(&DAT_00a4d7e4), GH_ARG(auStack_280), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d899c(GH_ARG(local_120), GH_ARG(&puStack_1d0));
    FUN_009d899c(GH_ARG((ulong)local_120 | 8), GH_ARG(auStack_1c8));
    FUN_009d899c(GH_ARG(&puStack_110), GH_ARG(auStack_1c0));
    FUN_009d899c(GH_ARG(&puStack_108), GH_ARG(auStack_1b8));
    FUN_009d899c(GH_ARG(&local_100), GH_ARG(auStack_1b0));
    FUN_009d899c(GH_ARG(&puStack_f8), GH_ARG(auStack_1a8));
    FUN_009d899c(GH_ARG(&puStack_f0), GH_ARG(auStack_1a0));
    FUN_009d899c(GH_ARG(&puStack_e8), GH_ARG(auStack_198));
    FUN_009d899c(GH_ARG(&local_e0), GH_ARG(auStack_190));
    FUN_009d899c(GH_ARG(&puStack_d8), GH_ARG(auStack_188));
    FUN_009d899c(GH_ARG(&puStack_d0), GH_ARG(auStack_180));
    FUN_009d899c(GH_ARG(&puStack_c8), GH_ARG(auStack_178));
    FUN_009d899c(GH_ARG(&local_c0), GH_ARG(auStack_170));
    FUN_009d899c(GH_ARG(&puStack_b8), GH_ARG(auStack_168));
    FUN_009d899c(GH_ARG(&puStack_b0), GH_ARG(auStack_160));
    FUN_009d899c(GH_ARG(&puStack_a8), GH_ARG(auStack_158));
    FUN_009d899c(GH_ARG(&local_a0), GH_ARG(auStack_150));
    FUN_009d899c(GH_ARG(&puStack_98), GH_ARG(auStack_148));
    FUN_009d899c(GH_ARG(&puStack_90), GH_ARG(auStack_140));
    FUN_009d899c(GH_ARG(&puStack_88), GH_ARG(auStack_138));
    FUN_009d899c(GH_ARG(&local_80), GH_ARG(auStack_130));
    FUN_009d899c(GH_ARG(apuStack_78), GH_ARG(&local_128));
    ppuVar7 = local_120;
    do {
      while( true ) {
        ppuVar7 = ppuVar7 + -1;
        puVar5 = (undefined8 *)(*ppuVar7 + -0x18);
        if (puVar5 != &DAT_00d40300) break;
LAB_0039f224:
        if (ppuVar7 == &puStack_1d0) goto LAB_0039f2c8;
      }
      piVar6 = (int *)(*ppuVar7 + -8);
      do {
        iVar4 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (0 < iVar4) goto LAB_0039f224;
      operator_delete(puVar5);
    } while (ppuVar7 != &puStack_1d0);
  }
  else {
    FUN_009d4eac(GH_ARG(&puStack_1d0), GH_ARG(&DAT_00a4e18a), GH_ARG(auStack_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1c8), GH_ARG(&DAT_00a4e191), GH_ARG(auStack_1e0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1c0), GH_ARG(&DAT_00a4e197), GH_ARG(auStack_1e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1b8), GH_ARG(&DAT_00a4e18a), GH_ARG(auStack_1f0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1b0), GH_ARG(&DAT_00a4e191), GH_ARG(auStack_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1a8), GH_ARG("99.99"), GH_ARG(auStack_200), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_1a0), GH_ARG(&DAT_00a4d805), GH_ARG(auStack_208), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_198), GH_ARG(&DAT_00a4d805), GH_ARG(auStack_210), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_190), GH_ARG(&DAT_00a4d7eb), GH_ARG(auStack_218), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_188), GH_ARG(&DAT_00a4d7f0), GH_ARG(auStack_220), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_180), GH_ARG(&DAT_00a4d7f5), GH_ARG(auStack_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_178), GH_ARG(&DAT_00a4d7f5), GH_ARG(auStack_230), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_170), GH_ARG(&DAT_00a4e198), GH_ARG(auStack_238), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_168), GH_ARG(&DAT_00a4d7fa), GH_ARG(auStack_240), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_160), GH_ARG(&DAT_00a4e191), GH_ARG(auStack_248), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_158), GH_ARG(&DAT_00a4d7ff), GH_ARG(auStack_250), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_150), GH_ARG(&DAT_00a4d7fa), GH_ARG(auStack_258), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_148), GH_ARG(&DAT_00a4e191), GH_ARG(auStack_260), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_140), GH_ARG(&DAT_00a4d7ff), GH_ARG(auStack_268), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_138), GH_ARG(&DAT_00a4d805), GH_ARG(auStack_270), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_130), GH_ARG(&DAT_00a4e191), GH_ARG(auStack_278), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_128), GH_ARG(&DAT_00a4d804), GH_ARG(auStack_280), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d899c(GH_ARG(local_120), GH_ARG(&puStack_1d0));
    FUN_009d899c(GH_ARG((ulong)local_120 | 8), GH_ARG(auStack_1c8));
    FUN_009d899c(GH_ARG(&puStack_110), GH_ARG(auStack_1c0));
    FUN_009d899c(GH_ARG(&puStack_108), GH_ARG(auStack_1b8));
    FUN_009d899c(GH_ARG(&local_100), GH_ARG(auStack_1b0));
    FUN_009d899c(GH_ARG(&puStack_f8), GH_ARG(auStack_1a8));
    FUN_009d899c(GH_ARG(&puStack_f0), GH_ARG(auStack_1a0));
    FUN_009d899c(GH_ARG(&puStack_e8), GH_ARG(auStack_198));
    FUN_009d899c(GH_ARG(&local_e0), GH_ARG(auStack_190));
    FUN_009d899c(GH_ARG(&puStack_d8), GH_ARG(auStack_188));
    FUN_009d899c(GH_ARG(&puStack_d0), GH_ARG(auStack_180));
    FUN_009d899c(GH_ARG(&puStack_c8), GH_ARG(auStack_178));
    FUN_009d899c(GH_ARG(&local_c0), GH_ARG(auStack_170));
    FUN_009d899c(GH_ARG(&puStack_b8), GH_ARG(auStack_168));
    FUN_009d899c(GH_ARG(&puStack_b0), GH_ARG(auStack_160));
    FUN_009d899c(GH_ARG(&puStack_a8), GH_ARG(auStack_158));
    FUN_009d899c(GH_ARG(&local_a0), GH_ARG(auStack_150));
    FUN_009d899c(GH_ARG(&puStack_98), GH_ARG(auStack_148));
    FUN_009d899c(GH_ARG(&puStack_90), GH_ARG(auStack_140));
    FUN_009d899c(GH_ARG(&puStack_88), GH_ARG(auStack_138));
    FUN_009d899c(GH_ARG(&local_80), GH_ARG(auStack_130));
    FUN_009d899c(GH_ARG(apuStack_78), GH_ARG(&local_128));
    ppuVar7 = local_120;
    do {
      ppuVar7 = ppuVar7 + -1;
      puVar5 = (undefined8 *)(*ppuVar7 + -0x18);
      if (puVar5 != &DAT_00d40300) {
        piVar6 = (int *)(*ppuVar7 + -8);
        do {
          iVar4 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 < 1) {
          operator_delete(puVar5);
        }
      }
    } while (ppuVar7 != &puStack_1d0);
  }
LAB_0039f2c8:
  FUN_009d881c(GH_ARG(ret), GH_ARG((undefined1 **)((gh_long)local_120 + (gh_long)param_3 * 8)));
  do {
    while( true ) {
      ppuVar8 = ppuVar8 + -1;
      puVar5 = (undefined8 *)(*ppuVar8 + -0x18);
      if (puVar5 != &DAT_00d40300) break;
LAB_0039f2f4:
      if (ppuVar8 == local_120) goto LAB_0039f340;
    }
    piVar6 = (int *)(*ppuVar8 + -8);
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (0 < iVar4) goto LAB_0039f2f4;
    operator_delete(puVar5);
  } while (ppuVar8 != local_120);
LAB_0039f340:
  if (*(gh_long *)(lVar3 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
