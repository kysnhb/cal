/* bzStateGame::handleEvent @ 0x0043b690 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4f4e0
#define DAT_00a4f4e0 (*(undefined1 *)IMG(0x00a4f4e0))
#undef DAT_00a50a25
#define DAT_00a50a25 (*(undefined1 *)IMG(0x00a50a25))
#undef DAT_00a535c0
#define DAT_00a535c0 (*(undefined1 *)IMG(0x00a535c0))
#undef joyX
#define joyX (*(undefined4 *)IMG(0x00d23c5c))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
#undef DAT_00b008ce
#define DAT_00b008ce (*(undefined1 *)IMG(0x00b008ce))
#undef DAT_00d23d28
#define DAT_00d23d28 (*(undefined1 *)IMG(0x00d23d28))
#undef DAT_00a4f5e1
#define DAT_00a4f5e1 (*(undefined1 *)IMG(0x00a4f5e1))
#undef DAT_00d23d38
#define DAT_00d23d38 (*(undefined1 *)IMG(0x00d23d38))
#undef joyY
#define joyY (*(undefined4 *)IMG(0x00d23c60))
#undef DAT_00d23d88
#define DAT_00d23d88 (*(undefined8 *)IMG(0x00d23d88))
#undef viewType
#define viewType (*(undefined4 *)IMG(0x00d23dc0))
#undef DAT_00a4f649
#define DAT_00a4f649 (*(undefined1 *)IMG(0x00a4f649))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef DAT_00a4f730
#define DAT_00a4f730 (*(undefined1 *)IMG(0x00a4f730))
gh_long bzStateGame__handleEvent(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  float *pfVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  gh_long lVar11;
  gh_long *plVar12;
  undefined *puVar13;
  time_t tVar14;
  ulong uVar15;
  RewardInterface *this;
  undefined8 *puVar16;
  Application *pAVar17;
  int in_w2 = 0;
  int iVar18;
  int iVar19;
  uint uVar20;
  int in_w4 = 0;
  ulong uVar21;
  int in_w5 = 0;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  gh_long lVar25;
  uint *puVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  undefined4 uVar30;
  int iVar31;
  ulong uVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  int *piVar36;
  undefined4 *puVar37;
  gh_long lVar38;
  int iVar39;
  int iVar40;
  code *pcVar41;
  uint uVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint64_t gh_frame64[69] = {0};   /* 원작 스택 프레임 (SP-0x210 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x210;
#define auStack_210 (*(undefined1 (*)[8])(gh_fb - 0x210))
#define auStack_208 (*(undefined1 (*)[8])(gh_fb - 0x208))
#define auStack_200 (*(undefined1 (*)[8])(gh_fb - 0x200))
#define auStack_1f8 (*(undefined1 (*)[8])(gh_fb - 0x1f8))
#define auStack_1f0 (*(undefined1 (*)[8])(gh_fb - 0x1f0))
#define auStack_1e8 (*(undefined1 (*)[8])(gh_fb - 0x1e8))
#define local_1e0 (*(gh_long *)(gh_fb - 0x1e0))
#define local_1d8 (*(gh_long *)(gh_fb - 0x1d8))
#define local_1d0 (*(gh_long *)(gh_fb - 0x1d0))
#define local_1c8 (*(gh_long *)(gh_fb - 0x1c8))
#define local_1c0 (*(gh_long *)(gh_fb - 0x1c0))
#define local_1b8 (*(gh_long *)(gh_fb - 0x1b8))
#define local_1b0 (*(gh_long *)(gh_fb - 0x1b0))
#define local_1a8 (*(gh_long *)(gh_fb - 0x1a8))
#define local_1a0 (*(gh_long *)(gh_fb - 0x1a0))
#define local_198 (*(gh_long *)(gh_fb - 0x198))
#define local_190 (*(gh_long *)(gh_fb - 0x190))
#define local_188 (*(gh_long *)(gh_fb - 0x188))
#define local_180 (*(gh_long *)(gh_fb - 0x180))
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
#define auStack_d8 (*(undefined1 (*)[8])(gh_fb - 0xd8))
#define local_d0 (*(gh_long *)(gh_fb - 0xd0))
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
  
  lVar11 = tpidr_el0;
  local_80[1] = *(gh_long *)(lVar11 + 0x28);
  if (*(int *)param_2 != 0) {
    if (*(int *)param_2 != 4) goto switchD_0043ba5c_caseD_1;
    if ((0 < *(int *)(self + 0x1af0)) && (self[0x1af4] == '\0')) {
      *(undefined4 *)(self + 0x1af0) = 0;
      goto switchD_0043ba5c_caseD_1;
    }
    if (0 < *(int *)(self + 0x1af8)) {
      *(undefined4 *)(self + 0x1af8) = 0;
      goto switchD_0043ba5c_caseD_1;
    }
    if (*(int *)(self + 0xba8) == 1) goto switchD_0043ba5c_caseD_1;
    uVar20 = *(uint *)(self + 0x1ae8);
    switch(uVar20) {
    case 2:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      if (*(int *)(self + 0x32c970) < 1) {
        bzStateGame__showBanner_0039d2c0(GH_ARG(self));
        uVar22 = 999;
        goto LAB_0043bf54;
      }
LAB_0043bf1c:
      *(undefined4 *)(self + 0x32c970) = 0;
      break;
    case 3:
    case 4:
    case 6:
    case 10:
    case 0x10:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      break;
    case 5:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      if (0 < *(int *)(self + 0x32c970)) goto LAB_0043bf1c;
      *(undefined4 *)(self + 0x1ae8) = 2;
      *(undefined4 *)(self + 0x32c990) = 0;
      if ((*(int *)(self + 0x32c7a8) == -1) &&
         ((*(int *)(self + 0x32c3fc) != 0 || (*(int *)(self + 0x32c400) != 0)))) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(8), GH_ARG(0));
      }
      break;
    case 7:
      *(undefined4 *)(self + 0x1ae8) = 0x12;
      goto LAB_0043c26c;
    case 8:
    case 9:
    case 0x18:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(0), GH_ARG(0.0), GH_ARG(0.0));
      *(undefined4 *)(self + 0x32c180) = *(undefined4 *)(self + 0x32c94c);
      if (*(int *)(self + 0x1ae8) == 8) {
        uVar22 = 0;
        uVar30 = 0x12;
      }
      else if (*(int *)(self + 0x1ae8) == 0x18) {
        uVar22 = 0;
        uVar30 = 0x17;
      }
      else {
        uVar22 = 1;
        uVar30 = 5;
      }
      *(undefined4 *)(self + 0x1ae8) = uVar30;
      *(undefined4 *)(self + 0x32c990) = uVar22;
      break;
    case 0xb:
    case 0x16:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      uVar22 = 0xd;
      goto LAB_0043bf54;
    case 0xc:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      if (0 < *(int *)(self + 0x32c970)) goto LAB_0043bf1c;
      uVar22 = 5;
      if (*(int *)(self + 0x32c9ac) != 0) {
        uVar22 = 2;
      }
      *(undefined4 *)(self + 0x1ae8) = uVar22;
      *(undefined4 *)(self + 0x32c990) = 1;
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      break;
    case 0xd:
    case 0x46:
    case 0x49:
    case 0x4a:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        uVar20 = *(uint *)(self + 0x1ae8);
      }
      cocos2d__log_005d21e4(GH_ARG("stState = %d, Jumpjump = %d"), GH_ARG((ulong)uVar20), GH_ARG((ulong)*(uint *)(self + 0x32c9ac)), GH_ARG(0), GH_ARG(0));
      if ((*(uint *)(self + 0x32c9ac) | 2) == 2) {
        uVar22 = 0xb;
      }
      else {
        uVar22 = 0x16;
      }
      goto LAB_0043bf54;
    case 0xe:
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      cocos2d__Application__getInstance_00484a3c();
      cocos2d__Application__SkipGameClearBonus_00485dfc();
      if (*(int *)(self + 0x8da38) == 0xff) {
        *(undefined4 *)(self + 0x410) = 0xffffffff;
        *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
        *(undefined4 *)(self + 0x5a0) = 0xffffffff;
        *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        byebye_0047e184(GH_ARG(0));
      }
      else {
        if (self[0x32aad4] == '\0') {
          *(undefined8 *)(self + 0xba4) = 0x100000001;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 0;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x870)));
        }
        *(undefined4 *)(self + 0x32c9c0) = 0xf;
        *(undefined4 *)(self + 0x1ae8) = 0x10;
      }
      *(undefined4 *)(self + 0x32c990) = 1;
      cocos2d__log_005d21e4(GH_ARG("-TEST- stState == ST_GAME_Clear /// SingleORZombie : %d"), GH_ARG((ulong)*(uint *)(self + 0x32c854)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(8), GH_ARG(*(int *)(self + 0x32c854) + 1), GH_ARG(0.0), GH_ARG(0.0));
LAB_0043c26c:
      if (*(int *)(self + 0x32c160) == 0) {
        lVar25 = 0x1380;
LAB_0043c280:
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar25)), GH_ARG(false));
      }
      break;
    case 0xf:
    case 0x12:
    case 0x13:
switchD_0043b790_caseD_f:
      if (*(int *)(self + 0x32c160) == 0) {
        lVar25 = 0x1380;
LAB_0043bf44:
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar25)), GH_ARG(false));
      }
      goto LAB_0043bf50;
    case 0x11:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      *(undefined4 *)(self + 0x1ae8) = 2;
      *(undefined4 *)(self + 0x32c990) = 0;
      break;
    case 0x14:
      if (0 < *(int *)(self + 0x32c970)) goto LAB_0043bf1c;
      if (*(float *)(self + 0x32c8bc) <= 0.3) break;
      *(int *)(self + 0x32c178) = *(int *)(self + 0x32c150) * 10;
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      if (*(int *)(self + 0x8da38) == 0xff) {
        *(undefined4 *)(self + 0x410) = 0xffffffff;
        *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
        *(undefined4 *)(self + 0x5a0) = 0xffffffff;
        *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        byebye_0047e184(GH_ARG(0));
      }
      else {
        *(undefined8 *)(self + 0xba4) = 0x100000001;
        *(undefined4 *)(self + 0xbac) = 0;
        cocos2d__log_005d21e4(GH_ARG("-TEST- 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        self[0xb04] = 1;
        *(undefined4 *)(self + 0xaf0) = 0;
        InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x870)));
        *(undefined4 *)(self + 0x32c9c0) = 0xf;
        *(undefined4 *)(self + 0x1ae8) = 0x10;
      }
      *(undefined4 *)(self + 0x32c990) = 0;
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar25 = 0x14b8;
      goto LAB_0043c280;
    case 0x15:
      if (0 < *(int *)(self + 0x32c970)) {
        *(int *)(self + 0x32c970) = 0;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(1), GH_ARG(0));
        uVar22 = 0xb;
        goto LAB_0043bf54;
      }
      break;
    case 0x17:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      if (*(int *)(self + 0x32c990) == 1) {
        uVar22 = 5;
      }
      else {
        uVar22 = 0xc;
        if (*(int *)(self + 0x32c990) != 2) {
          uVar22 = 2;
        }
      }
      goto LAB_0043bf54;
    case 0x33:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      *(undefined4 *)(self + 0x1ae8) = 2;
      cocos2d__log_005d21e4(GH_ARG(&DAT_00a4f4e0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (self[0xb94] != '\0') {
        *(undefined8 *)(self + 0xba4) = 0x100000009;
        *(undefined4 *)(self + 0xbac) = 0;
        cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        self[0xb04] = 1;
        *(undefined4 *)(self + 0xaf0) = 2;
        InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
      }
      cocos2d__log_005d21e4(GH_ARG("Bump_CloseBtn"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      break;
    case 0x47:
      if (*(int *)(self + 0x32c160) == 0) {
        lVar25 = 0x14b8;
        goto LAB_0043bf44;
      }
LAB_0043bf50:
      uVar22 = 2;
      goto LAB_0043bf54;
    case 0x48:
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      uVar22 = 0x47;
LAB_0043bf54:
      *(undefined4 *)(self + 0x1ae8) = uVar22;
      break;
    default:
      if (uVar20 == 999) {
        BannerInterface__hideBannerView_0047fb18();
        goto switchD_0043b790_caseD_f;
      }
    }
    cocos2d__log_005d21e4(GH_ARG("STATE == %d"), GH_ARG((ulong)*(uint *)(self + 0x1ae8)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    goto switchD_0043ba5c_caseD_1;
  }
  if (*(int *)(self + 0xba8) == 1) goto switchD_0043ba5c_caseD_1;
  fVar43 = *(float *)(param_2 + 8);
  pfVar1 = (float *)(self + 0x8dabc);
  *pfVar1 = fVar43;
  fVar45 = *(float *)(param_2 + 0xc);
  pfVar2 = (float *)(self + 0x8dac0);
  *pfVar2 = fVar45;
  if (*(int *)(self + 0x1150) == 3) {
    fVar46 = 480.0;
    fVar47 = 320.0;
LAB_0043b800:
    fVar43 = fVar43 * fVar46 * 0.0009765625;
    fVar45 = (fVar45 * fVar47) / 768.0;
    *pfVar1 = fVar43;
    *pfVar2 = fVar45;
  }
  else {
    if (*(int *)(self + 0x1150) == 4) {
      fVar46 = 960.0;
      fVar47 = 640.0;
      goto LAB_0043b800;
    }
    if ((*(int *)(self + 0x115c) != 0x280) || (*(int *)(self + 0x1158) != 0x3c0)) {
      if (viewType != 1) {
        fVar43 = fVar43 / ((float)*(int *)(self + 0x1158) / 960.0);
      }
      *pfVar1 = fVar43;
    }
  }
  fVar45 = fVar45 + fVar45;
  fVar43 = fVar43 + fVar43;
  *pfVar2 = fVar45;
  *pfVar1 = fVar43;
  iVar23 = *(int *)(param_2 + 0x18);
  if (iVar23 != 0) {
    if (iVar23 == 2) {
      iVar23 = *(int *)(self + 0x8dac4);
      if (0 < iVar23) {
        *(int *)(self + 0x8dac4) = iVar23 + -1;
      }
      if (((0x16 < *(uint *)(self + 0x1ae8)) ||
          ((1 << (ulong)(*(uint *)(self + 0x1ae8) & 0x1f) & 0x600800U) == 0)) ||
         (*(int *)(self + 0x8daec) < 2)) goto switchD_0043ba5c_caseD_1;
      iVar23 = *(int *)(self + 0x8dae0);
      if (0x78 < iVar23) goto switchD_0043ba5c_caseD_1;
      iVar18 = (int)fVar43;
      if ((((int)fVar45 - 0xc9U < 0x1b7) && (0 < iVar18)) && (iVar18 < *(int *)(self + 0x1160))) {
        if ((iVar23 != 3) && (iVar23 < 0xf)) {
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
        }
        *(undefined4 *)(self + 0x8dadc) = 2;
        goto switchD_0043ba5c_caseD_1;
      }
      if (((0x15c < (int)fVar45 - 0x12dU) || (*(int *)(self + 0x1158) <= iVar18)) ||
         (iVar18 <= *(int *)(self + 0x1158) + -400)) goto switchD_0043ba5c_caseD_1;
      if (*(int *)(self + 0x8db14) - 2U < 0x13) {
        if (iVar23 == 0x3b) goto LAB_0043c144;
      }
      else {
        if (iVar23 != 0x3b) {
          if (*(int *)(self + 0x8db14) == 0x16) {
            *(undefined4 *)(self + 0x32c85c) = 0x1d;
          }
          goto switchD_0043ba5c_caseD_1;
        }
LAB_0043c144:
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0xc2), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
        iVar23 = *(int *)(self + 0x8dae0);
      }
      joyX2 = *(undefined4 *)(self + 0x1b08);
      joyY2 = *(undefined4 *)(self + 0x1b0c);
      *(undefined4 *)(self + 0x8dd38) = 0;
      *(undefined4 *)(self + 0x8dd24) = 0;
      if ((iVar23 != 10) || (1 < *(int *)(self + 0x8dadc))) goto switchD_0043ba5c_caseD_1;
      iVar23 = 0;
      *(int *)(self + 0x32c84c) = *(int *)(self + 0x8dadc);
LAB_0043c3f0:
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0), GH_ARG(0));
      goto LAB_0043c3fc;
    }
    if ((((iVar23 != 1) || ((*(int *)(self + 0x1ae8) != 0x16 && (*(int *)(self + 0x1ae8) != 0xb))))
        || (*(int *)(self + 0x8daec) < 2)) || (iVar23 = *(int *)(self + 0x8dae0), 0x78 < iVar23))
    goto switchD_0043ba5c_caseD_1;
    iVar19 = (int)fVar45;
    iVar18 = (int)fVar43;
    if (((0x1b6 < iVar19 - 0xc9U) || (iVar18 < 1)) || (*(int *)(self + 0x1160) <= iVar18)) {
      if (*(int *)(self + 0x8dd24) < 1) goto switchD_0043ba5c_caseD_1;
      if (((iVar19 - 0x12dU < 0x15d) && (iVar18 < *(int *)(self + 0x1158))) &&
         (*(int *)(self + 0x1158) + -400 < iVar18)) {
        joyX = fVar43;
        joyY = fVar45;
        bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(0), GH_ARG(*(float *)(self + 0x1b08)), GH_ARG(*(float *)(self + 0x1b0c)), GH_ARG(fVar43), GH_ARG(fVar45));
        goto switchD_0043ba5c_caseD_1;
      }
      joyX2 = *(undefined4 *)(self + 0x1b08);
      joyY2 = *(undefined4 *)(self + 0x1b0c);
      *(undefined4 *)(self + 0x8dd38) = 0;
      *(int *)(self + 0x8dd24) = 0;
      if ((iVar23 != 0x3b) && (iVar23 != 0xf)) goto switchD_0043ba5c_caseD_1;
      *(undefined4 *)(self + 0x32ba84) = 0;
      goto LAB_0043ee14;
    }
    if ((iVar19 - 0x1e1U < 0x9f) && (iVar18 - 0xbU < 0x9f)) {
      uVar22 = 1;
LAB_0043c0d0:
      *(undefined4 *)(self + 0x8dadc) = uVar22;
    }
    else if ((iVar19 - 0x1e1U < 0x9f) && (iVar18 - 0xbfU < 0xb3)) {
      uVar22 = 0;
      goto LAB_0043c0d0;
    }
    bzStateGame__MoveProKey_0043a9a4(GH_ARG(self), GH_ARG(1), GH_ARG(iVar18), GH_ARG(iVar19));
    goto switchD_0043ba5c_caseD_1;
  }
  *(int *)(self + 0x8dac4) = *(int *)(self + 0x8dac4) + 1;
  if (0 < *(int *)(self + 0x1af0)) {
    if (self[0x1af4] == '\0') {
      bzStateGame__controlBuyStoreWin_00448cdc(GH_ARG(self));
    }
    goto switchD_0043ba5c_caseD_1;
  }
  if (0 < *(int *)(self + 0x1af8)) {
    bzStateGame__controlPopupWin_00449308(GH_ARG(self));
    goto switchD_0043ba5c_caseD_1;
  }
  iVar23 = *(int *)(self + 0x1ae8);
  piVar27 = (int *)(self + 0x1ae8);
  switch(iVar23) {
  case 0:
    if (0x6e < *(int *)(self + 0x32ab00)) {
      *(undefined4 *)(self + 0x1ae8) = 2;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
      }
      if (*(int *)(self + 0x8da48) != 0xece2) {
        *(undefined4 *)(self + 0x5a0) = 0xffffffff;
        *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
        *(undefined4 *)(self + 0x410) = 0xffffffff;
        *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      }
      if (*(int *)(self + 0x32aaa8) != 0) {
        *(undefined8 *)(self + 0xba4) = 0x100000032;
        *(undefined4 *)(self + 0xbac) = 0;
        pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
        cocos2d__Application__OnInterstitial_00484e24(GH_ARG(pAVar17), GH_ARG(0x32));
      }
    }
    break;
  case 1:
  case 3:
  case 4:
  case 6:
  case 10:
  case 0x10:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
    break;
  case 2:
    iVar23 = *(int *)(self + 0x404);
    if (iVar23 != 0) {
      if (0 < *(int *)(self + 0x72c)) {
        cocos2d__log_005d21e4(GH_ARG("-TEST- BACKUP LOAD"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        bzStateGame__BackupStage_Load_004775bc(GH_ARG(self));
        bzStateGame__STGload_003a4888(GH_ARG(self));
        uVar15 = 0;
        do {
          uVar20 = *(uint *)(self + uVar15 * 4 + 0x400);
          uVar32 = (ulong)uVar20;
          uVar42 = *(uint *)(self + uVar15 * 4 + 0x728);
          uVar21 = (ulong)uVar42;
          if (((int)uVar20 < 0) && (uVar21 = uVar32, uVar20 != uVar42)) {
            *(uint *)(self + uVar15 * 4 + 0x400) = uVar42;
            uVar32 = (ulong)uVar42;
            uVar21 = (ulong)uVar42;
          }
          cocos2d__log_005d21e4(GH_ARG(&DAT_00a50a25), GH_ARG(uVar15 & 0xffffffff), GH_ARG(uVar32), GH_ARG(uVar15 & 0xffffffff), GH_ARG(uVar21))
          ;
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0xb);
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        iVar23 = *(int *)(self + 0x404);
      }
      if (iVar23 < 0) {
        *(undefined4 *)(self + 0x404) = 0;
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      }
    }
    iVar23 = *(int *)(self + 0x32c970);
    fVar43 = *pfVar1;
    if (0 < iVar23) {
      bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(1), GH_ARG(iVar23), GH_ARG(fVar43), GH_ARG(*pfVar2));
      break;
    }
    iVar18 = (int)fVar43;
    iVar23 = (int)*pfVar2;
    if ((iVar18 - 1U < 0x59) && (iVar23 - 0x5bU < 0x45)) {
      memcpy(self + 0xd38,
                      "https://play.google.com/store/apps/details?id=button.games.blockarts",0x45);
      plVar12 = (gh_long *)cocos2d__Application__getInstance_00484a3c();
      pcVar41 = *(code **)(*plVar12 + 0x60);
      FUN_009d4eac(GH_ARG(&local_d0), GH_ARG(self + 0xd38), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_vcall(GH_ARG(plVar12), 0x60, GH_ARG(&local_d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      puVar16 = (undefined8 *)(local_d0 + -0x18);
      if (puVar16 == &DAT_00d40300) break;
      piVar27 = (int *)(local_d0 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00444240:
      if (iVar23 < 1) {
        operator_delete(puVar16);
      }
      break;
    }
    if (self[0xb18] == '\0') {
      iVar24 = *(int *)(self + 0x1160);
      iVar34 = *(int *)(self + 0x32bbc4);
      iVar31 = (*(int *)(self + 0x115c) + -0x86) - iVar34;
      iVar19 = iVar31 + 0x73;
      if ((((iVar24 + -0x130 < iVar18) && (iVar18 < iVar24 + -0x62)) && (iVar31 < iVar23)) &&
         (iVar23 < iVar19)) {
        *(undefined8 *)(self + 0x32aad8) = 0;
        *(undefined4 *)(self + 0x1ae8) = 0xf;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
      }
      else {
        if (((iVar24 + -0x54 < iVar18) && (iVar18 < iVar24 + 0x1f)) &&
           ((iVar31 < iVar23 && (iVar23 < iVar19)))) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined8 *)(self + 0xba4) = 0x100000034;
          *(undefined4 *)(self + 0xbac) = 0;
          pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
          cocos2d__Application__OnInterstitial_00484e24(GH_ARG(pAVar17), GH_ARG(0x34));
          *(undefined4 *)(self + 0x1ae8) = 0x47;
          break;
        }
        if (((iVar24 + 0x2e < iVar18) && (iVar18 < iVar24 + 0xa1)) &&
           ((iVar31 < iVar23 && (iVar23 < iVar19)))) {
          if ((*(int *)(self + 0x32c7c8) == -1) && (-1 < *(int *)(self + 0x408))) {
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x10), GH_ARG(0));
          }
LAB_00442be4:
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined8 *)(self + 0xba4) = 0x100000033;
          *(undefined4 *)(self + 0xbac) = 0;
          pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
          cocos2d__Application__OnInterstitial_00484e24(GH_ARG(pAVar17), GH_ARG(0x33));
          *(undefined4 *)(self + 0x1ae8) = 0x17;
        }
        else if ((((iVar24 + 0xb0 < iVar18) && (iVar18 < iVar24 + 0x123)) && (iVar31 < iVar23)) &&
                (iVar23 < iVar19)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *piVar27 = 0x12;
        }
        else if (((*(int *)(self + 0x32c16c) < 0xf) && (iVar18 - 0x29U < 0x13f)) &&
                (iVar23 - 1U < 0x4f)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(int *)(self + 0x32c970) = 0x14;
          if ((*(int *)(self + 0x32c794) == -1) &&
             (*(int *)(self + (gh_long)*(int *)(self + 0x32c16c) * 4 + 0x13798) <=
              *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168))) {
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(3), GH_ARG(0));
          }
        }
        else {
          if (((iVar18 - 0x231U < 0x77) && (iVar23 - 1U < 0x4f)) ||
             ((iVar18 - 0x35dU < 0x72 && (iVar23 - 1U < 0x4f)))) goto LAB_00442be4;
          if ((((0 < iVar34) && (iVar18 - 1U < 0x3bf)) &&
              (iVar34 = *(int *)(self + 0x115c) - iVar34, iVar34 < iVar23)) &&
             (iVar23 < iVar34 + 0x3c)) {
            cocos2d__log_005d21e4(GH_ARG(&DAT_00a4f5e1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            *(int *)(self + 0x32bbc4) = 0;
            memcpy(self + 0xd38,
                            "http://iphonegame.cafe24.com/click_ad4.php?game_id=568&game_name=AOS5&from_id=pop"
                            ,0x52);
            plVar12 = (gh_long *)cocos2d__Application__getInstance_00484a3c();
            pcVar41 = *(code **)(*plVar12 + 0x60);
            FUN_009d4eac(GH_ARG(&local_d0), GH_ARG(self + 0xd38), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            gh_vcall(GH_ARG(plVar12), 0x60, GH_ARG(&local_d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_d0 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_d0 + -0x18));
              }
            }
          }
        }
      }
      fVar43 = *pfVar1;
      iVar18 = *(int *)(self + 0x1164);
      iVar24 = (int)fVar43;
      iVar23 = *(int *)(self + 0x1160) + 0x1e0;
      bVar10 = *(int *)(self + 0x1160) + 0x186 < iVar24;
      iVar19 = (int)*pfVar2;
      if (((iVar19 < iVar18 + -0xa5) && (bVar10 && iVar24 < iVar23)) && (iVar18 + -0xf0 < iVar19)) {
        cocos2d__log_005d21e4(GH_ARG(&DAT_00a4f649), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x32c9c4) = 1;
        *(undefined4 *)(self + 0x1ae8) = 0x33;
        break;
      }
      if ((iVar19 < iVar18 + -0x55) && ((bVar10 && iVar24 < iVar23) && iVar18 + -0xa0 < iVar19)) {
        cocos2d__log_005d21e4(GH_ARG("============= showAllLeaderboards ==========="), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        bzStateGame__ShowAllLeaderBoard_004499f8(GH_ARG(self));
        break;
      }
      if ((iVar19 < iVar18 + -5) && ((bVar10 && iVar24 < iVar23) && iVar18 + -0x50 < iVar19)) {
        cocos2d__log_005d21e4(GH_ARG("============= showAchievements ==========="), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        FUN_009d4eac(GH_ARG(&local_e0), GH_ARG(&DAT_00afe81e), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        cocos2d__Application__getInstance_00484a3c();
        puVar13 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
        if (((ulong)puVar13 & 1) != 0) {
          puVar13 = (undefined *)bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar13));
          if (((ulong)puVar13 & 1) == 0) {
            *(undefined4 *)(self + 0x32c9c8) = 2;
            bzStateGame__ExeGoogleLogin_003a7e90(GH_ARG(puVar13));
          }
          else {
            *(undefined4 *)(self + 0x32c9cc) = 1;
            bzStateGame__ExeShowAchievements_00473ca8(GH_ARG(puVar13));
          }
        }
        if ((undefined8 *)(local_e0 + -0x18) != &DAT_00d40300) {
          piVar27 = (int *)(local_e0 + -8);
          do {
            iVar23 = *piVar27;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar10) {
              *piVar27 = iVar23 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar23 < 1) {
            operator_delete((undefined8 *)(local_e0 + -0x18));
          }
        }
        break;
      }
    }
    if ((((*(int *)(self + 0xb78) != *(int *)(self + 0xb7c)) ||
         (*(int *)(self + 0xb74) != *(int *)(self + 0xb80))) ||
        (*(int *)(self + 0xb70) != *(int *)(self + 0xb84))) && (self[0xb89] != '\0')) {
      fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fVar47 = *pfVar2;
      fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (((int)(fVar45 + -280.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + -280.0) + 0x46)) {
        if (((int)(fVar46 + -25.0) < (int)fVar47) &&
           (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 0)))) {
          *(undefined8 *)(self + 0xba4) = 0x100000009;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 2;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          self[0xb18] = 0;
          bzStateGame__adCounting_00449c34(GH_ARG(self));
        }
      }
      fVar43 = *pfVar1;
      fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fVar47 = *pfVar2;
      fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (((int)(fVar45 + -183.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + -183.0) + 0x46)) {
        if (((int)(fVar46 + -25.0) < (int)fVar47) &&
           (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 1)))) {
          *(undefined8 *)(self + 0xba4) = 0x100000009;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 2;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          self[0xb18] = 0;
          bzStateGame__adCounting_00449c34(GH_ARG(self));
        }
      }
      fVar43 = *pfVar1;
      fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fVar47 = *pfVar2;
      fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (((int)(fVar45 + -76.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + -76.0) + 0x46)) {
        if (((int)(fVar46 + -25.0) < (int)fVar47) &&
           (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 2)))) {
          *(undefined8 *)(self + 0xba4) = 0x100000009;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 2;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          self[0xb18] = 0;
          bzStateGame__adCounting_00449c34(GH_ARG(self));
        }
      }
      fVar43 = *pfVar1;
      fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fVar47 = *pfVar2;
      fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (((int)(fVar45 + 21.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + 21.0) + 0x46)) {
        if (((int)(fVar46 + -25.0) < (int)fVar47) &&
           (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 3)))) {
          *(undefined8 *)(self + 0xba4) = 0x100000009;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 2;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          self[0xb18] = 0;
          bzStateGame__adCounting_00449c34(GH_ARG(self));
        }
      }
      fVar43 = *pfVar1;
      fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fVar47 = *pfVar2;
      fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      if (((int)(fVar45 + 118.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + 118.0) + 0x46)) {
        if (((int)(fVar46 + -25.0) < (int)fVar47) &&
           (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 4)))) {
          *(undefined8 *)(self + 0xba4) = 0x100000009;
          *(undefined4 *)(self + 0xbac) = 0;
          cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          self[0xb04] = 1;
          *(undefined4 *)(self + 0xaf0) = 2;
          InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          self[0xb18] = 0;
          bzStateGame__adCounting_00449c34(GH_ARG(self));
        }
      }
      if (*(int *)(self + 0x32c80c) == 0) {
        fVar43 = *pfVar1;
        fVar45 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar47 = *pfVar2;
        fVar46 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        if (((int)(fVar45 + 215.0) < (int)fVar43) && ((int)fVar43 < (int)(fVar45 + 215.0) + 0x46)) {
          if (((int)(fVar46 + -25.0) < (int)fVar47) &&
             (((int)fVar47 < (int)(fVar46 + -25.0) + 0x46 && (*(int *)(self + 0x32c814) == 5)))) {
            *(undefined8 *)(self + 0xba4) = 0x100000009;
            *(undefined4 *)(self + 0xbac) = 0;
            cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            self[0xb04] = 1;
            *(undefined4 *)(self + 0xaf0) = 2;
            InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
            self[0xb18] = 0;
            bzStateGame__adCounting_00449c34(GH_ARG(self));
          }
        }
      }
    }
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    break;
  case 5:
    iVar23 = *(int *)(self + 0x32c970);
    if (iVar23 < 1) {
      uVar20 = (int)fVar45 - 1;
      iVar23 = (int)fVar43;
      if (((uVar20 < 0x4f) && (iVar23 - 0x231U < 0x77)) ||
         ((uVar20 < 0x4f && (iVar23 - 0x35dU < 0x72)))) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        uVar22 = 3;
LAB_0043ccb0:
        *(undefined4 *)(self + 0x1af0) = uVar22;
        self[0x1af4] = 0;
        break;
      }
      if (((*(int *)(self + 0x32c16c) < 0xf) && (uVar20 < 0x4f)) && (iVar23 - 0xf1U < 0x77)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(int *)(self + 0x32c970) = 0x14;
        if ((*(int *)(self + 0x32c794) == -1) &&
           (*(int *)(self + (gh_long)*(int *)(self + 0x32c16c) * 4 + 0x13798) <=
            *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168))) {
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(3), GH_ARG(0));
        }
      }
      if (*(int *)(self + 0x32c948) == 5) {
        iVar23 = *(int *)(self + 0x1164);
        iVar18 = *(int *)(self + 0x1160);
        iVar24 = (int)*pfVar1;
        iVar19 = (int)*pfVar2;
        if ((((iVar19 < iVar23 + 0x10b) && (iVar18 + -0x118 < iVar24)) && (iVar24 < iVar18 + -0xa0))
           && (iVar23 + 0x93 < iVar19)) {
          iVar23 = *(int *)(self + 0x32c8e0);
          if (0 < iVar23) {
            if (5 < iVar23) {
              iVar23 = 5;
              *(int *)(self + 0x32c8e0) = 5;
            }
            iVar23 = iVar23 + -1;
LAB_004411f0:
            *(int *)(self + 0x32c8e0) = iVar23;
            if (*(int *)(self + 0x32c160) == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x13b0)), GH_ARG(false));
              iVar23 = *(int *)(self + 0x32c8e0);
            }
          }
        }
        else {
          if (((iVar23 + 0x10b <= iVar19) || (iVar24 <= iVar18 + 0x9c)) ||
             ((iVar18 + 0x114 <= iVar24 || (iVar19 <= iVar23 + 0x93)))) goto LAB_004408cc;
          iVar23 = *(int *)(self + 0x32c8e0);
          if (iVar23 < 5) {
            if (iVar23 < 0) {
              iVar23 = 0;
              *(int *)(self + 0x32c8e0) = 0;
            }
            iVar23 = iVar23 + 1;
            goto LAB_004411f0;
          }
        }
        *(int *)(self + 0x32c8e4) = iVar23 * 10;
      }
      else {
        iVar18 = *(int *)(self + 0x1160);
        iVar23 = *(int *)(self + 0x1164);
        iVar19 = (int)*pfVar2;
LAB_004408cc:
        iVar24 = (int)*pfVar1;
        if ((((iVar19 < iVar23 + -0x88) && (iVar18 + 0xf5 < iVar24)) && (iVar24 < iVar18 + 0x159))
           && (iVar23 + -0xec < iVar19)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x1ae8) = 2;
          *(undefined4 *)(self + 0x32c990) = 0;
          if ((*(int *)(self + 0x32c7a8) == -1) &&
             ((*(int *)(self + 0x32c3fc) != 0 || (*(int *)(self + 0x32c400) != 0)))) {
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(8), GH_ARG(0));
          }
        }
      }
      iVar18 = *(int *)(self + 0x1164);
      iVar19 = (int)*pfVar1;
      piVar27 = (int *)(self + 0x32c8e4);
      piVar28 = (int *)(self + 0x32c854);
      iVar24 = (int)*pfVar2;
      iVar23 = *(int *)(self + 0x1160) + -0x10b;
      uVar20 = 0xffffffff;
      do {
        if ((((iVar24 < iVar18 + 0x13) && (iVar18 + -0x51 < iVar24)) &&
            (iVar23 < iVar19 && iVar19 < iVar23 + 0x5a)) &&
           (-1 < *(int *)(self + (gh_long)(int)(uVar20 + *piVar27 + *piVar28 + 2) * 4 + 0x400))) {
          bzStateGame__Aitemload_003a9588(GH_ARG(self));
          bzStateGame__STGload_003a4888(GH_ARG(self));
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x1ae8) = 0xc;
          *(undefined4 *)(self + 0x32c990) = 2;
          bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(*piVar27 + uVar20 + 2), GH_ARG((float)*(int *)(self + (gh_long)(int)(*piVar27 + *piVar28 + uVar20 + 2) * 4
                                                   + 0x400)), GH_ARG(0.0));
          if (*(int *)(self + 0x32c7e0) == -1) {
            *(undefined4 *)(self + 0x32c994) = 3;
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x16), GH_ARG(0));
          }
          else {
            *(undefined4 *)(self + 0x32c994) = 0;
          }
          iVar23 = *(int *)(self + 0x32c7a8);
          goto joined_r0x00441d80;
        }
        if (((iVar24 < iVar18 + 0x87) &&
            (iVar18 + 0x23 < iVar24 && (iVar23 < iVar19 && iVar19 < iVar23 + 0x5a))) &&
           (-1 < *(int *)(self + (gh_long)(int)(uVar20 + *piVar27 + *piVar28 + 7) * 4 + 0x400))) {
          bzStateGame__Aitemload_003a9588(GH_ARG(self));
          bzStateGame__STGload_003a4888(GH_ARG(self));
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x1ae8) = 0xc;
          *(undefined4 *)(self + 0x32c990) = 2;
          bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(*piVar27 + uVar20 + 7), GH_ARG((float)*(int *)(self + (gh_long)(int)(*piVar27 + *piVar28 + uVar20 + 7) * 4
                                                   + 0x400)), GH_ARG(0.0));
          if (*(int *)(self + 0x32c7e0) == -1) {
            *(undefined4 *)(self + 0x32c994) = 3;
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x16), GH_ARG(0));
          }
          else {
            *(undefined4 *)(self + 0x32c994) = 0;
          }
          iVar23 = *(int *)(self + 0x32c7a8);
          goto joined_r0x00441d80;
        }
        uVar20 = uVar20 + 1;
        iVar23 = iVar23 + 0x6e;
      } while (uVar20 < 9);
      break;
    }
    goto LAB_0043ce8c;
  case 7:
    iVar23 = *(int *)(self + 0x32c970);
    if (iVar23 < 1) {
      piVar27 = (int *)(self + 0x32c110);
      iVar23 = *piVar27;
      if (*(int *)(self + (gh_long)iVar23 * 4 + 0x32c048) < 1) {
        iVar18 = *(int *)(self + 0x1160);
        iVar19 = *(int *)(self + 0x115c);
LAB_00440a38:
        iVar24 = (int)fVar43;
        iVar23 = (int)fVar45;
        if (((((iVar19 + -1 <= iVar23) || (iVar24 <= iVar18 + -0x1e0)) ||
             (iVar18 + -0x152 <= iVar24)) || (iVar23 <= iVar19 + -0x3c)) &&
           (((0x62 < iVar23 - 1U || (iVar24 <= iVar18 + 400)) || (iVar18 + 0x1e0 <= iVar24)))) {
          piVar28 = (int *)(self + 0x32bfb8);
          iVar34 = *piVar28;
          if (((0 < iVar34) && (iVar23 < iVar19 + -0x3d)) &&
             ((iVar18 + 0x154 < iVar24 && ((iVar24 < iVar18 + 0x1e2 && (iVar19 + -0x78 < iVar23)))))
             ) {
            *piVar28 = iVar34 + -1;
            *(undefined4 *)(self + (gh_long)(iVar34 + -1) * 4 + 0x32bfd0) = 0;
            break;
          }
          if ((((*(int *)(self + 0x32bfc4) == 0) && (iVar23 < iVar19 + -1)) &&
              (iVar18 + 0x120 < iVar24)) && ((iVar24 < iVar18 + 0x1d4 && (iVar19 + -0x3c < iVar23)))
             ) {
            *(undefined4 *)(self + 0x32bfc8) = 0;
            iVar23 = bzStateGame__CouponDataLoad_003adabc(GH_ARG(self), GH_ARG(0));
            if (iVar23 == 999) {
              *(undefined4 *)(self + 0x32c114) = 999;
            }
            *(undefined4 *)(self + 0x32bfc0) = 0;
            *piVar28 = 0;
            memset(self + 0x32bfd0,0,0x78);
            iVar34 = 0;
            *piVar27 = 0;
          }
          else if (0x1d < iVar34) {
            if (*(int *)(self + 0x32c160) != 0) break;
            lVar25 = 0x14a0;
            goto LAB_00441c1c;
          }
          iVar23 = *(int *)(self + 0x1160);
          fVar43 = *pfVar2;
          iVar18 = *(int *)(self + 0x115c);
          iVar35 = (int)*pfVar1;
          bVar10 = iVar35 <= iVar23 + -0x1df;
          iVar31 = (int)fVar43;
          iVar19 = iVar18 + -0xf1;
          iVar24 = iVar18 + -300;
          if (((iVar19 <= iVar31) || (iVar31 <= iVar24)) || (bVar10 || iVar23 + -0x17c <= iVar35)) {
            iVar40 = iVar18 + -0xef;
            iVar39 = iVar18 + -0xb4;
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (!bVar10 && iVar35 < iVar23 + -0x17c))) {
              iVar23 = 0;
              iVar18 = 0xb;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + -0x17f < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + -0x11c)) {
              iVar23 = 1;
              goto LAB_00441a98;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + -0x11c))) {
              iVar18 = 0xb;
              iVar23 = 1;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + -0x11f < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + -0xbc)) {
              iVar18 = 1;
              iVar23 = 2;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + -0xbc))) {
              iVar18 = 0xb;
              iVar23 = 2;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + -0xbf < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + -0x5c)) {
              iVar18 = 1;
              iVar23 = 3;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + -0x5c))) {
              iVar18 = 0xb;
              iVar23 = 3;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + -0x5f < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 4)) {
              iVar18 = 1;
              iVar23 = 4;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 4))) {
              iVar18 = 0xb;
              iVar23 = 4;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + 1 < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 100)) {
              iVar18 = 1;
              iVar23 = 5;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 100))) {
              iVar18 = 0xb;
              iVar23 = 5;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + 0x61 < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 0xc4)) {
              iVar18 = 1;
              iVar23 = 6;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 0xc4))) {
              iVar18 = 0xb;
              iVar23 = 6;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + 0xc1 < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 0x124)) {
              iVar18 = 1;
              iVar23 = 7;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 0x124))) {
              iVar18 = 0xb;
              iVar23 = 7;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + 0x121 < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 0x184)) {
              iVar18 = 1;
              iVar23 = 8;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 0x184))) {
              iVar18 = 0xb;
              iVar23 = 8;
              goto LAB_00441c84;
            }
            bVar10 = iVar23 + 0x181 < iVar35;
            if (((iVar31 < iVar19) && (iVar24 < iVar31)) && (bVar10 && iVar35 < iVar23 + 0x1e4)) {
              iVar18 = 1;
              iVar23 = 9;
              goto LAB_00441c84;
            }
            if ((iVar31 < iVar39) && (iVar40 < iVar31 && (bVar10 && iVar35 < iVar23 + 0x1e4))) {
              iVar18 = 0xb;
              iVar23 = 9;
              goto LAB_00441c84;
            }
          }
          else {
            iVar23 = 0;
LAB_00441a98:
            iVar18 = 1;
LAB_00441c84:
            *(int *)(self + (gh_long)iVar34 * 4 + 0x32bfd0) = iVar18 + iVar23;
            iVar34 = *piVar28 + 1;
            *piVar28 = iVar34;
            iVar18 = *(int *)(self + 0x115c);
            iVar23 = *(int *)(self + 0x1160);
            iVar39 = iVar18 + -0xb4;
          }
          iVar19 = iVar18 + -0x79;
          if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
             ((iVar23 + -0x1b1 < iVar35 && (iVar35 < iVar23 + -0x14e)))) {
            uVar22 = 0x15;
LAB_00443afc:
            *(undefined4 *)(self + (gh_long)iVar34 * 4 + 0x32bfd0) = uVar22;
            iVar34 = *piVar28 + 1;
            *piVar28 = iVar34;
            iVar23 = *(int *)(self + 0x1160);
            iVar18 = *(int *)(self + 0x115c);
            iVar40 = iVar23 + -0x151;
            iVar24 = iVar23 + -0xee;
          }
          else {
            iVar40 = iVar23 + -0x151;
            iVar24 = iVar23 + -0xee;
            if ((((iVar31 < iVar19) && (iVar39 < iVar31)) && (iVar40 < iVar35)) && (iVar35 < iVar24)
               ) {
              uVar22 = 0x16;
              goto LAB_00443afc;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + -0xf1 < iVar35 && (iVar35 < iVar23 + -0x8e)))) {
              uVar22 = 0x17;
              goto LAB_00443afc;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + -0x91 < iVar35 && (iVar35 < iVar23 + -0x2e)))) {
              uVar22 = 0x18;
              goto LAB_00443afc;
            }
            if ((((iVar31 < iVar19) && (iVar39 < iVar31)) && (iVar23 + -0x31 < iVar35)) &&
               (iVar35 < iVar23 + 0x32)) {
              uVar22 = 0x19;
              goto LAB_00443afc;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + 0x2f < iVar35 && (iVar35 < iVar23 + 0x92)))) {
              uVar22 = 0x1a;
              goto LAB_00443afc;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + 0x8f < iVar35 && (iVar35 < iVar23 + 0xf2)))) {
              uVar22 = 0x1b;
              goto LAB_00443afc;
            }
            if ((((iVar31 < iVar19) && (iVar39 < iVar31)) && (iVar23 + 0xef < iVar35)) &&
               (iVar35 < iVar23 + 0x152)) {
              uVar22 = 0x1c;
              goto LAB_00443afc;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + 0x14f < iVar35 && (iVar35 < iVar23 + 0x1b2)))) {
              uVar22 = 0x1d;
              goto LAB_00443afc;
            }
          }
          iVar19 = iVar18 + -0x3d;
          iVar39 = iVar18 + -0x78;
          if (((iVar31 < iVar19) && (iVar39 < iVar31)) && ((iVar40 < iVar35 && (iVar35 < iVar24))))
          {
            uVar22 = 0x1e;
LAB_00443c74:
            *(undefined4 *)(self + (gh_long)iVar34 * 4 + 0x32bfd0) = uVar22;
            iVar34 = *piVar28 + 1;
            *piVar28 = iVar34;
            iVar23 = *(int *)(self + 0x1160);
            iVar18 = *(int *)(self + 0x115c);
            iVar40 = iVar23 + -0x151;
          }
          else {
            if ((((iVar31 < iVar19) && (iVar39 < iVar31)) && (iVar23 + -0xf1 < iVar35)) &&
               (iVar35 < iVar23 + -0x8e)) {
              uVar22 = 0x1f;
              goto LAB_00443c74;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + -0x91 < iVar35 && (iVar35 < iVar23 + -0x2e)))) {
              uVar22 = 0x20;
              goto LAB_00443c74;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + -0x31 < iVar35 && (iVar35 < iVar23 + 0x32)))) {
              uVar22 = 0x21;
              goto LAB_00443c74;
            }
            if ((((iVar31 < iVar19) && (iVar39 < iVar31)) && (iVar23 + 0x2f < iVar35)) &&
               (iVar35 < iVar23 + 0x92)) {
              uVar22 = 0x22;
              goto LAB_00443c74;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + 0x8f < iVar35 && (iVar35 < iVar23 + 0xf2)))) {
              uVar22 = 0x23;
              goto LAB_00443c74;
            }
            if (((iVar31 < iVar19) && (iVar39 < iVar31)) &&
               ((iVar23 + 0xef < iVar35 && (iVar35 < iVar23 + 0x152)))) {
              uVar22 = 0x24;
              goto LAB_00443c74;
            }
          }
          if ((((iVar31 < iVar18 + -1) && (iVar40 < iVar35)) && (iVar35 < iVar23 + 0x11b)) &&
             (iVar18 + -0x3c < iVar31)) {
            *(undefined4 *)(self + (gh_long)iVar34 * 4 + 0x32bfd0) = 0x25;
            *piVar28 = *piVar28 + 1;
            iVar18 = *(int *)(self + 0x115c);
          }
          if (fVar43 <= (float)(iVar18 + -300)) break;
          goto LAB_00441c0c;
        }
        *(undefined4 *)(self + 0x1ae8) = 0x12;
      }
      else {
        iVar19 = *(int *)(self + 0x115c);
        iVar18 = *(int *)(self + 0x1160);
        iVar24 = (int)fVar45;
        iVar34 = (int)fVar43;
        if (((iVar24 < iVar19 + -0x1e5) && (iVar18 + 0x54 < iVar34)) &&
           ((iVar34 < iVar18 + 0xc2 && (iVar19 + -0x253 < iVar24)))) {
          *(int *)(self + 0x32c970) = 0x19;
        }
        else {
          if (iVar23 < 1) {
LAB_004409c0:
            iVar31 = iVar23;
            if (((iVar24 < iVar19 + -0x1ae) && (iVar18 + 200 < iVar34)) &&
               ((iVar34 < iVar18 + 0x15e &&
                ((iVar19 + -0x212 < iVar24 &&
                 (iVar24 = iVar23 + 4, 0 < *(int *)(self + (gh_long)iVar24 * 4 + 0x32c048))))))) {
              *piVar27 = iVar24;
              iVar31 = iVar24;
            }
          }
          else if ((((iVar24 < iVar19 + -0x1ae) && (iVar18 + -0x15e < iVar34)) &&
                   (iVar34 < iVar18 + -200)) &&
                  ((iVar19 + -0x212 < iVar24 &&
                   (iVar31 = iVar23 + -4, 0 < *(int *)(self + (gh_long)iVar31 * 4 + 0x32c048))))) {
            *piVar27 = iVar31;
          }
          else {
            iVar31 = iVar23;
            if (iVar23 < 0x28) goto LAB_004409c0;
          }
          if (iVar23 == iVar31) goto LAB_00440a38;
        }
      }
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar25 = 0x1380;
LAB_00441c1c:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar25)), GH_ARG(false));
      break;
    }
    goto LAB_0043ce8c;
  case 8:
  case 9:
  case 0x18:
    if ((*(int *)(self + 0x32c98c) < 1) && (uVar20 = *(uint *)(self + 0x32c9b0), uVar20 != 0)) {
LAB_0043c50c:
      bVar10 = false;
joined_r0x0043badc:
      if (0 < (int)uVar20) goto LAB_0043d384;
    }
    else {
      uVar20 = *(uint *)(self + 0x32c9b0);
      if (*(int *)(self + 0x115c) <= (int)fVar45) goto LAB_0043c50c;
      if (((*(int *)(self + 0x1158) <= (int)fVar43) ||
          ((int)fVar43 <= *(int *)(self + 0x1158) + -0x96)) ||
         ((int)fVar45 <= *(int *)(self + 0x115c) + -100)) goto LAB_0043c50c;
      if ((int)uVar20 < 0x1e) {
        uVar20 = uVar20 + 1;
        bVar10 = true;
        *(uint *)(self + 0x32c9b0) = uVar20;
        goto joined_r0x0043badc;
      }
      bVar10 = true;
LAB_0043d384:
      if ((uVar20 | 8) == 0x18) {
LAB_0043d390:
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(0), GH_ARG(0.0), GH_ARG(0.0));
        *(undefined4 *)(self + 0x32c180) = *(undefined4 *)(self + 0x32c94c);
        if (*(int *)(self + 0x1ae8) == 8) {
          uVar22 = 0;
          uVar30 = 0x12;
        }
        else if (*(int *)(self + 0x1ae8) == 0x18) {
          uVar22 = 0;
          uVar30 = 0x17;
        }
        else {
          uVar22 = 1;
          uVar30 = 5;
        }
        *(undefined4 *)(self + 0x1ae8) = uVar30;
        *(undefined4 *)(self + 0x32c990) = uVar22;
        break;
      }
      if ((int)fVar45 - 1U < 0x9f) {
        if (((int)fVar43 < *(int *)(self + 0x1158)) &&
           (*(int *)(self + 0x1158) + -0x96 < (int)fVar43)) goto LAB_0043d390;
      }
    }
    if (!bVar10) break;
    *(int *)(self + 0x32c98c) = 0;
    iVar18 = *(int *)(self + 0x1160);
    piVar27 = (int *)(self + 0x8dac8);
    *piVar27 = iVar18;
    iVar23 = 0x1e;
    switch(uVar20) {
    case 3:
    case 4:
      iVar23 = 0xa0;
      break;
    case 5:
    case 6:
      break;
    case 7:
      *(undefined4 *)(self + 0x8dad8) = 0;
      *(undefined4 *)(self + 0x8db14) = 0;
      iVar23 = 0x32;
      break;
    default:
      iVar23 = 0x3c;
      break;
    case 10:
    case 0xb:
      joyX2 = *(undefined4 *)(self + 0x1b08);
      joyY2 = *(undefined4 *)(self + 0x1b0c);
      *(undefined4 *)(self + 0x8dd38) = 0;
      *(undefined4 *)(self + 0x8dd24) = 0;
      *(undefined4 *)(self + 0x8db14) = 4;
      *(int *)(self + (gh_long)*(int *)(self + 0x32c134) * 0x288 + 0x8dac8) = iVar18 + 200;
      *(undefined4 *)(self + 0x32c180) = 500;
      goto LAB_00440fd0;
    case 0xc:
      iVar23 = *(int *)(self + 0x32ba14);
      iVar19 = 0;
      if (iVar23 != 0) {
        iVar19 = (*(int *)(self + 0x32ba20) + iVar18) / iVar23;
      }
      *(int *)(self + 0x32c930) = iVar19;
      iVar18 = 0;
      if (iVar23 != 0) {
        iVar18 = (*(int *)(self + 0x8dacc) + *(int *)(self + 0x32ba24)) / iVar23;
      }
      *(int *)(self + 0x32c934) = iVar18;
      *(undefined4 *)(self + (gh_long)iVar18 * 4 + (gh_long)iVar19 * 0x2d0 + 0x1410c4) = 0x93;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140850) = 0x8f;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x1410c0) = 0x29;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140df0) = 0x29;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140b20) = 0x29;
      goto LAB_00440fd0;
    case 0xd:
      *(undefined4 *)(self + 0x8dad8) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140850) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x1410c4) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x1410c0) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140df0) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
               0x140b20) = 0;
      goto LAB_00440fd0;
    case 0xe:
      iVar23 = *(int *)(self + 0x32ba14);
      iVar19 = 0;
      if (iVar23 != 0) {
        iVar19 = (*(int *)(self + 0x32ba20) + iVar18) / iVar23;
      }
      *(int *)(self + 0x32c930) = iVar19;
      iVar24 = 0;
      if (iVar23 != 0) {
        iVar24 = (*(int *)(self + 0x8dacc) + *(int *)(self + 0x32ba24)) / iVar23;
      }
      *(int *)(self + 0x32c934) = iVar24;
      if (*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140588) == 0) {
        *(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140588) = 0x1ed;
        *(undefined4 *)
         (self + (gh_long)*(int *)(self + 0x32c934) * 4 + (gh_long)*(int *)(self + 0x32c930) * 0x2d0 +
                 0x140584) = 0xfffffe0c;
        goto LAB_00440fa8;
      }
      goto LAB_00440fac;
    case 0xf:
      piVar33 = (int *)(self + 0x32c930);
      piVar28 = (int *)(self + 0x32c934);
      if (*(int *)(self + (gh_long)(*piVar28 + -4) * 4 + (gh_long)*piVar33 * 0x2d0 + 0x140598) - 0x1edU <
          4) {
        *(undefined4 *)(self + (gh_long)(*piVar28 + -5) * 4 + (gh_long)*piVar33 * 0x2d0 + 0x140598) = 0;
        *(undefined4 *)(self + (gh_long)*piVar28 * 4 + (gh_long)*piVar33 * 0x2d0 + 0x140588) = 0;
        iVar18 = *piVar27;
      }
      iVar23 = *(int *)(self + 0x32ba14);
      iVar19 = 0;
      if (iVar23 != 0) {
        iVar19 = (iVar18 + *(int *)(self + 0x32ba20)) / iVar23;
      }
      *piVar33 = iVar19;
      lVar25 = (gh_long)iVar19 + -3;
      iVar24 = 0;
      if (iVar23 != 0) {
        iVar24 = (*(int *)(self + 0x8dacc) + *(int *)(self + 0x32ba24)) / iVar23;
      }
      *piVar28 = iVar24;
      lVar38 = (gh_long)iVar24;
      if (*(int *)(self + (lVar38 + -1) * 4 + lVar25 * 0x2d0 + 0x140598) == 0) {
        *(undefined4 *)(self + lVar38 * 4 + lVar25 * 0x2d0 + 0x140590) = 0xd;
        *(undefined4 *)(self + (gh_long)*piVar28 * 4 + (gh_long)*piVar33 * 0x2d0 + 0x13fd24) = 0x19f;
        iVar23 = -3;
        piVar28 = piVar33;
      }
      else {
        lVar25 = (gh_long)iVar19 + -2;
        if (*(int *)(self + (lVar38 + -1) * 4 + lVar25 * 0x2d0 + 0x140598) != 0) goto LAB_00440fac;
        *(undefined4 *)(self + lVar38 * 4 + lVar25 * 0x2d0 + 0x140590) = 0xd;
        *(undefined4 *)(self + (gh_long)*piVar28 * 4 + (gh_long)*piVar33 * 0x2d0 + 0x13fff4) = 0x19f;
        *piVar33 = *piVar33 + -2;
        piVar33 = (int *)(self + 0x1160);
        iVar23 = 0x20;
        piVar28 = piVar27;
      }
      *piVar28 = *piVar33 + iVar23;
LAB_00440fa8:
      iVar18 = *piVar27;
LAB_00440fac:
      iVar19 = *(int *)(self + 0x32c134);
      iVar23 = iVar18 + 300;
      goto LAB_00440fbc;
    }
    iVar19 = *(int *)(self + 0x32c134);
    iVar23 = iVar23 + iVar18;
LAB_00440fbc:
    *(int *)(self + (gh_long)iVar19 * 0x288 + 0x8dac8) = iVar23;
LAB_00440fd0:
    *(undefined4 *)(self + 0x32b82c) = 0;
    *(undefined4 *)(self + 0x32c9b4) = 0;
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(*(int *)(self + 0x32c134)), GH_ARG(0));
    *(undefined4 *)(self + (gh_long)*(int *)(self + 0x32c134) * 0x288 + 0x8daec) = 900;
    break;
  case 0xb:
  case 0x16:
    iVar18 = (int)fVar45;
    iVar23 = (int)fVar43;
    if (((iVar18 - 1U < 0x59) && (iVar23 < *(int *)(self + 0x1158))) &&
       (*(int *)(self + 0x1158) + -0x5a < iVar23)) {
      if (*(int *)(self + 0x32c7d8) == -1) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x14), GH_ARG(0));
      }
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      *(undefined4 *)(self + 0x1ae8) = 0xd;
      *(undefined4 *)(self + 0x32c990) = 3;
      if (0 < *(int *)(self + 0x8dd24)) {
        joyX2 = *(undefined4 *)(self + 0x1b08);
        joyY2 = *(undefined4 *)(self + 0x1b0c);
        *(undefined4 *)(self + 0x8dd38) = 0;
        *(int *)(self + 0x8dd24) = 0;
        if ((*(int *)(self + 0x8dae0) == 0x3b) || (*(int *)(self + 0x8dae0) == 0xf)) {
          *(undefined4 *)(self + 0x32ba84) = 0;
        }
      }
      *(undefined4 *)(self + 0x8dadc) = 2;
      iVar23 = 4;
      goto LAB_0043c3f0;
    }
    if ((((*(int *)(self + 0xbd0) == 1) && (iVar18 < *(int *)(self + 0xbec) + 0xa4)) &&
        (*(int *)(self + 0xbec) < iVar18)) &&
       ((*(int *)(self + 0xbe8) < iVar23 && (iVar23 < *(int *)(self + 0xbe8) + 0xff)))) {
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      *(undefined4 *)(self + 0x1ae8) = 0x49;
      *(undefined4 *)(self + 0x32c990) = 0;
      if (*(int *)(self + 0x32c854) == 100) {
        if (*(int *)(self + 0x32c800) != -1) break;
        iVar23 = 0x1e;
      }
      else {
        if ((*(int *)(self + 0x32c854) != 0) || (*(int *)(self + 0x32c7fc) != -1)) break;
        iVar23 = 0x1d;
      }
LAB_0043f348:
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0));
      goto LAB_0043c3fc;
    }
    piVar27 = (int *)(self + 0x32c3fc);
    piVar28 = (int *)(self + 0x32c134);
    piVar33 = (int *)(self + 0x32c15c);
    if (*piVar27 < 1) {
LAB_0043d6e0:
      uVar20 = 0x107;
LAB_0043f55c:
      piVar27 = (int *)(self + 0x32c400);
      if (0 < *piVar27) {
        piVar29 = (int *)(self + 0x8dffc);
        if (0 < *piVar29) {
          if ((((int)uVar20 < (int)*pfVar1) && ((int)*pfVar1 < (int)(uVar20 + 0x56))) &&
             ((int)*pfVar2 - 1U < 99)) {
            piVar36 = (int *)(self + 0x8e02c);
            if (*piVar36 < *piVar28) {
              iVar23 = *piVar33;
              if ((0 < iVar23) &&
                 (*piVar29 < *(int *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148) / 0x14)) {
                lVar25 = 2;
                goto LAB_0043f718;
              }
            }
            else {
              in_w4 = 0;
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(2), GH_ARG(0), GH_ARG(0));
            }
          }
          if ((uVar20 & 0xff) == 7) {
            uVar20 = 0x15e;
          }
          else if ((uVar20 & 0xff) == 0x5e) {
            uVar20 = 0x1b5;
          }
        }
      }
      piVar27 = (int *)(self + 0x32c404);
      if (0 < *piVar27) {
        piVar29 = (int *)(self + 0x8e284);
        if (((0 < *piVar29) && ((int)uVar20 < (int)*pfVar1)) &&
           (((int)*pfVar1 < (int)(uVar20 + 0x56) && ((int)*pfVar2 - 1U < 99)))) {
          piVar36 = (int *)(self + 0x8e2b4);
          if (*piVar36 < *piVar28) {
            iVar23 = *piVar33;
            if ((0 < iVar23) &&
               (*piVar29 < *(int *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148) / 0x14)) {
              lVar25 = 3;
              goto LAB_0043f718;
            }
          }
          else {
            in_w4 = 0;
            bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(3), GH_ARG(0), GH_ARG(0));
          }
        }
      }
    }
    else {
      piVar29 = (int *)(self + 0x8dd74);
      if (*piVar29 < 1) goto LAB_0043d6e0;
      uVar20 = 0x15e;
      if ((0x54 < (int)*pfVar1 - 0x108U) || (0x62 < (int)*pfVar2 - 1U)) goto LAB_0043f55c;
      piVar36 = (int *)(self + 0x8dda4);
      if (*piVar28 <= *piVar36) {
        in_w4 = 0;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(1), GH_ARG(0), GH_ARG(0));
LAB_0043f558:
        uVar20 = 0x15e;
        goto LAB_0043f55c;
      }
      iVar23 = *piVar33;
      if ((iVar23 < 1) ||
         (*(int *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148) / 0x14 <= *piVar29))
      goto LAB_0043f558;
      lVar25 = 1;
LAB_0043f718:
      *piVar33 = iVar23 + -10;
      *piVar29 = *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c304) / 10;
      *(int *)(self + lVar25 * 0x288 + 0x8dd4c) = *piVar27 + -5;
      *(int *)(self + lVar25 * 0x288 + 0x8dd3c) = *piVar27 + 0x5d8;
      *(undefined4 *)(self + lVar25 * 0x288 + 0x8db14) =
           *(undefined4 *)(self + (gh_long)*piVar27 * 0x28 + 0x14468);
      *piVar36 = 0;
      lVar38 = (gh_long)*(int *)(self + lVar25 * 0x288 + 0x8dd20) * 0x10;
      *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd14) = *(undefined4 *)(self + lVar38 + 0x8cb70);
      *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd18) = *(undefined4 *)(self + lVar38 + 0x8cb74);
      *(undefined4 *)(self + lVar25 * 0x288 + 0x8dd1c) = *(undefined4 *)(self + lVar38 + 0x8cb78);
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((-0x1e < *(int *)(self + 0x8dacc) &&
          (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1320)), GH_ARG(false));
      }
      if (*(float *)(self + lVar25 * 0x288 + 0x8db20) != 1.0) {
        *(float *)(self + lVar25 * 0x288 + 0x8db20) = 1.0;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar25), GH_ARG(0x58), GH_ARG(*(int *)(self + lVar25 * 0x288 + 0x8dad8)), GH_ARG(in_w4));
      if (*(int *)(self + 0x32c7a0) == -1) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(6), GH_ARG(0));
      }
    }
    piVar27 = (int *)(self + 0x8daec);
    if (*piVar27 < 2) break;
    piVar33 = (int *)(self + 0x8db14);
    piVar29 = (int *)(self + 0x8dac8);
    if (((*piVar33 != 0x17) && (199 < *(int *)(self + 0x32c428))) &&
       (((int)GH_I2F(float, *(undefined8 *)pfVar1) - 1U < 0xe5 &&
        ((int)GH_I2F(float, ((ulong)*(undefined8 *)pfVar1 >> 0x20)) - 6U < 0x8b)))) {
      iVar18 = *(int *)(self + 0x32ba14);
      iVar23 = *(int *)(self + 0x32ba20) + *piVar29;
      iVar19 = 0;
      if (iVar18 != 0) {
        iVar19 = iVar23 / iVar18;
      }
      iVar24 = 0;
      if (iVar18 != 0) {
        iVar24 = (*(int *)(self + 0x32ba24) + *(int *)(self + 0x8dacc)) / iVar18;
      }
      if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar19 = 0;
        if (iVar18 != 0) {
          iVar19 = (iVar23 + -0x14) / iVar18;
        }
        if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar19 = 0;
          if (iVar18 != 0) {
            iVar19 = (iVar23 + 0x14) / iVar18;
          }
          if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) goto LAB_0043fdec;
        }
      }
      if (*piVar28 <= *(int *)(self + 0x8db1c)) {
        in_w4 = 0;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x77), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
      if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
          (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
         ((iVar23 = *(int *)(self + 0x8dacc), -0x1e < iVar23 &&
          (iVar23 < *(int *)(self + 0x115c) + 100)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
      }
      if (*(int *)(self + 0x32c7b4) == -1) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0xb), GH_ARG(0));
      }
    }
LAB_0043fdec:
    puVar4 = (uint *)(self + 0x8dae0);
    if ((*puVar4 == 0x96) && (*(int *)(self + 0x8dd08) == 0)) {
      iVar23 = *(int *)(self + 0x32ba6c);
      lVar25 = (gh_long)*(int *)(self + 0x32ba68);
      if ((*(int *)(self + (gh_long)(iVar23 + -0x14) * 4 + lVar25 * 0x2d0 + 0x140598) == 0xa1) &&
         ((((int)GH_I2F(float, *(undefined8 *)pfVar1) - 0x15U < 0x81 &&
           ((int)GH_I2F(float, ((ulong)*(undefined8 *)pfVar1 >> 0x20)) - 0x173U < 0x77)) &&
          (*(undefined4 *)(self + 0x32ba4c) = 1, *(int *)(self + 0x32c160) == 0)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1338)), GH_ARG(false));
        iVar23 = *(int *)(self + 0x32ba6c);
        lVar25 = (gh_long)*(int *)(self + 0x32ba68);
      }
      if (((*(int *)(self + (gh_long)iVar23 * 4 + lVar25 * 0x2d0 + 0x1405e8) == 0xa1) &&
          ((int)GH_I2F(float, *(undefined8 *)pfVar1) - 0x15U < 0x81)) &&
         (((int)GH_I2F(float, ((ulong)*(undefined8 *)pfVar1 >> 0x20)) - 0x1f5U < 0x77 &&
          (*(undefined4 *)(self + 0x32ba4c) = 2, *(int *)(self + 0x32c160) == 0)))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1338)), GH_ARG(false));
      }
      if (((*(int *)(self + 0x1158) + -0xcf < (int)*pfVar1) &&
          ((int)*pfVar1 < *(int *)(self + 0x1158) + -0x39)) && ((int)*pfVar2 - 0x1e8U < 0x8b)) {
        in_w4 = 1;
        *puVar4 = 0x95;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xf), GH_ARG(0), GH_ARG(0), GH_ARG(1));
      }
    }
    iVar23 = *piVar33;
    if (iVar23 < 0x15) {
      iVar18 = *(int *)(self + 0x1158);
      if (((iVar18 + -0x267 < (int)*pfVar1) && ((int)*pfVar1 < iVar18 + -0x1e5)) &&
         ((int)*pfVar2 - 0x1e1U < 0x9f)) {
        puVar4 = (uint *)(self + 0x32c150);
        uVar20 = *puVar4 - 1;
        if ((uVar20 < 9) && (*(int *)(self + 0xc2c) == 0)) {
          if ((((*(int *)(self + 0x32c160) == 0) &&
               ((-0x96 < *(int *)(self + 0x8dac8) && (*(int *)(self + 0x8dac8) < iVar18 + 0x96))))
              && (-0x1e < *(int *)(self + 0x8dacc))) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
            uVar20 = *puVar4 - 1;
          }
          *puVar4 = uVar20;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x15), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
          *(undefined8 *)(self + 0xc2c) = 1;
        }
        break;
      }
    }
    uVar20 = *puVar4;
    if (0x46 < (int)uVar20) break;
    if ((uVar20 != 3) && (iVar23 < 0x13 || iVar23 == 0x17)) {
      if (((int)*pfVar1 <= *(int *)(self + 0x1158) + -0x1e0) ||
         ((*(int *)(self + 0x1158) + -0x159 <= (int)*pfVar1 || (0x9e < (int)*pfVar2 - 0x1e1U))))
      goto LAB_004400b0;
      goto LAB_004400a8;
    }
LAB_004400b0:
    piVar36 = (int *)(self + 0x32ba48);
    iVar18 = *piVar36;
    if ((iVar18 < 1) && ((*(int *)(self + 0x32ba44) < 1 && (*(int *)(self + 0x32ba84) < 1)))) {
      iVar19 = (int)*pfVar1;
      iVar24 = (int)*pfVar2;
LAB_00441ef8:
      if (((0 < iVar19) && (iVar19 < *(int *)(self + 0x1160))) && (iVar24 - 0xc9U < 0x1b7)) {
        if ((uVar20 == 0x3b) || (uVar20 == 0xf)) {
          *(undefined4 *)(self + 0x32ba84) = 0;
          joyX2 = *(undefined4 *)(self + 0x1b08);
          joyY2 = *(undefined4 *)(self + 0x1b0c);
          *(undefined4 *)(self + 0x8dd38) = 0;
          *(undefined4 *)(self + 0x8dd24) = 0;
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
          iVar19 = (int)*pfVar1;
          iVar24 = (int)*pfVar2;
        }
        if ((iVar19 - 0xbU < 0x9f) && (iVar24 - 0x1e1U < 0x9f)) {
          *(undefined4 *)(self + 0x8dadc) = 1;
        }
        else if ((iVar19 - 0xbfU < 0xb3) && (iVar24 - 0x1e1U < 0x9f)) {
          *(undefined4 *)(self + 0x8dadc) = 0;
        }
        else if ((((*piVar33 < 0x14) && (*puVar4 != 3)) && ((int)*puVar4 < 0x48)) &&
                ((iVar19 - 2U < 0x8b && (iVar24 - 0xfbU < 0xef)))) {
          iVar18 = *(int *)(self + 0x32ba14);
          iVar23 = *(int *)(self + 0x32ba20) + *piVar29;
          iVar34 = 0;
          if (iVar18 != 0) {
            iVar34 = iVar23 / iVar18;
          }
          iVar31 = 0;
          if (iVar18 != 0) {
            iVar31 = (*(int *)(self + 0x32ba24) + *(int *)(self + 0x8dacc)) / iVar18;
          }
          if ((*(int *)(self + (gh_long)iVar31 * 4 + (gh_long)iVar34 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar31 * 4 + (gh_long)iVar34 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar34 = 0;
            if (iVar18 != 0) {
              iVar34 = (iVar23 + -0x14) / iVar18;
            }
            if ((*(int *)(self + (gh_long)iVar31 * 4 + (gh_long)iVar34 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar31 * 4 + (gh_long)iVar34 * 0x2d0
                                                            + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                < 0x32)) {
              iVar34 = 0;
              if (iVar18 != 0) {
                iVar34 = (iVar23 + 0x14) / iVar18;
              }
              if ((*(int *)(self + (gh_long)iVar31 * 4 + (gh_long)iVar34 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar31 * 4 +
                                                              (gh_long)iVar34 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) goto LAB_0044225c;
            }
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x2d), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
          iVar19 = (int)*pfVar1;
          iVar24 = (int)*pfVar2;
        }
LAB_0044225c:
        bzStateGame__MoveProKey_0043a9a4(GH_ARG(self), GH_ARG(0), GH_ARG(iVar19), GH_ARG(iVar24));
        goto LAB_0043c3fc;
      }
      if (uVar20 == 0x41) break;
      if (uVar20 == 3) {
        iVar23 = *(int *)(self + 0x1158) + -0x14;
        bVar10 = iVar19 <= *(int *)(self + 0x1158) + -0xb4;
        if ((0xc6 < iVar24 - 0x12dU) || (bVar10 || iVar23 <= iVar19)) {
          if (0x94 < iVar24 - 0x1f5U || (bVar10 || iVar23 <= iVar19)) break;
          iVar23 = 0x37;
          if (*(int *)(self + 0x8dad8) == 0) {
            iVar23 = -0x37;
          }
          *piVar29 = iVar23 + *piVar29;
          *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + 0x78;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
          goto LAB_0043c3fc;
        }
        iVar23 = *(int *)(self + 0x8dad8);
        iVar18 = 0x2e;
        goto LAB_00442290;
      }
      if ((iVar23 != 0) || (uVar20 == 0xf)) {
        if ((iVar23 < 0xd) || (uVar20 == 0xf)) {
          iVar18 = *(int *)(self + 0x1158);
          if (((iVar24 - 0x1f9U < 0x8b) && (iVar18 + -0xc5 < iVar19)) && (iVar19 < iVar18 + -0x25))
          {
            if (uVar20 == 0xf) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0xc3), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
            }
            if (*(int *)(self + 0x8daf0) == 0xf5) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(3), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
            }
            joyX = *pfVar1;
            joyY = *pfVar2;
            bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(0), GH_ARG(*(float *)(self + 0x1b08)), GH_ARG(*(float *)(self + 0x1b0c)), GH_ARG(joyX), GH_ARG(joyY));
            goto LAB_0043c3fc;
          }
          if (((iVar24 - 0x172U < 0x83) && (iVar18 + -0x91 < iVar19)) &&
             ((iVar19 < iVar18 + 5 &&
              ((0x32 < uVar20 - 0xf ||
               ((1LL << ((ulong)(uVar20 - 0xf) & 0x3f) & 0x4000000008001U) == 0)))))) {
            *(undefined4 *)(self + 0x8dd08) = 0;
            *(undefined4 *)(self + 0x8dae8) = *(undefined4 *)(self + 0x8dacc);
            puVar4[0] = 0x1e;
            puVar4[1] = 0xffffffde;
            *(undefined4 *)(self + 0x8dd10) = 0x12;
            break;
          }
          if ((((3 < iVar23) && (uVar20 != 0xf)) && (iVar24 - 0x1f9U < 0x8b)) &&
             ((iVar18 + -0x159 < iVar19 && (iVar19 < iVar18 + -0xb9)))) {
            if ((8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90)) ||
               ((0x45 < (int)uVar20 || (*piVar27 < 2)))) break;
            iVar23 = *(int *)(self + 0x8dad8);
            iVar18 = 0x70;
            goto LAB_00442290;
          }
          if (((0x8a < iVar24 - 0x169U) || (iVar19 <= iVar18 + -0xfa)) || (iVar18 + -0x6e <= iVar19)
             ) break;
          if (*(int *)(self + 0x32c858) < 0) {
            iVar23 = *piVar28;
          }
          else {
            iVar23 = *piVar28;
            if (iVar23 <= *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c))
            goto LAB_0044384c;
          }
          if (*(int *)(self + 0x8db1c) < iVar23) break;
LAB_0044384c:
          iVar23 = 0x17;
LAB_00443850:
          iVar18 = 0;
          goto LAB_00443860;
        }
        if (0x11 < iVar23) {
          if (iVar23 == 0x17) {
            if (((8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90)) ||
                (0x45 < (int)uVar20)) || (*piVar27 < 2)) break;
            iVar23 = *(int *)(self + 0x1158);
            if (((iVar24 - 0x1f9U < 0x8b) && (iVar23 + -0x159 < iVar19)) &&
               (iVar19 < iVar23 + -0xb9)) {
              iVar23 = *(int *)(self + 0x32c43c);
              if (iVar23 < 1) goto LAB_004400a8;
              iVar18 = 0;
              if (0x14 < iVar23) {
                iVar18 = iVar23 + -0x14;
              }
              *(int *)(self + 0x32c43c) = iVar18;
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0xab;
            }
            else {
              if (((0x8a < iVar24 - 0x1f9U) || (iVar19 <= iVar23 + -0xb4)) ||
                 (iVar23 + -0x14 <= iVar19)) {
LAB_0044460c:
                if ((iVar24 - 0x172U < 0x83) && ((iVar23 + -0x91 < iVar19 && (iVar19 < iVar23 + 5)))
                   ) {
                  iVar23 = *(int *)(self + 0x32c43c);
                  if (0 < iVar23) {
                    iVar18 = 10;
                    if (0xf < iVar23) {
                      iVar18 = iVar23 + -0xf;
                    }
                    *(int *)(self + 0x32c43c) = iVar18;
                    if (1 < *(int *)(self + 0x32b8d0)) break;
                    iVar23 = *(int *)(self + 0x8dad8);
                    iVar18 = 0xaf;
                    goto LAB_004445dc;
                  }
                }
                else {
                  if ((0x8a < iVar24 - 0x169U) ||
                     ((iVar19 <= iVar23 + -0xfa || (iVar23 + -0x6e <= iVar19)))) break;
                  iVar18 = *(int *)(self + 0x32ba14);
                  iVar23 = *(int *)(self + 0x32ba20) + *piVar29;
                  iVar19 = 0;
                  if (iVar18 != 0) {
                    iVar19 = iVar23 / iVar18;
                  }
                  iVar24 = 0;
                  if (iVar18 != 0) {
                    iVar24 = (*(int *)(self + 0x32ba24) + *(int *)(self + 0x8dacc)) / iVar18;
                  }
                  if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1) ||
                     (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 +
                                                                  (gh_long)iVar19 * 0x2d0 + 0x140598) *
                                                  0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                    iVar19 = 0;
                    if (iVar18 != 0) {
                      iVar19 = (iVar23 + -0x14) / iVar18;
                    }
                    if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1) ||
                       (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 +
                                                                    (gh_long)iVar19 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                      iVar19 = 0;
                      if (iVar18 != 0) {
                        iVar19 = (iVar23 + 0x14) / iVar18;
                      }
                      if ((*(int *)(self + (gh_long)iVar24 * 4 + (gh_long)iVar19 * 0x2d0 + 0x140598) < 1)
                         || (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar24 * 4 +
                                                                         (gh_long)iVar19 * 0x2d0 +
                                                                         0x140598) * 0x12 | 1) * 4 +
                                             0x11c378) < 0x32)) break;
                    }
                  }
                  if (*(int *)(self + 0x32c858) < 0) {
                    iVar23 = *piVar28;
                  }
                  else {
                    iVar23 = *piVar28;
                    if (iVar23 <= *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c)
                       ) goto LAB_0044384c;
                  }
                  if (iVar23 <= *(int *)(self + 0x8db1c)) goto LAB_0044384c;
                  if (0 < *(int *)(self + 0x32c43c)) {
                    iVar23 = *(int *)(self + 0x8dad8);
                    iVar18 = 0xb0;
                    goto LAB_00442290;
                  }
                }
LAB_004400a8:
                iVar23 = 0xc;
                goto LAB_00443850;
              }
              iVar34 = *(int *)(self + 0x32ba14);
              iVar18 = *(int *)(self + 0x32ba20) + *piVar29;
              iVar31 = 0;
              if (iVar34 != 0) {
                iVar31 = iVar18 / iVar34;
              }
              iVar35 = 0;
              if (iVar34 != 0) {
                iVar35 = (*(int *)(self + 0x32ba24) + *(int *)(self + 0x8dacc)) / iVar34;
              }
              if ((*(int *)(self + (gh_long)iVar35 * 4 + (gh_long)iVar31 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar35 * 4 +
                                                              (gh_long)iVar31 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar31 = 0;
                if (iVar34 != 0) {
                  iVar31 = (iVar18 + -0x14) / iVar34;
                }
                if ((*(int *)(self + (gh_long)iVar35 * 4 + (gh_long)iVar31 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar35 * 4 +
                                                                (gh_long)iVar31 * 0x2d0 + 0x140598) *
                                                0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                  iVar31 = 0;
                  if (iVar34 != 0) {
                    iVar31 = (iVar18 + 0x14) / iVar34;
                  }
                  if ((*(int *)(self + (gh_long)iVar35 * 4 + (gh_long)iVar31 * 0x2d0 + 0x140598) < 1) ||
                     (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar35 * 4 +
                                                                  (gh_long)iVar31 * 0x2d0 + 0x140598) *
                                                  0x12 | 1) * 4 + 0x11c378) < 0x32))
                  goto LAB_0044460c;
                }
              }
              if (*(int *)(self + 0x32c43c) < 1) goto LAB_004400a8;
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0xac;
            }
          }
          else if (iVar23 == 0x16) {
            iVar23 = *(int *)(self + 0x1158);
            if (((0x8a < iVar24 - 0x1f9U) || (iVar19 <= iVar23 + -0xb4)) ||
               (iVar23 + -0x14 <= iVar19)) {
              if (((iVar24 - 0x172U < 0x83) && (iVar23 + -0x91 < iVar19)) && (iVar19 < iVar23 + 5))
              {
                *puVar4 = 0xc;
                *(undefined4 *)(self + 0x32c85c) = 0x1e;
              }
              break;
            }
            if (uVar20 == 0xd) {
              *(undefined4 *)(self + 0x32c864) = 0;
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0x66;
            }
            else {
              *(undefined4 *)(self + 0x32c864) = 1;
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0x68;
            }
          }
          else {
            if (((iVar23 != 0x13) ||
                (8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90))) ||
               ((0x45 < (int)uVar20 || (*piVar27 < 2)))) break;
            iVar23 = *(int *)(self + 0x1158);
            if (((iVar24 - 0x1f9U < 0x8b) && (iVar23 + -0x159 < iVar19)) &&
               (iVar19 < iVar23 + -0xb9)) {
              if (uVar20 == 0x1e) goto switchD_004432d0_caseD_1e;
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0x76;
            }
            else {
              if (((0x8a < iVar24 - 0x1f9U) || (iVar19 <= iVar23 + -0xb4)) ||
                 (iVar23 + -0x14 <= iVar19)) {
                if (((0x82 < iVar24 - 0x172U) || (iVar19 <= iVar23 + -0x91)) ||
                   (iVar23 + 5 <= iVar19)) {
                  if (((((uVar20 & 0xfffffffe) == 0x1e) || (0x8a < iVar24 - 0x169U)) ||
                      (iVar19 <= iVar23 + -0xfa)) || (iVar23 + -0x6e <= iVar19)) break;
                  if (*(int *)(self + 0x32c858) < 0) {
                    iVar23 = *piVar28;
                  }
                  else {
                    iVar23 = *piVar28;
                    if (iVar23 <= *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c)
                       ) goto LAB_0044384c;
                  }
                  if (*(int *)(self + 0x8db1c) < iVar23) goto LAB_00442280;
                  goto LAB_0044384c;
                }
                iVar23 = *(int *)(self + 0x32b8d0);
                goto joined_r0x00444128;
              }
              if (uVar20 == 0x1e) goto switchD_004420bc_caseD_1e;
              iVar18 = 0;
              if (*(int *)(self + 0x32b82c) < 1) {
                iVar18 = *(int *)(self + 0x32b82c) + 1;
              }
              *(int *)(self + 0x32b82c) = iVar18;
              iVar23 = *(int *)(self + 0x8dad8);
              if (iVar18 == 0) {
                iVar18 = 0x75;
              }
              else {
                iVar18 = 0x74;
              }
            }
          }
          goto LAB_00442290;
        }
        if (((8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90)) ||
            (0x45 < (int)uVar20)) || (*piVar27 < 2)) break;
        iVar18 = *(int *)(self + 0x1158);
        if (((iVar23 != 0xd) && (iVar23 < 0xf)) ||
           ((0x8a < iVar24 - 0x1f9U || ((iVar19 <= iVar18 + -0x159 || (iVar18 + -0xb9 <= iVar19)))))
           ) {
          if ((0x8a < iVar24 - 0x1f9U) || ((iVar19 <= iVar18 + -0xb4 || (iVar18 + -0x14 <= iVar19)))
             ) {
            if ((0x82 < iVar24 - 0x172U) || ((iVar19 <= iVar18 + -0x91 || (iVar18 + 5 <= iVar19))))
            goto joined_r0x00443e14;
            iVar23 = *(int *)(self + 0x32b8d0);
            goto joined_r0x00444128;
          }
          if (*(int *)(self + (gh_long)(iVar23 + 10) * 4 + 0x32c148) < 1) goto LAB_004400a8;
          if (uVar20 == 0x1e) {
            *(int *)(self + 0x8dae8) = *(int *)(self + 0x8dae8) + 0x32;
            if (iVar23 == 0xd) {
              iVar23 = 0x97;
            }
            else {
              iVar23 = 0x16;
            }
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar23), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
            if (*piVar33 == 0xd) break;
            uVar20 = *piVar33 + 10;
            uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
            *(int *)(self + uVar15 + 0x32c148) = *(int *)(self + uVar15 + 0x32c148) + -10;
            piVar27 = (int *)(self + (gh_long)*piVar33 * 4 + 0x32c170);
            iVar23 = *piVar27;
          }
          else {
            piVar27 = (int *)(self + 0x32b82c);
            iVar18 = *(int *)(self + (gh_long)*piVar27 * 4 + ((gh_long)iVar23 + -9) * 0x20 + 0x12ca8);
            if (iVar18 < 0) {
              *piVar27 = 0;
              iVar18 = *(int *)(self + ((gh_long)iVar23 + -9) * 0x20 + 0x12ca8);
            }
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar18), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
            *piVar27 = *piVar27 + 1;
            *(undefined4 *)(self + 0x32b8cc) = 0xfffffff1;
            *(int *)(self + (gh_long)*piVar33 * 4 + 0x32c170) =
                 *(int *)(self + (gh_long)*piVar33 * 4 + 0x32c170) + -10;
            piVar27 = (int *)(self + (gh_long)*piVar33 * 4 + 0x32c170);
            iVar23 = *piVar27;
          }
joined_r0x00443774:
          if (iVar23 < 0) {
            *piVar27 = 0;
          }
          break;
        }
        if (uVar20 == 0x1e) {
          if (*(int *)(self + (gh_long)(iVar23 + 10) * 4 + 0x32c148) < 1) goto LAB_004400a8;
          *(int *)(self + 0x8dae8) = *(int *)(self + 0x8dae8) + 0x32;
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x18), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
          if (*piVar33 == 0xd) break;
          uVar20 = *piVar33 + 10;
          uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
          *(int *)(self + uVar15 + 0x32c148) = *(int *)(self + uVar15 + 0x32c148) + -10;
          piVar27 = (int *)(self + (gh_long)*piVar33 * 4 + 0x32c170);
          iVar23 = *piVar27;
          goto joined_r0x00443774;
        }
        if (iVar23 != 0xd) {
          if (*(int *)(self + (gh_long)(iVar23 + 10) * 4 + 0x32c148) < 1) goto LAB_004400a8;
          if (iVar23 == 0x11) {
            iVar23 = 0x97;
          }
          else {
            iVar23 = 0x95;
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar23), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
          *(int *)(self + (gh_long)*piVar33 * 4 + 0x32c170) =
               *(int *)(self + (gh_long)*piVar33 * 4 + 0x32c170) + -0x28;
          piVar27 = (int *)(self + (gh_long)*piVar33 * 4 + 0x32c170);
          iVar23 = *piVar27;
          goto joined_r0x00443774;
        }
        uVar20 = 0xb974;
        goto LAB_004441b0;
      }
      if (((8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90)) ||
          (0x45 < (int)uVar20)) || (*piVar27 < 2)) break;
      iVar18 = *(int *)(self + 0x1158);
      if (((0x8a < iVar24 - 0x1f9U) || (iVar19 <= iVar18 + -0xb4)) || (iVar18 + -0x14 <= iVar19)) {
        if (((0x8a < iVar24 - 0x1f9U) || (iVar19 <= iVar18 + -0x159)) || (iVar18 + -0xb9 <= iVar19))
        {
          if (((0x82 < iVar24 - 0x172U) || (iVar19 <= iVar18 + -0x91)) || (iVar18 + 5 <= iVar19)) {
joined_r0x00443e14:
            if ((((uVar20 & 0xfffffffe) == 0x1e) || (0x8a < iVar24 - 0x169U)) ||
               ((iVar19 <= iVar18 + -0xfa || (iVar18 + -0x6e <= iVar19)))) break;
            if (*(int *)(self + 0x32c858) < 0) {
              iVar23 = *piVar28;
            }
            else {
              iVar23 = *piVar28;
              if (iVar23 <= *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c))
              goto LAB_0044384c;
            }
            if (iVar23 <= *(int *)(self + 0x8db1c)) goto LAB_0044384c;
            iVar23 = *(int *)(self + 0x8dad8);
            if (uVar20 == 10) goto LAB_0044398c;
            iVar18 = 0x22;
            goto LAB_00442290;
          }
          if (uVar20 == 0x30) {
            iVar23 = *(int *)(self + 0x32c83c);
LAB_00443ee8:
            if (((*piVar28 <= iVar23) && (*(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dae0) != 0x47))
               && (lVar25 = (gh_long)iVar23, *(float *)(self + lVar25 * 0x288 + 0x8db24) < 1.3)) {
              piVar27 = (int *)(self + lVar25 * 0x288 + 0x8dac8);
              iVar19 = *(int *)(self + 0x32ba14);
              iVar18 = *(int *)(self + 0x32ba20) + *piVar27;
              iVar24 = 0;
              if (iVar19 != 0) {
                iVar24 = iVar18 / iVar19;
              }
              iVar34 = 0;
              if (iVar19 != 0) {
                iVar34 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar25 * 0x288 + 0x8dacc)) /
                         iVar19;
              }
              if ((*(int *)(self + (gh_long)iVar34 * 4 + (gh_long)iVar24 * 0x2d0 + 0x140598) < 1) ||
                 (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar34 * 4 +
                                                              (gh_long)iVar24 * 0x2d0 + 0x140598) *
                                              0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                iVar24 = 0;
                if (iVar19 != 0) {
                  iVar24 = (iVar18 + -0x14) / iVar19;
                }
                if ((*(int *)(self + (gh_long)iVar34 * 4 + (gh_long)iVar24 * 0x2d0 + 0x140598) < 1) ||
                   (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar34 * 4 +
                                                                (gh_long)iVar24 * 0x2d0 + 0x140598) *
                                                0x12 | 1) * 4 + 0x11c378) < 0x32)) {
                  iVar24 = 0;
                  if (iVar19 != 0) {
                    iVar24 = (iVar18 + 0x14) / iVar19;
                  }
                  if ((*(int *)(self + (gh_long)iVar34 * 4 + (gh_long)iVar24 * 0x2d0 + 0x140598) < 1) ||
                     (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar34 * 4 +
                                                                  (gh_long)iVar24 * 0x2d0 + 0x140598) *
                                                  0x12 | 1) * 4 + 0x11c378) < 0x32))
                  goto LAB_00444114;
                }
              }
              if (*(int *)(self + lVar25 * 0x288 + 0x8db14) < 0x15) {
                iVar18 = *piVar29;
                piVar28 = (int *)(self + 0x8dad8);
                *piVar27 = iVar18;
                iVar19 = *piVar28;
                iVar34 = 0x3c;
                *(uint *)(self + lVar25 * 0x288 + 0x8dad8) = (uint)(iVar19 == 0);
                iVar24 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0x32), GH_ARG(0x1e), GH_ARG(0x3c), GH_ARG(in_w5), GH_ARG(iVar18), GH_ARG(*(int *)(self + lVar25 * 0x288 + 0x8dacc)), GH_ARG((uint)(iVar19 != 0)));
                iVar19 = *piVar28;
                if (iVar19 == 0) {
                  *piVar27 = iVar24 + iVar18;
                  if (iVar24 < 0x3c) {
                    *piVar29 = iVar24 + *piVar29 + -0x3c;
                  }
                }
                else {
                  *piVar27 = iVar18 - iVar24;
                  if (iVar24 < 0x3c) {
                    *piVar29 = (0x3c - iVar24) + *piVar29;
                  }
                }
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x13), GH_ARG(iVar19), GH_ARG(iVar34));
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0x3e), GH_ARG((uint)(*piVar28 == 0)), GH_ARG(iVar34));
                *(int *)(self + 0x32c83c) = iVar23;
                break;
              }
            }
          }
          else {
            if ((uVar20 == 0x34) && (0 < *(int *)(self + 0x32c138))) {
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0xa1;
              goto LAB_00442290;
            }
            iVar23 = bzStateGame__cahkCom_0043a6b0(GH_ARG(self), GH_ARG(0), GH_ARG(0x50), GH_ARG(0x28));
            if (uVar20 != 0x1e) goto LAB_00443ee8;
          }
LAB_00444114:
          iVar23 = *(int *)(self + 0x32b8d0);
joined_r0x00444128:
          if (1 < iVar23) break;
          if (iVar23 == 1) {
            iVar23 = *(int *)(self + 0x8dad8);
            iVar18 = 0xb;
LAB_004445dc:
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar18), GH_ARG(iVar23), GH_ARG(in_w4));
          }
          else if (iVar23 == 0) {
            iVar23 = *(int *)(self + 0x8dad8);
            iVar18 = 8;
            goto LAB_004445dc;
          }
          *(int *)(self + 0x32b8d0) = *(int *)(self + 0x32b8d0) + 1;
          break;
        }
        switch(uVar20) {
        case 0x1e:
switchD_004432d0_caseD_1e:
          iVar23 = *(int *)(self + 0x8dae8);
          iVar18 = 0x18;
          goto LAB_00444434;
        default:
          goto switchD_004432d0_caseD_1f;
        case 0x30:
          iVar23 = *(int *)(self + 0x8dad8);
          iVar18 = 0xd;
          break;
        case 0x35:
        case 0x37:
          if (*(int *)(self + 0x32c138) < 1) goto switchD_004432d0_caseD_1f;
          iVar23 = *(int *)(self + 0x8dad8);
          iVar18 = 0xa4;
          break;
        case 0x38:
          if (0 < *(int *)(self + 0x32c138)) {
            if ((*piVar29 + -0x82 <
                 *(int *)(self + (gh_long)*(int *)(self + 0x32c138) * 0x288 + 0x8dac8)) &&
               (*(int *)(self + (gh_long)*(int *)(self + 0x32c138) * 0x288 + 0x8dac8) < *piVar29 + 0x82
               )) {
              iVar23 = *(int *)(self + 0x8dad8);
              iVar18 = 0xa5;
              break;
            }
          }
          goto switchD_004432d0_caseD_1f;
        }
        goto LAB_00442290;
      }
      switch(uVar20) {
      case 10:
        iVar23 = *(int *)(self + 0x8dad8);
        iVar18 = 0xa0;
        break;
      default:
        goto switchD_004420bc_caseD_b;
      case 0x1e:
switchD_004420bc_caseD_1e:
        iVar23 = *(int *)(self + 0x8dae8);
        iVar18 = 0x16;
LAB_00444434:
        *(int *)(self + 0x8dae8) = iVar23 + 0x32;
        iVar23 = *(int *)(self + 0x8dad8);
        break;
      case 0x30:
        iVar23 = *(int *)(self + 0x8dad8);
LAB_0044398c:
        iVar18 = 0x11;
        break;
      case 0x35:
switchD_004420bc_caseD_35:
        iVar23 = *(int *)(self + 0x8dad8);
        iVar18 = 0xa2;
        break;
      case 0x36:
        iVar23 = *(int *)(self + 0x32c138);
        if (((iVar23 < 1) || (*(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dae0) != 0x4c)) ||
           ((*(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dac8) < -0x3b ||
            (iVar18 + 0x3c <= *(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dac8)))))
        goto switchD_004420bc_caseD_b;
        iVar23 = *(int *)(self + 0x8dad8);
        iVar18 = 0xa3;
        break;
      case 0x37:
        iVar23 = *(int *)(self + 0x32c138);
        if ((((0 < iVar23) && (*(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dae0) == 0x4c)) &&
            (10 < *(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dac8))) &&
           (*(int *)(self + (gh_long)iVar23 * 0x288 + 0x8dac8) < iVar18 + -10))
        goto switchD_004420bc_caseD_35;
        goto switchD_004420bc_caseD_b;
      }
LAB_00442290:
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar18), GH_ARG(iVar23), GH_ARG(in_w4));
LAB_0043c3fc:
      if (*(gh_long *)(lVar11 + 0x28) == local_80[1]) {
        return 0;
      }
                    
      __stack_chk_fail();
    }
    iVar19 = (int)*pfVar1;
    iVar24 = (int)*pfVar2;
    if (((iVar19 <= *(int *)(self + 0x1158) + -0xfa) || (*(int *)(self + 0x1158) + -0x6e <= iVar19))
       || (0x8a < iVar24 - 0x169U)) goto LAB_00441ef8;
    iVar19 = *(int *)(self + 0x32ba84);
    if (0 < iVar19) {
      if (-1 < *(int *)(self + 0x32c858)) {
        iVar18 = *piVar28;
        if (*(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) < iVar18)
        goto LAB_00441aa4;
        goto LAB_0044384c;
      }
      iVar18 = *piVar28;
LAB_00441aa4:
      if (iVar18 <= *(int *)(self + 0x8db1c)) goto LAB_0044384c;
      if (iVar23 < 0x13) {
        *piVar29 = *(int *)(self + 0x32ba88);
        uVar20 = (uint)(iVar19 != 3);
        *(uint *)(self + 0x8dad8) = uVar20;
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0xc2), GH_ARG(uVar20), GH_ARG(in_w4));
        *(int *)(self + 0x32ba84) = 0;
        if (*(int *)(self + 0x32c7e4) != -1) break;
        iVar23 = 0x17;
        goto LAB_0043f348;
      }
      if ((iVar23 != 0x13) || ((uVar20 & 0xfffffffe) == 0x1e)) break;
LAB_00442280:
      iVar23 = *(int *)(self + 0x8dad8);
      iVar18 = 0x7a;
      goto LAB_00442290;
    }
    if ((*(int *)(self + 0x32ba44) == 2) && (iVar23 < 0x13)) {
      *(int *)(self + 0x32c850) = iVar23;
      *piVar33 = 0x16;
      *(int *)(self + 0x32c860) = *piVar27;
      *(int *)(self + 0x8db08) =
           *(int *)(self + (gh_long)*(int *)(self + 0x32c8e8) * 4 + 0x8d644) + 0x3c;
      lVar25 = (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 + 0x140598;
      *piVar27 = -*(int *)(self + (gh_long)(*(int *)(self + 0x32ba6c) + -1) * 4 + lVar25);
      *(int *)(self + 0x8dad8) =
           -*(int *)(self + (gh_long)(*(int *)(self + 0x32ba6c) + -2) * 4 + lVar25);
      *(undefined4 *)(self + 0x8db0c) = 0;
      *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + -0x40;
      *(undefined8 *)(self + 0x8dd14) = 0xff000000ff;
      *(undefined4 *)(self + 0x8dd1c) = 0xff;
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
      iVar23 = 0x16;
      iVar18 = 1;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 +
               (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 + 0x140598) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 + (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 +
               0x140594) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 + (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 +
               0x140590) = 0;
      *(int *)(self + 0x32ba44) = 0;
LAB_00443860:
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0), GH_ARG(0), GH_ARG(iVar18));
      goto LAB_0043c3fc;
    }
    if (iVar18 < 1) break;
    if (iVar18 == 0x1ab) {
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xb), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      *piVar29 = *(int *)(self + 0x32ba58);
      *(int *)(self + 0x8dacc) = *(int *)(self + 0x32ba5c) + -0x20;
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xd), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      *(undefined8 *)(self + 0x32ba20) = *(undefined8 *)(self + 0x32ba50);
      *(undefined4 *)(self + 0xbcc) = 0;
      if (*(int *)(self + 0xbd0) == 1) {
        *(undefined4 *)(self + 0xbd0) = 0;
        *(undefined4 *)(self + 0xc04) = 0;
        *piVar36 = 0;
        break;
      }
      goto LAB_00443e04;
    }
    if (iVar18 == 2) goto LAB_00443e04;
    if (iVar18 == 1) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(9), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
      iVar23 = 0xe;
      goto LAB_00443df0;
    }
    if (iVar18 < 0x191) goto LAB_00443e04;
    if (*(int *)(self + 0xbd0) == 1) {
      *(undefined4 *)(self + 0xbd0) = 0;
      *(undefined4 *)(self + 0xc04) = 0;
    }
    *(undefined4 *)(self + 0xbcc) = 1;
    *(undefined8 *)(self + 0x32ba50) = *(undefined8 *)(self + 0x32ba20);
    *(undefined8 *)(self + 0x32ba58) = *(undefined8 *)piVar29;
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xb), GH_ARG(0), GH_ARG(0), GH_ARG(1));
    *(undefined4 *)(self + 0x8dacc) = 0x186;
    uVar44 = 0x85e0000f298;
    iVar23 = 0x24c;
    switch(*piVar36) {
    case 0x19f:
      uVar44 = 0x35e0000f298;
      iVar23 = 0x23c;
      break;
    case 0x1a0:
      break;
    case 0x1a1:
      uVar44 = 0xd5e0000f298;
      iVar23 = 0x254;
      break;
    case 0x1a2:
      uVar44 = 0x35e00010328;
      iVar23 = 0x1c4;
      break;
    case 0x1a3:
      uVar44 = 0x85e00010328;
      iVar23 = 0x224;
      break;
    case 0x1a4:
      uVar44 = 0xd5e00010328;
      iVar23 = 0x22c;
      break;
    case 0x1a5:
      uVar44 = 0x35e000112b8;
      goto LAB_00443ddc;
    case 0x1a6:
      uVar44 = 0x85e000112b8;
      goto LAB_00443ddc;
    case 0x1a7:
      uVar44 = 0xd5e000112b8;
      goto LAB_00443ddc;
    case 0x1a8:
      uVar44 = 0x35e00012ab8;
      goto LAB_00443ddc;
    case 0x1a9:
      uVar44 = 0x85e00012ab8;
      goto LAB_00443ddc;
    case 0x1aa:
      uVar44 = 0xd5e00012ab8;
LAB_00443ddc:
      iVar23 = 0x223;
      break;
    default:
      goto switchD_00442f28_default;
    }
    *(undefined8 *)(self + 0x32ba20) = uVar44;
    *piVar29 = iVar23;
switchD_00442f28_default:
    iVar23 = 0xd;
LAB_00443df0:
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(iVar23), GH_ARG(0), GH_ARG(0), GH_ARG(1));
LAB_00443e04:
    *piVar36 = 0;
    break;
  case 0xc:
    piVar28 = (int *)(self + 0x32c970);
    iVar23 = *piVar28;
    if (iVar23 < 1) {
      iVar23 = (int)fVar43;
      uVar20 = (int)fVar45 - 1;
      if (((*(int *)(self + 0x32c16c) < 0xf) && (uVar20 < 0x4f)) && (iVar23 - 0xf1U < 0x77)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *piVar28 = 0x14;
        if ((*(int *)(self + 0x32c794) == -1) &&
           (*(int *)(self + (gh_long)*(int *)(self + 0x32c16c) * 4 + 0x13798) <=
            *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168))) {
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(3), GH_ARG(0));
        }
      }
      else if (((uVar20 < 0x4f) && (iVar23 - 0x231U < 0x77)) ||
              ((uVar20 < 0x4f && (iVar23 - 0x35dU < 0x72)))) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x1af0) = 4;
        self[0x1af4] = 0;
        break;
      }
      iVar18 = *(int *)(self + 0x1164);
      iVar23 = *(int *)(self + 0x1160);
      iVar19 = (int)*pfVar2;
      iVar24 = (int)*pfVar1;
      if ((((iVar19 < iVar18 + -0xb8) && (iVar23 + 0x198 < iVar24)) && (iVar24 < iVar23 + 0x1fc)) &&
         (iVar18 + -0x11c < iVar19)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        }
        uVar22 = 5;
        if (*(int *)(self + 0x32c9ac) != 0) {
          uVar22 = 2;
        }
        *(undefined4 *)(self + 0x1ae8) = uVar22;
        if (*(int *)(self + 0x1a98) == 1) {
          *(undefined4 *)(self + 0x1a98) = 2;
          *(undefined4 *)(self + 0x32c5f8) = 0;
          *(undefined4 *)(self + 0x32c620) = 0;
        }
        if (*(int *)(self + 0x1a9c) == 1) {
          *(undefined4 *)(self + 0x1a9c) = 2;
          *(undefined4 *)(self + 0x32c5fc) = 0;
          *(undefined4 *)(self + 0x32c624) = 0;
        }
        if (*(int *)(self + 0x1aa0) == 1) {
          *(undefined4 *)(self + 0x1aa0) = 2;
          *(undefined4 *)(self + 0x32c600) = 0;
          *(undefined4 *)(self + 0x32c628) = 0;
        }
        if (*(int *)(self + 0x1aa4) == 1) {
          *(undefined4 *)(self + 0x1aa4) = 2;
          *(undefined4 *)(self + 0x32c604) = 0;
          *(undefined4 *)(self + 0x32c62c) = 0;
        }
        if (*(int *)(self + 0x1aa8) == 1) {
          *(undefined4 *)(self + 0x1aa8) = 2;
          *(undefined4 *)(self + 0x32c608) = 0;
          *(undefined4 *)(self + 0x32c630) = 0;
        }
        if (*(int *)(self + 0x1aac) == 1) {
          *(undefined4 *)(self + 0x1aac) = 2;
          *(undefined4 *)(self + 0x32c60c) = 0;
          *(undefined4 *)(self + 0x32c634) = 0;
        }
        if (*(int *)(self + 0x1ab0) == 1) {
          *(undefined4 *)(self + 0x1ab0) = 2;
          *(undefined4 *)(self + 0x32c610) = 0;
          *(undefined4 *)(self + 0x32c638) = 0;
        }
        if (*(int *)(self + 0x1ab4) == 1) {
          *(undefined4 *)(self + 0x1ab4) = 2;
          *(undefined4 *)(self + 0x32c614) = 0;
          *(undefined4 *)(self + 0x32c63c) = 0;
        }
        if (*(int *)(self + 0x1ab8) == 1) {
          *(undefined4 *)(self + 0x1ab8) = 2;
          *(undefined4 *)(self + 0x32c618) = 0;
          *(undefined4 *)(self + 0x32c640) = 0;
        }
        if (*(int *)(self + 0x1abc) == 1) {
          *(undefined4 *)(self + 0x1abc) = 2;
          *(undefined4 *)(self + 0x32c61c) = 0;
          *(undefined4 *)(self + 0x32c644) = 0;
        }
        bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
        *(undefined4 *)(self + 0x32c990) = 1;
        goto LAB_0043f11c;
      }
      if (((iVar19 < *(int *)(self + 0x115c)) && (iVar24 < iVar23 * 2)) &&
         ((iVar23 * 2 + -0x8c < iVar24 && (*(int *)(self + 0x115c) + -100 < iVar19)))) {
        cocos2d__log_005d21e4(GH_ARG("-TEST- Box Click"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x32c8d8) = 0;
        iVar23 = *(int *)(self + 0x32c9ac);
        if (iVar23 == 2) {
          *piVar27 = 0x1b;
        }
        else if (iVar23 == 0) {
          if (*(int *)(self + 0x32c78c) == -1) {
            *piVar28 = 1;
            *piVar27 = 0x15;
          }
          else {
            *(undefined4 *)(self + 0x1ae8) = 0xb;
            if (*(int *)(self + 0x32c854) == 100) {
              if (*(int *)(self + 0x1968) == -1) {
                FUN_009d4eac(GH_ARG(&local_e8), GH_ARG("FirstPlayZombie"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
                bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(6), GH_ARG((undefined *)&local_e8));
                if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
                  piVar27 = (int *)(local_e8 + -8);
                  do {
                    iVar23 = *piVar27;
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                    if (bVar10) {
                      *piVar27 = iVar23 + -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar23 < 1) {
                    operator_delete((undefined8 *)(local_e8 + -0x18));
                  }
                }
              }
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f8), GH_ARG(*(int *)(self + 0x32c8e8)));
              plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_f8), GH_ARG(0), GH_ARG("af_zombie_"), GH_ARG(10));
              local_d0 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_start"), GH_ARG(6));
              local_f0 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_100), GH_ARG("1"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_f0), GH_ARG((undefined *)&local_100));
              if ((undefined8 *)(local_100 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_100 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_100 + -0x18));
                }
              }
              if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_f0 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_f0 + -0x18));
                }
              }
              if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_d0 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_d0 + -0x18));
                }
              }
              puVar16 = (undefined8 *)(local_f8 + -0x18);
              if (puVar16 != &DAT_00d40300) {
                piVar27 = (int *)(local_f8 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
LAB_004468f0:
                if (iVar23 < 1) {
                  operator_delete(puVar16);
                }
              }
            }
            else {
              if (*(int *)(self + 0x1954) == -1) {
                FUN_009d4eac(GH_ARG(&local_108), GH_ARG("FirstPlay"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
                bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(1), GH_ARG((undefined *)&local_108));
                if ((undefined8 *)(local_108 + -0x18) != &DAT_00d40300) {
                  piVar27 = (int *)(local_108 + -8);
                  do {
                    iVar23 = *piVar27;
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                    if (bVar10) {
                      *piVar27 = iVar23 + -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar23 < 1) {
                    operator_delete((undefined8 *)(local_108 + -0x18));
                  }
                }
              }
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f8), GH_ARG(*(int *)(self + 0x32c8e8)));
              plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_f8), GH_ARG(0), GH_ARG("af_main_"), GH_ARG(8));
              local_d0 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_start"), GH_ARG(6));
              local_110 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_118), GH_ARG("1"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_110), GH_ARG((undefined *)&local_118))
              ;
              if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_118 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_118 + -0x18));
                }
              }
              if ((undefined8 *)(local_110 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_110 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_110 + -0x18));
                }
              }
              if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_d0 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_d0 + -0x18));
                }
              }
              puVar16 = (undefined8 *)(local_f8 + -0x18);
              if (puVar16 != &DAT_00d40300) {
                piVar27 = (int *)(local_f8 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                goto LAB_004468f0;
              }
            }
            if ((((0 < *(int *)(self + 0x32c3fc)) || (0 < *(int *)(self + 0x32c400))) ||
                (0 < *(int *)(self + 0x32c404))) && (*(int *)(self + 0x1964) == -1)) {
              FUN_009d4eac(GH_ARG(&local_120), GH_ARG("FirstPlayFriends"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(4), GH_ARG((undefined *)&local_120));
              puVar16 = (undefined8 *)(local_120 + -0x18);
              if (puVar16 != &DAT_00d40300) {
                piVar27 = (int *)(local_120 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                goto LAB_00446b64;
              }
            }
          }
        }
        else {
          *(undefined4 *)(self + 0x32ba24) = 0x1194;
          *(undefined4 *)(self + 0x1ae8) = 0x16;
          if (*(int *)(self + 0x1958) == -1) {
            FUN_009d4eac(GH_ARG(&local_128), GH_ARG("FirstPlayJumpJump"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(2), GH_ARG((undefined *)&local_128));
            if ((undefined8 *)(local_128 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_128 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_128 + -0x18));
              }
            }
          }
          FUN_009d4eac(GH_ARG(&local_130), GH_ARG("af_jump_1_start"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_138), GH_ARG("1"), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_130), GH_ARG((undefined *)&local_138));
          if ((undefined8 *)(local_138 + -0x18) != &DAT_00d40300) {
            piVar27 = (int *)(local_138 + -8);
            do {
              iVar23 = *piVar27;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar10) {
                *piVar27 = iVar23 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar23 < 1) {
              operator_delete((undefined8 *)(local_138 + -0x18));
            }
          }
          if ((undefined8 *)(local_130 + -0x18) != &DAT_00d40300) {
            piVar27 = (int *)(local_130 + -8);
            do {
              iVar23 = *piVar27;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar10) {
                *piVar27 = iVar23 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar23 < 1) {
              operator_delete((undefined8 *)(local_130 + -0x18));
            }
          }
          if ((((0 < *(int *)(self + 0x32c3fc)) || (0 < *(int *)(self + 0x32c400))) ||
              (0 < *(int *)(self + 0x32c404))) && (*(int *)(self + 0x1964) == -1)) {
            FUN_009d4eac(GH_ARG(&local_140), GH_ARG("FirstPlayFriends"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(4), GH_ARG((undefined *)&local_140));
            puVar16 = (undefined8 *)(local_140 + -0x18);
            if (puVar16 != &DAT_00d40300) {
              piVar27 = (int *)(local_140 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
LAB_00446b64:
              if (iVar23 < 1) {
                operator_delete(puVar16);
              }
            }
          }
        }
        *(undefined4 *)(self + 0xbc8) = 0;
        *(undefined4 *)(self + 0xc04) = 0;
        *(undefined8 *)(self + 3000) = *(undefined8 *)(self + 0xbb0);
        *(int *)(self + 0x32c150) = *(int *)(self + 0x32c178) / 10;
        piVar27 = (int *)(self + 0x32c3fc);
        if (*piVar27 == 0) {
          piVar28 = (int *)(self + 0x32c400);
          iVar23 = *piVar28;
          if (iVar23 < 1) goto joined_r0x004428b8;
          iVar18 = *(int *)(self + 0x32c404);
          if (iVar18 < 1) {
            if (*(int *)(self + 0x32c404) != 0) goto LAB_004428dc;
            goto LAB_004428d4;
          }
          *piVar27 = iVar23;
          *piVar28 = iVar18;
          *(int *)(self + 0x32c404) = 0;
        }
        else {
          if (*piVar27 < 1) goto LAB_004428dc;
          piVar27 = (int *)(self + 0x32c400);
          iVar23 = *piVar27;
joined_r0x004428b8:
          if (iVar23 == 0) {
            piVar28 = (int *)(self + 0x32c404);
            iVar23 = *piVar28;
            if (0 < iVar23) {
LAB_004428d4:
              *piVar27 = iVar23;
              *piVar28 = 0;
            }
          }
        }
LAB_004428dc:
        if (*(int *)(self + 0x32c9ac) < 1) {
          *(int *)(self + 0x32ba94) =
               *(int *)((gh_long)(self + 0x8d16c) + (gh_long)*(int *)(self + 0x32c8e8) * 4) *
               *(int *)(self + 0x8d16c);
          iVar23 = *(int *)((gh_long)(self + 0x8d264) + (gh_long)*(int *)(self + 0x32c8e8) * 4) *
                   *(int *)(self + 0x8d264);
        }
        else {
          *(undefined4 *)(self + 0x32ba94) = 0xc;
          iVar23 = 7;
        }
        *(int *)(self + 0x32ba98) = iVar23;
        *(undefined4 *)(self + 0x32c99c) = 0;
        *(undefined4 *)(self + 0x32c140) = 0;
LAB_00442974:
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      }
      else {
        puVar4 = (uint *)(self + 0x32c994);
        uVar20 = *puVar4;
        if ((int)uVar20 < 3) {
          if ((((iVar19 < iVar18 + 0x32) && (iVar23 + 0x18d < iVar24)) &&
              ((iVar24 < iVar23 + 0x1dd && (iVar18 + -0x5a < iVar19)))) ||
             ((((iVar19 < iVar18 + 0x151 && (iVar23 + 0x42 < iVar24)) && (iVar24 < iVar23 + 0xce))
              && (iVar18 + 0xf7 < iVar19)))) {
            uVar20 = uVar20 + 1;
            goto LAB_00441540;
          }
          if (0 < (int)uVar20) goto LAB_004414f0;
        }
        else {
LAB_004414f0:
          if ((((iVar19 < iVar18 + 0x32) && (iVar24 - 1U < 0x4f)) && (iVar18 + -0x5a < iVar19)) ||
             (((iVar19 < iVar18 + 0x151 && (iVar23 + -0xd2 < iVar24)) &&
              ((iVar24 < iVar23 + -0x46 && (iVar18 + 0xf7 < iVar19)))))) {
            uVar20 = uVar20 - 1;
LAB_00441540:
            *puVar4 = uVar20;
            *(undefined4 *)(self + 0x32c978) = 0;
            if (*(int *)(self + 0x32c160) != 0) break;
            lVar25 = 0x13b0;
            goto LAB_00441c1c;
          }
        }
        uVar15 = 0;
        iVar23 = iVar23 + -0x18e;
        do {
          uVar42 = (uint)uVar15;
          if ((((uVar42 < 4) && (iVar19 < iVar18 + -0x4b)) && (iVar18 + -0xa7 < iVar19)) &&
             ((iVar23 < iVar24 && (iVar24 < iVar23 + 0xc0)))) {
LAB_00444ca0:
            if (*(int *)(self + 0x32c160) == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1398)), GH_ARG(false));
              uVar20 = *puVar4;
            }
LAB_00444cc4:
            *(uint *)(self + 0x32c978) = uVar42;
            bVar10 = true;
            goto joined_r0x00444cd8;
          }
          if ((((((uVar42 & 0xfffffffc) == 4) &&
                ((iVar19 < iVar18 + 0x14 && (iVar18 + -0x48 < iVar19)))) && (iVar23 + -800 < iVar24)
               ) && (iVar24 < iVar23 + -0x260)) ||
             ((((7 < uVar42 && (iVar19 < iVar18 + 0x74)) && (iVar18 + 0x18 < iVar19)) &&
              ((iVar23 + -0x640 < iVar24 && (iVar24 < iVar23 + -0x580)))))) {
            bVar10 = false;
            if ((uVar20 == 1) && (5 < (int)uVar42)) {
              if (*(int *)(self + uVar15 * 4 + 0x32c304) < 1) goto LAB_00444c84;
              if ((((uVar42 & 0xfffffffc) != 4) ||
                  (iVar34 = iVar18 + ((uint)(uVar15 >> 2) & 0x3fffffff) * 0x5f,
                  iVar34 + -0x58 <= iVar19)) ||
                 ((iVar24 <= iVar23 + -0x2a0 ||
                  ((iVar23 + -0x25a <= iVar24 || (iVar19 <= iVar34 + -0xa8)))))) {
                if ((int)uVar42 < 8) {
                  uVar20 = 1;
                  goto LAB_00444ca0;
                }
                iVar18 = iVar18 + ((uint)(uVar15 >> 2) & 0x3fffffff) * 0x5f;
                bVar10 = false;
                if ((((iVar18 + -0x58 <= iVar19) || (iVar24 <= iVar23 + -0x5c0)) ||
                    (iVar23 + -0x57a <= iVar24)) || (iVar19 <= iVar18 + -0xa8)) goto LAB_00444c88;
              }
              puVar26 = (uint *)(self + 0x32c3fc);
              uVar20 = *puVar26;
              if (uVar20 == uVar42) {
LAB_00442aa0:
                bVar10 = false;
                *puVar26 = 0;
              }
              else {
                puVar5 = (uint *)(self + 0x32c400);
                uVar7 = *puVar5;
                if (uVar7 == uVar42) {
                  bVar10 = false;
                  *puVar5 = 0;
                }
                else {
                  puVar6 = (uint *)(self + 0x32c404);
                  uVar8 = *puVar6;
                  if (uVar8 == uVar42) {
                    puVar26 = (uint *)(self + 0x32c404);
                    if (*puVar26 == uVar42) goto LAB_00442aa0;
                  }
                  else {
                    if (((uVar20 != 0) && (uVar7 != 0)) && (uVar8 != 0)) {
                      if (5 < uVar20 - 6) {
                        *puVar26 = 0;
                      }
                      if (5 < uVar7 - 6) {
                        *puVar5 = 0;
                      }
                      if (5 < uVar8 - 6) {
                        *puVar6 = 0;
                      }
                      if (*(int *)(self + 0x32c160) == 0) {
                        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
                      }
                      bVar10 = true;
                      goto LAB_00444c88;
                    }
                    if (uVar20 == 0) {
                      *puVar26 = uVar42;
                    }
                    else if (uVar7 == 0) {
                      *puVar5 = uVar42;
                    }
                    else if (uVar8 == 0) {
                      *puVar6 = uVar42;
                    }
                    if (*(int *)(self + 0x32c7a4) == -1) {
                      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(7), GH_ARG(0));
                    }
                  }
LAB_00444c84:
                  bVar10 = false;
                }
              }
            }
LAB_00444c88:
            uVar20 = *puVar4;
            if (((int)uVar42 < 10) || (uVar20 != 2)) {
              if (!bVar10) goto LAB_00444ca0;
              goto LAB_00444cc4;
            }
            goto LAB_00444da4;
          }
          uVar15 = uVar15 + 1;
          iVar23 = iVar23 + 200;
        } while ((int)uVar15 - 1U < 0xb);
        bVar10 = false;
joined_r0x00444cd8:
        if (3 < uVar20) break;
        switch(uVar20) {
        case 0:
          if (bVar10) goto switchD_0043ba5c_caseD_1;
          if (*(int *)(self + 0x1164) + 0xe3 <= (int)*pfVar2) goto switchD_0043ba5c_caseD_1;
          if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 0xb0) ||
              (*(int *)(self + 0x1160) + 0x1b4 <= (int)*pfVar1)) ||
             ((int)*pfVar2 <= *(int *)(self + 0x1164) + 0x7f)) goto switchD_0043ba5c_caseD_1;
          piVar27 = (int *)(self + 0x32c978);
          iVar18 = *piVar27;
          if (iVar18 == 1) {
            piVar27 = (int *)(self + 0x32c178);
            piVar28 = (int *)(self + 0x32c1c8);
            iVar23 = *piVar28;
            if (*piVar27 < iVar23) {
              iVar23 = (int)((ulong)((gh_long)*piVar27 * 0x66666667) >> 0x20);
              uVar20 = 0x324c;
LAB_0044592c:
              iVar19 = *(int *)(self + 0x32c160);
              iVar23 = (int)(((float)*(int *)(self + (uVar20 | 0x10000)) / 10.0) *
                             (float)*(int *)(self + (gh_long)((iVar23 >> 2) - (iVar23 >> 0x1f)) * 4 +
                                                    0x13838) +
                            (float)*(int *)(self + (uVar20 | 0x10000)));
              if (iVar23 <= *(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)) {
                if (iVar19 == 0) {
                  SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                }
                bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-iVar23));
                *piVar27 = *piVar27 + 10;
                goto LAB_0043efbc;
              }
              goto joined_r0x00445994;
            }
            if (0x59 < iVar23) goto switchD_0043ba5c_caseD_1;
            iVar18 = (int)((ulong)((gh_long)iVar23 * 0x66666667) >> 0x20);
            uVar20 = 13000;
          }
          else {
            if (iVar18 != 0) {
              piVar28 = (int *)(self + (gh_long)(iVar18 + 0x1f) * 4 + 0x32c148);
              iVar23 = *piVar28;
              if (iVar23 != 0) {
                piVar33 = (int *)(self + (gh_long)(iVar18 + 0xb) * 4 + 0x32c148);
                iVar24 = iVar23 - *piVar33;
                if (iVar24 != 0 && *piVar33 <= iVar23) {
                  piVar29 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x1333c);
                  iVar19 = *(int *)(self + 0x32c160);
                  if (*piVar29 * (iVar24 / 10) <=
                      *(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)) {
                    if (iVar19 == 0) {
                      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                      iVar23 = *piVar27;
                      piVar28 = (int *)(self + (gh_long)(iVar23 + 0x1f) * 4 + 0x32c148);
                      piVar29 = (int *)(self + (gh_long)(iVar23 + 1) * 4 + 0x1333c);
                      piVar33 = (int *)(self + (gh_long)(iVar23 + 0xb) * 4 + 0x32c148);
                    }
                    bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-(*piVar29 * ((*piVar28 - *piVar33) / 10))));
                    *(undefined4 *)(self + (gh_long)(*piVar27 + 0xb) * 4 + 0x32c148) =
                         *(undefined4 *)(self + (gh_long)(*piVar27 + 0x1f) * 4 + 0x32c148);
                    goto LAB_0043efbc;
                  }
                  goto joined_r0x00445994;
                }
                if (8 < *(int *)(self + (gh_long)(iVar18 + 0x33) * 4 + 0x32c148))
                goto switchD_0043ba5c_caseD_1;
                iVar23 = *(int *)(self + 0x32c160);
                iVar18 = (int)(((float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x132c0) / 10.0) *
                               (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(iVar18 + 0x33) *
                                                                            4 + 0x32c148) * 4 +
                                                      0x13838) +
                              (float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x132c0));
                if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18)
                goto LAB_0044645c;
                if (iVar23 == 0) {
                  SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
                }
                bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
                uVar20 = *piVar27 + 0x1f;
                uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
                *(int *)(self + uVar15 + 0x32c148) =
                     (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                           (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x33) * 4
                                                                        + 0x32c148) * 4 + 0x137e8) +
                          (float)*(int *)(self + uVar15 + 0x32c148));
                *(undefined4 *)(self + (gh_long)(*piVar27 + 0xb) * 4 + 0x32c148) =
                     *(undefined4 *)(self + (gh_long)(*piVar27 + 0x1f) * 4 + 0x32c148);
                if (*(int *)(self + (gh_long)(*piVar27 + 0x47) * 4 + 0x32c148) < 1) {
                  switch(*piVar27) {
                  case 2:
                    iVar23 = 0x7e;
                    break;
                  case 3:
                    iVar23 = 0x6c;
                    break;
                  case 4:
                  case 8:
                    iVar23 = 0x75;
                    break;
                  case 5:
                    iVar23 = 0x13b;
                    break;
                  case 6:
                    iVar23 = 0x10e;
                    break;
                  case 7:
                    iVar23 = 0x87;
                    break;
                  case 9:
                    iVar23 = 0xd8;
                    break;
                  case 10:
                    iVar23 = 0x5a;
                    break;
                  case 0xb:
                    iVar23 = 0x99;
                    break;
                  default:
                    goto switchD_004461f0_default;
                  }
                  *(int *)(self + (gh_long)(*piVar27 + 0x47) * 4 + 0x32c148) = iVar23;
                }
switchD_004461f0_default:
                uVar20 = *piVar27 + 0x47;
                uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
                *(int *)(self + uVar15 + 0x32c148) =
                     (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                           (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x33) * 4
                                                                        + 0x32c148) * 4 + 0x13888) +
                          (float)*(int *)(self + uVar15 + 0x32c148));
                *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c214) =
                     *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c214) + 1;
                goto LAB_0043efbc;
              }
              piVar28 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x13244);
              iVar19 = *(int *)(self + 0x32c160);
              if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < *piVar28)
              goto joined_r0x00445994;
              if (iVar19 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                piVar28 = (int *)(self + (gh_long)*piVar27 * 4 + 0x13248);
              }
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-*piVar28));
              *(undefined4 *)(self + (gh_long)(*piVar27 + 0x1f) * 4 + 0x32c148) =
                   *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x133b8);
              *(undefined4 *)(self + (gh_long)(*piVar27 + 0xb) * 4 + 0x32c148) =
                   *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x133b8);
              if (*(int *)(self + (gh_long)(*piVar27 + 0x47) * 4 + 0x32c148) == 0) {
                switch(*piVar27) {
                case 2:
                  iVar23 = 0x7e;
                  break;
                case 3:
                  iVar23 = 0x6c;
                  break;
                case 4:
                case 8:
                  iVar23 = 0x75;
                  break;
                case 5:
                  iVar23 = 0x13b;
                  break;
                case 6:
                  iVar23 = 0x10e;
                  break;
                case 7:
                  iVar23 = 0x87;
                  break;
                case 9:
                  iVar23 = 0xd8;
                  break;
                case 10:
                  iVar23 = 0x5a;
                  break;
                case 0xb:
                  iVar23 = 0x99;
                  break;
                default:
                  goto switchD_00445e6c_default;
                }
                *(int *)(self + (gh_long)(*piVar27 + 0x47) * 4 + 0x32c148) = iVar23;
              }
switchD_00445e6c_default:
              bzStateGame__AitemSsave_003ab270(GH_ARG(self));
              if (*(int *)(self + 0x32c7dc) == -1) {
                *(int *)(self + 0x32c7dc) = -2;
              }
              FUN_003af38c(GH_ARG(&local_f8), GH_ARG("item_"), GH_ARG(&DAT_00d23d28 + (gh_long)*piVar27 * 8));
              plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_f8), GH_ARG(&DAT_00b008ce), GH_ARG(1));
              local_d0 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_150), GH_ARG(*(int *)(self + (gh_long)*piVar27 * 4 + 0x13248)));
              uVar15 = *(gh_long *)(local_150 + -0x18) + *(gh_long *)(local_d0 + -0x18);
              if ((*(ulong *)(local_d0 + -0x10) < uVar15) &&
                 (uVar15 <= *(ulong *)(local_150 + -0x10))) {
                plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              }
              else {
                plVar12 = (gh_long *)FUN_009d5908(GH_ARG(&local_d0), GH_ARG(&local_150));
              }
              local_148 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_158), GH_ARG("1"), GH_ARG(&local_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_148), GH_ARG((undefined *)&local_158))
              ;
              if ((undefined8 *)(local_158 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_158 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_158 + -0x18));
                }
              }
              if ((undefined8 *)(local_148 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_148 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_148 + -0x18));
                }
              }
              if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_150 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_150 + -0x18));
                }
              }
              if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_d0 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_d0 + -0x18));
                }
              }
              puVar16 = (undefined8 *)(local_f8 + -0x18);
              if (puVar16 == &DAT_00d40300) goto switchD_0043ba5c_caseD_1;
              piVar27 = (int *)(local_f8 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              goto LAB_004471e4;
            }
            piVar27 = (int *)(self + 0x32c15c);
            piVar28 = (int *)(self + 0x32c214);
            iVar23 = *piVar28;
            if (*piVar27 < iVar23) {
              iVar23 = (int)((ulong)((gh_long)*piVar27 * 0x66666667) >> 0x20);
              uVar20 = 0x3248;
              goto LAB_0044592c;
            }
            if (0x59 < iVar23) goto switchD_0043ba5c_caseD_1;
            iVar18 = (int)((ulong)((gh_long)iVar23 * 0x66666667) >> 0x20);
            uVar20 = 0x32c4;
          }
          iVar23 = *(int *)(self + 0x32c160);
          iVar18 = (int)(((float)*(int *)(self + (uVar20 | 0x10000)) / 10.0) *
                         (float)*(int *)(self + (gh_long)((iVar18 >> 2) - (iVar18 >> 0x1f)) * 4 +
                                                0x13838) +
                        (float)*(int *)(self + (uVar20 | 0x10000)));
          if (iVar18 <= *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168)) {
            if (iVar23 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
            }
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
            *piVar28 = *piVar28 + 10;
LAB_0043efbc:
            bzStateGame__AitemSsave_003ab270(GH_ARG(self));
            goto switchD_0043ba5c_caseD_1;
          }
LAB_0044645c:
          if (iVar23 == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
          }
          uVar44 = 0x300000001;
          uVar22 = 3;
          break;
        case 1:
          if (bVar10) {
LAB_00444fe4:
            iVar23 = *(int *)(self + 0x32c978);
            if (iVar23 < 6) goto switchD_0043ba5c_caseD_1;
            if (*(int *)(self + 0x1164) + 0xd2 <= (int)*pfVar2) goto switchD_0043ba5c_caseD_1;
            if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 0x50) ||
                (*(int *)(self + 0x1160) + 0xb4 <= (int)*pfVar1)) ||
               ((int)*pfVar2 <= *(int *)(self + 0x1164) + 0x82)) goto switchD_0043ba5c_caseD_1;
            if ((*(int *)(self + (gh_long)(iVar23 + 0x5b) * 4 + 0x32c148) < 1) ||
               (*(int *)(self + (gh_long)(iVar23 + 0x6f) * 4 + 0x32c148) < 1)) {
LAB_004464c4:
              if (*(int *)(self + 0x32c160) != 0) goto switchD_0043ba5c_caseD_1;
              lVar25 = 0x14a0;
            }
            else {
              piVar27 = (int *)(self + 0x32c3fc);
              iVar18 = *piVar27;
              if (iVar18 == iVar23) {
                *piVar27 = 0;
              }
              else {
                piVar28 = (int *)(self + 0x32c400);
                iVar19 = *piVar28;
                if (iVar19 != iVar23) {
                  piVar33 = (int *)(self + 0x32c404);
                  iVar24 = *piVar33;
                  if (iVar24 != iVar23) {
                    if (((iVar18 == 0) || (iVar19 == 0)) || (iVar24 == 0)) {
                      if (iVar18 == 0) {
                        *piVar27 = iVar23;
                      }
                      else if (iVar19 == 0) {
                        *piVar28 = iVar23;
                      }
                      else if (iVar24 == 0) {
                        *piVar33 = iVar23;
                      }
                      if (*(int *)(self + 0x32c160) == 0) {
                        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1398)), GH_ARG(false));
                      }
                      if (*(int *)(self + 0x32c7a4) != -1) goto switchD_0043ba5c_caseD_1;
                      iVar23 = 7;
                      goto LAB_0043f348;
                    }
                    if (5 < iVar18 - 6U) {
                      *piVar27 = 0;
                    }
                    if (5 < iVar19 - 6U) {
                      *piVar28 = 0;
                    }
                    if (5 < iVar24 - 6U) {
                      *piVar33 = 0;
                    }
                    goto LAB_004464c4;
                  }
                  piVar28 = (int *)(self + 0x32c404);
                  if (*piVar28 != iVar23) goto LAB_00445ba0;
                }
                *piVar28 = 0;
              }
LAB_00445ba0:
              if (*(int *)(self + 0x32c160) != 0) goto switchD_0043ba5c_caseD_1;
              lVar25 = 0x1398;
            }
            goto LAB_0043ebbc;
          }
          if (*(int *)(self + 0x1164) + 0xe3 <= (int)*pfVar2) goto LAB_00444fe4;
          if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 0xb0) ||
              (*(int *)(self + 0x1160) + 0x1b4 <= (int)*pfVar1)) ||
             ((int)*pfVar2 <= *(int *)(self + 0x1164) + 0x7f)) goto LAB_00444fe4;
          piVar27 = (int *)(self + 0x32c978);
          iVar18 = *piVar27;
          if (iVar18 == 0) {
            piVar27 = (int *)(self + 0x32c3f8);
            piVar28 = (int *)(self + 0x32c354);
            iVar18 = *piVar28;
            if (*piVar27 < iVar18) {
              iVar23 = *(int *)(self + 0x134b4);
              iVar19 = *(int *)(self + 0x32c160);
              if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < iVar23)
              goto joined_r0x00445994;
              if (iVar19 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                iVar23 = *(int *)(self + 0x134b4);
              }
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-iVar23));
              *piVar27 = *piVar27 + 1;
              goto LAB_0043efbc;
            }
            if (0x1d < iVar18) goto switchD_0043ba5c_caseD_1;
            iVar23 = *(int *)(self + 0x32c160);
            iVar18 = (int)(((float)*(int *)(self + 0x13720) / 10.0) *
                           (float)*(int *)(self + (gh_long)(iVar18 / 5) * 4 + 0x13838) +
                          (float)*(int *)(self + 0x13720));
            if (iVar18 <= *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168)) {
              if (iVar23 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
              }
              bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
              *piVar28 = *piVar28 + 5;
              goto LAB_0043efbc;
            }
            goto LAB_0044645c;
          }
          if (iVar18 < 6) {
            piVar28 = (int *)(self + (gh_long)(iVar18 + 0x2a) * 4 + 0x32c148);
            iVar23 = *piVar28;
            if (iVar23 != 0) {
              piVar33 = (int *)(self + (gh_long)(iVar18 + 0x16) * 4 + 0x32c148);
              iVar24 = iVar23 - *piVar33;
              if (iVar24 != 0 && *piVar33 <= iVar23) {
                piVar29 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x136a0);
                iVar19 = *(int *)(self + 0x32c160);
                if (*piVar29 * (iVar24 / 10) <=
                    *(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)) {
                  if (iVar19 == 0) {
                    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                    iVar23 = *piVar27;
                    piVar28 = (int *)(self + (gh_long)(iVar23 + 0x2a) * 4 + 0x32c148);
                    piVar29 = (int *)(self + (gh_long)(iVar23 + 1) * 4 + 0x136a0);
                    piVar33 = (int *)(self + (gh_long)(iVar23 + 0x16) * 4 + 0x32c148);
                  }
                  bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-(*piVar29 * ((*piVar28 - *piVar33) / 10))));
                  *(undefined4 *)(self + (gh_long)(*piVar27 + 0x16) * 4 + 0x32c148) =
                       *(undefined4 *)(self + (gh_long)(*piVar27 + 0x2a) * 4 + 0x32c148);
                  goto LAB_0043efbc;
                }
                goto joined_r0x00445994;
              }
              if (8 < *(int *)(self + (gh_long)(iVar18 + 0x3e) * 4 + 0x32c148))
              goto switchD_0043ba5c_caseD_1;
              iVar23 = *(int *)(self + 0x32c160);
              iVar18 = (int)(((float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x1371c) / 10.0) *
                             (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(iVar18 + 0x3e) * 4
                                                                          + 0x32c148) * 4 + 0x13838)
                            + (float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x1371c));
              if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18) goto LAB_0044645c;
              if (iVar23 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
              }
              bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
              uVar20 = *piVar27 + 0x2a;
              uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
              *(int *)(self + uVar15 + 0x32c148) =
                   (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                         (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x3e) * 4 +
                                                                      0x32c148) * 4 + 0x137e8) +
                        (float)*(int *)(self + uVar15 + 0x32c148));
              *(undefined4 *)(self + (gh_long)(*piVar27 + 0x16) * 4 + 0x32c148) =
                   *(undefined4 *)(self + (gh_long)(*piVar27 + 0x2a) * 4 + 0x32c148);
              if (*(int *)(self + (gh_long)(*piVar27 + 0x52) * 4 + 0x32c148) < 1) {
                switch(*piVar27) {
                case 1:
                  iVar23 = 0x4e;
                  break;
                case 2:
                  iVar23 = 0x60;
                  break;
                case 3:
                  iVar23 = 0x72;
                  break;
                case 4:
                  iVar23 = 0x84;
                  break;
                case 5:
                  iVar23 = 0x9c;
                  break;
                default:
                  goto switchD_004463bc_default;
                }
                *(int *)(self + (gh_long)(*piVar27 + 0x52) * 4 + 0x32c148) = iVar23;
              }
switchD_004463bc_default:
              uVar20 = *piVar27 + 0x52;
              uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
              *(int *)(self + uVar15 + 0x32c148) =
                   (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                         (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x3e) * 4 +
                                                                      0x32c148) * 4 + 0x13888) +
                        (float)*(int *)(self + uVar15 + 0x32c148));
              *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c240) =
                   *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c240) + 1;
              goto LAB_0043efbc;
            }
            piVar28 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x134b0);
            iVar19 = *(int *)(self + 0x32c160);
            if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < *piVar28)
            goto joined_r0x00445994;
            if (iVar19 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
              piVar28 = (int *)(self + (gh_long)*piVar27 * 4 + 0x134b4);
            }
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-*piVar28));
            *(undefined4 *)(self + (gh_long)(*piVar27 + 0x2a) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x13624);
            *(undefined4 *)(self + (gh_long)(*piVar27 + 0x16) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x13624);
            if (*(int *)(self + (gh_long)(*piVar27 + 0x52) * 4 + 0x32c148) == 0) {
              switch(*piVar27) {
              case 1:
                iVar23 = 0x4e;
                break;
              case 2:
                iVar23 = 0x60;
                break;
              case 3:
                iVar23 = 0x72;
                break;
              case 4:
                iVar23 = 0x84;
                break;
              case 5:
                iVar23 = 0x9c;
                break;
              default:
                goto switchD_00445f68_default;
              }
              *(int *)(self + (gh_long)(*piVar27 + 0x52) * 4 + 0x32c148) = iVar23;
            }
switchD_00445f68_default:
            bzStateGame__AitemSsave_003ab270(GH_ARG(self));
            if (*(int *)(self + 0x32c7dc) == -1) {
              *(int *)(self + 0x32c7dc) = -2;
            }
            FUN_003af38c(GH_ARG(&local_f8), GH_ARG("item_"), GH_ARG(&DAT_00d23d88 + *piVar27));
            plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_f8), GH_ARG(&DAT_00b008ce), GH_ARG(1));
            local_d0 = *plVar12;
            *plVar12 = (gh_long)&DAT_00d40318;
            cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_150), GH_ARG(*(int *)(self + (gh_long)*piVar27 * 4 + 0x134b4)));
            uVar15 = *(gh_long *)(local_150 + -0x18) + *(gh_long *)(local_d0 + -0x18);
            if ((*(ulong *)(local_d0 + -0x10) < uVar15) && (uVar15 <= *(ulong *)(local_150 + -0x10))
               ) {
              plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            }
            else {
              plVar12 = (gh_long *)FUN_009d5908(GH_ARG(&local_d0), GH_ARG(&local_150));
            }
            local_160 = *plVar12;
            *plVar12 = (gh_long)&DAT_00d40318;
            puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_168), GH_ARG("1"), GH_ARG(&local_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_160), GH_ARG((undefined *)&local_168));
            if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_168 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_168 + -0x18));
              }
            }
            if ((undefined8 *)(local_160 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_160 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_160 + -0x18));
              }
            }
            if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_150 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_150 + -0x18));
              }
            }
            if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_d0 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_d0 + -0x18));
              }
            }
            puVar16 = (undefined8 *)(local_f8 + -0x18);
            if (puVar16 == &DAT_00d40300) goto switchD_0043ba5c_caseD_1;
            piVar27 = (int *)(local_f8 + -8);
            do {
              iVar23 = *piVar27;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar10) {
                *piVar27 = iVar23 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            goto LAB_004471e4;
          }
          piVar28 = (int *)(self + (gh_long)(iVar18 + 0x6f) * 4 + 0x32c148);
          iVar23 = *piVar28;
          if (iVar23 == 0) {
            piVar28 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x134b0);
            iVar19 = *(int *)(self + 0x32c160);
            if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < *piVar28)
            goto joined_r0x00445994;
            if (iVar19 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
              piVar28 = (int *)(self + (gh_long)*piVar27 * 4 + 0x134b4);
            }
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-*piVar28));
            *(undefined4 *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x13624);
            *(undefined4 *)(self + (gh_long)(*piVar27 + 0x5b) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(*piVar27 + 1) * 4 + 0x13624);
            if (*(int *)(self + (gh_long)(*piVar27 + 0x97) * 4 + 0x32c148) == 0) {
              switch(*piVar27) {
              case 6:
                iVar23 = 0x60;
                break;
              case 7:
                iVar23 = 0xc0;
                break;
              case 8:
                iVar23 = 0x42;
                break;
              case 9:
                iVar23 = 0x48;
                break;
              case 10:
                iVar23 = 0xb4;
                break;
              case 0xb:
                iVar23 = 0xe4;
                break;
              default:
                goto switchD_00446064_default;
              }
              *(int *)(self + (gh_long)(*piVar27 + 0x97) * 4 + 0x32c148) = iVar23;
            }
switchD_00446064_default:
            cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_d0), GH_ARG(*piVar27 + -5));
            plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_d0), GH_ARG(0), GH_ARG("item_friend"), GH_ARG(0xb));
            local_170 = *plVar12;
            *plVar12 = (gh_long)&DAT_00d40318;
            puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_178), GH_ARG("1"), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_170), GH_ARG((undefined *)&local_178));
            if ((undefined8 *)(local_178 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_178 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_178 + -0x18));
              }
            }
            if ((undefined8 *)(local_170 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_170 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_170 + -0x18));
              }
            }
            if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
              piVar27 = (int *)(local_d0 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar23 < 1) {
                operator_delete((undefined8 *)(local_d0 + -0x18));
              }
            }
            goto LAB_0043efbc;
          }
          piVar33 = (int *)(self + (gh_long)(iVar18 + 0x5b) * 4 + 0x32c148);
          iVar24 = iVar23 - *piVar33;
          if (iVar24 == 0 || iVar23 < *piVar33) {
            if (8 < *(int *)(self + (gh_long)(iVar18 + 0x83) * 4 + 0x32c148))
            goto switchD_0043ba5c_caseD_1;
            iVar23 = *(int *)(self + 0x32c160);
            iVar18 = (int)(((float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x1371c) / 10.0) *
                           (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(iVar18 + 0x83) * 4 +
                                                                        0x32c148) * 4 + 0x13838) +
                          (float)*(int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x1371c));
            if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18) goto LAB_0044645c;
            if (iVar23 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
            }
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
            uVar20 = *piVar27 + 0x6f;
            uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
            *(int *)(self + uVar15 + 0x32c148) =
                 (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                       (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x83) * 4 +
                                                                    0x32c148) * 4 + 0x137e8) +
                      (float)*(int *)(self + uVar15 + 0x32c148));
            *(undefined4 *)(self + (gh_long)(*piVar27 + 0x5b) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148);
            if (*(int *)(self + (gh_long)(*piVar27 + 0x97) * 4 + 0x32c148) < 1) {
              switch(*piVar27) {
              case 6:
                iVar23 = 0x60;
                break;
              case 7:
                iVar23 = 0xc0;
                break;
              case 8:
                iVar23 = 0x42;
                break;
              case 9:
                iVar23 = 0x48;
                break;
              case 10:
                iVar23 = 0xb4;
                break;
              case 0xb:
                iVar23 = 0xe4;
                break;
              default:
                goto switchD_00446658_default;
              }
              *(int *)(self + (gh_long)(*piVar27 + 0x97) * 4 + 0x32c148) = iVar23;
            }
switchD_00446658_default:
            uVar20 = *piVar27 + 0x97;
            uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
            *(int *)(self + uVar15 + 0x32c148) =
                 (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                       (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(*piVar27 + 0x83) * 4 +
                                                                    0x32c148) * 4 + 0x13888) +
                      (float)*(int *)(self + uVar15 + 0x32c148));
            *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c354) =
                 *(int *)(self + (gh_long)*piVar27 * 4 + 0x32c354) + 1;
            goto LAB_0043efbc;
          }
          piVar29 = (int *)(self + (gh_long)(iVar18 + 1) * 4 + 0x136a0);
          iVar19 = *(int *)(self + 0x32c160);
          if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < *piVar29 * (iVar24 / 10))
          goto joined_r0x00445994;
          if (iVar19 == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
            iVar23 = *piVar27;
            piVar28 = (int *)(self + (gh_long)(iVar23 + 0x6f) * 4 + 0x32c148);
            piVar29 = (int *)(self + (gh_long)(iVar23 + 1) * 4 + 0x136a0);
            piVar33 = (int *)(self + (gh_long)(iVar23 + 0x5b) * 4 + 0x32c148);
          }
          bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-(*piVar29 * ((*piVar28 - *piVar33) / 10))));
          *(undefined4 *)(self + (gh_long)(*piVar27 + 0x5b) * 4 + 0x32c148) =
               *(undefined4 *)(self + (gh_long)(*piVar27 + 0x6f) * 4 + 0x32c148);
          *(undefined4 *)(self + (gh_long)*piVar27 * 4 + 0x32c3f0) = 0;
          goto LAB_00442974;
        case 2:
          if (bVar10) goto switchD_0043ba5c_caseD_1;
LAB_00444da4:
          if (*(int *)(self + 0x1164) + 0xe3 <= (int)*pfVar2) goto switchD_0043ba5c_caseD_1;
          if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 0xb0) ||
              (*(int *)(self + 0x1160) + 0x1b4 <= (int)*pfVar1)) ||
             ((int)*pfVar2 <= *(int *)(self + 0x1164) + 0x7f)) goto switchD_0043ba5c_caseD_1;
          puVar4 = (uint *)(self + 0x32c978);
          uVar20 = *puVar4;
          iVar23 = *(int *)(self + (gh_long)(int)(uVar20 + 0x136) * 4 + 0x32c148);
          if (iVar23 == 0) {
            if (*(int *)(self + (gh_long)(int)(uVar20 + 0x1f) * 4 + 0x1a1c) == 2) {
              iVar23 = (*(int *)(self + (gh_long)(int)(uVar20 + 3) * 4 + 0x13244) * 0x73) / 100;
              iVar19 = *(int *)(self + 0x32c160);
              if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < iVar23)
              goto joined_r0x00445994;
              if (iVar19 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
              }
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-iVar23));
              *(int *)(self + (gh_long)(int)(*puVar4 + 0x136) * 4 + 0x32c148) =
                   (*(int *)(self + (gh_long)(int)(*puVar4 + 3) * 4 + 0x133b8) * 0x82) / 100;
              *(int *)(self + (gh_long)(int)(*puVar4 + 300) * 4 + 0x32c148) =
                   (*(int *)(self + (gh_long)(int)(*puVar4 + 3) * 4 + 0x133b8) * 0x82) / 100;
              if (*(int *)(self + (gh_long)(int)(*puVar4 + 0x14a) * 4 + 0x32c148) == 0) {
                switch(*puVar4) {
                case 0:
                  iVar18 = 0x7e;
                  break;
                case 1:
                  iVar18 = 0x6c;
                  break;
                case 2:
                case 6:
                  iVar18 = 0x75;
                  break;
                case 3:
                  iVar18 = 0x13b;
                  break;
                case 4:
                  iVar18 = 0x10e;
                  break;
                case 5:
                  iVar18 = 0x87;
                  break;
                case 7:
                  iVar18 = 0xd8;
                  break;
                case 8:
                  iVar18 = 0x5a;
                  break;
                case 9:
                  iVar18 = 0x99;
                  break;
                default:
                  goto switchD_004457e4_default;
                }
                *(int *)(self + (gh_long)(int)(*puVar4 + 0x14a) * 4 + 0x32c148) = iVar18;
              }
switchD_004457e4_default:
              bzStateGame__AitemSsave_003ab270(GH_ARG(self));
              if (*(int *)(self + 0x32c7dc) == -1) {
                *(int *)(self + 0x32c7dc) = -2;
              }
              FUN_003af38c(GH_ARG(&local_f8), GH_ARG("itemup_"), GH_ARG(&DAT_00d23d38 + (gh_long)(int)*puVar4 * 8));
              plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_f8), GH_ARG(&DAT_00b008ce), GH_ARG(1));
              local_d0 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_150), GH_ARG(iVar23));
              uVar15 = *(gh_long *)(local_150 + -0x18) + *(gh_long *)(local_d0 + -0x18);
              if ((*(ulong *)(local_d0 + -0x10) < uVar15) &&
                 (uVar15 <= *(ulong *)(local_150 + -0x10))) {
                plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              }
              else {
                plVar12 = (gh_long *)FUN_009d5908(GH_ARG(&local_d0), GH_ARG(&local_150));
              }
              local_180 = *plVar12;
              *plVar12 = (gh_long)&DAT_00d40318;
              puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_188), GH_ARG("1"), GH_ARG(&local_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_180), GH_ARG((undefined *)&local_188))
              ;
              if ((undefined8 *)(local_188 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_188 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_188 + -0x18));
                }
              }
              if ((undefined8 *)(local_180 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_180 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_180 + -0x18));
                }
              }
              if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_150 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_150 + -0x18));
                }
              }
              if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
                piVar27 = (int *)(local_d0 + -8);
                do {
                  iVar23 = *piVar27;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar10) {
                    *piVar27 = iVar23 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar23 < 1) {
                  operator_delete((undefined8 *)(local_d0 + -0x18));
                }
              }
              puVar16 = (undefined8 *)(local_f8 + -0x18);
              if (puVar16 == &DAT_00d40300) goto switchD_0043ba5c_caseD_1;
              piVar27 = (int *)(local_f8 + -8);
              do {
                iVar23 = *piVar27;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar10) {
                  *piVar27 = iVar23 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              goto LAB_004471e4;
            }
            if (*(int *)(self + (gh_long)(int)(uVar20 + 0x1f) * 4 + 0x1a1c) == 0) {
              *(undefined8 *)(self + 0xba4) = 0x100000012;
              *(undefined4 *)(self + 0xbac) = 0;
              self[0xb01] = 1;
              self[0xb05] = 1;
              *(undefined4 *)(self + 0xaf4) = 8;
              cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(8), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x868)));
              goto LAB_0043c3fc;
            }
          }
          iVar18 = iVar23 - *(int *)(self + (gh_long)(int)(uVar20 + 300) * 4 + 0x32c148);
          if ((iVar18 == 0 || iVar23 < *(int *)(self + (gh_long)(int)(uVar20 + 300) * 4 + 0x32c148)) ||
             (*(int *)(self + (gh_long)(int)(uVar20 + 0x1f) * 4 + 0x1a1c) != 2)) {
            if ((8 < *(int *)(self + (gh_long)(int)(uVar20 + 0x140) * 4 + 0x32c148)) ||
               (*(int *)(self + (gh_long)(int)(uVar20 + 0x1f) * 4 + 0x1a1c) != 2))
            goto switchD_0043ba5c_caseD_1;
            iVar18 = ((int)(((float)*(int *)(self + (gh_long)(int)(uVar20 + 3) * 4 + 0x132c0) / 10.0) *
                            (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(int)(uVar20 + 0x140)
                                                                         * 4 + 0x32c148) * 4 +
                                                   0x13838) +
                           (float)*(int *)(self + (gh_long)(int)(uVar20 + 3) * 4 + 0x132c0)) * 0x73) /
                     100;
            iVar23 = *(int *)(self + 0x32c160);
            if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18) goto LAB_0044645c;
            if (iVar23 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
            }
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
            uVar20 = *puVar4 + 0x136;
            uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
            *(int *)(self + uVar15 + 0x32c148) =
                 (int)(((float)*(int *)(self + uVar15 + 0x32c148) / 10.0) *
                       (float)*(int *)(self + (gh_long)*(int *)(self + (gh_long)(int)(*puVar4 + 0x140) * 4
                                                                    + 0x32c148) * 4 + 0x137e8) +
                      (float)*(int *)(self + uVar15 + 0x32c148));
            *(int *)(self + (gh_long)(int)*puVar4 * 4 + 0x32c620) =
                 (*(int *)(self + (gh_long)(int)*puVar4 * 4 + 0x32c620) * 0x82) / 100;
            *(undefined4 *)(self + (gh_long)(int)(*puVar4 + 300) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(int)(*puVar4 + 0x136) * 4 + 0x32c148);
            lVar25 = (gh_long)(int)*puVar4;
            piVar27 = (int *)(self + lVar25 * 4 + 0x32c670);
            if (*(int *)(self + lVar25 * 4 + 0x32c670) < 1) {
              if (*puVar4 < 10) {
                iVar23 = *(int *)(&DAT_00a535c0 + lVar25 * 4);
                goto LAB_00446210;
              }
            }
            else {
              fVar43 = (float)*(int *)(self + lVar25 * 4 + 0x32c670);
              iVar23 = (int)((fVar43 / 10.0) *
                             (float)*(int *)(self + (gh_long)*(int *)(self + lVar25 * 4 + 0x32c648) * 4
                                                    + 0x13888) + fVar43);
LAB_00446210:
              *piVar27 = iVar23;
              piVar27 = (int *)(self + (gh_long)(int)*puVar4 * 4 + 0x32c670);
            }
            *piVar27 = (*piVar27 * 0x82) / 100;
            *(int *)(self + (gh_long)(int)*puVar4 * 4 + 0x32c648) =
                 *(int *)(self + (gh_long)(int)*puVar4 * 4 + 0x32c648) + 1;
          }
          else {
            iVar23 = ((iVar18 / 10) * *(int *)(self + (gh_long)(int)(uVar20 + 3) * 4 + 0x1333c) * 0x73)
                     / 100;
            iVar19 = *(int *)(self + 0x32c160);
            if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < iVar23)
            goto joined_r0x00445994;
            if (iVar19 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
            }
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-iVar23));
            *(undefined4 *)(self + (gh_long)(int)(*puVar4 + 300) * 4 + 0x32c148) =
                 *(undefined4 *)(self + (gh_long)(int)(*puVar4 + 0x136) * 4 + 0x32c148);
          }
LAB_0043f11c:
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
          goto LAB_0043c3fc;
        case 3:
          if (*(int *)(self + 0x1164) + 0xe3 <= (int)*pfVar2) goto switchD_0043ba5c_caseD_1;
          if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 0xb0) ||
              (*(int *)(self + 0x1160) + 0x1b4 <= (int)*pfVar1)) ||
             ((int)*pfVar2 <= *(int *)(self + 0x1164) + 0x7f)) goto switchD_0043ba5c_caseD_1;
          piVar27 = (int *)(self + 0x32c440);
          iVar23 = *piVar27;
          if (iVar23 != 0) {
            piVar28 = (int *)(self + 0x32c43c);
            iVar18 = iVar23 - *piVar28;
            if (iVar18 == 0 || iVar23 < *piVar28) {
              piVar33 = (int *)(self + 0x32c38c);
              if (8 < *piVar33) goto switchD_0043ba5c_caseD_1;
              iVar23 = *(int *)(self + 0x32c160);
              iVar18 = (int)(((float)*(int *)(self + 0x132f4) / 10.0) *
                             (float)*(int *)(self + (gh_long)*piVar33 * 4 + 0x13838) +
                            (float)*(int *)(self + 0x132f4));
              if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18) goto LAB_0044645c;
              if (iVar23 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x16f8)), GH_ARG(false));
              }
              bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
              iVar23 = *piVar33;
              iVar18 = (int)(((float)*(int *)(self + 0x32c33c) / 10.0) *
                             (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x137e8) +
                            (float)*(int *)(self + 0x32c33c));
              *(int *)(self + 0x32c33c) = iVar18;
              *(int *)(self + 0x32c2ec) = iVar18;
              iVar18 = (int)(((float)*piVar27 / 10.0) *
                             (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x137e8) + (float)*piVar27);
              *piVar27 = iVar18;
              *piVar28 = iVar18;
              *(int *)(self + 0x32c3dc) =
                   (int)(((float)*(int *)(self + 0x32c3dc) / 10.0) *
                         (float)*(int *)(self + (gh_long)iVar23 * 4 + 0x13888) +
                        (float)*(int *)(self + 0x32c3dc));
              *piVar33 = iVar23 + 1;
              *(undefined4 *)(self + 0x32c140) = 0;
            }
            else {
              iVar23 = *(int *)(self + 0x13370);
              iVar18 = iVar18 / 10;
              iVar19 = *(int *)(self + 0x32c160);
              if (*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164) < iVar23 * iVar18)
              goto joined_r0x00445994;
              if (iVar19 == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
                iVar23 = *(int *)(self + 0x13370);
                iVar18 = (*piVar27 - *piVar28) / 10;
              }
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-(iVar23 * iVar18)));
              *piVar28 = *piVar27;
              *(undefined4 *)(self + 0x32c140) = 0;
            }
            goto LAB_0043f11c;
          }
          iVar23 = *(int *)(self + 0x13278);
          iVar19 = *(int *)(self + 0x32c160);
          if (iVar23 <= *(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)) {
            if (iVar19 == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
              iVar23 = *(int *)(self + 0x13278);
            }
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(-iVar23));
            *piVar27 = *(int *)(self + 0x133ec);
            *(int *)(self + 0x32c43c) = *(int *)(self + 0x133ec);
            *(undefined4 *)(self + 0x32c2ec) = *(undefined4 *)(self + 0x13468);
            *(undefined4 *)(self + 0x32c33c) = *(undefined4 *)(self + 0x13468);
            bzStateGame__AitemSsave_003ab270(GH_ARG(self));
            if (*(int *)(self + 0x32c7dc) == -1) {
              *(int *)(self + 0x32c7dc) = -2;
            }
            goto switchD_0043ba5c_caseD_1;
          }
joined_r0x00445994:
          if (iVar19 == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
          }
          uVar44 = 0x200000001;
          uVar22 = 2;
        }
        *(undefined8 *)(self + 0x1af8) = uVar44;
        *(undefined4 *)(self + 0x1b00) = uVar22;
      }
      break;
    }
LAB_0043ce8c:
    bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(1), GH_ARG(iVar23), GH_ARG(fVar43), GH_ARG(fVar45));
    break;
  case 0xd:
    iVar23 = *(int *)(self + 0x1164);
    iVar18 = *(int *)(self + 0x1160);
    iVar19 = (int)fVar45;
    iVar24 = (int)fVar43;
    if (((iVar23 + -0x25 <= iVar19) || (iVar24 <= iVar18 + 0x5c)) ||
       ((iVar18 + 0xb6 <= iVar24 || (iVar19 <= iVar23 + -0x75)))) {
      if ((((iVar23 + 0x44 <= iVar19) || (iVar18 <= iVar24)) || (iVar24 <= iVar18 + -0x89)) ||
         (iVar19 <= iVar23 + -0x4d)) {
        if (((iVar23 + 0x44 <= iVar19) || (iVar24 <= iVar18)) ||
           ((iVar18 + 0x89 <= iVar24 || (iVar19 <= iVar23 + -0x4d)))) break;
        if (*(int *)(self + 0x1a98) == 1) {
          *(undefined4 *)(self + 0x1a98) = 2;
          *(undefined4 *)(self + 0x32c5f8) = 0;
          *(undefined4 *)(self + 0x32c620) = 0;
        }
        if (*(int *)(self + 0x1a9c) == 1) {
          *(undefined4 *)(self + 0x1a9c) = 2;
          *(undefined4 *)(self + 0x32c5fc) = 0;
          *(undefined4 *)(self + 0x32c624) = 0;
        }
        if (*(int *)(self + 0x1aa0) == 1) {
          *(undefined4 *)(self + 0x1aa0) = 2;
          *(undefined4 *)(self + 0x32c600) = 0;
          *(undefined4 *)(self + 0x32c628) = 0;
        }
        if (*(int *)(self + 0x1aa4) == 1) {
          *(undefined4 *)(self + 0x1aa4) = 2;
          *(undefined4 *)(self + 0x32c604) = 0;
          *(undefined4 *)(self + 0x32c62c) = 0;
        }
        if (*(int *)(self + 0x1aa8) == 1) {
          *(undefined4 *)(self + 0x1aa8) = 2;
          *(undefined4 *)(self + 0x32c608) = 0;
          *(undefined4 *)(self + 0x32c630) = 0;
        }
        if (*(int *)(self + 0x1aac) == 1) {
          *(undefined4 *)(self + 0x1aac) = 2;
          *(undefined4 *)(self + 0x32c60c) = 0;
          *(undefined4 *)(self + 0x32c634) = 0;
        }
        if (*(int *)(self + 0x1ab0) == 1) {
          *(undefined4 *)(self + 0x1ab0) = 2;
          *(undefined4 *)(self + 0x32c610) = 0;
          *(undefined4 *)(self + 0x32c638) = 0;
        }
        if (*(int *)(self + 0x1ab4) == 1) {
          *(undefined4 *)(self + 0x1ab4) = 2;
          *(undefined4 *)(self + 0x32c614) = 0;
          *(undefined4 *)(self + 0x32c63c) = 0;
        }
        if (*(int *)(self + 0x1ab8) == 1) {
          *(undefined4 *)(self + 0x1ab8) = 2;
          *(undefined4 *)(self + 0x32c618) = 0;
          *(undefined4 *)(self + 0x32c640) = 0;
        }
        if (*(int *)(self + 0x1abc) == 1) {
          *(undefined4 *)(self + 0x1abc) = 2;
          *(undefined4 *)(self + 0x32c61c) = 0;
          *(undefined4 *)(self + 0x32c644) = 0;
        }
        bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
        *(int *)(self + 0x32c178) = *(int *)(self + 0x32c150) * 10;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1c), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined8 *)(self + 0xba4) = 0x100000006;
        *(undefined4 *)(self + 0xbac) = 0;
        cocos2d__log_005d21e4(GH_ARG("-TEST- 6"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        self[0xb04] = 1;
        *(undefined4 *)(self + 0xaf0) = 1;
        InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x878)));
        tVar14 = time((time_t *)0x0);
        srand((uint)tVar14);
        *(undefined4 *)(self + 0xb90) = 0x46;
        rand();
        *(undefined4 *)(self + 0xb8c) = 0;
LAB_0043e04c:
        *(undefined4 *)(self + 0x1ae8) = 2;
        *(undefined4 *)(self + 0x32c990) = 0;
        break;
      }
      piVar27 = (int *)(self + 0x32c160);
      if (*piVar27 == 0) {
        *piVar27 = 1;
        SoundClip__stop_0047e6d0(GH_ARG((int)self + 0x18d8));
      }
      else {
        *piVar27 = 0;
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      goto LAB_0043f11c;
    }
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
    }
    goto LAB_00441170;
  case 0xe:
    if ((int)fVar45 < *(int *)(self + 0x1164) + 0x160) {
      if ((((*(int *)(self + 0x1160) + -0xbe < (int)fVar43) &&
           ((int)fVar43 < *(int *)(self + 0x1160) + 0xe3)) &&
          (*(int *)(self + 0x1164) + 0xb4 < (int)fVar45)) && (self[0x32aad4] == '\0')) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined8 *)(self + 0xba4) = 0x10000000b;
        *(undefined4 *)(self + 0xbac) = 0;
        self[0xb01] = 1;
        self[0xb05] = 1;
        *(undefined4 *)(self + 0xaf4) = 1;
        cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x830)));
      }
    }
    if (*(int *)(self + 0x32c99c) < 0x15) break;
    if (*(int *)(self + 0x1164) + -200 <= (int)*pfVar2) break;
    if ((((int)*pfVar1 <= *(int *)(self + 0x1160) + 399) ||
        (*(int *)(self + 0x1160) + 0x207 <= (int)*pfVar1)) ||
       ((int)*pfVar2 <= *(int *)(self + 0x1164) + -0x140)) break;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    cocos2d__Application__getInstance_00484a3c();
    cocos2d__Application__SkipGameClearBonus_00485dfc();
    if (*(int *)(self + 0x8da38) == 0xff) {
      *(undefined4 *)(self + 0x410) = 0xffffffff;
      *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
      *(undefined4 *)(self + 0x5a0) = 0xffffffff;
      *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      byebye_0047e184(GH_ARG(0));
    }
    else {
      if (self[0x32aad4] == '\0') {
        *(undefined8 *)(self + 0xba4) = 0x100000001;
        *(undefined4 *)(self + 0xbac) = 0;
        cocos2d__log_005d21e4(GH_ARG("-TEST- 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        self[0xb04] = 1;
        *(undefined4 *)(self + 0xaf0) = 0;
        InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x870)));
      }
      *(undefined4 *)(self + 0x32c9c0) = 0xf;
      *(undefined4 *)(self + 0x1ae8) = 0x10;
    }
    *(undefined4 *)(self + 0x32c990) = 1;
    cocos2d__log_005d21e4(GH_ARG(&DAT_00a4f730), GH_ARG((ulong)*(uint *)(self + 0x32c854)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(8), GH_ARG(*(int *)(self + 0x32c854) + 1), GH_ARG(0.0), GH_ARG(0.0));
    if (*(int *)(self + 0x32c160) != 0) break;
    lVar25 = 0x1380;
LAB_0043ebbc:
    SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar25)), GH_ARG(false));
    goto LAB_0043c3fc;
  case 0xf:
    iVar23 = *(int *)(self + 0x115c);
    iVar18 = *(int *)(self + 0x1160);
    iVar24 = (int)fVar45;
    iVar19 = (int)fVar43;
    if (((iVar23 + -0x1d2 <= iVar24) || (iVar19 <= iVar18 + 0x198)) ||
       ((iVar18 + 0x1fc <= iVar19 || (iVar24 <= iVar23 + -0x20e)))) {
      iVar34 = iVar23 + -0x22;
      iVar23 = iVar23 + -0x86;
      if ((((iVar24 < iVar34) && (iVar18 + -0x1bb < iVar19)) && (iVar19 < iVar18 + -0x11d)) &&
         (iVar23 < iVar24)) {
        iVar23 = 1;
        bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(8), GH_ARG(1), GH_ARG(0.0), GH_ARG(0.0));
        *(undefined4 *)(self + 0x32aad8) = 0;
        *(undefined4 *)(self + 0x32c9ac) = 0;
        *(undefined4 *)(self + 0x32c854) = 0;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        if (*(int *)(self + 0x32c788) == -1) {
          *(undefined4 *)(self + 0x32c98c) = 0;
          *(undefined4 *)(self + 0x32c9b0) = 0;
          *(undefined4 *)(self + 0x32c844) = 1;
          bzStateGame__GStage_00431270(GH_ARG(self), GH_ARG(0), GH_ARG(iVar23));
          *(undefined4 *)(self + 0x32c8e8) = 1;
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0), GH_ARG(0));
          *(undefined4 *)(self + 0x1ae8) = 9;
        }
        else {
          *(undefined4 *)(self + 0x1ae8) = 5;
          *(undefined4 *)(self + 0x32c990) = 1;
        }
        break;
      }
      if (((iVar24 < iVar34) && (iVar18 + -0x105 < iVar19)) &&
         ((iVar19 < iVar18 + -0x67 && (iVar23 < iVar24)))) {
        if (0 < *(int *)(self + 0x404)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(8), GH_ARG(0x65), GH_ARG(0.0), GH_ARG(0.0));
          *(undefined4 *)(self + 0x32c9ac) = 0;
          *(undefined4 *)(self + 0x32c854) = 100;
          *(undefined4 *)(self + 0x1ae8) = 5;
          *(undefined4 *)(self + 0x32c990) = 1;
          if ((*(int *)(self + 0x32c7ac) == -1) &&
             ((*(int *)(self + 0x32c3fc) != 0 || (*(int *)(self + 0x32c400) != 0)))) {
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(9), GH_ARG(0));
          }
          iVar23 = *(int *)(self + 0x32c7a8);
joined_r0x00441d80:
          if ((iVar23 == -1) &&
             ((*(int *)(self + 0x32c3fc) != 0 || (*(int *)(self + 0x32c400) != 0)))) {
            bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(8), GH_ARG(0));
          }
          break;
        }
      }
      else if (((iVar24 < iVar34) && (iVar18 + -0x4f < iVar19)) &&
              ((iVar19 < iVar18 + 0x4f && (iVar23 < iVar24)))) {
        if (0 < *(int *)(self + 0x404)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x32c9ac) = 1;
          *(undefined4 *)(self + 0x32c854) = 0;
          bzStateGame__Aitemload_003a9588(GH_ARG(self));
          bzStateGame__STGload_003a4888(GH_ARG(self));
          *(undefined4 *)(self + 0x1ae8) = 0xc;
          *(undefined4 *)(self + 0x32c990) = 2;
          bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(0x3d), GH_ARG(0.0), GH_ARG(0.0));
          *(undefined4 *)(self + 0x32c994) = 0;
          break;
        }
      }
      else {
        if ((((iVar34 <= iVar24) || (iVar19 <= iVar18 + 0x67)) || (iVar18 + 0x105 <= iVar19)) ||
           (iVar24 <= iVar23)) {
          if (((0x4e < iVar24 - 1U) || (0x76 < iVar19 - 0x231U)) &&
             ((0x4e < iVar24 - 1U || (0x71 < iVar19 - 0x35dU)))) break;
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          uVar22 = 2;
          goto LAB_0043ccb0;
        }
        if (0 < *(int *)(self + 0x404)) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x32c9ac) = 2;
          *(undefined4 *)(self + 0x32c854) = 100;
          bzStateGame__Aitemload_003a9588(GH_ARG(self));
          bzStateGame__STGload_003a4888(GH_ARG(self));
          *(undefined4 *)(self + 0x1ae8) = 0xc;
          *(undefined8 *)(self + 0x32c990) = 3;
          *(undefined4 *)(self + 0x32ba90) = 2;
          *(undefined4 *)(self + 0x8db1c) = 0;
          *(undefined4 *)(self + 0x32baa0) = 0;
          break;
        }
      }
      *(undefined8 *)(self + 0x32aad8) = 1;
      break;
    }
    goto LAB_0043faa8;
  case 0x11:
    if ((int)fVar45 < *(int *)(self + 0x1164) + -0xaa) {
      if (((*(int *)(self + 0x1160) + 0x15b < (int)fVar43) &&
          ((int)fVar43 < *(int *)(self + 0x1160) + 0x1d3)) &&
         (*(int *)(self + 0x1164) + -0x122 < (int)fVar45)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        }
        goto LAB_0043e04c;
      }
    }
    FUN_009d4eac(GH_ARG(&local_d0), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.strikers1945_3m"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_c8), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.strikers1945_2_saga"), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_c0), GH_ARG("https://play.google.com/store/apps/details?id=banpick.games.worldcup"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_b8), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.mobile.tengai"), GH_ARG(&local_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_b0), GH_ARG("https://play.google.com/store/apps/details?id=com.code7.ghosthunter"), GH_ARG(auStack_d8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_a8), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.gunbird2_saga"), GH_ARG(auStack_1e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_a0), GH_ARG("https://play.google.com/store/apps/details?id=com.gamekend.blockpuzzlewoodstar"), GH_ARG(auStack_1f0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_98), GH_ARG("https://play.google.com/store/apps/details?id=com.apxsoft.s1945.io"), GH_ARG(auStack_1f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_90), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.strikers1999_saga"), GH_ARG(auStack_200), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(auStack_88), GH_ARG("https://play.google.com/store/apps/details?id=com.HOEntertainment.ToyBounce"), GH_ARG(auStack_208), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(local_80), GH_ARG("https://play.google.com/store/apps/details?id=com.junea.strikers1945_2m"), GH_ARG(auStack_210), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar18 = *(int *)(self + 0x1164);
    iVar19 = *(int *)(self + 0x1160);
    iVar34 = (int)*pfVar2;
    iVar23 = iVar18 + 0x24;
    iVar31 = (int)*pfVar1;
    iVar24 = iVar18 + -0x65;
    if (((iVar34 < iVar23) && (iVar19 + -0x199 < iVar31)) &&
       ((iVar31 < iVar19 + -0x120 && (iVar24 < iVar34)))) {
      uVar20 = 0;
LAB_0043d64c:
      cocos2d__log_005d21e4(GH_ARG("==================More Game Btn %d"), GH_ARG((ulong)uVar20), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      *(undefined4 *)(self + 0x1ae8) = 2;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      plVar12 = (gh_long *)cocos2d__Application__getInstance_00484a3c();
      gh_vcall(GH_ARG(plVar12), 0x60, GH_ARG(auStack_c8 + (ulong)uVar20 * 8 + -8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    }
    else if (*piVar27 == 0x11) {
      if ((((iVar34 < iVar23) && (iVar19 + -0x111 < iVar31)) && (iVar31 < iVar19 + -0x98)) &&
         (iVar24 < iVar34)) {
        uVar20 = 1;
      }
      else if (((iVar34 < iVar23) && (iVar19 + -0x88 < iVar31)) &&
              ((iVar31 < iVar19 + -0xf && (iVar24 < iVar34)))) {
        uVar20 = 2;
      }
      else if (((iVar34 < iVar23) && (iVar19 + -3 < iVar31)) &&
              ((iVar31 < iVar19 + 0x76 && (iVar24 < iVar34)))) {
        uVar20 = 3;
      }
      else if ((((iVar34 < iVar23) && (iVar19 + 0x83 < iVar31)) && (iVar31 < iVar19 + 0xfc)) &&
              (iVar24 < iVar34)) {
        uVar20 = 4;
      }
      else if (((iVar34 < iVar23) && (iVar19 + 0x108 < iVar31)) &&
              ((iVar31 < iVar19 + 0x181 && (iVar24 < iVar34)))) {
        uVar20 = 5;
      }
      else {
        iVar23 = iVar18 + 0xd2;
        iVar18 = iVar18 + 0x32;
        if (((iVar34 < iVar23) && (iVar19 + -0x181 < iVar31)) &&
           ((iVar31 < iVar19 + -0xeb && (iVar18 < iVar34)))) {
          uVar20 = 6;
        }
        else if ((((iVar34 < iVar23) && (iVar19 + -0xe6 < iVar31)) && (iVar31 < iVar19 + -0x50)) &&
                (iVar18 < iVar34)) {
          uVar20 = 7;
        }
        else if (((iVar34 < iVar23) && (iVar19 + -0x4b < iVar31)) &&
                ((iVar31 < iVar19 + 0x4b && (iVar18 < iVar34)))) {
          uVar20 = 8;
        }
        else if (((iVar34 < iVar23) && (iVar19 + 0x50 < iVar31)) &&
                ((iVar31 < iVar19 + 0xe6 && (iVar18 < iVar34)))) {
          uVar20 = 9;
        }
        else if ((((iVar34 < iVar23) && (iVar19 + 0xeb < iVar31)) && (iVar31 < iVar19 + 0x181)) &&
                (iVar18 < iVar34)) {
          uVar20 = 10;
        }
        else {
          if (((iVar23 <= iVar34) || (iVar31 <= iVar19 + 0x186)) ||
             ((iVar19 + 0x21c <= iVar31 || (iVar34 <= iVar18)))) goto LAB_00443898;
          uVar20 = 0xb;
        }
      }
      goto LAB_0043d64c;
    }
LAB_00443898:
    plVar12 = local_80 + 1;
    do {
      plVar12 = plVar12 + -1;
      puVar16 = (undefined8 *)(*plVar12 + -0x18);
      if (puVar16 != &DAT_00d40300) {
        piVar27 = (int *)(*plVar12 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete(puVar16);
        }
      }
    } while (plVar12 != &local_d0);
    break;
  case 0x12:
    iVar23 = *(int *)(self + 0x1164);
    iVar18 = *(int *)(self + 0x1160);
    iVar19 = (int)fVar45;
    iVar24 = (int)fVar43;
    if ((((iVar23 <= iVar19) || (iVar24 <= iVar18 + 0xba)) || (iVar18 + 0x11e <= iVar24)) ||
       (iVar19 <= iVar23 + -100)) {
      iVar34 = iVar23 + 0x3b;
      iVar31 = iVar23 + -0x3a;
      if (((iVar19 < iVar34) && (iVar18 + -0xba < iVar24)) &&
         ((iVar24 < iVar18 + -0x47 && (iVar31 < iVar19)))) {
        piVar27 = (int *)(self + 0x32c160);
        if (*piVar27 == 0) {
          *piVar27 = 1;
        }
        else {
          *piVar27 = 0;
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        goto LAB_0043efbc;
      }
      if (((iVar34 <= iVar19) || (iVar24 <= iVar18 + -0x39)) ||
         ((iVar18 + 0x3a <= iVar24 || (iVar19 <= iVar31)))) {
        if ((((iVar19 < iVar34) && (iVar18 + 0x48 < iVar24)) && (iVar24 < iVar18 + 0xbb)) &&
           (iVar31 < iVar19)) {
          *(undefined4 *)(self + 0x32c114) = 0;
          *(undefined4 *)(self + 0x32bfb8) = 0;
          memset(self + 0x32bfc0,0,0x88);
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x32c110) = 0;
          *(undefined4 *)(self + 0x32c99c) = 0;
          *(undefined4 *)(self + 0x1ae8) = 4;
          break;
        }
        if (self[0x1138] == '\0') {
          if (((iVar23 + 0x7d <= iVar19) || (iVar24 <= iVar18 + -0x8e)) ||
             ((iVar18 + 0x8e <= iVar24 || (iVar19 <= iVar23 + 0x47)))) break;
        }
        else if ((((iVar23 + 0x7d <= iVar19) || (iVar24 <= iVar18 + -0xc5)) ||
                 (iVar18 + 0x57 <= iVar24)) || (iVar19 <= iVar23 + 0x47)) {
          if ((((iVar23 + 0x7d <= iVar19) || (iVar24 <= iVar18 + 0x5e)) || (iVar18 + 199 <= iVar24))
             || (iVar19 <= iVar23 + 0x47)) break;
          cocos2d__Application__getInstance_00484a3c();
          uVar15 = cocos2d__Application__getNetStatus_004862f4();
          if ((uVar15 & 1) == 0) break;
          plVar12 = (gh_long *)cocos2d__Application__getInstance_00484a3c();
          pcVar41 = *(code **)(*plVar12 + 0x60);
          FUN_009d4eac(GH_ARG(&local_d0), GH_ARG("http://buttonenm.com/agree/policy_terms-of-service_20230317.html"), GH_ARG(&local_150), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          gh_vcall(GH_ARG(plVar12), 0x60, GH_ARG(&local_d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          puVar16 = (undefined8 *)(local_d0 + -0x18);
          if (puVar16 == &DAT_00d40300) break;
          piVar27 = (int *)(local_d0 + -8);
          do {
            iVar23 = *piVar27;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar10) {
              *piVar27 = iVar23 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          goto LAB_00444240;
        }
        cocos2d__Application__getInstance_00484a3c();
        puVar13 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
        if (((ulong)puVar13 & 1) != 0) {
          uVar15 = bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar13));
          if ((uVar15 & 1) == 0) {
            puVar13 = (undefined *)bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(-1));
            bzStateGame__ExeGoogleLogin_003a7e90(GH_ARG(puVar13));
          }
          else {
            puVar13 = (undefined *)bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(0));
            bzStateGame__ExeGoogleLogout_00449764(GH_ARG(puVar13));
          }
        }
        break;
      }
      *(undefined4 *)(self + 0x32c98c) = 0;
      *(undefined4 *)(self + 0x32c9b0) = 0;
      *(undefined4 *)(self + 0x32c844) = 1;
      iVar23 = *(int *)(self + 0x32b824);
      uVar15 = (ulong)iVar23;
      if (0 < iVar23) {
        if (iVar23 == 1) {
          uVar32 = 0;
        }
        else {
          uVar32 = uVar15 & 0xfffffffffffffffe;
          puVar37 = (undefined4 *)(self + 0x8daec);
          uVar21 = uVar32;
          do {
            *puVar37 = 0;
            puVar37[0xa2] = 0;
            uVar21 = uVar21 - 2;
            puVar37 = puVar37 + 0x144;
          } while (uVar21 != 0);
          if (uVar32 == uVar15) goto LAB_00440cd0;
        }
        puVar37 = (undefined4 *)(self + uVar32 * 0x288 + 0x8daec);
        do {
          uVar32 = uVar32 + 1;
          *puVar37 = 0;
          puVar37 = puVar37 + 0xa2;
        } while ((gh_long)uVar32 < (gh_long)uVar15);
      }
LAB_00440cd0:
      iVar23 = *(int *)(self + 0x32b828);
      uVar15 = (ulong)iVar23;
      if (0 < iVar23) {
        if (iVar23 == 1) {
          uVar32 = 0;
        }
        else {
          uVar32 = uVar15 & 0xfffffffffffffffe;
          puVar37 = (undefined4 *)(self + 0xb0d1c);
          uVar21 = uVar32;
          do {
            puVar37[-0x14] = 0;
            *puVar37 = 0;
            uVar21 = uVar21 - 2;
            puVar37 = puVar37 + 0x28;
          } while (uVar21 != 0);
          if (uVar32 == uVar15) goto LAB_00440d44;
        }
        puVar37 = (undefined4 *)(self + uVar32 * 0x50 + 0xb0ccc);
        do {
          uVar32 = uVar32 + 1;
          *puVar37 = 0;
          puVar37 = puVar37 + 0x14;
        } while ((gh_long)uVar32 < (gh_long)uVar15);
      }
LAB_00440d44:
      bzStateGame__GStage_00431270(GH_ARG(self), GH_ARG(0), GH_ARG(in_w2));
      uVar22 = 8;
LAB_00441c00:
      *(undefined4 *)(self + 0x32c8e8) = 1;
      *(undefined4 *)(self + 0x1ae8) = uVar22;
LAB_00441c0c:
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar25 = 0x14b8;
      goto LAB_00441c1c;
    }
    goto LAB_0043faa8;
  case 0x13:
    if (0 < *(int *)(self + 0x32c970)) goto LAB_0043ce6c;
    iVar23 = *(int *)(self + 0x115c);
    iVar18 = *(int *)(self + 0x1160);
    iVar24 = (int)fVar45;
    iVar19 = (int)fVar43;
    if ((((iVar23 + -0x1bf <= iVar24) || (iVar19 <= iVar18 + 0x19c)) || (iVar18 + 0x214 <= iVar19))
       || (iVar24 <= iVar23 + -0x237)) {
      if (((0x3d < iVar24 - 0x15U) || (iVar19 <= iVar18 + -0x1d8)) || (iVar18 + -0x127 <= iVar19)) {
        iVar19 = 0;
        piVar28 = (int *)(self + 0x8da50);
        puVar3 = self + 0x8da4c;
        do {
          if (((int)fVar45 < iVar23 + -0x47) && (iVar23 + -0x97 < (int)fVar45)) {
            iVar18 = iVar18 + iVar19 * 0xb7;
            if (((int)fVar43 <= iVar18 + -0x1bd) || (iVar18 + -0x11c <= (int)fVar43))
            goto LAB_0043f244;
            switch(iVar19) {
            case 0:
              *piVar28 = 6;
              if (*(int *)(self + 0xc5c) == -1) {
                *puVar3 = 0;
                pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
                iVar23 = 6;
LAB_0043f2bc:
                cocos2d__Application__purchase_00485ae8(GH_ARG(pAVar17), GH_ARG(iVar23));
                *puVar3 = 1;
                if (*(int *)(self + 0x1af0) == 0) {
                  iVar23 = 6;
                  if (*piVar28 < 6) {
                    iVar23 = 1;
                  }
                  *piVar27 = iVar23;
                }
                else {
                  self[0x1af4] = 1;
                }
              }
              break;
            case 1:
              *piVar28 = 8;
              if (*(int *)(self + 0xc64) == -1) {
                *puVar3 = 0;
                pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
                iVar23 = 8;
                goto LAB_0043f2bc;
              }
              break;
            case 2:
              *piVar28 = 9;
              if (*(int *)(self + 0xc68) == -1) {
                *puVar3 = 0;
                pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
                iVar23 = 9;
                goto LAB_0043f2bc;
              }
              break;
            case 3:
              *piVar28 = 10;
              if (*(int *)(self + 0xc6c) == -1) {
                *puVar3 = 0;
                pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
                iVar23 = 10;
                goto LAB_0043f2bc;
              }
              break;
            case 4:
              *piVar28 = 0xc;
              if (*(int *)(self + 0xc74) == -1) {
                *puVar3 = 0;
                pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
                cocos2d__Application__purchase_00485ae8(GH_ARG(pAVar17), GH_ARG(0xc));
                *puVar3 = 1;
                if (*(int *)(self + 0x1af0) == 0) {
                  iVar23 = *piVar28;
                  goto LAB_00442308;
                }
                self[0x1af4] = 1;
              }
              goto switchD_0043ba5c_caseD_1;
            }
          }
          else {
LAB_0043f244:
            if (iVar19 == 4) goto switchD_0043ba5c_caseD_1;
          }
          iVar19 = iVar19 + 1;
          fVar43 = *pfVar1;
          iVar18 = *(int *)(self + 0x1160);
          fVar45 = *pfVar2;
          iVar23 = *(int *)(self + 0x115c);
        } while( true );
      }
      cocos2d__Application__getInstance_00484a3c();
      cocos2d__Application__setRestore_00485c70();
      *piVar27 = 0x1c;
      break;
    }
    goto LAB_0043faa8;
  case 0x14:
    if (0 < *(int *)(self + 0x32c970)) {
      bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(1), GH_ARG(*(int *)(self + 0x32c970)), GH_ARG(fVar43), GH_ARG(fVar45));
      goto LAB_0043c3fc;
    }
    if (*(float *)(self + 0x32c8bc) <= 0.3) break;
    *(int *)(self + 0x32c178) = *(int *)(self + 0x32c150) * 10;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    if (*(int *)(self + 0x8da38) == 0xff) {
      *(undefined4 *)(self + 0x410) = 0xffffffff;
      *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
      *(undefined4 *)(self + 0x5a0) = 0xffffffff;
      *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      byebye_0047e184(GH_ARG(0));
    }
    else {
      *(undefined8 *)(self + 0xba4) = 0x100000001;
      *(undefined4 *)(self + 0xbac) = 0;
      cocos2d__log_005d21e4(GH_ARG("-TEST- 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      self[0xb04] = 1;
      *(undefined4 *)(self + 0xaf0) = 0;
      InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x870)));
      *(undefined4 *)(self + 0x32c9c0) = 0xf;
      *(undefined4 *)(self + 0x1ae8) = 0x10;
    }
    *(undefined4 *)(self + 0x32c990) = 0;
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
    }
    if (*(int *)(self + 0x32c9ac) == 2) {
      fVar43 = *(float *)(self + 0x32c96c);
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_1d0), GH_ARG(*(int *)(self + 0x32c968)));
      plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_1d0), GH_ARG(0), GH_ARG("af_def_"), GH_ARG(7));
      local_150 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_150), GH_ARG(&DAT_00b008ce), GH_ARG(1));
      local_f8 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_1d8), GH_ARG((int)fVar43));
      uVar15 = *(gh_long *)(local_1d8 + -0x18) + *(gh_long *)(local_f8 + -0x18);
      if ((*(ulong *)(local_f8 + -0x10) < uVar15) && (uVar15 <= *(ulong *)(local_1d8 + -0x10))) {
        plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_1d8), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      }
      else {
        plVar12 = (gh_long *)FUN_009d5908(GH_ARG(&local_f8), GH_ARG(&local_1d8));
      }
      local_d0 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_fail"), GH_ARG(5));
      local_1c8 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_1e0), GH_ARG("1"), GH_ARG(auStack_1e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_1c8), GH_ARG((undefined *)&local_1e0));
      if ((undefined8 *)(local_1e0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1e0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1e0 + -0x18));
        }
      }
      if ((undefined8 *)(local_1c8 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1c8 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1c8 + -0x18));
        }
      }
      if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_d0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_d0 + -0x18));
        }
      }
      if ((undefined8 *)(local_1d8 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1d8 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1d8 + -0x18));
        }
      }
      if ((undefined8 *)(local_f8 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_f8 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_f8 + -0x18));
        }
      }
      if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_150 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_150 + -0x18));
        }
      }
      if ((undefined8 *)(local_1d0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1d0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1d0 + -0x18));
        }
      }
      break;
    }
    if (*(int *)(self + 0x32c9ac) != 0) break;
    if (*(int *)(self + 0x32c854) == 0) {
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f8), GH_ARG(*(int *)(self + 0x32c8e8)))
      ;
      plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_f8), GH_ARG(0), GH_ARG("af_main_"), GH_ARG(8));
      local_d0 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_fail"), GH_ARG(5));
      local_1a8 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_1b0), GH_ARG("1"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_1a8), GH_ARG((undefined *)&local_1b0));
      if ((undefined8 *)(local_1b0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1b0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1b0 + -0x18));
        }
      }
      if ((undefined8 *)(local_1a8 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1a8 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1a8 + -0x18));
        }
      }
      if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_d0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_d0 + -0x18));
        }
      }
      puVar16 = (undefined8 *)(local_f8 + -0x18);
      if (puVar16 == &DAT_00d40300) break;
      piVar27 = (int *)(local_f8 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    else {
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f8), GH_ARG(*(int *)(self + 0x32c8e8)))
      ;
      plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_f8), GH_ARG(0), GH_ARG("af_zombie_"), GH_ARG(10));
      local_d0 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_fail"), GH_ARG(5));
      local_1b8 = *plVar12;
      *plVar12 = (gh_long)&DAT_00d40318;
      puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_1c0), GH_ARG("1"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_1b8), GH_ARG((undefined *)&local_1c0));
      if ((undefined8 *)(local_1c0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1c0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1c0 + -0x18));
        }
      }
      if ((undefined8 *)(local_1b8 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_1b8 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_1b8 + -0x18));
        }
      }
      if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_d0 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_d0 + -0x18));
        }
      }
      puVar16 = (undefined8 *)(local_f8 + -0x18);
      if (puVar16 == &DAT_00d40300) break;
      piVar27 = (int *)(local_f8 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
LAB_004471e4:
    if (iVar23 < 1) {
      operator_delete(puVar16);
    }
    break;
  case 0x15:
    if (0 < *(int *)(self + 0x32c970)) {
      if ((int)fVar45 < *(int *)(self + 0x1164) + -0x73) {
        if (((*(int *)(self + 0x1160) + 0xa3 < (int)fVar43) &&
            ((int)fVar43 < *(int *)(self + 0x1160) + 0xfd)) &&
           (*(int *)(self + 0x1164) + -0xcd < (int)fVar45)) {
          *(int *)(self + 0x32c970) = 0;
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(1), GH_ARG(0));
          *(undefined4 *)(self + 0x1ae8) = 0xb;
        }
      }
    }
    break;
  case 0x17:
    if (*(int *)(self + 0x32c970) < 1) {
      if ((*(int *)(self + 0x32c7b0) == -1) && (*(int *)(self + 0x32c424) != 0xf6)) {
        if ((int)fVar45 < *(int *)(self + 0x1164) + -0x8c) {
          if (((*(int *)(self + 0x1160) + -0x1a4 < (int)fVar43) &&
              ((int)fVar43 < *(int *)(self + 0x1160) + -0x118)) &&
             (*(int *)(self + 0x1164) + -0x118 < (int)fVar45)) {
            if (*(int *)(self + 0x32c7cc) == -1) {
              in_w2 = 0;
              bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x11), GH_ARG(0));
            }
            if (*(int *)(self + 0x32c7c8) == -1) {
              in_w2 = 0;
              bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x10), GH_ARG(0));
            }
            *(undefined4 *)(self + 0x32c98c) = 0;
            *(undefined8 *)(self + 0x32c9b0) = 0x14;
            *(undefined4 *)(self + 0x32c844) = 1;
            iVar23 = *(int *)(self + 0x32b824);
            uVar15 = (ulong)iVar23;
            if (0 < iVar23) {
              if (iVar23 == 1) {
                uVar32 = 0;
              }
              else {
                uVar32 = uVar15 & 0xfffffffffffffffe;
                puVar37 = (undefined4 *)(self + 0x8daec);
                uVar21 = uVar32;
                do {
                  *puVar37 = 0;
                  puVar37[0xa2] = 0;
                  uVar21 = uVar21 - 2;
                  puVar37 = puVar37 + 0x144;
                } while (uVar21 != 0);
                if (uVar32 == uVar15) goto LAB_00441b70;
              }
              puVar37 = (undefined4 *)(self + uVar32 * 0x288 + 0x8daec);
              do {
                uVar32 = uVar32 + 1;
                *puVar37 = 0;
                puVar37 = puVar37 + 0xa2;
              } while ((gh_long)uVar32 < (gh_long)uVar15);
            }
LAB_00441b70:
            iVar23 = *(int *)(self + 0x32b828);
            uVar15 = (ulong)iVar23;
            if (0 < iVar23) {
              if (iVar23 == 1) {
                uVar32 = 0;
              }
              else {
                uVar32 = uVar15 & 0xfffffffffffffffe;
                puVar37 = (undefined4 *)(self + 0xb0d1c);
                uVar21 = uVar32;
                do {
                  puVar37[-0x14] = 0;
                  *puVar37 = 0;
                  uVar21 = uVar21 - 2;
                  puVar37 = puVar37 + 0x28;
                } while (uVar21 != 0);
                if (uVar32 == uVar15) goto LAB_00441be4;
              }
              puVar37 = (undefined4 *)(self + uVar32 * 0x50 + 0xb0ccc);
              do {
                uVar32 = uVar32 + 1;
                *puVar37 = 0;
                puVar37 = puVar37 + 0x14;
              } while ((gh_long)uVar32 < (gh_long)uVar15);
            }
LAB_00441be4:
            bzStateGame__GStage_00431270(GH_ARG(self), GH_ARG(0), GH_ARG(in_w2));
            uVar22 = 0x18;
            goto LAB_00441c00;
          }
        }
      }
      iVar23 = *(int *)(self + 0x1164);
      iVar18 = *(int *)(self + 0x1160);
      iVar19 = (int)fVar45;
      iVar24 = (int)fVar43;
      if (((iVar19 < iVar23 + -0x39) && (iVar18 + 0x17e < iVar24)) &&
         ((iVar24 < iVar18 + 0x1f6 && (iVar23 + -0xb1 < iVar19)))) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
          iVar18 = *(int *)(self + 0x1160);
          iVar23 = *(int *)(self + 0x1164);
          iVar24 = (int)*pfVar1;
          iVar19 = (int)*pfVar2;
        }
        uVar22 = 0xc;
        if (*(int *)(self + 0x32c990) != 2) {
          uVar22 = 2;
        }
        uVar30 = 5;
        if (*(int *)(self + 0x32c990) != 1) {
          uVar30 = uVar22;
        }
        *(undefined4 *)(self + 0x1ae8) = uVar30;
      }
      iVar34 = iVar23 + 0x7b;
      piVar28 = (int *)(self + 0x8da50);
      iVar23 = iVar23 + 0xd;
      *piVar28 = -1;
      if (((iVar19 < iVar34) && (iVar18 + -0x172 < iVar24)) &&
         ((iVar24 < iVar18 + -0x114 && (iVar23 < iVar19)))) {
        if (((*(int *)(self + 0xb78) == *(int *)(self + 0xb7c)) &&
            (*(int *)(self + 0xb74) == *(int *)(self + 0xb80))) &&
           (*(int *)(self + 0xb70) == *(int *)(self + 0xb84))) break;
        bzStateGame__lastDaySaveFile_004494b0(GH_ARG(self), GH_ARG(*(int *)(self + 0xb78)), GH_ARG(*(int *)(self + 0xb74)), GH_ARG(*(int *)(self + 0xb70)));
        bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(100));
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        iVar23 = *piVar28;
        if (iVar23 < 0) break;
      }
      else {
        if ((((iVar19 < iVar34) && (iVar18 + -0x104 < iVar24)) && (iVar24 < iVar18 + -0xa6)) &&
           (iVar23 < iVar19)) {
          iVar23 = 0;
        }
        else if ((((iVar19 < iVar34) && (iVar18 + -0x96 < iVar24)) && (iVar24 < iVar18 + -0x38)) &&
                (iVar23 < iVar19)) {
          iVar23 = 1;
        }
        else if (((iVar19 < iVar34) && (iVar18 + -0x28 < iVar24)) &&
                ((iVar24 < iVar18 + 0x36 && (iVar23 < iVar19)))) {
          iVar23 = 2;
        }
        else if ((((iVar19 < iVar34) && (iVar18 + 0x46 < iVar24)) && (iVar24 < iVar18 + 0xa4)) &&
                (iVar23 < iVar19)) {
          iVar23 = 3;
        }
        else if (((iVar19 < iVar34) && (iVar18 + 0xb4 < iVar24)) &&
                ((iVar24 < iVar18 + 0x112 && (iVar23 < iVar19)))) {
          iVar23 = 4;
        }
        else {
          if ((((iVar34 <= iVar19) || (iVar24 <= iVar18 + 0x122)) || (iVar18 + 0x180 <= iVar24)) ||
             (iVar19 <= iVar23)) break;
          iVar23 = 5;
        }
        *piVar28 = iVar23;
      }
      self[0x8da4c] = 0;
      pAVar17 = (Application *)cocos2d__Application__getInstance_00484a3c();
      cocos2d__Application__purchase_00485ae8(GH_ARG(pAVar17), GH_ARG(iVar23));
      self[0x8da4c] = 1;
      if (*(int *)(self + 0x1af0) == 0) {
        iVar23 = *piVar28;
LAB_00442308:
        iVar18 = 6;
        if (iVar23 < 6) {
          iVar18 = 1;
        }
        *piVar27 = iVar18;
      }
      else {
        self[0x1af4] = 1;
      }
      break;
    }
LAB_0043ce6c:
    *(undefined4 *)(self + 0x32c970) = 0;
    break;
  case 0x1b:
    *(undefined4 *)(self + 0x32ba9c) = 0;
    iVar18 = *(int *)(self + 0x1160);
    iVar24 = (int)fVar45;
    iVar34 = (int)fVar43;
    iVar23 = *(int *)(self + 0x1164) + 0x3c;
    iVar19 = *(int *)(self + 0x1164) + -0x50;
    if (((iVar24 < iVar23) && (iVar18 + -0x1a4 < iVar34)) &&
       ((iVar34 < iVar18 + -0xb4 && (iVar19 < iVar24)))) {
      uVar22 = 1;
      uVar30 = 0x6c;
    }
    else if ((((iVar24 < iVar23) && (iVar18 + -0x78 < iVar34)) && (iVar34 < iVar18 + 0x78)) &&
            (iVar19 < iVar24)) {
      uVar22 = 2;
      uVar30 = 0x6f;
    }
    else {
      if (((iVar23 <= iVar24) || (iVar34 <= iVar18 + 0xb4)) ||
         ((iVar18 + 0x1a4 <= iVar34 || (iVar24 <= iVar19)))) break;
      uVar22 = 3;
      uVar30 = 0x70;
    }
    *(undefined4 *)(self + 0x32ba9c) = uVar30;
    *(undefined4 *)(self + 0x32c968) = uVar22;
    if (*(int *)(self + 0x195c) == -1) {
      FUN_009d4eac(GH_ARG(&local_190), GH_ARG("FirstPlayDefense"), GH_ARG(&local_f8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(3), GH_ARG((undefined *)&local_190));
      if ((undefined8 *)(local_190 + -0x18) != &DAT_00d40300) {
        piVar27 = (int *)(local_190 + -8);
        do {
          iVar23 = *piVar27;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar10) {
            *piVar27 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 < 1) {
          operator_delete((undefined8 *)(local_190 + -0x18));
        }
      }
    }
    bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(2), GH_ARG(0x40), GH_ARG(0.0), GH_ARG(0.0));
    *(undefined4 *)(self + 0x1ae8) = 0xb;
    *(undefined4 *)(self + 0x32c908) = 0x32;
    cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f8), GH_ARG(*(int *)(self + 0x32c968)));
    plVar12 = (gh_long *)FUN_009d7684(GH_ARG(&local_f8), GH_ARG(0), GH_ARG("af_def_"), GH_ARG(7));
    local_d0 = *plVar12;
    *plVar12 = (gh_long)&DAT_00d40318;
    plVar12 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_d0), GH_ARG("_start"), GH_ARG(6));
    local_198 = *plVar12;
    *plVar12 = (gh_long)&DAT_00d40318;
    puVar13 = (undefined *)FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("1"), GH_ARG(&local_1d0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar13), GH_ARG(1), GH_ARG((undefined *)&local_198), GH_ARG((undefined *)&local_1a0));
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar27 = (int *)(local_1a0 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    if ((undefined8 *)(local_198 + -0x18) != &DAT_00d40300) {
      piVar27 = (int *)(local_198 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 < 1) {
        operator_delete((undefined8 *)(local_198 + -0x18));
      }
    }
    if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
      piVar27 = (int *)(local_d0 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 < 1) {
        operator_delete((undefined8 *)(local_d0 + -0x18));
      }
    }
    if ((undefined8 *)(local_f8 + -0x18) != &DAT_00d40300) {
      piVar27 = (int *)(local_f8 + -8);
      do {
        iVar23 = *piVar27;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar10) {
          *piVar27 = iVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 < 1) {
        operator_delete((undefined8 *)(local_f8 + -0x18));
      }
    }
    *(undefined4 *)(self + 0x32c96c) = 0;
    break;
  case 0x32:
    iVar23 = *(int *)(self + 0x115c);
    iVar18 = *(int *)(self + 0x1160);
    iVar19 = (int)fVar45;
    iVar24 = (int)fVar43;
    if ((((iVar23 <= iVar19) || (iVar18 <= iVar24)) || (iVar24 <= iVar18 + -0x78)) ||
       (iVar19 <= iVar23 + -0x7d)) {
      if (((iVar19 < iVar23) && (iVar18 < iVar24)) &&
         ((iVar24 < iVar18 + 0x78 && (iVar23 + -0x7d < iVar19)))) {
        byebye_0047e184(GH_ARG(0));
        goto LAB_0043c3fc;
      }
      break;
    }
    goto LAB_0043fac8;
  case 0x33:
    if (*(int *)(self + 0x32aac8) == 0) {
      if (*(int *)(self + 0x32aaa8) == 2) {
        iVar23 = *(int *)(self + 0x1164);
        iVar19 = (int)fVar45;
        iVar18 = (int)fVar43;
        if (((((iVar23 + 0x8d <= iVar19) || (iVar18 <= *(int *)(self + 0x1160) + -0x7d)) ||
             (*(int *)(self + 0x1160) + 0x7d <= iVar18)) || (iVar19 <= iVar23 + 0x4b)) &&
           (((iVar23 + -0x6e <= iVar19 || (iVar19 <= iVar23 + -0xd2)) ||
            ((*(int *)(self + 0x1158) <= iVar18 || (iVar18 <= *(int *)(self + 0x1158) + -100))))))
        break;
      }
      else {
        iVar23 = *(int *)(self + 0x1160);
        iVar18 = (int)fVar43;
        if (self[0xb94] == '\0') {
          if (((((int)fVar45 < *(int *)(self + 0x1164) + 0x8d) && (iVar23 + -0x7d < iVar18)) &&
              (iVar18 < iVar23 + 0x7d)) && (*(int *)(self + 0x1164) + 0x4b < (int)fVar45)) {
            cocos2d__log_005d21e4(GH_ARG("-TEST- Button Click 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            if (*(int *)(self + 0x32c160) == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
            }
            *(undefined4 *)(self + 0x1ae8) = 2;
            *(undefined8 *)(self + 0xba4) = 0x100000009;
            *(undefined4 *)(self + 0xbac) = 0;
            cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            self[0xb04] = 1;
            *(undefined4 *)(self + 0xaf0) = 2;
            InterstitialInterface__load_0047fc2c(GH_ARG(*(InterstitialInterface **)(self + 0x880)));
          }
        }
        else if ((((int)fVar45 < *(int *)(self + 0x1164) + 0x8d) && (iVar23 + -0xb9 < iVar18)) &&
                ((iVar18 < iVar23 + 0xb9 && (*(int *)(self + 0x1164) + 0x4b < (int)fVar45)))) {
          cocos2d__log_005d21e4(GH_ARG("-TEST- Button Click 0"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
          }
          *(undefined8 *)(self + 0xba4) = 0x10000000a;
          *(undefined4 *)(self + 0xbac) = 0;
          uVar15 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x828)));
          if ((uVar15 & 1) != 0) {
            RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x828)));
          } else {
            // The no-SDK adapter reports failure and releases the input lock.
            RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
          }
        }
        if (*(int *)(self + 0x1164) + -0x6e <= (int)*pfVar2) break;
        if (((*(int *)(self + 0x1158) <= (int)*pfVar1) ||
            ((int)*pfVar1 <= *(int *)(self + 0x1158) + -100)) ||
           ((int)*pfVar2 <= *(int *)(self + 0x1164) + -0xd2)) break;
      }
      goto LAB_0043faa8;
    }
    if (*(int *)(self + 0x1164) + 0x9c <= (int)fVar45) break;
    if ((((int)fVar43 <= *(int *)(self + 0x1160) + -0x7d) ||
        (*(int *)(self + 0x1160) + 0x7d <= (int)fVar43)) ||
       ((int)fVar45 <= *(int *)(self + 0x1164) + 0x5a)) break;
    if (*(int *)(self + 0x32c160) == 0) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
    }
    *(int *)(self + 0x32aac8) = 0;
    goto LAB_0043fac8;
  case 0x46:
  case 0x49:
    iVar18 = *(int *)(self + 0x1164);
    iVar19 = *(int *)(self + 0x1160);
    iVar24 = (int)fVar45;
    iVar34 = (int)fVar43;
    if ((((iVar24 < iVar18 + 0x8b) && (iVar19 + -0xcd < iVar34)) && (iVar34 < iVar19 + 0xcd)) &&
       (iVar18 + 0x31 < iVar24)) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        iVar23 = *(int *)(self + 0x1ae8);
      }
      if (iVar23 == 0x49) {
        if (*(int *)(self + 0x32c9ac) == 2) {
          uVar44 = 0x100000011;
LAB_0043e790:
          *(undefined8 *)(self + 0xba4) = uVar44;
          *(undefined4 *)(self + 0xbac) = 0;
          self[0xb01] = 1;
          self[0xb05] = 1;
          *(undefined4 *)(self + 0xaf4) = 5;
        }
        else {
          if (*(int *)(self + 0x32c9ac) == 1) {
            uVar44 = 0x100000010;
            goto LAB_0043e790;
          }
          *(undefined4 *)(self + 0xba8) = 1;
          if (*(int *)(self + 0x32c854) == 0) {
            self[0xb01] = 1;
            self[0xb05] = 1;
            *(undefined4 *)(self + 0xbac) = 0;
            *(undefined4 *)(self + 0xba4) = 0xe;
            *(undefined4 *)(self + 0xaf4) = 4;
            cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(4), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            this = *(RewardInterface **)(self + 0x848);
            goto LAB_0043e7fc;
          }
          self[0xb01] = 1;
          self[0xb05] = 1;
          *(undefined4 *)(self + 0xbac) = 0;
          *(undefined4 *)(self + 0xba4) = 0xf;
          *(undefined4 *)(self + 0xaf4) = 5;
        }
        cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        this = *(RewardInterface **)(self + 0x850);
      }
      else {
        *(undefined8 *)(self + 0xba4) = 0x10000000d;
        *(undefined4 *)(self + 0xbac) = 0;
        self[0xb01] = 1;
        self[0xb05] = 1;
        *(undefined4 *)(self + 0xaf4) = 3;
        cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(3), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        this = *(RewardInterface **)(self + 0x840);
      }
LAB_0043e7fc:
      RewardInterface__load_0047fcf4(GH_ARG(this));
      cocos2d__log_005d21e4(GH_ARG("Bump_FirstAidKit"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    }
    else {
      if (((iVar18 + -0x54 <= iVar24) || (iVar34 <= iVar19 + 0xc2)) ||
         ((iVar19 + 0x112 <= iVar34 || (iVar24 <= iVar18 + -0xa4)))) break;
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        iVar23 = *(int *)(self + 0x1ae8);
      }
      if (iVar23 == 0x49) {
        *(undefined4 *)(self + 0xc04) = 0;
        *(undefined8 *)(self + 0xbd0) = 0;
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        if (*(int *)(self + 0xc28) == 0) goto LAB_0043e180;
        iVar23 = 0x14;
      }
      else {
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x19), GH_ARG(0), GH_ARG(0), GH_ARG(1));
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
LAB_0043e180:
        if ((*(uint *)(self + 0x32c9ac) | 2) == 2) {
          iVar23 = 0xb;
        }
        else {
          iVar23 = 0x16;
        }
      }
      *piVar27 = iVar23;
    }
    if (0 < *(int *)(self + 0x8dd24)) {
      joyX2 = *(undefined4 *)(self + 0x1b08);
      joyY2 = *(undefined4 *)(self + 0x1b0c);
      *(undefined4 *)(self + 0x8dd38) = 0;
      *(int *)(self + 0x8dd24) = 0;
      if ((*(int *)(self + 0x8dae0) == 0x3b) || (*(int *)(self + 0x8dae0) == 0xf)) {
        *(undefined4 *)(self + 0x32ba84) = 0;
      }
    }
    *(undefined4 *)(self + 0x8dadc) = 2;
LAB_0043ee14:
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
    break;
  case 0x47:
    iVar23 = *(int *)(self + 0x1160);
    iVar18 = (int)fVar43;
    if (self[0xb96] != '\0') {
      if (((*(int *)(self + 0x1164) + 0x9c <= (int)fVar45) || (iVar18 <= iVar23 + -0x7d)) ||
         ((iVar23 + 0x7d <= iVar18 || ((int)fVar45 <= *(int *)(self + 0x1164) + 0x5a)))) break;
      self[0xb96] = 0;
      if ((9 < *(int *)(self + 0x1a18)) || (*(int *)(self + 0x1a1c) < *(int *)(self + 0x1a18)))
      break;
      *(int *)(self + 0x1a18) = *(int *)(self + 0x1a1c) + 1;
      *(undefined4 *)(self + 0x1ae8) = 0x48;
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar25 = 0x1320;
      goto LAB_00441c1c;
    }
    iVar19 = *(int *)(self + 0x1164);
    iVar24 = (int)fVar45;
    if ((((iVar19 + -0xa4 <= iVar24) || (iVar18 <= iVar23 + 0xc2)) || (iVar23 + 0x112 <= iVar18)) ||
       (iVar24 <= iVar19 + -0xf4)) {
      if (((iVar19 + 0xd5 <= iVar24) || (iVar18 <= iVar23 + -0xd4)) ||
         ((iVar23 + 0xd5 <= iVar18 || (iVar24 <= iVar19 + 0x93)))) break;
      if ((self[0xb95] != '\0') && (*(int *)(self + 0x1a24) < 5)) {
        *(int *)(self + 0x1a18) = *(int *)(self + 0x1a1c) + 1;
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        *(undefined8 *)(self + 0xba4) = 0x10000000c;
        *(undefined4 *)(self + 0xbac) = 0;
        uVar15 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x838)));
        if ((uVar15 & 1) != 0) {
          RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x838)));
        } else {
          // The no-SDK adapter reports failure and releases the input lock.
          RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x838)));
        }
        self[0xb95] = 0;
        break;
      }
    }
    if (*(int *)(self + 0x32c160) != 0) goto LAB_0043fac8;
    lVar25 = 0x14b8;
    goto LAB_0043fabc;
  case 0x48:
    iVar23 = *(int *)(self + 0x1164);
    iVar18 = *(int *)(self + 0x1160);
    iVar19 = (int)fVar45;
    iVar24 = (int)fVar43;
    if ((((iVar19 < iVar23 + 0x56) && (iVar18 + -0x7d < iVar24)) &&
        ((iVar24 < iVar18 + 0x7d && (iVar23 + 0x14 < iVar19)))) ||
       ((((iVar19 < iVar23 + -0x73 && (iVar18 + 0xa3 < iVar24)) && (iVar24 < iVar18 + 0xfd)) &&
        (iVar23 + -0xcd < iVar19)))) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      *piVar27 = 0x47;
    }
    break;
  case 0x4a:
    iVar23 = *(int *)(self + 0x1164);
    iVar18 = *(int *)(self + 0x1160);
    iVar19 = (int)fVar45;
    iVar24 = (int)fVar43;
    if (((iVar23 + -0x5d <= iVar19) || (iVar24 <= iVar18 + 0xaa)) ||
       ((iVar18 + 0xfa <= iVar24 || (iVar19 <= iVar23 + -0xad)))) {
      if ((((iVar23 + 0xad <= iVar19) || (iVar18 <= iVar24)) || (iVar24 <= iVar18 + -100)) ||
         (iVar19 <= iVar23 + 0x5d)) {
        if (((iVar23 + 0xad <= iVar19) || (iVar24 <= iVar18 + 0x14)) ||
           ((iVar18 + 0x78 <= iVar24 || (iVar19 <= iVar23 + 0x5d)))) break;
        piVar28 = (int *)(self + 0x8db14);
        iVar23 = *piVar28;
        if (*(int *)(self + 0x8db18) == 0) {
          iVar19 = ((*(int *)(self + (gh_long)(iVar23 + 0x1e) * 4 + 0x32c148) -
                    *(int *)(self + (gh_long)(iVar23 + 10) * 4 + 0x32c148)) / 10) *
                   *(int *)(self + (gh_long)iVar23 * 4 + 0x1333c);
          iVar18 = iVar19 / 5;
          if (*(int *)(self + (gh_long)(iVar23 + 8) * 4 + 0x1a1c) == 1) goto LAB_00440b3c;
          if (*(int *)(self + (gh_long)(iVar23 + 8) * 4 + 0x1a1c) == 3) {
            iVar18 = iVar19 / 10;
          }
        }
        else {
          iVar19 = *(int *)(self + (gh_long)iVar23 * 4 + 0x1333c) *
                   ((*(int *)(self + (gh_long)(iVar23 + 0x133) * 4 + 0x32c148) -
                    *(int *)(self + (gh_long)(iVar23 + 0x129) * 4 + 0x32c148)) / 10) * 0x73;
          iVar18 = iVar19 / 500;
          if (*(int *)(self + (gh_long)(iVar23 + 0x12) * 4 + 0x1a1c) == 1) {
LAB_00440b3c:
            iVar18 = iVar18 << 1;
          }
          else if (*(int *)(self + (gh_long)(iVar23 + 0x12) * 4 + 0x1a1c) == 3) {
            iVar18 = iVar19 / 1000;
          }
        }
        if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar18) {
          if (*(int *)(self + 0x32c160) == 0) {
            SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
          }
          *(undefined4 *)(self + 0x1b00) = 3;
          *(undefined8 *)(self + 0x1af8) = 0x300000001;
          break;
        }
        bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar18));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        if (*(int *)(self + 0x8db18) == 0) {
          iVar23 = *piVar28 + 8;
          *(int *)(self + (gh_long)iVar23 * 4 + 0x1a1c) =
               *(int *)(self + (gh_long)iVar23 * 4 + 0x1a1c) + -1;
          iVar23 = *piVar28 + 0x1e;
          iVar18 = *piVar28 + 10;
        }
        else {
          iVar23 = *piVar28 + 0x12;
          *(int *)(self + (gh_long)iVar23 * 4 + 0x1a1c) =
               *(int *)(self + (gh_long)iVar23 * 4 + 0x1a1c) + -1;
          iVar23 = *piVar28 + 0x133;
          iVar18 = *piVar28 + 0x129;
        }
        *(undefined4 *)(self + (gh_long)iVar18 * 4 + 0x32c148) =
             *(undefined4 *)(self + (gh_long)iVar23 * 4 + 0x32c148);
        bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
        goto LAB_00441170;
      }
    }
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xc), GH_ARG(0), GH_ARG(0), GH_ARG(0));
LAB_00441170:
    if ((*(uint *)(self + 0x32c9ac) | 2) == 2) {
      *piVar27 = 0xb;
    }
    else {
      *piVar27 = 0x16;
    }
    break;
  default:
    if (iVar23 != 999) break;
    iVar23 = *(int *)(self + 0x1160);
    iVar24 = (int)fVar45;
    iVar34 = (int)fVar43;
    iVar18 = *(int *)(self + 0x115c) + -0xe6;
    iVar19 = *(int *)(self + 0x115c) + -0x136;
    if ((((iVar24 < iVar18) && (iVar23 + 0x4b < iVar34)) && (iVar34 < iVar23 + 0xde)) &&
       (iVar19 < iVar24)) {
      byebye_0047e184(GH_ARG(0));
      break;
    }
    if (((iVar18 <= iVar24) || (iVar34 <= iVar23 + 0x11a)) ||
       ((iVar23 + 0x1ad <= iVar34 || (iVar24 <= iVar19)))) break;
    BannerInterface__hideBannerView_0047fb18();
LAB_0043faa8:
    if (*(int *)(self + 0x32c160) == 0) {
      lVar25 = 0x1380;
LAB_0043fabc:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar25)), GH_ARG(false));
    }
LAB_0043fac8:
    *piVar27 = 2;
  }
switchD_0043ba5c_caseD_1:
  if (*(gh_long *)(lVar11 + 0x28) == local_80[1]) {
    return 0;
  }
                    
  __stack_chk_fail();
switchD_004432d0_caseD_1f:
  uVar20 = 0xb8d4;
  goto LAB_004441b0;
switchD_004420bc_caseD_b:
  uVar20 = 0xb974;
LAB_004441b0:
  iVar18 = *(int *)(self + (uVar20 | 0x320000));
  piVar27 = (int *)(self + 0x32b82c);
  iVar23 = *(int *)(self + (gh_long)*piVar27 * 4 + (gh_long)iVar18 * 0x20 + 0x12ca8);
  if (iVar23 < 0) {
    *piVar27 = 0;
    iVar23 = *(int *)(self + (gh_long)iVar18 * 0x20 + 0x12ca8);
  }
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar23), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(in_w4));
  *piVar27 = *piVar27 + 1;
  *(undefined4 *)(self + 0x32b8cc) = 0xfffffff1;
  goto switchD_0043ba5c_caseD_1;
  return 0;
}
