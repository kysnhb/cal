/* bzStateGame::ConfirmationWindo_003f535c @ 0x003f535c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4ef17
#define DAT_00a4ef17 (*(undefined1 *)IMG(0x00a4ef17))
#undef DAT_00a4ef25
#define DAT_00a4ef25 (*(undefined1 *)IMG(0x00a4ef25))
#undef DAT_00a4ef48
#define DAT_00a4ef48 (*(undefined1 *)IMG(0x00a4ef48))
#undef DAT_00a4ef6d
#define DAT_00a4ef6d (*(undefined1 *)IMG(0x00a4ef6d))
#undef DAT_00a4effe
#define DAT_00a4effe (*(undefined1 *)IMG(0x00a4effe))
#undef DAT_00a4f01b
#define DAT_00a4f01b (*(undefined1 *)IMG(0x00a4f01b))
#undef DAT_00a4f036
#define DAT_00a4f036 (*(undefined1 *)IMG(0x00a4f036))
#undef DAT_00a4f05e
#define DAT_00a4f05e (*(undefined1 *)IMG(0x00a4f05e))
#undef DAT_00a4f0db
#define DAT_00a4f0db (*(undefined1 *)IMG(0x00a4f0db))
#undef DAT_00a4f123
#define DAT_00a4f123 (*(undefined1 *)IMG(0x00a4f123))
#undef DAT_00a4f164
#define DAT_00a4f164 (*(undefined1 *)IMG(0x00a4f164))
#undef DAT_00a4f17e
#define DAT_00a4f17e (*(undefined1 *)IMG(0x00a4f17e))
#undef DAT_00a4f1a5
#define DAT_00a4f1a5 (*(undefined1 *)IMG(0x00a4f1a5))
#undef DAT_00a4f1cb
#define DAT_00a4f1cb (*(undefined1 *)IMG(0x00a4f1cb))
#undef DAT_00a4f1f2
#define DAT_00a4f1f2 (*(undefined1 *)IMG(0x00a4f1f2))
#undef DAT_00a4f27d
#define DAT_00a4f27d (*(undefined1 *)IMG(0x00a4f27d))
#undef DAT_00a4f28a
#define DAT_00a4f28a (*(undefined1 *)IMG(0x00a4f28a))
#undef DAT_00a4f2ab
#define DAT_00a4f2ab (*(undefined1 *)IMG(0x00a4f2ab))
#undef DAT_00a4f2f1
#define DAT_00a4f2f1 (*(undefined1 *)IMG(0x00a4f2f1))
#undef DAT_00a4f315
#define DAT_00a4f315 (*(undefined1 *)IMG(0x00a4f315))
#undef DAT_00a4f359
#define DAT_00a4f359 (*(undefined1 *)IMG(0x00a4f359))
#undef DAT_00a4f378
#define DAT_00a4f378 (*(undefined1 *)IMG(0x00a4f378))
#undef DAT_00a4f39c
#define DAT_00a4f39c (*(undefined1 *)IMG(0x00a4f39c))
#undef DAT_00a4f3c5
#define DAT_00a4f3c5 (*(undefined1 *)IMG(0x00a4f3c5))
#undef DAT_00a4f443
#define DAT_00a4f443 (*(undefined1 *)IMG(0x00a4f443))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long bzStateGame__ConfirmationWindo_003f535c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  gh_long lVar1;
  char cVar2;
  gh_long lVar3;
  bool bVar4;
  gh_long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int in_w5 = 0;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  gh_long lVar14;
  ulong uVar15;
  ulong uVar16;
  gh_long lVar17;
  int iVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  uint64_t gh_frame64[149] = {0};   /* 원작 스택 프레임 (SP-0x490 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x490;
#define local_490 (*(ulong *)(gh_fb - 0x490))
#define uStack_488 (*(ulong *)(gh_fb - 0x488))
#define local_478 (*(undefined8 *)(gh_fb - 0x478))
#define local_470 (*(ulong *)(gh_fb - 0x470))
#define uStack_468 (*(ulong *)(gh_fb - 0x468))
#define local_458 (*(undefined8 *)(gh_fb - 0x458))
#define local_450 (*(ulong *)(gh_fb - 0x450))
#define uStack_448 (*(ulong *)(gh_fb - 0x448))
#define local_438 (*(undefined8 *)(gh_fb - 0x438))
#define local_430 (*(ulong *)(gh_fb - 0x430))
#define uStack_428 (*(ulong *)(gh_fb - 0x428))
#define local_418 (*(undefined8 *)(gh_fb - 0x418))
#define local_410 (*(ulong *)(gh_fb - 0x410))
#define uStack_408 (*(ulong *)(gh_fb - 0x408))
#define local_3f8 (*(undefined8 *)(gh_fb - 0x3f8))
#define local_3f0 (*(ulong *)(gh_fb - 0x3f0))
#define uStack_3e8 (*(ulong *)(gh_fb - 0x3e8))
#define local_3d8 (*(undefined8 *)(gh_fb - 0x3d8))
#define local_3d0 (*(ulong *)(gh_fb - 0x3d0))
#define uStack_3c8 (*(ulong *)(gh_fb - 0x3c8))
#define local_3b8 (*(undefined8 *)(gh_fb - 0x3b8))
#define local_3b0 (*(ulong *)(gh_fb - 0x3b0))
#define uStack_3a8 (*(ulong *)(gh_fb - 0x3a8))
#define local_398 (*(undefined8 *)(gh_fb - 0x398))
#define local_390 (*(ulong *)(gh_fb - 0x390))
#define uStack_388 (*(ulong *)(gh_fb - 0x388))
#define local_378 (*(float *)(gh_fb - 0x378))
#define local_374 (*(float *)(gh_fb - 0x374))
#define local_370 (*(ulong *)(gh_fb - 0x370))
#define uStack_368 (*(ulong *)(gh_fb - 0x368))
#define local_358 (*(float *)(gh_fb - 0x358))
#define local_354 (*(float *)(gh_fb - 0x354))
#define local_350 (*(ulong *)(gh_fb - 0x350))
#define uStack_348 (*(ulong *)(gh_fb - 0x348))
#define local_338 (*(undefined8 *)(gh_fb - 0x338))
#define local_330 (*(ulong *)(gh_fb - 0x330))
#define uStack_328 (*(ulong *)(gh_fb - 0x328))
#define local_318 (*(undefined8 *)(gh_fb - 0x318))
#define local_310 (*(ulong *)(gh_fb - 0x310))
#define uStack_308 (*(ulong *)(gh_fb - 0x308))
#define local_2f8 (*(undefined8 *)(gh_fb - 0x2f8))
#define local_2f0 (*(ulong *)(gh_fb - 0x2f0))
#define uStack_2e8 (*(ulong *)(gh_fb - 0x2e8))
#define local_2d8 (*(undefined8 *)(gh_fb - 0x2d8))
#define local_2d0 (*(ulong *)(gh_fb - 0x2d0))
#define uStack_2c8 (*(ulong *)(gh_fb - 0x2c8))
#define local_2b8 (*(undefined8 *)(gh_fb - 0x2b8))
#define local_2b0 (*(ulong *)(gh_fb - 0x2b0))
#define uStack_2a8 (*(ulong *)(gh_fb - 0x2a8))
#define local_298 (*(undefined8 *)(gh_fb - 0x298))
#define local_290 (*(ulong *)(gh_fb - 0x290))
#define uStack_288 (*(ulong *)(gh_fb - 0x288))
#define local_278 (*(undefined8 *)(gh_fb - 0x278))
#define local_270 (*(ulong *)(gh_fb - 0x270))
#define uStack_268 (*(ulong *)(gh_fb - 0x268))
#define local_258 (*(undefined8 *)(gh_fb - 0x258))
#define local_250 (*(ulong *)(gh_fb - 0x250))
#define uStack_248 (*(ulong *)(gh_fb - 0x248))
#define local_238 (*(undefined8 *)(gh_fb - 0x238))
#define local_230 (*(ulong *)(gh_fb - 0x230))
#define uStack_228 (*(ulong *)(gh_fb - 0x228))
#define local_218 (*(undefined8 *)(gh_fb - 0x218))
#define local_210 (*(ulong *)(gh_fb - 0x210))
#define uStack_208 (*(ulong *)(gh_fb - 0x208))
#define local_200 (*(undefined8 *)(gh_fb - 0x200))
#define local_1f8 (*(gh_long *)(gh_fb - 0x1f8))
#define local_1f0 (*(ulong *)(gh_fb - 0x1f0))
#define uStack_1e8 (*(ulong *)(gh_fb - 0x1e8))
#define local_1d8 (*(undefined8 *)(gh_fb - 0x1d8))
#define local_1d0 (*(ulong *)(gh_fb - 0x1d0))
#define uStack_1c8 (*(ulong *)(gh_fb - 0x1c8))
#define local_1b8 (*(undefined8 *)(gh_fb - 0x1b8))
#define local_1b0 (*(ulong *)(gh_fb - 0x1b0))
#define uStack_1a8 (*(ulong *)(gh_fb - 0x1a8))
#define local_198 (*(undefined8 *)(gh_fb - 0x198))
#define local_190 (*(ulong *)(gh_fb - 0x190))
#define uStack_188 (*(ulong *)(gh_fb - 0x188))
#define local_180 (*(undefined8 *)(gh_fb - 0x180))
  Color4F aCStack_178 [16];
#define local_168 (*(gh_long *)(gh_fb - 0x168))
#define local_160 (*(ulong *)(gh_fb - 0x160))
#define uStack_158 (*(ulong *)(gh_fb - 0x158))
#define local_148 (*(undefined8 *)(gh_fb - 0x148))
#define local_140 (*(ulong *)(gh_fb - 0x140))
#define uStack_138 (*(ulong *)(gh_fb - 0x138))
#define local_128 (*(undefined8 *)(gh_fb - 0x128))
#define local_120 (*(ulong *)(gh_fb - 0x120))
#define uStack_118 (*(ulong *)(gh_fb - 0x118))
#define local_108 (*(undefined8 *)(gh_fb - 0x108))
#define local_100 (*(ulong *)(gh_fb - 0x100))
#define uStack_f8 (*(ulong *)(gh_fb - 0xf8))
#define local_f0 (*(undefined8 *)(gh_fb - 0xf0))
#define local_e8 (*(undefined8 *)(gh_fb - 0xe8))
#define local_e0 (*(uint (*)[2])(gh_fb - 0xe0))
#define uStack_d8 (*(ulong *)(gh_fb - 0xd8))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar3 = tpidr_el0;
  local_88 = *(gh_long *)(lVar3 + 0x28);
  *(int *)(self + 0x32c974) = param_3;
  bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(2), GH_ARG(*(int *)(self + 0x1160) + 5), GH_ARG(*(int *)(self + 0x1164) + 100), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
  if (0x32 < param_2 - 1U) goto switchD_003f5400_caseD_3;
  puVar8 = (undefined8 *)(self + 0x1160);
  switch(param_2) {
  case 1:
    if (self[0x1138] != '\0') {
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4ef17), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_f0), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x6e,(int)*puVar8 + -0x28),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_100), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_100), GH_ARG(local_100 >> 0x20), GH_ARG(uStack_f8 & 0xffffffff), GH_ARG(uStack_f8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_f0), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4ef25), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_108), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x82),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_120), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_120), GH_ARG(local_120 >> 0x20), GH_ARG(uStack_118 & 0xffffffff), GH_ARG(uStack_118 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_108), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4ef48), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_128), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x14,(int)*puVar8 + -0x82),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_140), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_140), GH_ARG(local_140 >> 0x20), GH_ARG(uStack_138 & 0xffffffff), GH_ARG(uStack_138 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_128), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4ef6d), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_148), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + 10,(int)*puVar8 + -0x82),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_160), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_160), GH_ARG(local_160 >> 0x20), GH_ARG(uStack_158 & 0xffffffff), GH_ARG(uStack_158 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_148), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
      break;
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("GAME TARGET"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    puVar6 = (undefined8 *)(self + 0x8da88);
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x78,(int)uVar19 + -0x55),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("To rescue the citizens from "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x3c,(int)uVar19 + -0x91),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("the prison and kill more than "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x23,(int)uVar19 + -0x91),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("70% of enemies by the time "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -10,(int)uVar19 + -0x91),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("appointed. "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + 0xf,(int)uVar19 + -0x91),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    puVar8 = (undefined8 *)(local_168 + -0x18);
    if (puVar8 == &DAT_00d40300) break;
    piVar10 = (int *)(local_168 + -8);
    do {
      iVar13 = *piVar10;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_003f8308:
    if (0 < iVar13) break;
LAB_003f8314:
    operator_delete(puVar8);
    if (param_3 != 1) goto LAB_003f802c;
    goto LAB_003f7ff4;
  case 2:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("JUMP JUMP  , ZOMBIE MODE"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      puVar6 = (undefined8 *)(self + 0x8da88);
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x78,(int)uVar19 + -0x96),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("You need more than one "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x28,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("friend."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0xf,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("(Buy friend in the weapon shop)"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + 0x14,(int)uVar19 + -0xa0),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f8308;
      }
    }
    else {
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4effe), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_180), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x6e,(int)*puVar8 + -0x5a),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_190), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_190), GH_ARG(local_190 >> 0x20), GH_ARG(uStack_188 & 0xffffffff), GH_ARG(uStack_188 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_180), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f01b), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_198), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_1b0), GH_ARG(local_1b0 >> 0x20), GH_ARG(uStack_1a8 & 0xffffffff), GH_ARG(uStack_1a8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_198), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f036), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_1b8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x14,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_1b8), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f05e), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_1d8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + 10,(int)*puVar8 + -0x78),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1f0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_1f0), GH_ARG(local_1f0 >> 0x20), GH_ARG(uStack_1e8 & 0xffffffff), GH_ARG(uStack_1e8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_1d8), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    break;
  case 0x14:
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("   LV:"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    puVar6 = (undefined8 *)(self + 0x8da80);
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x82,(int)uVar19 + -0x41),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(2));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("   HP:"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x69,(int)uVar19 + -0x41),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(2));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("POWER:"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x50,(int)uVar19 + -0x41),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(2));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    piVar10 = (int *)(self + 0x32c16c);
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_168), GH_ARG(*piVar10));
    uVar19 = *(undefined8 *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x82,(int)uVar19 + -0x3c),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_168), GH_ARG(*(int *)(self + 0x32c170) << 1));
    uVar19 = *(undefined8 *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x69,(int)uVar19 + -0x3c),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_168), GH_ARG(*(int *)(self + 0x32c174) << 1));
    uVar19 = *(undefined8 *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x50,(int)uVar19 + -0x3c),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_1f8), GH_ARG(*piVar10 + 1));
    plVar5 = (gh_long *)FUN_009d7684(GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(&DAT_00afe81e), GH_ARG(0));
    local_168 = *plVar5;
    *plVar5 = (gh_long)&DAT_00d40318;
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x82,(int)uVar19 + 0x46),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    if ((undefined8 *)(local_1f8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_1f8 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_1f8 + -0x18));
      }
    }
    fVar22 = (float)*(int *)(self + 0x32c170);
    fVar22 = (fVar22 / 10.0) * (float)*(int *)(self + (gh_long)*piVar10 * 4 + 0x138d8) + fVar22;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_1f8), GH_ARG((int)(fVar22 + fVar22)));
    plVar5 = (gh_long *)FUN_009d7684(GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(&DAT_00afe81e), GH_ARG(0));
    local_168 = *plVar5;
    *plVar5 = (gh_long)&DAT_00d40318;
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x69,(int)uVar19 + 0x46),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    if ((undefined8 *)(local_1f8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_1f8 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_1f8 + -0x18));
      }
    }
    fVar22 = (float)*(int *)(self + 0x32c174);
    fVar22 = (fVar22 / 10.0) * (float)*(int *)(self + (gh_long)*piVar10 * 4 + 0x13928) + fVar22;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_1f8), GH_ARG((int)(fVar22 + fVar22)));
    plVar5 = (gh_long *)FUN_009d7684(GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(&DAT_00afe81e), GH_ARG(0));
    local_168 = *plVar5;
    *plVar5 = (gh_long)&DAT_00d40318;
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x50,(int)uVar19 + 0x46),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    if ((undefined8 *)(local_1f8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_1f8 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_1f8 + -0x18));
      }
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x23), GH_ARG(*(int *)(self + 0x1160) + 0x11), GH_ARG(*(int *)(self + 0x1164) + -0x7d), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.4));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x23), GH_ARG(*(int *)(self + 0x1160) + 0x11), GH_ARG(*(int *)(self + 0x1164) + -100), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.4));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x23), GH_ARG(*(int *)(self + 0x1160) + 0x11), GH_ARG(*(int *)(self + 0x1164) + -0x4b), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.4));
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Do you want to level-up "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x34,(int)uVar19 + -0x82),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar9 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar9;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" quickly?"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x1b,(int)uVar19 + -0x82),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      puVar7 = (undefined8 *)(local_168 + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar9 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar9;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto joined_r0x003f90e4;
      }
    }
    else {
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f0db), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_200), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x23,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_210), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_210), GH_ARG(local_210 >> 0x20), GH_ARG(uStack_208 & 0xffffffff), GH_ARG(uStack_208 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_200), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar9 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar9;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
joined_r0x003f90e4:
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG(": "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar19 = *puVar8;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.84705883), GH_ARG(0.16862746), GH_ARG(0.8745098), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.84705883), GH_ARG(0.16862746), GH_ARG(0.8745098), GH_ARG(1.0));
    gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + 2,(int)uVar19 + -0x1e),4));
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(2));
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_168 + -8);
      do {
        iVar13 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    iVar18 = *(int *)(self + 0x1160);
    uVar20 = *(uint *)(self + (gh_long)*piVar10 * 4 + 0x13798);
    iVar13 = *(int *)(self + 0x1164);
    memset(local_e0,0,0x50);
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar20 < 10) {
      uVar16 = 0;
      uVar11 = 0;
LAB_003f7f1c:
      local_e0[uVar11] = uVar20;
    }
    else {
      lVar14 = 10;
      uVar15 = (ulong)uVar20;
      lVar17 = 100;
      local_e0[0] = uVar20 % 10;
      uVar11 = 1;
      do {
        if ((gh_long)uVar15 < lVar17) {
          uVar20 = 0;
          if (lVar14 != 0) {
            uVar20 = (uint)((gh_long)uVar15 / lVar14);
          }
          uVar16 = uVar11 & 0xffffffff;
          goto LAB_003f7f1c;
        }
        lVar1 = 0;
        if (lVar17 != 0) {
          lVar1 = (gh_long)uVar15 / lVar17;
        }
        uVar16 = uVar11 + 1;
        uVar20 = 0;
        if (lVar14 != 0) {
          uVar20 = (uint)((gh_long)(uVar15 - lVar1 * lVar17) / lVar14);
        }
        bVar4 = uVar11 < 0x13;
        lVar17 = lVar17 * 10;
        local_e0[uVar11] = uVar20;
        lVar14 = lVar14 * 10;
        uVar11 = uVar16;
      } while (bVar4);
    }
    if (-1 < (int)uVar16) {
      iVar21 = 0;
      lVar14 = (gh_long)(int)uVar16;
      do {
        lVar17 = (gh_long)(int)local_e0[lVar14] + 0x14;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG((int)lVar17), GH_ARG(iVar18 + -0xf + iVar21), GH_ARG((iVar13 + 0x23) - *(int *)(self + lVar17 * 4 + 0x32a1d8)), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
        iVar21 = iVar21 + *(int *)(self + lVar17 * 4 + 0x329d28) + 1;
        *(int *)(self + 0x32c9bc) = iVar21;
        bVar4 = 0 < lVar14;
        lVar14 = lVar14 + -1;
      } while (bVar4);
      iVar18 = *(int *)(self + 0x1160);
      iVar13 = *(int *)(self + 0x1164);
    }
    iVar13 = iVar13 + 10;
    goto LAB_003f7fc4;
  case 0x19:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Coupon will be expired soon."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x32,(int)uVar19 + -0x96),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f8308;
      }
    }
    else {
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f123), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_218), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_230), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_230), GH_ARG(local_230 >> 0x20), GH_ARG(uStack_228 & 0xffffffff), GH_ARG(uStack_228 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_218), GH_ARG(0x19), GH_ARG(800), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    break;
  case 0x1a:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Feel free to rate us on the"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      puVar6 = (undefined8 *)(self + 0x8da88);
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x6e,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" App Store!"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x55,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("It\'ll keep us motivated to "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x32,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" make  \'AngerOfStick5\' "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x19,(int)uVar19 + -0x87),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" even better!"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar13 = *(int *)(self + 0x1160);
      iVar18 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_e8 = CONCAT44((float)iVar18,(float)(iVar13 + -0x87));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f8308;
      }
    }
    else {
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f164), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_238), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x6e,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_250), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_250), GH_ARG(local_250 >> 0x20), GH_ARG(uStack_248 & 0xffffffff), GH_ARG(uStack_248 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_238), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f17e), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_258), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x50,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_270), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_270), GH_ARG(local_270 >> 0x20), GH_ARG(uStack_268 & 0xffffffff), GH_ARG(uStack_268 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_258), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f1a5), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_278), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_290), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_290), GH_ARG(local_290 >> 0x20), GH_ARG(uStack_288 & 0xffffffff), GH_ARG(uStack_288 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_278), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f1cb), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_298), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x14,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_2b0), GH_ARG(local_2b0 >> 0x20), GH_ARG(uStack_2a8 & 0xffffffff), GH_ARG(uStack_2a8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_298), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f1f2), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_2b8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + 10,(int)*puVar8 + -0x78),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2d0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_2d0), GH_ARG(local_2d0 >> 0x20), GH_ARG(uStack_2c8 & 0xffffffff), GH_ARG(uStack_2c8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_2b8), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    break;
  case 0x23:
    if (*(int *)(self + 0x32c9a4) == 0x1a05) {
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(self + 0x32bbc8), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_2d8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x5a,(int)*puVar8 + -0x8c),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2f0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_2f0), GH_ARG(local_2f0 >> 0x20), GH_ARG(uStack_2e8 & 0xffffffff), GH_ARG(uStack_2e8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_2d8), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    else if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("UPDATE"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      puVar6 = (undefined8 *)(self + 0x8da88);
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x7d,(int)uVar19 + -0x32),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("There are updates."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x3c,(int)uVar19 + -0x50),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Connect ........"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x1e,(int)uVar19 + -0x50),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(self + 0x32bbc8), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_374 = (float)*(int *)(self + 0x1164);
      local_378 = (float)(*(int *)(self + 0x1160) + -0x8c);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_390), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_390), GH_ARG(local_390 >> 0x20), GH_ARG(uStack_388 & 0xffffffff), GH_ARG(uStack_388 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_378), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    else {
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f27d), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_2f8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x7d,(int)*puVar8 + -0x32),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_310), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_310), GH_ARG(local_310 >> 0x20), GH_ARG(uStack_308 & 0xffffffff), GH_ARG(uStack_308 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_2f8), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f28a), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_318), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x3c,(int)*puVar8 + -0x6e),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_330), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_330), GH_ARG(local_330 >> 0x20), GH_ARG(uStack_328 & 0xffffffff), GH_ARG(uStack_328 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_318), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f2ab), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_338), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x1e,(int)*puVar8 + -0x6e),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_350), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_350), GH_ARG(local_350 >> 0x20), GH_ARG(uStack_348 & 0xffffffff), GH_ARG(uStack_348 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_338), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar8);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(self + 0x32bbc8), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_354 = (float)*(int *)(self + 0x1164);
      local_358 = (float)(*(int *)(self + 0x1160) + -0x8c);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_370), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_370), GH_ARG(local_370 >> 0x20), GH_ARG(uStack_368 & 0xffffffff), GH_ARG(uStack_368 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_358), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_003f82ec:
        if (iVar13 < 1) goto LAB_003f8314;
      }
    }
    break;
  case 0x30:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Would you like to recharge"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      puVar6 = (undefined8 *)(self + 0x8da88);
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x7d,(int)uVar19 + -0xa5),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("your weapon to continue playing?"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -100,(int)uVar19 + -0xa5),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("You can recharge up to"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar13 = *(int *)(self + 0x1160);
      iVar18 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_e8 = CONCAT44((float)(iVar18 + 10),(float)iVar13);
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(1));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("3 times per day."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar13 = *(int *)(self + 0x1160);
      iVar18 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_e8 = CONCAT44((float)(iVar18 + 0x23),(float)iVar13);
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(1));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto joined_r0x003f9084;
      }
    }
    else {
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f2f1), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_398), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x50,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_3b0), GH_ARG(local_3b0 >> 0x20), GH_ARG(uStack_3a8 & 0xffffffff), GH_ARG(uStack_3a8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_398), GH_ARG(0x19), GH_ARG(300), GH_ARG(0));
      puVar6 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar6);
        }
      }
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f315), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_3b8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + 0x1e,(int)*puVar8 + -0xaa),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3d0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_3d0), GH_ARG(local_3d0 >> 0x20), GH_ARG(uStack_3c8 & 0xffffffff), GH_ARG(uStack_3c8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_3b8), GH_ARG(0x19), GH_ARG(400), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
joined_r0x003f9084:
        if (iVar13 < 1) {
          operator_delete(puVar8);
        }
      }
    }
    if (*(int *)(self + 0x32c8e8) < 0x3e) {
      uVar20 = *(uint *)(self + (gh_long)*(int *)(self + 0x32c8e8) * 4 + 0x8d834);
    }
    else {
      uVar12 = 0x4b0;
      if (*(int *)(self + 0x32c46c) % 10 != 2) {
        uVar12 = 0x708;
      }
      uVar20 = 600;
      if (*(int *)(self + 0x32c46c) % 10 != 3) {
        uVar20 = uVar12;
      }
    }
    iVar18 = *(int *)(self + 0x1160);
    iVar13 = *(int *)(self + 0x1164);
    memset(local_e0,0,0x50);
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar20 < 10) {
      uVar16 = 0;
      uVar11 = 0;
LAB_003f7e68:
      local_e0[uVar11] = uVar20;
    }
    else {
      lVar14 = 10;
      uVar15 = (ulong)uVar20;
      lVar17 = 100;
      local_e0[0] = uVar20 % 10;
      uVar11 = 1;
      do {
        if ((gh_long)uVar15 < lVar17) {
          uVar20 = 0;
          if (lVar14 != 0) {
            uVar20 = (uint)((gh_long)uVar15 / lVar14);
          }
          uVar16 = uVar11 & 0xffffffff;
          goto LAB_003f7e68;
        }
        lVar1 = 0;
        if (lVar17 != 0) {
          lVar1 = (gh_long)uVar15 / lVar17;
        }
        uVar16 = uVar11 + 1;
        uVar20 = 0;
        if (lVar14 != 0) {
          uVar20 = (uint)((gh_long)(uVar15 - lVar1 * lVar17) / lVar14);
        }
        bVar4 = uVar11 < 0x13;
        lVar17 = lVar17 * 10;
        local_e0[uVar11] = uVar20;
        lVar14 = lVar14 * 10;
        uVar11 = uVar16;
      } while (bVar4);
    }
    if (-1 < (int)uVar16) {
      iVar21 = 0;
      lVar14 = (gh_long)(int)uVar16;
      do {
        lVar17 = (gh_long)(int)local_e0[lVar14] + 0x14;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG((int)lVar17), GH_ARG(iVar18 + -0xf + iVar21), GH_ARG((iVar13 + -0xf) - *(int *)(self + lVar17 * 4 + 0x32a1d8)), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
        iVar21 = iVar21 + *(int *)(self + lVar17 * 4 + 0x329d28) + 1;
        *(int *)(self + 0x32c9bc) = iVar21;
        bVar4 = 0 < lVar14;
        lVar14 = lVar14 + -1;
      } while (bVar4);
      iVar18 = *(int *)(self + 0x1160);
      iVar13 = *(int *)(self + 0x1164);
    }
    iVar13 = iVar13 + -0x28;
LAB_003f7fc4:
    in_w5 = 0xff;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x68), GH_ARG(iVar18 + -0x3c), GH_ARG(iVar13), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    break;
  case 0x32:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("\'Anger of stick 2 ~ 5\' is "), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      puVar6 = (undefined8 *)(self + 0x8da88);
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -100,(int)uVar19 + -0x8c),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" playable."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x46,(int)uVar19 + -0x8c),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Currently,\'Anger of stick: war\'"), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x1e,(int)uVar19 + -0x8c),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG(" is under development."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar13 = *(int *)(self + 0x1160);
      iVar18 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_e8 = CONCAT44((float)iVar18,(float)(iVar13 + -0x8c));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*puVar6), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(0));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f8308;
      }
    }
    else {
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f359), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_3d8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x6e,(int)*puVar8 + -0x8c),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3f0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_3f0), GH_ARG(local_3f0 >> 0x20), GH_ARG(uStack_3e8 & 0xffffffff), GH_ARG(uStack_3e8 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_3d8), GH_ARG(0x19), GH_ARG(0x15e), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f378), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_3f8), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x50,(int)*puVar8 + -0x8c),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_410), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_410), GH_ARG(local_410 >> 0x20), GH_ARG(uStack_408 & 0xffffffff), GH_ARG(uStack_408 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_3f8), GH_ARG(0x19), GH_ARG(0x15e), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f39c), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_418), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x8c),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_430), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_430), GH_ARG(local_430 >> 0x20), GH_ARG(uStack_428 & 0xffffffff), GH_ARG(uStack_428 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_418), GH_ARG(0x19), GH_ARG(0x15e), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG("\'Anger of stick: war\'"), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_438), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x14,(int)*puVar8 + -0x8c),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_450), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_450), GH_ARG(local_450 >> 0x20), GH_ARG(uStack_448 & 0xffffffff), GH_ARG(uStack_448 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_438), GH_ARG(0x19), GH_ARG(0x15e), GH_ARG(0));
      puVar7 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar7 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 < 1) {
          operator_delete(puVar7);
        }
      }
      uVar19 = *puVar6;
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f3c5), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_458), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + 10,(int)*puVar8 + -0x8c),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_470), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_470), GH_ARG(local_470 >> 0x20), GH_ARG(uStack_468 & 0xffffffff), GH_ARG(uStack_468 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_458), GH_ARG(0x19), GH_ARG(0x15e), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
    break;
  case 0x33:
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_168), GH_ARG("Payment failed. Try again."), GH_ARG(&local_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar19 = *puVar8;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_178), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_e8), NEON_scvtf(CONCAT44((int)((ulong)uVar19 >> 0x20) + -0x32,(int)uVar19 + -0x96),4));
      kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_e0[1],local_e0[0])), GH_ARG(local_e0[1]), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_168), GH_ARG(&local_e8), GH_ARG(1));
      puVar8 = (undefined8 *)(local_168 + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(local_168 + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f8308;
      }
    }
    else {
      uVar19 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(local_e0), GH_ARG(&DAT_00a4f443), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_478), NEON_scvtf(CONCAT44((int)((ulong)*puVar8 >> 0x20) + -0x32,(int)*puVar8 + -0x78),4))
      ;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_490), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      in_w5 = 0;
      kFont__drawDString_0047b574(GH_ARG(local_490), GH_ARG(local_490 >> 0x20), GH_ARG(uStack_488 & 0xffffffff), GH_ARG(uStack_488 >> 0x20), GH_ARG(uVar19), GH_ARG(local_e0), GH_ARG(&local_478), GH_ARG(0x19), GH_ARG(800), GH_ARG(0));
      puVar8 = (undefined8 *)(CONCAT44(local_e0[1],local_e0[0]) + -0x18);
      if (puVar8 != &DAT_00d40300) {
        piVar10 = (int *)(CONCAT44(local_e0[1],local_e0[0]) + -8);
        do {
          iVar13 = *piVar10;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003f82ec;
      }
    }
  }
switchD_003f5400_caseD_3:
  if (param_3 == 1) {
LAB_003f7ff4:
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0x1b), GH_ARG(*(int *)(self + 0x1160) + 5), GH_ARG(*(int *)(self + 0x1164) + 100), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
  }
LAB_003f802c:
  if (*(gh_long *)(lVar3 + 0x28) != local_88) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
