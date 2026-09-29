/* bzStateGame::CouponResource_003ae1f4 @ 0x003ae1f4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4d81a
#define DAT_00a4d81a (*(undefined1 *)IMG(0x00a4d81a))
#undef DAT_00a4d823
#define DAT_00a4d823 (*(undefined1 *)IMG(0x00a4d823))
#undef DAT_00a4d865
#define DAT_00a4d865 (*(undefined1 *)IMG(0x00a4d865))
#undef DAT_00a4e0cd
#define DAT_00a4e0cd (*(undefined1 *)IMG(0x00a4e0cd))
#undef DAT_00a4e0e6
#define DAT_00a4e0e6 (*(undefined1 *)IMG(0x00a4e0e6))
#undef DAT_00a4f493
#define DAT_00a4f493 (*(undefined1 *)IMG(0x00a4f493))
#undef DAT_00a4f4a7
#define DAT_00a4f4a7 (*(undefined1 *)IMG(0x00a4f4a7))
#undef DAT_00a4f4b0
#define DAT_00a4f4b0 (*(undefined1 *)IMG(0x00a4f4b0))
#undef DAT_00a4f4b9
#define DAT_00a4f4b9 (*(undefined1 *)IMG(0x00a4f4b9))
#undef DAT_00a4f4c2
#define DAT_00a4f4c2 (*(undefined1 *)IMG(0x00a4f4c2))
#undef DAT_00a4f65d
#define DAT_00a4f65d (*(undefined1 *)IMG(0x00a4f65d))
#undef DAT_00a508ce
#define DAT_00a508ce (*(undefined1 *)IMG(0x00a508ce))
#undef DAT_00a532ec
#define DAT_00a532ec (*(undefined1 *)IMG(0x00a532ec))
#undef DAT_00ad7568
#define DAT_00ad7568 (*(undefined1 *)IMG(0x00ad7568))
#undef DAT_00ad7758
#define DAT_00ad7758 (*(undefined1 *)IMG(0x00ad7758))
#undef DAT_00ad7a6c
#define DAT_00ad7a6c (*(undefined1 *)IMG(0x00ad7a6c))
#undef DAT_00ae495c
#define DAT_00ae495c (*(undefined1 *)IMG(0x00ae495c))
#undef DAT_00ae7250
#define DAT_00ae7250 (*(undefined1 *)IMG(0x00ae7250))
#undef DAT_00af761d
#define DAT_00af761d (*(undefined1 *)IMG(0x00af761d))
#undef DAT_00af7682
#define DAT_00af7682 (*(undefined1 *)IMG(0x00af7682))
#undef DAT_00af768e
#define DAT_00af768e (*(undefined1 *)IMG(0x00af768e))
#undef DAT_00af7691
#define DAT_00af7691 (*(undefined1 *)IMG(0x00af7691))
#undef DAT_00afcb5d
#define DAT_00afcb5d (*(undefined1 *)IMG(0x00afcb5d))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00affb0f
#define DAT_00affb0f (*(undefined1 *)IMG(0x00affb0f))
#undef DAT_00affb12
#define DAT_00affb12 (*(undefined1 *)IMG(0x00affb12))
#undef DAT_00b008ce
#define DAT_00b008ce (*(undefined1 *)IMG(0x00b008ce))
#undef DAT_00b00fb9
#define DAT_00b00fb9 (*(undefined1 *)IMG(0x00b00fb9))
#undef DAT_00b013b1
#define DAT_00b013b1 (*(undefined1 *)IMG(0x00b013b1))
#undef DAT_00b013e3
#define DAT_00b013e3 (*(undefined1 *)IMG(0x00b013e3))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__CouponResource_003ae1f4(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  int iVar2;
  char cVar3;
  gh_long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  gh_long *plVar12;
  int iVar13;
  ulong uVar14;
  Color4F aCStack_2e8 [16];
  Color4F aCStack_2d8 [16];
  uint64_t gh_frame64[92] = {0};   /* 원작 스택 프레임 (SP-0x2c8 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x2c8;
#define local_2c8 (*(gh_long *)(gh_fb - 0x2c8))
#define auStack_2c0 (*(undefined1 (*)[8])(gh_fb - 0x2c0))
#define auStack_2b8 (*(undefined1 (*)[8])(gh_fb - 0x2b8))
#define auStack_2b0 (*(undefined1 (*)[8])(gh_fb - 0x2b0))
#define auStack_2a8 (*(undefined1 (*)[8])(gh_fb - 0x2a8))
#define auStack_2a0 (*(undefined1 (*)[8])(gh_fb - 0x2a0))
#define auStack_298 (*(undefined1 (*)[8])(gh_fb - 0x298))
#define auStack_290 (*(undefined1 (*)[8])(gh_fb - 0x290))
#define auStack_288 (*(undefined1 (*)[8])(gh_fb - 0x288))
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
#define auStack_1d0 (*(undefined1 (*)[8])(gh_fb - 0x1d0))
#define auStack_1c8 (*(undefined1 (*)[8])(gh_fb - 0x1c8))
#define auStack_1c0 (*(undefined1 (*)[8])(gh_fb - 0x1c0))
#define auStack_1b8 (*(undefined1 (*)[8])(gh_fb - 0x1b8))
#define auStack_1b0 (*(undefined1 (*)[8])(gh_fb - 0x1b0))
#define lStack_1a8 (*(gh_long *)(gh_fb - 0x1a8))
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
#define auStack_128 (*(undefined1 (*)[8])(gh_fb - 0x128))
#define auStack_120 (*(undefined1 (*)[8])(gh_fb - 0x120))
#define auStack_118 (*(undefined1 (*)[8])(gh_fb - 0x118))
#define auStack_110 (*(undefined1 (*)[8])(gh_fb - 0x110))
#define auStack_108 (*(undefined1 (*)[8])(gh_fb - 0x108))
#define auStack_100 (*(undefined1 (*)[8])(gh_fb - 0x100))
#define auStack_f8 (*(undefined1 (*)[8])(gh_fb - 0xf8))
#define auStack_f0 (*(undefined1 (*)[8])(gh_fb - 0xf0))
#define auStack_e8 (*(undefined1 (*)[8])(gh_fb - 0xe8))
#define auStack_e0 (*(undefined1 (*)[8])(gh_fb - 0xe0))
#define auStack_d8 (*(undefined1 (*)[8])(gh_fb - 0xd8))
#define auStack_d0 (*(undefined1 (*)[8])(gh_fb - 0xd0))
#define auStack_c8 (*(undefined1 (*)[8])(gh_fb - 0xc8))
#define auStack_c0 (*(undefined1 (*)[8])(gh_fb - 0xc0))
#define auStack_b8 (*(undefined1 (*)[8])(gh_fb - 0xb8))
#define auStack_b0 (*(undefined1 (*)[8])(gh_fb - 0xb0))
#define auStack_a8 (*(undefined1 (*)[8])(gh_fb - 0xa8))
#define auStack_a0 (*(undefined1 (*)[8])(gh_fb - 0xa0))
#define auStack_98 (*(undefined1 (*)[8])(gh_fb - 0x98))
#define auStack_90 (*(undefined1 (*)[8])(gh_fb - 0x90))
#define auStack_88 (*(undefined1 (*)[8])(gh_fb - 0x88))
#define local_80 (*(gh_long (*)[2])(gh_fb - 0x80))
  
  lVar4 = tpidr_el0;
  local_80[1] = *(gh_long *)(lVar4 + 0x28);
  FUN_009d4eac(GH_ARG(&lStack_1a8), GH_ARG(" "), GH_ARG(aCStack_2d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_1a0), GH_ARG("1"), GH_ARG(aCStack_2e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_198), GH_ARG(&DAT_00a4f493), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_190), GH_ARG(&DAT_00a4f65d), GH_ARG(auStack_1b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_188), GH_ARG(&DAT_00a4f4a7), GH_ARG(auStack_1b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_180), GH_ARG(&DAT_00a4f4b0), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_178), GH_ARG(&DAT_00a4d81a), GH_ARG(auStack_1c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_170), GH_ARG(&DAT_00a4f4b9), GH_ARG(auStack_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_168), GH_ARG(&DAT_00a4f4c2), GH_ARG(auStack_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_160), GH_ARG(&DAT_00a4d823), GH_ARG(auStack_1e0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_158), GH_ARG(&DAT_00ae7250), GH_ARG(auStack_1e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_150), GH_ARG(&DAT_00a4d865), GH_ARG(auStack_1f0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_148), GH_ARG(&DAT_00b00fb9), GH_ARG(auStack_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_140), GH_ARG("E"), GH_ARG(auStack_200), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_138), GH_ARG("R"), GH_ARG(auStack_208), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_130), GH_ARG("T"), GH_ARG(auStack_210), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_128), GH_ARG(&DAT_00a4e0e6), GH_ARG(auStack_218), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_120), GH_ARG(&DAT_00a4e0cd), GH_ARG(auStack_220), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_118), GH_ARG(&DAT_00ad7758), GH_ARG(auStack_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_110), GH_ARG(&DAT_00a508ce), GH_ARG(auStack_230), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_108), GH_ARG(&DAT_00afcb5d), GH_ARG(auStack_238), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_100), GH_ARG(&DAT_00b013b1), GH_ARG(auStack_240), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_f8), GH_ARG("S"), GH_ARG(auStack_248), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_f0), GH_ARG(&DAT_00affb12), GH_ARG(auStack_250), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_e8), GH_ARG(&DAT_00affb0f), GH_ARG(auStack_258), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_e0), GH_ARG("G"), GH_ARG(auStack_260), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_d8), GH_ARG(IMG(0xaf7615)), GH_ARG(auStack_268), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_d0), GH_ARG("J"), GH_ARG(auStack_270), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_c8), GH_ARG(&DAT_00af7682), GH_ARG(auStack_278), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_c0), GH_ARG("L"), GH_ARG(auStack_280), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_b8), GH_ARG(&DAT_00ad7a6c), GH_ARG(auStack_288), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_b0), GH_ARG(&DAT_00af761d), GH_ARG(auStack_290), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_a8), GH_ARG(&DAT_00ae495c), GH_ARG(auStack_298), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_a0), GH_ARG(&DAT_00ad7568), GH_ARG(auStack_2a0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_98), GH_ARG(&DAT_00b013e3), GH_ARG(auStack_2a8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_90), GH_ARG(&DAT_00af768e), GH_ARG(auStack_2b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(auStack_88), GH_ARG(&DAT_00af7691), GH_ARG(auStack_2b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(local_80), GH_ARG(&DAT_00b008ce), GH_ARG(auStack_2c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar14 = 0;
  iVar13 = 0;
  do {
    lVar1 = uVar14 * 4;
    FUN_003af38c(GH_ARG(&local_2c8), GH_ARG(&DAT_00afe81e), GH_ARG(&lStack_1a8 + *(int *)(self + lVar1 + 0x32bfd0)));
    iVar7 = *(int *)(self + 0x1160);
    iVar2 = *(int *)(self + 0x115c);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2d8), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2e8), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_2c8), GH_ARG(iVar13 + iVar7 + -0x1cc), GH_ARG(iVar2 + -0x164), GH_ARG(0), GH_ARG(aCStack_2d8), GH_ARG(aCStack_2e8), GH_ARG(7));
    if ((undefined8 *)(local_2c8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_2c8 + -8);
      do {
        iVar7 = *piVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 < 1) {
        operator_delete((undefined8 *)(local_2c8 + -0x18));
      }
    }
    bVar5 = uVar14 < 0x1d;
    uVar14 = uVar14 + 1;
    iVar13 = *(int *)(&DAT_00a532ec + (gh_long)*(int *)(self + lVar1 + 0x32bfd0) * 4) + iVar13;
  } while (bVar5);
  piVar9 = (int *)(self + 0x32bfbc);
  iVar7 = *piVar9;
  if (iVar7 < 4) {
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG(&DAT_00ad7758), GH_ARG(auStack_1b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar7 = *(int *)(self + 0x1160);
    iVar2 = *(int *)(self + 0x115c);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2d8), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2e8), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(1.0));
    bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_2c8), GH_ARG(iVar13 + -0x1cc + iVar7), GH_ARG(iVar2 + -0x16a), GH_ARG(0), GH_ARG(aCStack_2d8), GH_ARG(aCStack_2e8), GH_ARG(7));
    if ((undefined8 *)(local_2c8 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_2c8 + -8);
      do {
        iVar7 = *piVar10;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 < 1) {
        operator_delete((undefined8 *)(local_2c8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG(&DAT_00ad7758), GH_ARG(auStack_1b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar7 = *(int *)(self + 0x1160);
    iVar2 = *(int *)(self + 0x115c);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2d8), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_2e8), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(0.11764706), GH_ARG(1.0));
    bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_2c8), GH_ARG(iVar13 + -0x1cc + iVar7), GH_ARG(iVar2 + -0x164), GH_ARG(0), GH_ARG(aCStack_2d8), GH_ARG(aCStack_2e8), GH_ARG(7));
    if ((undefined8 *)(local_2c8 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_2c8 + -8);
      do {
        iVar13 = *piVar10;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_2c8 + -0x18));
      }
    }
    iVar7 = *piVar9;
  }
  else if (5 < iVar7) {
    iVar7 = 0;
    *piVar9 = 0;
  }
  *piVar9 = iVar7 + 1;
  iVar13 = *(int *)(self + 0x32bfd0) * 1000000 + *(int *)(self + 0x32bfd4) * 10000 +
           *(int *)(self + 0x32bfd8) * 100 + *(int *)(self + 0x32bfdc);
  uVar11 = 0;
  if (iVar13 < 0x16345ab) {
    if (iVar13 < 0x1268c00) {
      if (iVar13 == 0xd83dee) {
        uVar11 = 1;
      }
      else {
        iVar7 = 0;
        if (iVar13 != 0x108cb84) goto LAB_003aea18;
        uVar11 = 2;
      }
    }
    else if (iVar13 == 0x1268c00) {
      uVar11 = 3;
    }
    else {
      iVar7 = 0;
      if (iVar13 != 0x1435e0d) goto LAB_003aea18;
      uVar11 = 9;
    }
  }
  else if (iVar13 < 0x1afb4ec) {
    if (iVar13 == 0x16345ab) {
      uVar11 = 4;
    }
    else {
      iVar7 = 0;
      if (iVar13 != 0x18dd8f6) goto LAB_003aea18;
      uVar11 = 6;
    }
  }
  else if (iVar13 == 0x1afb4ec) {
    uVar11 = 7;
  }
  else if (iVar13 == 0x1bd43f4) {
    uVar11 = 5;
  }
  else {
    iVar7 = 0;
    if (iVar13 != 0x1d9fd6c) goto LAB_003aea18;
    uVar11 = 8;
  }
  iVar7 = *(int *)(self + 0x32bfe8) * 1000000 + *(int *)(self + 0x32bfec) * 10000 +
          *(int *)(self + 0x32bff0) * 100 + *(int *)(self + 0x32bff4) + uVar11 * 100000000;
LAB_003aea18:
  *(int *)(self + 0x32bfc0) = iVar7;
  if (*(int *)(self + 0x32bfc4) == 0) {
    uVar8 = 1;
    if (7 < uVar11) {
      uVar8 = 2;
    }
    *(undefined4 *)(self + 0x32bfcc) = uVar8;
  }
  if (0 < *(int *)(self + 0x32bff4)) {
    piVar9 = (int *)(self + 0x32c824);
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x86), GH_ARG(*(int *)(self + 0x1160) + 400), GH_ARG((*(int *)(self + 0x115c) + -0x46) - *piVar9), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.4), GH_ARG(0), GH_ARG(1.0));
    iVar13 = 0;
    if (*piVar9 < 7) {
      iVar13 = *piVar9 + 1;
    }
    *piVar9 = iVar13;
  }
  plVar12 = local_80 + 1;
  do {
    while( true ) {
      plVar12 = plVar12 + -1;
      puVar6 = (undefined8 *)(*plVar12 + -0x18);
      if (puVar6 != &DAT_00d40300) break;
LAB_003aead4:
      if (plVar12 == &lStack_1a8) goto LAB_003aeb20;
    }
    piVar9 = (int *)(*plVar12 + -8);
    do {
      iVar13 = *piVar9;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar5) {
        *piVar9 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (0 < iVar13) goto LAB_003aead4;
    operator_delete(puVar6);
  } while (plVar12 != &lStack_1a8);
LAB_003aeb20:
  if (*(gh_long *)(lVar4 + 0x28) == local_80[1]) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
