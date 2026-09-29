/* bzStateGame::BuyStoreWin_0042c364 @ 0x0042c364 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c70
#define DAT_00d23c70 (*(undefined8 *)IMG(0x00d23c70))
#undef DAT_00d23cd8
#define DAT_00d23cd8 (*(undefined1 *)IMG(0x00d23cd8))
#undef DAT_00d23cf0
#define DAT_00d23cf0 (*(undefined1 *)IMG(0x00d23cf0))
#undef DAT_00d23d08
#define DAT_00d23d08 (*(undefined1 *)IMG(0x00d23d08))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00a4d796
#define DAT_00a4d796 (*(undefined1 *)IMG(0x00a4d796))
#undef DAT_00a4e185
#define DAT_00a4e185 (*(undefined1 *)IMG(0x00a4e185))
#undef DAT_00a4e188
#define DAT_00a4e188 (*(undefined1 *)IMG(0x00a4e188))
#undef DAT_00a4e18f
#define DAT_00a4e18f (*(undefined1 *)IMG(0x00a4e18f))
#undef DAT_00a4e196
#define DAT_00a4e196 (*(undefined1 *)IMG(0x00a4e196))
#undef DAT_00a4e19d
#define DAT_00a4e19d (*(undefined1 *)IMG(0x00a4e19d))
#undef DAT_00a4fab4
#define DAT_00a4fab4 (*(undefined1 *)IMG(0x00a4fab4))
#undef DAT_00a4fb04
#define DAT_00a4fb04 (*(undefined1 *)IMG(0x00a4fb04))
#undef DAT_00a4fb8f
#define DAT_00a4fb8f (*(undefined1 *)IMG(0x00a4fb8f))
gh_long bzStateGame__BuyStoreWin_0042c364(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  undefined *puVar1;
  char cVar2;
  gh_long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int in_w5 = 0;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint64_t gh_frame64[93] = {0};   /* 원작 스택 프레임 (SP-0x2d0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x2d0;
#define auStack_2d0 (*(undefined1 (*)[8])(gh_fb - 0x2d0))
#define local_2c8 (*(gh_long *)(gh_fb - 0x2c8))
#define local_2c0 (*(ulong *)(gh_fb - 0x2c0))
#define uStack_2b8 (*(ulong *)(gh_fb - 0x2b8))
#define local_2b0 (*(undefined8 *)(gh_fb - 0x2b0))
#define local_2a8 (*(gh_long *)(gh_fb - 0x2a8))
#define local_2a0 (*(gh_long *)(gh_fb - 0x2a0))
#define local_298 (*(gh_long *)(gh_fb - 0x298))
#define local_290 (*(gh_long *)(gh_fb - 0x290))
#define local_288 (*(gh_long *)(gh_fb - 0x288))
#define local_280 (*(gh_long *)(gh_fb - 0x280))
#define local_278 (*(gh_long *)(gh_fb - 0x278))
#define local_270 (*(gh_long *)(gh_fb - 0x270))
#define local_268 (*(gh_long *)(gh_fb - 0x268))
#define local_260 (*(gh_long *)(gh_fb - 0x260))
#define local_258 (*(gh_long *)(gh_fb - 0x258))
#define local_250 (*(gh_long *)(gh_fb - 0x250))
#define local_248 (*(gh_long *)(gh_fb - 0x248))
#define local_240 (*(gh_long *)(gh_fb - 0x240))
#define local_238 (*(gh_long *)(gh_fb - 0x238))
#define local_230 (*(ulong *)(gh_fb - 0x230))
#define uStack_228 (*(ulong *)(gh_fb - 0x228))
#define local_218 (*(undefined8 *)(gh_fb - 0x218))
#define local_210 (*(ulong *)(gh_fb - 0x210))
#define uStack_208 (*(ulong *)(gh_fb - 0x208))
#define local_1f8 (*(undefined8 *)(gh_fb - 0x1f8))
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
#define local_178 (*(gh_long *)(gh_fb - 0x178))
#define local_170 (*(gh_long *)(gh_fb - 0x170))
#define local_168 (*(gh_long *)(gh_fb - 0x168))
#define local_160 (*(gh_long *)(gh_fb - 0x160))
#define local_158 (*(gh_long *)(gh_fb - 0x158))
#define local_150 (*(gh_long *)(gh_fb - 0x150))
#define local_148 (*(gh_long *)(gh_fb - 0x148))
#define local_140 (*(gh_long *)(gh_fb - 0x140))
#define local_138 (*(gh_long *)(gh_fb - 0x138))
#define local_130 (*(gh_long *)(gh_fb - 0x130))
#define local_128 (*(gh_long *)(gh_fb - 0x128))
#define local_120 (*(gh_long *)(gh_fb - 0x120))
#define local_118 (*(gh_long *)(gh_fb - 0x118))
#define local_110 (*(gh_long *)(gh_fb - 0x110))
#define local_108 (*(gh_long *)(gh_fb - 0x108))
#define local_100 (*(gh_long *)(gh_fb - 0x100))
#define local_f8 (*(gh_long *)(gh_fb - 0xf8))
#define local_f0 (*(gh_long *)(gh_fb - 0xf0))
#define local_e8 (*(gh_long *)(gh_fb - 0xe8))
#define local_e0 (*(gh_long *)(gh_fb - 0xe0))
#define local_d8 (*(gh_long *)(gh_fb - 0xd8))
#define local_d0 (*(gh_long *)(gh_fb - 0xd0))
#define local_c8 (*(gh_long *)(gh_fb - 0xc8))
#define local_c0 (*(gh_long *)(gh_fb - 0xc0))
#define local_b8 (*(float *)(gh_fb - 0xb8))
#define uStack_b4 (*(undefined4 *)(gh_fb - 0xb4))
#define local_b0 (*(ulong *)(gh_fb - 0xb0))
#define uStack_a8 (*(ulong *)(gh_fb - 0xa8))
#define local_a0 (*(ulong *)(gh_fb - 0xa0))
#define uStack_98 (*(ulong *)(gh_fb - 0x98))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar3 = tpidr_el0;
  local_88 = *(gh_long *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(self + 0xc38);
  cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG((float)*(int *)(self + 0x115c)));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.8));
  kDraw__drawRect_00479ae8(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0));
  bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(5), GH_ARG(1), GH_ARG(0.0), GH_ARG(0.0));
  iVar5 = *(int *)(self + 0x1af0);
  if (iVar5 == 0xc) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xfc), GH_ARG(*(int *)(self + 0x1160) + -0x194), GH_ARG(*(int *)(self + 0x1164) + -0xa1), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    uVar12 = 0;
    do {
      puVar1 = &DAT_00d23cf0 + uVar12 * 8;
      FUN_009d881c(GH_ARG(&local_120), GH_ARG(puVar1));
      FUN_009d881c(GH_ARG(&local_130), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_128), GH_ARG(self), GH_ARG((undefined *)&local_130));
      bzStateGame__getCurPrice_0039e3e0(GH_ARG((undefined *)&local_a0), GH_ARG(self), GH_ARG((undefined *)&local_120), GH_ARG((undefined *)&local_128));
      if ((undefined8 *)(local_128 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_128 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_128 + -0x18));
        }
      }
      if ((undefined8 *)(local_130 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_130 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_130 + -0x18));
        }
      }
      if ((undefined8 *)(local_120 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_120 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_120 + -0x18));
        }
      }
      puVar7 = (undefined *)FUN_009d881c(GH_ARG(&local_138), GH_ARG(&local_a0));
      iVar5 = bzStateGame__convertMoneyint_003fc890(GH_ARG(puVar7), GH_ARG((undefined *)&local_138));
      iVar10 = (int)uVar12;
      if ((undefined8 *)(local_138 + -0x18) == &DAT_00d40300) {
LAB_0042dd54:
        if (iVar10 == 2) goto LAB_0042deac;
LAB_0042dd5c:
        if (iVar10 != 1) {
          if (iVar10 != 0) {
            iVar5 = 0;
            goto LAB_0042decc;
          }
          iVar5 = iVar5 * 100;
          iVar11 = (int)((ulong)((gh_long)iVar5 * 0xea0ea0eb) >> 0x20);
          iVar5 = iVar5 / 0x46 + (iVar5 >> 0x1f);
          goto LAB_0042dec8;
        }
        iVar5 = iVar5 << 1;
      }
      else {
        piVar8 = (int *)(local_138 + -8);
        do {
          iVar11 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (0 < iVar11) goto LAB_0042dd54;
        operator_delete((undefined8 *)(local_138 + -0x18));
        if (iVar10 != 2) goto LAB_0042dd5c;
LAB_0042deac:
        iVar5 = iVar5 * 100;
        iVar11 = (int)((ulong)((gh_long)iVar5 * 0x88888889) >> 0x20);
        iVar5 = iVar5 / 0x1e + (iVar5 >> 0x1f);
LAB_0042dec8:
        iVar5 = iVar5 - (iVar11 >> 0x1f);
      }
LAB_0042decc:
      FUN_009d881c(GH_ARG(&local_150), GH_ARG(puVar1));
      puVar7 = (undefined *)bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_148), GH_ARG(self), GH_ARG((undefined *)&local_150));
      bzStateGame__convertMoneyStr_003fcd68(GH_ARG((undefined *)&local_140), GH_ARG(puVar7), GH_ARG(iVar5), GH_ARG((undefined *)&local_148));
      iVar5 = *(int *)(self + 0x1160);
      iVar11 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_160), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_158), GH_ARG(self), GH_ARG((undefined *)&local_160));
      iVar10 = iVar10 * 0xc0;
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_140), GH_ARG(iVar10 + iVar5 + -0x61), GH_ARG(iVar11 + 0x4d), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(1.0), GH_ARG(0.6), GH_ARG((undefined *)&local_158));
      if ((undefined8 *)(local_158 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_158 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_158 + -0x18));
        }
      }
      if ((undefined8 *)(local_160 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_160 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_160 + -0x18));
        }
      }
      if ((undefined8 *)(local_140 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_140 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_140 + -0x18));
        }
      }
      if ((undefined8 *)(local_148 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_148 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_148 + -0x18));
        }
      }
      if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_150 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_150 + -0x18));
        }
      }
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xf8), GH_ARG(iVar10 + *(int *)(self + 0x1160) + -0xac), GH_ARG(*(int *)(self + 0x1164) + 0x43), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
      FUN_009d881c(GH_ARG(&local_168), GH_ARG(&local_a0));
      iVar5 = *(int *)(self + 0x1160);
      iVar11 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_178), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_170), GH_ARG(self), GH_ARG((undefined *)&local_178));
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_168), GH_ARG(iVar10 + iVar5 + -0x32), GH_ARG(iVar11 + 0x71), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0), GH_ARG((undefined *)&local_170));
      if ((undefined8 *)(local_170 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_170 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_170 + -0x18));
        }
      }
      if ((undefined8 *)(local_178 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_178 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_178 + -0x18));
        }
      }
      if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_168 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_168 + -0x18));
        }
      }
      if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_a0 - 8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_a0 - 0x18));
        }
      }
      bVar4 = uVar12 < 2;
      uVar12 = uVar12 + 1;
    } while (bVar4);
  }
  else if (iVar5 == 0xb) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xfb), GH_ARG(*(int *)(self + 0x1160) + -0x194), GH_ARG(*(int *)(self + 0x1164) + -0xa1), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    uVar12 = 0;
    do {
      puVar1 = &DAT_00d23cd8 + uVar12 * 8;
      FUN_009d881c(GH_ARG(&local_c0), GH_ARG(puVar1));
      FUN_009d881c(GH_ARG(&local_d0), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_c8), GH_ARG(self), GH_ARG((undefined *)&local_d0));
      bzStateGame__getCurPrice_0039e3e0(GH_ARG((undefined *)&local_a0), GH_ARG(self), GH_ARG((undefined *)&local_c0), GH_ARG((undefined *)&local_c8));
      if ((undefined8 *)(local_c8 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_c8 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_c8 + -0x18));
        }
      }
      if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_d0 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_d0 + -0x18));
        }
      }
      if ((undefined8 *)(local_c0 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_c0 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_c0 + -0x18));
        }
      }
      puVar7 = (undefined *)FUN_009d881c(GH_ARG(&local_d8), GH_ARG(&local_a0));
      iVar5 = bzStateGame__convertMoneyint_003fc890(GH_ARG(puVar7), GH_ARG((undefined *)&local_d8));
      iVar10 = (int)uVar12;
      if ((undefined8 *)(local_d8 + -0x18) == &DAT_00d40300) {
LAB_0042d71c:
        if (iVar10 == 2) goto LAB_0042d874;
LAB_0042d724:
        if (iVar10 != 1) {
          if (iVar10 != 0) {
            iVar5 = 0;
            goto LAB_0042d894;
          }
          iVar5 = iVar5 * 100;
          iVar11 = (int)((ulong)((gh_long)iVar5 * 0xea0ea0eb) >> 0x20);
          iVar5 = iVar5 / 0x46 + (iVar5 >> 0x1f);
          goto LAB_0042d890;
        }
        iVar5 = iVar5 << 1;
      }
      else {
        piVar8 = (int *)(local_d8 + -8);
        do {
          iVar11 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (0 < iVar11) goto LAB_0042d71c;
        operator_delete((undefined8 *)(local_d8 + -0x18));
        if (iVar10 != 2) goto LAB_0042d724;
LAB_0042d874:
        iVar5 = iVar5 * 100;
        iVar11 = (int)((ulong)((gh_long)iVar5 * 0x88888889) >> 0x20);
        iVar5 = iVar5 / 0x1e + (iVar5 >> 0x1f);
LAB_0042d890:
        iVar5 = iVar5 - (iVar11 >> 0x1f);
      }
LAB_0042d894:
      FUN_009d881c(GH_ARG(&local_f0), GH_ARG(puVar1));
      puVar7 = (undefined *)bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_e8), GH_ARG(self), GH_ARG((undefined *)&local_f0));
      bzStateGame__convertMoneyStr_003fcd68(GH_ARG((undefined *)&local_e0), GH_ARG(puVar7), GH_ARG(iVar5), GH_ARG((undefined *)&local_e8));
      iVar5 = *(int *)(self + 0x1160);
      iVar11 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_100), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_f8), GH_ARG(self), GH_ARG((undefined *)&local_100));
      iVar10 = iVar10 * 0xc0;
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_e0), GH_ARG(iVar10 + iVar5 + -0x61), GH_ARG(iVar11 + 0x4d), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(1.0), GH_ARG(0.6), GH_ARG((undefined *)&local_f8));
      if ((undefined8 *)(local_f8 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_f8 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_f8 + -0x18));
        }
      }
      if ((undefined8 *)(local_100 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_100 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_100 + -0x18));
        }
      }
      if ((undefined8 *)(local_e0 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_e0 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_e0 + -0x18));
        }
      }
      if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_e8 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_e8 + -0x18));
        }
      }
      if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_f0 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_f0 + -0x18));
        }
      }
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xf8), GH_ARG(iVar10 + *(int *)(self + 0x1160) + -0xac), GH_ARG(*(int *)(self + 0x1164) + 0x43), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
      FUN_009d881c(GH_ARG(&local_108), GH_ARG(&local_a0));
      iVar5 = *(int *)(self + 0x1160);
      iVar11 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_118), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_110), GH_ARG(self), GH_ARG((undefined *)&local_118));
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_108), GH_ARG(iVar10 + iVar5 + -0x32), GH_ARG(iVar11 + 0x71), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0), GH_ARG((undefined *)&local_110));
      if ((undefined8 *)(local_110 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_110 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_110 + -0x18));
        }
      }
      if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_118 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_118 + -0x18));
        }
      }
      if ((undefined8 *)(local_108 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_108 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_108 + -0x18));
        }
      }
      if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_a0 - 8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_a0 - 0x18));
        }
      }
      bVar4 = uVar12 < 2;
      uVar12 = uVar12 + 1;
    } while (bVar4);
  }
  else if (iVar5 == 0xd) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xfd), GH_ARG(*(int *)(self + 0x1160) + -0x194), GH_ARG(*(int *)(self + 0x1164) + -0xba), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    puVar6 = (undefined8 *)(self + 0x8daa0);
    uVar9 = *puVar6;
    if (self[0x1138] == '\0') {
      if (*(int *)(self + 0x32c928) < 1) {
        FUN_009d4eac(GH_ARG(&local_a0), GH_ARG("You were so close. Win your chance to get "), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        gh_store64(&(local_1f8), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0xad
                                        ,(int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_210), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_210), GH_ARG(local_210 >> 0x20), GH_ARG(uStack_208 & 0xffffffff), GH_ARG(uStack_208 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_1f8), GH_ARG(0x17), GH_ARG(600), GH_ARG(1), GH_ARG(0));
        if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_a0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_a0 - 0x18));
          }
        }
        uVar9 = *puVar6;
        FUN_009d4eac(GH_ARG(&local_a0), GH_ARG("stronger through the special sale."), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        gh_store64(&(local_218), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0x97
                                        ,(int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_230), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_230), GH_ARG(local_230 >> 0x20), GH_ARG(uStack_228 & 0xffffffff), GH_ARG(uStack_228 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_218), GH_ARG(0x17), GH_ARG(600), GH_ARG(1), GH_ARG(0));
        puVar6 = (undefined8 *)(local_a0 - 0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar8 = (int *)(local_a0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_0042ebf8;
        }
      }
      else {
        FUN_009d4eac(GH_ARG(&local_a0), GH_ARG("Congratulations. Special sale to celebrate successfully"), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        gh_store64(&(local_1b8), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0xad
                                        ,(int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_1b8), GH_ARG(0x14), GH_ARG(600), GH_ARG(1), GH_ARG(0));
        if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_a0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_a0 - 0x18));
          }
        }
        uVar9 = *puVar6;
        FUN_009d4eac(GH_ARG(&local_a0), GH_ARG(&DAT_00a4fb8f), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        gh_store64(&(local_1d8), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0x97
                                        ,(int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1f0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_1f0), GH_ARG(local_1f0 >> 0x20), GH_ARG(uStack_1e8 & 0xffffffff), GH_ARG(uStack_1e8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_1d8), GH_ARG(0x14), GH_ARG(600), GH_ARG(1), GH_ARG(0));
        puVar6 = (undefined8 *)(local_a0 - 0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar8 = (int *)(local_a0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_0042ebf8;
        }
      }
    }
    else if (*(int *)(self + 0x32c928) < 1) {
      FUN_009d4eac(GH_ARG(&local_a0), GH_ARG(&DAT_00a4fb04), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_198), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0xa9,
                                      (int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_1b0), GH_ARG(local_1b0 >> 0x20), GH_ARG(uStack_1a8 & 0xffffffff), GH_ARG(uStack_1a8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_198), GH_ARG(0x17), GH_ARG(600), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_a0 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(local_a0 - 8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_0042ebf8;
      }
    }
    else {
      FUN_009d4eac(GH_ARG(&local_a0), GH_ARG(&DAT_00a4fab4), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_180), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + -0xa9,
                                      (int)*(undefined8 *)(self + 0x1160) + 0x4d),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_190), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_190), GH_ARG(local_190 >> 0x20), GH_ARG(uStack_188 & 0xffffffff), GH_ARG(uStack_188 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0), GH_ARG(&local_180), GH_ARG(0x17), GH_ARG(600), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_a0 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(local_a0 - 8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_0042ebf8:
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
    }
    uVar12 = 0;
    do {
      puVar1 = &DAT_00d23d08 + uVar12 * 8;
      FUN_009d881c(GH_ARG(&local_238), GH_ARG(puVar1));
      FUN_009d881c(GH_ARG(&local_248), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_240), GH_ARG(self), GH_ARG((undefined *)&local_248));
      bzStateGame__getCurPrice_0039e3e0(GH_ARG((undefined *)&local_a0), GH_ARG(self), GH_ARG((undefined *)&local_238), GH_ARG((undefined *)&local_240));
      if ((undefined8 *)(local_240 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_240 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_240 + -0x18));
        }
      }
      if ((undefined8 *)(local_248 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_248 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_248 + -0x18));
        }
      }
      if ((undefined8 *)(local_238 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_238 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_238 + -0x18));
        }
      }
      puVar7 = (undefined *)FUN_009d881c(GH_ARG(&local_250), GH_ARG(&local_a0));
      iVar5 = bzStateGame__convertMoneyint_003fc890(GH_ARG(puVar7), GH_ARG((undefined *)&local_250));
      if ((undefined8 *)(local_250 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_250 + -8);
        do {
          iVar10 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 < 1) {
          operator_delete((undefined8 *)(local_250 + -0x18));
        }
      }
      FUN_009d881c(GH_ARG(&local_268), GH_ARG(puVar1));
      puVar7 = (undefined *)bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_260), GH_ARG(self), GH_ARG((undefined *)&local_268));
      bzStateGame__convertMoneyStr_003fcd68(GH_ARG((undefined *)&local_258), GH_ARG(puVar7), GH_ARG((iVar5 * 100) / 0x3c), GH_ARG((undefined *)&local_260));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_278), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_270), GH_ARG(self), GH_ARG((undefined *)&local_278));
      iVar11 = (int)uVar12 * 0xc0;
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_258), GH_ARG(iVar11 + iVar5 + -0x61), GH_ARG(iVar10 + 0x78), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(0x96), GH_ARG(1.0), GH_ARG(0.6), GH_ARG((undefined *)&local_270));
      if ((undefined8 *)(local_270 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_270 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_270 + -0x18));
        }
      }
      if ((undefined8 *)(local_278 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_278 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_278 + -0x18));
        }
      }
      if ((undefined8 *)(local_258 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_258 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_258 + -0x18));
        }
      }
      if ((undefined8 *)(local_260 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_260 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_260 + -0x18));
        }
      }
      if ((undefined8 *)(local_268 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_268 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_268 + -0x18));
        }
      }
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xf8), GH_ARG(iVar11 + *(int *)(self + 0x1160) + -0xac), GH_ARG(*(int *)(self + 0x1164) + 0x6e), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
      FUN_009d881c(GH_ARG(&local_280), GH_ARG(&local_a0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      FUN_009d881c(GH_ARG(&local_290), GH_ARG(puVar1));
      bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_288), GH_ARG(self), GH_ARG((undefined *)&local_290));
      bzStateGame__ImgMoneyNumber_003fcac4(GH_ARG(self), GH_ARG((undefined *)&local_280), GH_ARG(iVar11 + iVar5 + -0x2d), GH_ARG(iVar10 + 0x9c), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0), GH_ARG((undefined *)&local_288));
      if ((undefined8 *)(local_288 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_288 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_288 + -0x18));
        }
      }
      if ((undefined8 *)(local_290 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_290 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_290 + -0x18));
        }
      }
      if ((undefined8 *)(local_280 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_280 + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_280 + -0x18));
        }
      }
      if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_a0 - 8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete((undefined8 *)(local_a0 - 0x18));
        }
      }
      bVar4 = uVar12 < 2;
      uVar12 = uVar12 + 1;
    } while (bVar4);
  }
  else {
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0xb), GH_ARG(*(int *)(self + 0x1160)), GH_ARG(*(int *)(self + 0x1164) + 0x78), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0xc), GH_ARG(*(int *)(self + 0x1160)), GH_ARG(*(int *)(self + 0x1164) + 0x78), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xab), GH_ARG(*(int *)(self + 0x1160) + -0x2e), GH_ARG(*(int *)(self + 0x1164) + -0x6b), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(30000), GH_ARG(*(int *)(self + 0x1160) + -0x127), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(180000), GH_ARG(*(int *)(self + 0x1160) + -0x9f), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(990000), GH_ARG(*(int *)(self + 0x1160) + -0x17), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(7000), GH_ARG(*(int *)(self + 0x1160) + 0x6f), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(50000), GH_ARG(*(int *)(self + 0x1160) + 0xf4), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(999999), GH_ARG(*(int *)(self + 0x1160) + 0x179), GH_ARG(*(int *)(self + 0x1164) + -0x2f), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(999999), GH_ARG(*(int *)(self + 0x1160) + 0x179), GH_ARG(*(int *)(self + 0x1164) + -0xb), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(1.0));
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e188), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + -0x125), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e18f), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + -0x9e), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e196), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + -0x16), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e188), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + 0x70), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e18f), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + 0xf7), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
      FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e19d), GH_ARG(&local_2c8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar5 = *(int *)(self + 0x1160);
      iVar10 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_b8), GH_ARG(iVar5 + 0x17c), GH_ARG(iVar10 + 0x5c), GH_ARG(2), GH_ARG((undefined *)&local_a0), GH_ARG((undefined *)&local_b0), GH_ARG(7));
      puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
          operator_delete(puVar6);
        }
      }
    }
    else {
      uVar12 = 0;
      do {
        FUN_009d881c(GH_ARG(&local_298), GH_ARG(&DAT_00d23c70 + uVar12));
        bzStateGame__getCurCode_0039fa6c(GH_ARG((undefined *)&local_a0), GH_ARG(self), GH_ARG((undefined *)&local_298));
        if ((undefined8 *)(local_298 + -0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_298 + -8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_298 + -0x18));
          }
        }
        FUN_009d881c(GH_ARG(&local_2a0), GH_ARG(&DAT_00d23c70 + uVar12));
        FUN_009d881c(GH_ARG(&local_2a8), GH_ARG(&local_a0));
        bzStateGame__getCurPrice_0039e3e0(GH_ARG((undefined *)&local_b0), GH_ARG(self), GH_ARG((undefined *)&local_2a0), GH_ARG((undefined *)&local_2a8));
        if ((undefined8 *)(local_2a8 + -0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_2a8 + -8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_2a8 + -0x18));
          }
        }
        if ((undefined8 *)(local_2a0 + -0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_2a0 + -8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_2a0 + -0x18));
          }
        }
        iVar5 = FUN_009d6cd4(GH_ARG(&local_a0), GH_ARG(&DAT_00a4d796), GH_ARG(0));
        if (iVar5 != 0) {
          FUN_003af38c(GH_ARG(&local_b8), GH_ARG(&DAT_00a4e185), GH_ARG(&local_b0));
          FUN_009d5ec8(GH_ARG(&local_b0), GH_ARG(&local_b8));
          puVar6 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + -0x18);
          if (puVar6 != &DAT_00d40300) {
            piVar8 = (int *)(CONCAT44(uStack_b4,local_b8) + -8);
            do {
              iVar5 = *piVar8;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 < 1) {
              operator_delete(puVar6);
            }
          }
        }
        uVar9 = *(undefined8 *)(self + 0x8daa0);
        gh_store64(&(local_2b0), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + 0x60,
                                        (int)uVar12 * 0x87 + -0x125 +
                                        (int)*(undefined8 *)(self + 0x1160)),4));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2c0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_2c0), GH_ARG(local_2c0 >> 0x20), GH_ARG(uStack_2b8 & 0xffffffff), GH_ARG(uStack_2b8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_b0), GH_ARG(&local_2b0), GH_ARG(0x14), GH_ARG(9999), GH_ARG(2), GH_ARG(1));
        if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_b0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_b0 - 0x18));
          }
        }
        if ((undefined8 *)(local_a0 - 0x18) != &DAT_00d40300) {
          piVar8 = (int *)(local_a0 - 8);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 < 1) {
            operator_delete((undefined8 *)(local_a0 - 0x18));
          }
        }
        bVar4 = uVar12 < 5;
        uVar12 = uVar12 + 1;
      } while (bVar4);
    }
  }
  if (self[0x1af4] == '\0') goto LAB_0042d3e4;
  iVar5 = 0;
  if (*(int *)(self + 0x32c9d0) < 3) {
    iVar5 = *(int *)(self + 0x32c9d0) + 1;
  }
  *(int *)(self + 0x32c9d0) = iVar5;
  uVar9 = *(undefined8 *)(self + 0xc38);
  cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)&local_a0), GH_ARG(-5.0), GH_ARG(220.0), GH_ARG((float)(*(int *)(self + 0x1158) + 10)), GH_ARG(115.0));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
  kDraw__drawRect_00479ae8(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0));
  uVar9 = *(undefined8 *)(self + 0xc38);
  cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)&local_a0), GH_ARG(0.0), GH_ARG(221.0), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG(113.0));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.039215688), GH_ARG(0.039215688), GH_ARG(0.039215688), GH_ARG(1.0));
  kDraw__drawRect_00479ae8(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar9), GH_ARG(&local_a0));
  switch(*(undefined4 *)(self + 0x32c9d0)) {
  case 0:
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("CONTACTING"), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar5 = *(int *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_b8 = (float)iVar5;
    uStack_b4 = 0x43750000;
    kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(1));
    puVar6 = (undefined8 *)(local_2c8 + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar8 = (int *)(local_2c8 + -8);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0042ec5c:
      if (iVar5 < 1) {
        operator_delete(puVar6);
      }
    }
    break;
  case 1:
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("CONTACTING."), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar5 = *(int *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_b8 = (float)iVar5;
    uStack_b4 = 0x43750000;
    kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(1));
    puVar6 = (undefined8 *)(local_2c8 + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar8 = (int *)(local_2c8 + -8);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0042ec5c;
    }
    break;
  case 2:
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("CONTACTING.."), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar5 = *(int *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_b8 = (float)iVar5;
    uStack_b4 = 0x43750000;
    kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(1));
    puVar6 = (undefined8 *)(local_2c8 + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar8 = (int *)(local_2c8 + -8);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0042ec5c;
    }
    break;
  case 3:
    FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("CONTACTING..."), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar5 = *(int *)(self + 0x1160);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_b8 = (float)iVar5;
    uStack_b4 = 0x43750000;
    kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(1));
    puVar6 = (undefined8 *)(local_2c8 + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar8 = (int *)(local_2c8 + -8);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0042ec5c;
    }
  }
  FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("DO NOT EXIT OR TURN OFF YOUR DEVICE WHILE "), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  iVar5 = *(int *)(self + 0x1160);
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
  local_b8 = (float)(iVar5 + -0xfa);
  uStack_b4 = 0x43870000;
  kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(0));
  if ((undefined8 *)(local_2c8 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_2c8 + -8);
    do {
      iVar5 = *piVar8;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 < 1) {
      operator_delete((undefined8 *)(local_2c8 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_2c8), GH_ARG("PURCHASING"), GH_ARG(auStack_2d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  iVar5 = *(int *)(self + 0x1160);
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
  local_b8 = (float)(iVar5 + -0xfa);
  uStack_b4 = 0x43910000;
  kFont__drawString_0047ae54(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_2c8), GH_ARG(&local_b8), GH_ARG(0));
  if ((undefined8 *)(local_2c8 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_2c8 + -8);
    do {
      iVar5 = *piVar8;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 < 1) {
      operator_delete((undefined8 *)(local_2c8 + -0x18));
    }
  }
LAB_0042d3e4:
  if (*(gh_long *)(lVar3 + 0x28) != local_88) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
