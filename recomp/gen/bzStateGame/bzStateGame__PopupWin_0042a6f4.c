/* bzStateGame::PopupWin_0042a6f4 @ 0x0042a6f4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4fcf3
#define DAT_00a4fcf3 (*(undefined1 *)IMG(0x00a4fcf3))
#undef DAT_00af75b9
#define DAT_00af75b9 (*(undefined1 *)IMG(0x00af75b9))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
#undef DAT_00a4fc12
#define DAT_00a4fc12 (*(undefined1 *)IMG(0x00a4fc12))
#undef DAT_00a4fc2d
#define DAT_00a4fc2d (*(undefined1 *)IMG(0x00a4fc2d))
#undef DAT_00a4fc48
#define DAT_00a4fc48 (*(undefined1 *)IMG(0x00a4fc48))
#undef DAT_00a4fc62
#define DAT_00a4fc62 (*(undefined1 *)IMG(0x00a4fc62))
#undef DAT_00a4fc8b
#define DAT_00a4fc8b (*(undefined1 *)IMG(0x00a4fc8b))
gh_long bzStateGame__PopupWin_0042a6f4(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  undefined8 *puVar6;
  gh_long *plVar7;
  int iVar8;
  ulong *puVar9;
  int *piVar10;
  undefined8 uVar11;
  uint64_t gh_frame64[77] = {0};   /* 원작 스택 프레임 (SP-0x250 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x250;
#define local_250 (*(ulong *)(gh_fb - 0x250))
#define uStack_248 (*(ulong *)(gh_fb - 0x248))
#define local_238 (*(undefined8 *)(gh_fb - 0x238))
#define local_230 (*(gh_long *)(gh_fb - 0x230))
#define local_228 (*(gh_long *)(gh_fb - 0x228))
#define local_220 (*(ulong *)(gh_fb - 0x220))
#define uStack_218 (*(ulong *)(gh_fb - 0x218))
#define local_208 (*(float *)(gh_fb - 0x208))
#define fStack_204 (*(float *)(gh_fb - 0x204))
#define local_200 (*(ulong *)(gh_fb - 0x200))
#define uStack_1f8 (*(ulong *)(gh_fb - 0x1f8))
#define local_1e8 (*(float *)(gh_fb - 0x1e8))
#define fStack_1e4 (*(float *)(gh_fb - 0x1e4))
#define local_1e0 (*(ulong *)(gh_fb - 0x1e0))
#define uStack_1d8 (*(ulong *)(gh_fb - 0x1d8))
#define local_1c8 (*(float *)(gh_fb - 0x1c8))
#define fStack_1c4 (*(float *)(gh_fb - 0x1c4))
#define local_1c0 (*(ulong *)(gh_fb - 0x1c0))
#define uStack_1b8 (*(ulong *)(gh_fb - 0x1b8))
#define local_1a8 (*(float *)(gh_fb - 0x1a8))
#define fStack_1a4 (*(float *)(gh_fb - 0x1a4))
#define local_1a0 (*(ulong *)(gh_fb - 0x1a0))
#define uStack_198 (*(ulong *)(gh_fb - 0x198))
#define local_190 (*(float *)(gh_fb - 0x190))
#define fStack_18c (*(float *)(gh_fb - 0x18c))
#define local_188 (*(gh_long *)(gh_fb - 0x188))
#define local_180 (*(ulong *)(gh_fb - 0x180))
#define uStack_178 (*(ulong *)(gh_fb - 0x178))
#define local_168 (*(float *)(gh_fb - 0x168))
#define fStack_164 (*(float *)(gh_fb - 0x164))
#define local_160 (*(ulong *)(gh_fb - 0x160))
#define uStack_158 (*(ulong *)(gh_fb - 0x158))
#define local_148 (*(float *)(gh_fb - 0x148))
#define local_144 (*(float *)(gh_fb - 0x144))
#define local_140 (*(ulong *)(gh_fb - 0x140))
#define uStack_138 (*(ulong *)(gh_fb - 0x138))
#define local_128 (*(float *)(gh_fb - 0x128))
#define local_124 (*(float *)(gh_fb - 0x124))
#define local_120 (*(ulong *)(gh_fb - 0x120))
#define uStack_118 (*(ulong *)(gh_fb - 0x118))
#define local_108 (*(float *)(gh_fb - 0x108))
#define fStack_104 (*(float *)(gh_fb - 0x104))
#define local_100 (*(ulong *)(gh_fb - 0x100))
#define uStack_f8 (*(ulong *)(gh_fb - 0xf8))
#define local_e8 (*(float *)(gh_fb - 0xe8))
#define fStack_e4 (*(float *)(gh_fb - 0xe4))
#define local_e0 (*(ulong *)(gh_fb - 0xe0))
#define uStack_d8 (*(ulong *)(gh_fb - 0xd8))
#define local_c8 (*(undefined8 *)(gh_fb - 0xc8))
#define local_c0 (*(ulong *)(gh_fb - 0xc0))
#define uStack_b8 (*(ulong *)(gh_fb - 0xb8))
#define local_a8 (*(float *)(gh_fb - 0xa8))
#define fStack_a4 (*(float *)(gh_fb - 0xa4))
#define local_a0 (*(ulong *)(gh_fb - 0xa0))
#define uStack_98 (*(ulong *)(gh_fb - 0x98))
#define local_88 (*(float *)(gh_fb - 0x88))
#define fStack_84 (*(float *)(gh_fb - 0x84))
#define local_80 (*(ulong *)(gh_fb - 0x80))
#define uStack_78 (*(ulong *)(gh_fb - 0x78))
#define local_70 (*(ulong *)(gh_fb - 0x70))
#define uStack_68 (*(ulong *)(gh_fb - 0x68))
#define local_60 (*(undefined8 *)(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar5 = tpidr_el0;
  local_58 = *(gh_long *)(lVar5 + 0x28);
  uVar11 = *(undefined8 *)(self + 0xc38);
  cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)&local_70), GH_ARG(0.0), GH_ARG(0.0), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG((float)*(int *)(self + 0x115c)));
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.8));
  kDraw__drawRect_00479ae8(GH_ARG(local_80), GH_ARG(local_80 >> 0x20), GH_ARG(uStack_78 & 0xffffffff), GH_ARG(uStack_78 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70));
  if (*(int *)(self + 0x1af8) == 2) {
    iVar8 = 0xff;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x109), GH_ARG(*(int *)(self + 0x1160) + -0xcf), GH_ARG(*(int *)(self + 0x1164) + -0x61), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0x31), GH_ARG(*(int *)(self + 0x1160)), GH_ARG(*(int *)(self + 0x1164) + -0x22), GH_ARG(iVar8), GH_ARG(0x96), GH_ARG(0xff), GH_ARG(0x96), GH_ARG(0.6), GH_ARG(1.0));
    piVar10 = (int *)(self + 0x32c978);
    iVar8 = -8;
    if (*piVar10 != 1) {
      iVar8 = 0;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(*piVar10 + 0xfe), GH_ARG(*(int *)(self + 0x1160) + 0x15), GH_ARG(*(int *)(self + 0x1164) + iVar8 + -0x12), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x3c), GH_ARG(*(int *)(self + 0x1160) + 0x99), GH_ARG(*(int *)(self + 0x1164) + 0xf), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar10 * 4 + 0x32c648) + 0x32), GH_ARG(*(int *)(self + 0x1160) + 0xad), GH_ARG(*(int *)(self + 0x1164) + 0xf), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_228), GH_ARG(*(int *)(self + (gh_long)*piVar10 * 4 + 0x32c5f8) / 10));
    plVar7 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_228), GH_ARG(&DAT_00af75b9), GH_ARG(1));
    local_188 = *plVar7;
    *plVar7 = (gh_long)&DAT_00d40318;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_230), GH_ARG(*(int *)(self + (gh_long)*piVar10 * 4 + 0x32c620) / 10));
    uVar1 = *(gh_long *)(local_230 + -0x18) + *(gh_long *)(local_188 + -0x18);
    if ((*(ulong *)(local_188 + -0x10) < uVar1) && (uVar1 <= *(ulong *)(local_230 + -0x10))) {
      plVar7 = (gh_long *)FUN_009d7684(GH_ARG(&local_230), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    }
    else {
      plVar7 = (gh_long *)FUN_009d5908(GH_ARG(&local_188), GH_ARG(&local_230));
    }
    local_60 = *plVar7;
    *plVar7 = (gh_long)&DAT_00d40318;
    iVar8 = *(int *)(self + 0x1160);
    iVar2 = *(int *)(self + 0x1164);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.0), GH_ARG(0.27058825), GH_ARG(0.38431373), GH_ARG(1.0));
    puVar9 = &local_70;
    bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_60), GH_ARG(iVar8 + 0xb9), GH_ARG(iVar2 + 0x20), GH_ARG(2), GH_ARG((undefined *)puVar9), GH_ARG((undefined *)&local_80), GH_ARG(5));
    iVar8 = (int)puVar9;
    if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_60 + -8);
      do {
        iVar2 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_60 + -0x18));
      }
    }
    if ((undefined8 *)(local_230 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_230 + -8);
      do {
        iVar2 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_230 + -0x18));
      }
    }
    if ((undefined8 *)(local_188 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_188 + -8);
      do {
        iVar2 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_188 + -0x18));
      }
    }
    if ((undefined8 *)(local_228 + -0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_228 + -8);
      do {
        iVar2 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_228 + -0x18));
      }
    }
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0x17), GH_ARG(*(int *)(self + 0x1160)), GH_ARG(*(int *)(self + 0x1164) + -0x22), GH_ARG(iVar8), GH_ARG(0), GH_ARG(0xb2), GH_ARG(0x2a), GH_ARG(1.0), GH_ARG(1.0));
    if (self[0x1138] == '\0') {
      FUN_009d4eac(GH_ARG(&local_60), GH_ARG("This weapon is only available once"), GH_ARG(&local_188), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar8 = *(int *)(self + 0x1160);
      iVar2 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.5882353), GH_ARG(0.5882353), GH_ARG(0.5882353), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_60), GH_ARG(iVar8 + -0xb7), GH_ARG(iVar2 + 0x4e), GH_ARG(0), GH_ARG((undefined *)&local_70), GH_ARG((undefined *)&local_80), GH_ARG(5));
      if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_60 + -8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_60 + -0x18));
        }
      }
      FUN_009d4eac(GH_ARG(&local_60), GH_ARG("in this chapter."), GH_ARG(&local_188), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar8 = *(int *)(self + 0x1160);
      iVar2 = *(int *)(self + 0x1164);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.5882353), GH_ARG(0.5882353), GH_ARG(0.5882353), GH_ARG(1.0));
      bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_60), GH_ARG(iVar8 + -0xb7), GH_ARG(iVar2 + 0x65), GH_ARG(0), GH_ARG((undefined *)&local_70), GH_ARG((undefined *)&local_80), GH_ARG(5));
      if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_60 + -8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_60 + -0x18));
        }
      }
    }
    else {
      uVar11 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fcf3), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_store64(&(local_238), NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(self + 0x1160) >> 0x20) + 0x4e,
                                      (int)*(undefined8 *)(self + 0x1160) + -0xb7),4));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_250), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_250), GH_ARG(local_250 >> 0x20), GH_ARG(uStack_248 & 0xffffffff), GH_ARG(uStack_248 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_238), GH_ARG(0x16), GH_ARG(0x17c), GH_ARG(0));
      if ((undefined8 *)(local_70 - 0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_70 - 0x18));
        }
      }
    }
    goto LAB_0042b8e0;
  }
  if (*(int *)(self + 0x1af8) != 1) goto LAB_0042b8e0;
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x3e), GH_ARG(*(int *)(self + 0x1160) + -0xd2), GH_ARG(*(int *)(self + 0x1164) + -0x85), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x43), GH_ARG(*(int *)(self + 0x1160) + 0xbd), GH_ARG(*(int *)(self + 0x1164) + -0x9a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  iVar8 = *(int *)(self + 0x1afc);
  if (self[0x1138] == '\0') {
    if (iVar8 < 2) {
      if (iVar8 == 1) {
        FUN_009d4eac(GH_ARG(&local_188), GH_ARG("Not enough jewelry."), GH_ARG(&local_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar8 = *(int *)(self + 0x1160);
        iVar2 = *(int *)(self + 0x1164);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
        local_60 = CONCAT44((float)(iVar2 + -0x23),(float)iVar8);
        kFont__drawString_0047ae54(GH_ARG(local_70), GH_ARG(local_70 >> 0x20), GH_ARG(uStack_68 & 0xffffffff), GH_ARG(uStack_68 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_188), GH_ARG(&local_60), GH_ARG(1));
        puVar6 = (undefined8 *)(local_188 + -0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar10 = (int *)(local_188 + -8);
          do {
            iVar8 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_0042bc84:
          if (iVar8 < 1) {
            operator_delete(puVar6);
          }
        }
      }
      else if (iVar8 == 0) {
        FUN_009d4eac(GH_ARG(&local_188), GH_ARG("Not enough gold."), GH_ARG(&local_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar8 = *(int *)(self + 0x1160);
        iVar2 = *(int *)(self + 0x1164);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
        local_60 = CONCAT44((float)(iVar2 + -0x23),(float)iVar8);
        kFont__drawString_0047ae54(GH_ARG(local_70), GH_ARG(local_70 >> 0x20), GH_ARG(uStack_68 & 0xffffffff), GH_ARG(uStack_68 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_188), GH_ARG(&local_60), GH_ARG(1));
        puVar6 = (undefined8 *)(local_188 + -0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar10 = (int *)(local_188 + -8);
          do {
            iVar8 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_0042bc84;
        }
      }
      FUN_009d4eac(GH_ARG(&local_188), GH_ARG("Would you like to purchase it?"), GH_ARG(&local_228), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar11 = *(undefined8 *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_70), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      gh_store64(&(local_60), NEON_scvtf(uVar11,4));
      kFont__drawString_0047ae54(GH_ARG(local_70), GH_ARG(local_70 >> 0x20), GH_ARG(uStack_68 & 0xffffffff), GH_ARG(uStack_68 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_188), GH_ARG(&local_60), GH_ARG(1));
      if ((undefined8 *)(local_188 + -0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_188 + -8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_188 + -0x18));
        }
      }
    }
    else {
      if (iVar8 == 2) {
        uVar11 = *(undefined8 *)(self + 0x8daa0);
        FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc12), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        local_190 = (float)*(int *)(self + 0x1160);
        fStack_18c = (float)(*(int *)(self + 0x1164) + -0x5a);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_1a0), GH_ARG(local_1a0 >> 0x20), GH_ARG(uStack_198 & 0xffffffff), GH_ARG(uStack_198 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_190), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
        puVar6 = (undefined8 *)(local_70 - 0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar10 = (int *)(local_70 - 8);
          do {
            iVar8 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_0042bc40:
          if (iVar8 < 1) {
            operator_delete(puVar6);
          }
        }
      }
      else if (iVar8 == 3) {
        uVar11 = *(undefined8 *)(self + 0x8daa0);
        FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc2d), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        local_1a8 = (float)*(int *)(self + 0x1160);
        fStack_1a4 = (float)(*(int *)(self + 0x1164) + -0x5a);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kFont__drawDString2_0047b830(GH_ARG(local_1c0), GH_ARG(local_1c0 >> 0x20), GH_ARG(uStack_1b8 & 0xffffffff), GH_ARG(uStack_1b8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_1a8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
        puVar6 = (undefined8 *)(local_70 - 0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar10 = (int *)(local_70 - 8);
          do {
            iVar8 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_0042bc40;
        }
      }
      puVar6 = (undefined8 *)(self + 0x8daa0);
      uVar11 = *puVar6;
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc48), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1c8 = (float)*(int *)(self + 0x1160);
      fStack_1c4 = (float)(*(int *)(self + 0x1164) + -0x37);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_1e0), GH_ARG(local_1e0 >> 0x20), GH_ARG(uStack_1d8 & 0xffffffff), GH_ARG(uStack_1d8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_1c8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      if ((undefined8 *)(local_70 - 0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_70 - 0x18));
        }
      }
      uVar11 = *puVar6;
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc62), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1e8 = (float)*(int *)(self + 0x1160);
      fStack_1e4 = (float)(*(int *)(self + 0x1164) + -10);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_200), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_200), GH_ARG(local_200 >> 0x20), GH_ARG(uStack_1f8 & 0xffffffff), GH_ARG(uStack_1f8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_1e8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      if ((undefined8 *)(local_70 - 0x18) != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 < 1) {
          operator_delete((undefined8 *)(local_70 - 0x18));
        }
      }
      uVar11 = *puVar6;
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc8b), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_208 = (float)*(int *)(self + 0x1160);
      fStack_204 = (float)(*(int *)(self + 0x1164) + 0x19);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_220), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_220), GH_ARG(local_220 >> 0x20), GH_ARG(uStack_218 & 0xffffffff), GH_ARG(uStack_218 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_208), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_70 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0042bb60;
      }
    }
  }
  else if (iVar8 < 2) {
    if (iVar8 == 0) {
      uVar11 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc12), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_88 = (float)*(int *)(self + 0x1160);
      fStack_84 = (float)(*(int *)(self + 0x1164) + -0x23);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_88), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_70 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0042bb80:
        if (iVar8 < 1) {
          operator_delete(puVar6);
        }
      }
    }
    else if (iVar8 == 1) {
      uVar11 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc2d), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_a8 = (float)*(int *)(self + 0x1160);
      fStack_a4 = (float)(*(int *)(self + 0x1164) + -0x23);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_c0), GH_ARG(local_c0 >> 0x20), GH_ARG(uStack_b8 & 0xffffffff), GH_ARG(uStack_b8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_a8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_70 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0042bb80;
      }
    }
    uVar11 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc48), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_store64(&(local_c8), NEON_scvtf(*(undefined8 *)(self + 0x1160),4));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_e0), GH_ARG(local_e0 >> 0x20), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_c8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
    puVar6 = (undefined8 *)(local_70 - 0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar10 = (int *)(local_70 - 8);
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0042bb60:
      if (iVar8 < 1) {
        operator_delete(puVar6);
      }
    }
  }
  else if (iVar8 < 4) {
    if (iVar8 == 2) {
      uVar11 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc12), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_e8 = (float)*(int *)(self + 0x1160);
      fStack_e4 = (float)(*(int *)(self + 0x1164) + -0x5a);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_100), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_100), GH_ARG(local_100 >> 0x20), GH_ARG(uStack_f8 & 0xffffffff), GH_ARG(uStack_f8 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_e8), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_70 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0042bca4:
        if (iVar8 < 1) {
          operator_delete(puVar6);
        }
      }
    }
    else if (iVar8 == 3) {
      uVar11 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc2d), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_108 = (float)*(int *)(self + 0x1160);
      fStack_104 = (float)(*(int *)(self + 0x1164) + -0x5a);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_120), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString2_0047b830(GH_ARG(local_120), GH_ARG(local_120 >> 0x20), GH_ARG(uStack_118 & 0xffffffff), GH_ARG(uStack_118 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_108), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
      puVar6 = (undefined8 *)(local_70 - 0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar10 = (int *)(local_70 - 8);
        do {
          iVar8 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0042bca4;
      }
    }
    puVar6 = (undefined8 *)(self + 0x8daa0);
    uVar11 = *puVar6;
    FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc48), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_128 = (float)*(int *)(self + 0x1160);
    local_124 = (float)(*(int *)(self + 0x1164) + -0x37);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_140), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_140), GH_ARG(local_140 >> 0x20), GH_ARG(uStack_138 & 0xffffffff), GH_ARG(uStack_138 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_128), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
    if ((undefined8 *)(local_70 - 0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_70 - 8);
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 < 1) {
        operator_delete((undefined8 *)(local_70 - 0x18));
      }
    }
    uVar11 = *puVar6;
    FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc62), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_148 = (float)*(int *)(self + 0x1160);
    local_144 = (float)(*(int *)(self + 0x1164) + -10);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_160), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_160), GH_ARG(local_160 >> 0x20), GH_ARG(uStack_158 & 0xffffffff), GH_ARG(uStack_158 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_148), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
    if ((undefined8 *)(local_70 - 0x18) != &DAT_00d40300) {
      piVar10 = (int *)(local_70 - 8);
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 < 1) {
        operator_delete((undefined8 *)(local_70 - 0x18));
      }
    }
    uVar11 = *puVar6;
    FUN_009d4eac(GH_ARG(&local_70), GH_ARG(&DAT_00a4fc8b), GH_ARG(&local_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_168 = (float)*(int *)(self + 0x1160);
    fStack_164 = (float)(*(int *)(self + 0x1164) + 0x19);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_180), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_180), GH_ARG(local_180 >> 0x20), GH_ARG(uStack_178 & 0xffffffff), GH_ARG(uStack_178 >> 0x20), GH_ARG(uVar11), GH_ARG(&local_70), GH_ARG(&local_168), GH_ARG(0x19), GH_ARG(400), GH_ARG(1), GH_ARG(0));
    puVar6 = (undefined8 *)(local_70 - 0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar10 = (int *)(local_70 - 8);
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_0042bb60;
    }
  }
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x93), GH_ARG(*(int *)(self + 0x1160) + -0x5a), GH_ARG(*(int *)(self + 0x1164) + 0x67), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x26), GH_ARG(*(int *)(self + 0x1160) + -0x4d), GH_ARG(*(int *)(self + 0x1164) + 0x74), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x93), GH_ARG(*(int *)(self + 0x1160) + 0x1e), GH_ARG(*(int *)(self + 0x1164) + 0x67), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x25), GH_ARG(*(int *)(self + 0x1160) + 0x2a), GH_ARG(*(int *)(self + 0x1164) + 0x76), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
LAB_0042b8e0:
  if (*(gh_long *)(lVar5 + 0x28) != local_58) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
