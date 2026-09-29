/* bzStateGame::DrawDrone_00428974 @ 0x00428974 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a485d0
#define DAT_00a485d0 (*(undefined1 *)IMG(0x00a485d0))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__DrawDrone_00428974(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  float param_2 = gh_b2f(gh_a1);

  undefined *puVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  uint64_t gh_frame64[35] = {0};   /* 원작 스택 프레임 (SP-0x100 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x100;
#define local_100 (*(ulong *)(gh_fb - 0x100))
#define uStack_f8 (*(ulong *)(gh_fb - 0xf8))
#define local_e8 (*(float *)(gh_fb - 0xe8))
#define fStack_e4 (*(float *)(gh_fb - 0xe4))
#define local_e0 (*(ulong *)(gh_fb - 0xe0))
#define uStack_d8 (*(ulong *)(gh_fb - 0xd8))
#define local_c8 (*(float *)(gh_fb - 0xc8))
#define fStack_c4 (*(float *)(gh_fb - 0xc4))
#define local_c0 (*(ulong *)(gh_fb - 0xc0))
#define uStack_b8 (*(ulong *)(gh_fb - 0xb8))
#define local_a8 (*(float *)(gh_fb - 0xa8))
#define fStack_a4 (*(float *)(gh_fb - 0xa4))
#define local_a0 (*(ulong *)(gh_fb - 0xa0))
#define uStack_98 (*(ulong *)(gh_fb - 0x98))
#define local_90 (*(float *)(gh_fb - 0x90))
#define fStack_8c (*(float *)(gh_fb - 0x8c))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
#define local_80 (*(ulong *)(gh_fb - 0x80))
#define uStack_78 (*(ulong *)(gh_fb - 0x78))
#define local_68 (*(float *)(gh_fb - 0x68))
#define fStack_64 (*(float *)(gh_fb - 0x64))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar4 = tpidr_el0;
  local_58 = *(gh_long *)(lVar4 + 0x28);
  if ((*(int *)(self + 0x1ae8) == 0x16) || (*(int *)(self + 0x1ae8) == 0xb)) {
    if (*(int *)(self + 0x32c9ac) - 1U < 2) {
      fVar10 = *(float *)(&DAT_00a485d0 + (ulong)(*(int *)(self + 0xbdc) == 0) * 4);
      iVar6 = *(int *)(self + 0xbd0);
LAB_004289f0:
      if (iVar6 == 0) {
        fVar11 = *(float *)(self + 0xc04);
        *(float *)(self + 0xc04) = fVar11 + param_2;
        if (fVar10 < fVar11 + param_2) {
          *(undefined4 *)(self + 0xbd0) = 1;
          *(undefined4 *)(self + 0xbec) = 0x50;
          *(undefined4 *)(self + 0xbe4) = 100;
          *(undefined4 *)(self + 0xbe8) = *(undefined4 *)(self + 0x1158);
          *(undefined8 *)(self + 0xbfc) = 0x100000005;
          *(undefined8 *)(self + 0xbf4) = 0x100000000;
          *(uint *)(self + 0xbd4) = (uint)(*(int *)(self + 0xbd8) == *(int *)(self + 0xbdc));
          *(int *)(self + 0xbdc) = *(int *)(self + 0xbdc) + 1;
        }
        goto LAB_00428eb8;
      }
    }
    else {
      fVar10 = 180.0;
      if ((*(int *)(self + 0x32c8e8) == 1) && (*(int *)(self + 0xbdc) == 0)) {
        if (*(int *)(self + 0x32c854) == 100) {
          uVar7 = 0xc800;
        }
        else {
          if (*(int *)(self + 0x32c854) != 0) goto LAB_00428a90;
          uVar7 = 0xc7fc;
        }
        if (*(int *)(self + (uVar7 | 0x320000)) != -1) goto LAB_00428a90;
        fVar10 = 60.0;
        iVar6 = *(int *)(self + 0xbd0);
      }
      else {
LAB_00428a90:
        iVar6 = *(int *)(self + 0xbd0);
      }
      if (0 < *(int *)(self + 0x32c908)) goto LAB_004289f0;
    }
    if (iVar6 != 1) goto LAB_00428eb8;
    if (*(int *)(self + 0x1170) == 0) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x18d8)), GH_ARG(false));
      }
      iVar6 = 8;
    }
    else {
      iVar6 = *(int *)(self + 0x1170) + -1;
    }
    iVar8 = *(int *)(self + 0xbf4);
    *(int *)(self + 0x1170) = iVar6;
    if (*(int *)(self + 0xbf8) == 1) {
      if (iVar8 < 5) {
        *(int *)(self + 0xbf4) = iVar8 + 1;
        iVar8 = iVar8 + 1;
      }
      else {
        *(undefined4 *)(self + 0xbf8) = 0;
      }
    }
    else if (iVar8 < 1) {
      *(undefined4 *)(self + 0xbf8) = 1;
    }
    else {
      *(int *)(self + 0xbf4) = iVar8 + -1;
      iVar8 = iVar8 + -1;
    }
    iVar8 = iVar8 + 0x50;
    *(int *)(self + 0xbec) = iVar8;
    iVar6 = *(int *)(self + 0xbe8) - *(int *)(self + 0xbfc);
    *(int *)(self + 0xbe8) = iVar6;
    if (iVar6 < -0x7d) {
      *(undefined4 *)(self + 0xc04) = 0;
      *(undefined8 *)(self + 0xbd0) = 0;
      goto LAB_00428eb8;
    }
  }
  else {
    if (*(int *)(self + 0xbd0) != 1) goto LAB_00428eb8;
    iVar6 = *(int *)(self + 0xbe8);
    iVar8 = *(int *)(self + 0xbec);
  }
  local_68 = (float)iVar6;
  iVar6 = *(int *)(self + 0xbc8) % 4;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  uVar9 = *(undefined8 *)(self + (gh_long)(iVar6 >> 1) * 8 + 0xc08);
  fStack_64 = (float)iVar8;
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_80), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
  kSprite__drawPos_0047f378(GH_ARG(local_80), GH_ARG(local_80 >> 0x20), GH_ARG(uStack_78 & 0xffffffff), GH_ARG(uStack_78 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar9), GH_ARG(&local_68), GH_ARG(0));
  if (*(int *)(self + 0xbd4) == 1) {
    *(undefined4 *)(self + 0x32c950) = 0x96;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_88), GH_ARG(0x96));
    puVar1 = self + 0x32c958;
    FUN_009d5ec8(GH_ARG(puVar1), GH_ARG(&local_88));
    if ((undefined8 *)(local_88 + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_88 + -8);
      do {
        iVar6 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 < 1) {
        operator_delete((undefined8 *)(local_88 + -0x18));
      }
    }
    uVar9 = *(undefined8 *)(self + 0x8daa0);
    local_90 = (float)(*(int *)(self + 0xbe8) + 0xd2);
    fStack_8c = (float)(*(int *)(self + 0xbec) + 0x12);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.5));
    kFont__drawDString2_0047b830(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(uVar9), GH_ARG(puVar1), GH_ARG(&local_90), GH_ARG(0x14), GH_ARG(9999), GH_ARG(1), GH_ARG(0));
    uVar9 = *(undefined8 *)(self + 0x8daa0);
    local_a8 = (float)(*(int *)(self + 0xbe8) + 0xd0);
    fStack_a4 = (float)(*(int *)(self + 0xbec) + 0x10);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_c0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_c0), GH_ARG(local_c0 >> 0x20), GH_ARG(uStack_b8 & 0xffffffff), GH_ARG(uStack_b8 >> 0x20), GH_ARG(uVar9), GH_ARG(puVar1), GH_ARG(&local_a8), GH_ARG(0x14), GH_ARG(9999), GH_ARG(1), GH_ARG(0));
  }
  else {
    *(undefined4 *)(self + 0x32c950) = 0x32;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_88), GH_ARG(0x32));
    puVar1 = self + 0x32c958;
    FUN_009d5ec8(GH_ARG(puVar1), GH_ARG(&local_88));
    if ((undefined8 *)(local_88 + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_88 + -8);
      do {
        iVar6 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 < 1) {
        operator_delete((undefined8 *)(local_88 + -0x18));
      }
    }
    uVar9 = *(undefined8 *)(self + 0x8daa0);
    local_c8 = (float)(*(int *)(self + 0xbe8) + 0xd2);
    fStack_c4 = (float)(*(int *)(self + 0xbec) + 0x12);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.5));
    kFont__drawDString2_0047b830(GH_ARG(local_e0), GH_ARG(local_e0 >> 0x20), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(uVar9), GH_ARG(puVar1), GH_ARG(&local_c8), GH_ARG(0x14), GH_ARG(9999), GH_ARG(1), GH_ARG(0));
    uVar9 = *(undefined8 *)(self + 0x8daa0);
    local_e8 = (float)(*(int *)(self + 0xbe8) + 0xd0);
    fStack_e4 = (float)(*(int *)(self + 0xbec) + 0x10);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_100), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    kFont__drawDString2_0047b830(GH_ARG(local_100), GH_ARG(local_100 >> 0x20), GH_ARG(uStack_f8 & 0xffffffff), GH_ARG(uStack_f8 >> 0x20), GH_ARG(uVar9), GH_ARG(puVar1), GH_ARG(&local_e8), GH_ARG(0x14), GH_ARG(9999), GH_ARG(1), GH_ARG(0));
  }
  iVar6 = *(int *)(self + 0xbc8) % 4;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0xbe8) + 100), GH_ARG(*(int *)(self + 0xbec) + (iVar6 >> 1) + 0x8c), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
LAB_00428eb8:
  if (*(gh_long *)(lVar4 + 0x28) == local_58) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
