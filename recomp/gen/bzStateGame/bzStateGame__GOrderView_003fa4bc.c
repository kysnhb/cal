/* bzStateGame::GOrderView_003fa4bc @ 0x003fa4bc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a50736
#define DAT_00a50736 (*(undefined1 *)IMG(0x00a50736))
#undef DAT_00a50774
#define DAT_00a50774 (*(undefined1 *)IMG(0x00a50774))
#undef DAT_00a507c4
#define DAT_00a507c4 (*(undefined1 *)IMG(0x00a507c4))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00a5030a
#define DAT_00a5030a (*(undefined1 *)IMG(0x00a5030a))
#undef DAT_00a5036a
#define DAT_00a5036a (*(undefined1 *)IMG(0x00a5036a))
#undef DAT_00a503f8
#define DAT_00a503f8 (*(undefined1 *)IMG(0x00a503f8))
#undef DAT_00a5040c
#define DAT_00a5040c (*(undefined1 *)IMG(0x00a5040c))
#undef DAT_00a504b1
#define DAT_00a504b1 (*(undefined1 *)IMG(0x00a504b1))
#undef DAT_00a5057c
#define DAT_00a5057c (*(undefined1 *)IMG(0x00a5057c))
#undef DAT_00a505a5
#define DAT_00a505a5 (*(undefined1 *)IMG(0x00a505a5))
#undef DAT_00a505f8
#define DAT_00a505f8 (*(undefined1 *)IMG(0x00a505f8))
#undef DAT_00a50636
#define DAT_00a50636 (*(undefined1 *)IMG(0x00a50636))
#undef DAT_00a50683
#define DAT_00a50683 (*(undefined1 *)IMG(0x00a50683))
#undef DAT_00a506db
#define DAT_00a506db (*(undefined1 *)IMG(0x00a506db))
int bzStateGame__GOrderView_003fa4bc(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  int *piVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  gh_long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  uint64_t gh_frame64[115] = {0};   /* 원작 스택 프레임 (SP-0x380 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x380;
#define local_380 (*(ulong *)(gh_fb - 0x380))
#define uStack_378 (*(ulong *)(gh_fb - 0x378))
#define local_368 (*(float *)(gh_fb - 0x368))
#define fStack_364 (*(float *)(gh_fb - 0x364))
#define local_360 (*(ulong *)(gh_fb - 0x360))
#define uStack_358 (*(ulong *)(gh_fb - 0x358))
#define local_348 (*(float *)(gh_fb - 0x348))
#define fStack_344 (*(float *)(gh_fb - 0x344))
#define local_340 (*(ulong *)(gh_fb - 0x340))
#define uStack_338 (*(ulong *)(gh_fb - 0x338))
#define local_328 (*(float *)(gh_fb - 0x328))
#define fStack_324 (*(float *)(gh_fb - 0x324))
#define local_320 (*(ulong *)(gh_fb - 0x320))
#define uStack_318 (*(ulong *)(gh_fb - 0x318))
#define local_308 (*(float *)(gh_fb - 0x308))
#define fStack_304 (*(float *)(gh_fb - 0x304))
#define local_300 (*(ulong *)(gh_fb - 0x300))
#define uStack_2f8 (*(ulong *)(gh_fb - 0x2f8))
#define local_2e8 (*(float *)(gh_fb - 0x2e8))
#define fStack_2e4 (*(float *)(gh_fb - 0x2e4))
#define local_2e0 (*(ulong *)(gh_fb - 0x2e0))
#define uStack_2d8 (*(ulong *)(gh_fb - 0x2d8))
#define local_2c8 (*(float *)(gh_fb - 0x2c8))
#define fStack_2c4 (*(float *)(gh_fb - 0x2c4))
#define local_2c0 (*(ulong *)(gh_fb - 0x2c0))
#define uStack_2b8 (*(ulong *)(gh_fb - 0x2b8))
#define local_2a8 (*(float *)(gh_fb - 0x2a8))
#define local_2a4 (*(float *)(gh_fb - 0x2a4))
#define local_2a0 (*(ulong *)(gh_fb - 0x2a0))
#define uStack_298 (*(ulong *)(gh_fb - 0x298))
#define local_288 (*(float *)(gh_fb - 0x288))
#define local_284 (*(float *)(gh_fb - 0x284))
#define local_280 (*(ulong *)(gh_fb - 0x280))
#define uStack_278 (*(ulong *)(gh_fb - 0x278))
#define local_268 (*(float *)(gh_fb - 0x268))
#define local_264 (*(float *)(gh_fb - 0x264))
#define local_260 (*(ulong *)(gh_fb - 0x260))
#define uStack_258 (*(ulong *)(gh_fb - 0x258))
#define local_248 (*(float *)(gh_fb - 0x248))
#define local_244 (*(float *)(gh_fb - 0x244))
#define local_240 (*(ulong *)(gh_fb - 0x240))
#define uStack_238 (*(ulong *)(gh_fb - 0x238))
#define local_228 (*(float *)(gh_fb - 0x228))
#define local_224 (*(float *)(gh_fb - 0x224))
#define local_220 (*(ulong *)(gh_fb - 0x220))
#define uStack_218 (*(ulong *)(gh_fb - 0x218))
#define local_208 (*(float *)(gh_fb - 0x208))
#define local_204 (*(float *)(gh_fb - 0x204))
#define local_200 (*(ulong *)(gh_fb - 0x200))
#define uStack_1f8 (*(ulong *)(gh_fb - 0x1f8))
#define local_1e8 (*(float *)(gh_fb - 0x1e8))
#define local_1e4 (*(float *)(gh_fb - 0x1e4))
  Color4F aCStack_1e0 [16];
#define local_1d0 (*(ulong *)(gh_fb - 0x1d0))
#define uStack_1c8 (*(ulong *)(gh_fb - 0x1c8))
#define auStack_1c0 (*(undefined1 (*)[8])(gh_fb - 0x1c0))
#define local_1b8 (*(gh_long *)(gh_fb - 0x1b8))
#define local_1b0 (*(ulong *)(gh_fb - 0x1b0))
#define uStack_1a8 (*(ulong *)(gh_fb - 0x1a8))
#define local_198 (*(float *)(gh_fb - 0x198))
#define local_194 (*(float *)(gh_fb - 0x194))
#define local_190 (*(ulong *)(gh_fb - 0x190))
#define uStack_188 (*(ulong *)(gh_fb - 0x188))
  Rect aRStack_180 [16];
#define local_170 (*(ulong *)(gh_fb - 0x170))
#define uStack_168 (*(ulong *)(gh_fb - 0x168))
  Rect aRStack_160 [16];
#define local_150 (*(ulong *)(gh_fb - 0x150))
#define uStack_148 (*(ulong *)(gh_fb - 0x148))
  Rect aRStack_140 [16];
#define local_130 (*(ulong *)(gh_fb - 0x130))
#define uStack_128 (*(ulong *)(gh_fb - 0x128))
  Rect aRStack_120 [16];
#define local_110 (*(ulong *)(gh_fb - 0x110))
#define uStack_108 (*(ulong *)(gh_fb - 0x108))
  Rect aRStack_100 [16];
#define local_f0 (*(ulong *)(gh_fb - 0xf0))
#define uStack_e8 (*(ulong *)(gh_fb - 0xe8))
  Rect aRStack_e0 [16];
#define local_d0 (*(ulong *)(gh_fb - 0xd0))
#define uStack_c8 (*(ulong *)(gh_fb - 0xc8))
  Rect aRStack_c0 [16];
#define local_b0 (*(ulong *)(gh_fb - 0xb0))
#define uStack_a8 (*(ulong *)(gh_fb - 0xa8))
  Rect aRStack_a0 [16];
#define local_90 (*(float *)(gh_fb - 0x90))
#define fStack_8c (*(float *)(gh_fb - 0x8c))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar6 = tpidr_el0;
  local_88 = *(gh_long *)(lVar6 + 0x28);
  piVar1 = (int *)(self + 0x32c82c);
  if ((param_3 == 0x18) && (*(int *)(self + 0x32aad8) != 1)) goto switchD_003fa874_caseD_8;
  pcVar2 = self + 0x1138;
  iVar9 = *piVar1 * 0x3c;
  uVar10 = *(undefined8 *)(self + 0xc38);
  if (*pcVar2 == '\0') {
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_120), GH_ARG(-5.0), GH_ARG((float)(iVar9 + 99)), GH_ARG((float)(*(int *)(self + 0x1158) + 10)), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_130), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_130), GH_ARG(local_130 >> 0x20), GH_ARG(uStack_128 & 0xffffffff), GH_ARG(uStack_128 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_120));
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_140), GH_ARG(0.0), GH_ARG((float)(iVar9 + 100)), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG(64.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_150), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.5));
    kDraw__drawRect_00479ae8(GH_ARG(local_150), GH_ARG(local_150 >> 0x20), GH_ARG(uStack_148 & 0xffffffff), GH_ARG(uStack_148 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_140));
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_160), GH_ARG(0.0), GH_ARG((float)(iVar9 + 0x70)), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG(38.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_170), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(0.5));
    kDraw__drawRect_00479ae8(GH_ARG(local_170), GH_ARG(local_170 >> 0x20), GH_ARG(uStack_168 & 0xffffffff), GH_ARG(uStack_168 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_160));
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_180), GH_ARG(-5.0), GH_ARG((float)(iVar9 + 0xa0)), GH_ARG((float)(*(int *)(self + 0x1158) + 10)), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_190), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_190), GH_ARG(local_190 >> 0x20), GH_ARG(uStack_188 & 0xffffffff), GH_ARG(uStack_188 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_180));
  }
  else {
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_a0), GH_ARG(-5.0), GH_ARG((float)(iVar9 + 99)), GH_ARG((float)(*(int *)(self + 0x1158) + 10)), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_a0))
    ;
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_c0), GH_ARG(0.0), GH_ARG((float)(iVar9 + 100)), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG(64.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_d0), GH_ARG(0.039215688), GH_ARG(0.039215688), GH_ARG(0.039215688), GH_ARG(0.5))
    ;
    kDraw__drawRect_00479ae8(GH_ARG(local_d0), GH_ARG(local_d0 >> 0x20), GH_ARG(uStack_c8 & 0xffffffff), GH_ARG(uStack_c8 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_c0))
    ;
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_e0), GH_ARG(0.0), GH_ARG((float)(iVar9 + 0x70)), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG(38.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_f0), GH_ARG(0.39215687), GH_ARG(0.39215687), GH_ARG(0.39215687), GH_ARG(0.5));
    kDraw__drawRect_00479ae8(GH_ARG(local_f0), GH_ARG(local_f0 >> 0x20), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_e0))
    ;
    uVar10 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG(aRStack_100), GH_ARG(-5.0), GH_ARG((float)(iVar9 + 0xa0)), GH_ARG((float)(*(int *)(self + 0x1158) + 10)), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(0.5882353), GH_ARG(0.98039216), GH_ARG(0.078431375), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar10), GH_ARG(aRStack_100));
  }
  switch(param_3) {
  case 2:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Rescue the citizens from the cells in the building."), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      if ((undefined8 *)(local_1b8 + -0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_1b8 + -8);
        do {
          iVar9 = *piVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar5) {
            *piVar8 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 < 1) {
          operator_delete((undefined8 *)(local_1b8 + -0x18));
        }
      }
    }
    else {
      uVar10 = *(undefined8 *)(self + 0x8daa0);
      FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a5030a), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_194 = (float)(iVar9 + 0x76);
      local_198 = (float)(*(int *)(self + 0x1160) + -0xaa);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kFont__drawDString_0047b574(GH_ARG(local_1b0), GH_ARG(local_1b0 >> 0x20), GH_ARG(uStack_1a8 & 0xffffffff), GH_ARG(uStack_1a8 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_198), GH_ARG(0x19), GH_ARG(500), GH_ARG(0));
      if ((undefined8 *)(local_1d0 - 0x18) != &DAT_00d40300) {
        piVar8 = (int *)(local_1d0 - 8);
        do {
          iVar9 = *piVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar5) {
            *piVar8 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 < 1) {
          operator_delete((undefined8 *)(local_1d0 - 0x18));
        }
      }
    }
    iVar9 = param_5 + *(int *)(self + 0x32c824) + -10;
    bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(param_4 + -0x23), GH_ARG(iVar9), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.2), GH_ARG(1), GH_ARG(param_4 + -0x23), GH_ARG(iVar9), GH_ARG(1));
    if (*(int *)(self + 0x32c838) == 2) {
      param_5 = 0x226;
      param_4 = *(int *)(self + 0x1158) + -0x5a;
    }
    else if (*(int *)(self + 0x32c838) == 1) {
      param_5 = 0x1ae;
      param_4 = *(int *)(self + 0x1158) + -200;
    }
    else {
      param_4 = -100;
      param_5 = 0x1a4;
    }
    goto switchD_003fa874_caseD_8;
  case 3:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Possible to increase hero level"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_003fbe80:
      if (iVar9 < 1) {
        operator_delete(puVar7);
      }
      goto switchD_003fa874_caseD_8;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a5036a), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_1e4 = (float)(iVar9 + 0x76);
    local_1e8 = (float)(*(int *)(self + 0x1160) + -0xaa);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_200), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_200), GH_ARG(local_200 >> 0x20), GH_ARG(uStack_1f8 & 0xffffffff), GH_ARG(uStack_1f8 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_1e8), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 4:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("You can be cured with medicine bottle when infected by Zombie."), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a5040c), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_204 = (float)(iVar9 + 0x76);
    local_208 = (float)(*(int *)(self + 0x1160) + -300);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_220), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_220), GH_ARG(local_220 >> 0x20), GH_ARG(uStack_218 & 0xffffffff), GH_ARG(uStack_218 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_208), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 5:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("You can use the medicine bottle for your friend and citizen infected by Zombie."), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a503f8), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_224 = (float)(iVar9 + 0x76);
    local_228 = (float)(*(int *)(self + 0x1160) + -0x15e);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_240), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_240), GH_ARG(local_240 >> 0x20), GH_ARG(uStack_238 & 0xffffffff), GH_ARG(uStack_238 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_228), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 6:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG(" You can recover physical strength of your friend. (Can be treated when showing (+) mark on the gauge)"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a504b1), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_244 = (float)(iVar9 + 0x76);
    local_248 = (float)(*(int *)(self + 0x1160) + -0x140);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_260), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_260), GH_ARG(local_260 >> 0x20), GH_ARG(uStack_258 & 0xffffffff), GH_ARG(uStack_258 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_248), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 7:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Add Friend"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a5057c), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_264 = (float)(iVar9 + 0x76);
    local_268 = (float)(*(int *)(self + 0x1160) + -100);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_280), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_280), GH_ARG(local_280 >> 0x20), GH_ARG(uStack_278 & 0xffffffff), GH_ARG(uStack_278 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_268), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  default:
    goto switchD_003fa874_caseD_8;
  case 0xb:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("You can transform to Hulk"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a505a5), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_284 = (float)(iVar9 + 0x76);
    local_288 = (float)(*(int *)(self + 0x1160) + -0xa0);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_2a0), GH_ARG(local_2a0 >> 0x20), GH_ARG(uStack_298 & 0xffffffff), GH_ARG(uStack_298 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_288), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0xc:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("You have present Coupon"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a505f8), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    local_2a4 = (float)(iVar9 + 0x76);
    local_2a8 = (float)(*(int *)(self + 0x1160) + -0x96);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_2c0), GH_ARG(local_2c0 >> 0x20), GH_ARG(uStack_2b8 & 0xffffffff), GH_ARG(uStack_2b8 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_2a8), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x10:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Explanation of Hulk transformation mode"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a50636), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_2c4 = (float)(iVar9 + 0x76);
    local_2c8 = (float)(*(int *)(self + 0x1160) + -0xa0);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_2e0), GH_ARG(local_2e0 >> 0x20), GH_ARG(uStack_2d8 & 0xffffffff), GH_ARG(uStack_2d8 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_2c8), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x12:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Press the attack key"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a50683), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_2e4 = (float)(iVar9 + 0x76);
    local_2e8 = (float)(*(int *)(self + 0x1160) + -0xdc);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_300), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_300), GH_ARG(local_300 >> 0x20), GH_ARG(uStack_2f8 & 0xffffffff), GH_ARG(uStack_2f8 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_2e8), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x14:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("You can set options. (sound)"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a506db), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_304 = (float)(iVar9 + 0x76);
    local_308 = (float)(*(int *)(self + 0x1160) + -0xe6);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_320), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_320), GH_ARG(local_320 >> 0x20), GH_ARG(uStack_318 & 0xffffffff), GH_ARG(uStack_318 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_308), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x15:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Weapon change"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a50736), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_324 = (float)(iVar9 + 0x76);
    local_328 = (float)(*(int *)(self + 0x1160) + -0xb4);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_340), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_340), GH_ARG(local_340 >> 0x20), GH_ARG(uStack_338 & 0xffffffff), GH_ARG(uStack_338 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_328), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x17:
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Click to use machine guns."), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a50774), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_344 = (float)(iVar9 + 0x76);
    local_348 = (float)(*(int *)(self + 0x1160) + -0xb4);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_360), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_360), GH_ARG(local_360 >> 0x20), GH_ARG(uStack_358 & 0xffffffff), GH_ARG(uStack_358 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_348), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 0x18:
    if (*(int *)(self + 0x32aad8) != 1) goto switchD_003fa874_caseD_8;
    if (*pcVar2 == '\0') {
      FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("Clear Main Mode <Level 1>"), GH_ARG(auStack_1c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar3 = *(int *)(self + 0x1160);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1d0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_1e0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = (float)iVar3;
      fStack_8c = (float)(iVar9 + 0x76);
      kFont__drawString_0047ae54(GH_ARG(local_1d0), GH_ARG(local_1d0 >> 0x20), GH_ARG(uStack_1c8 & 0xffffffff), GH_ARG(uStack_1c8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_1b8), GH_ARG(&local_90), GH_ARG(1));
      puVar7 = (undefined8 *)(local_1b8 + -0x18);
      if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
      piVar8 = (int *)(local_1b8 + -8);
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_003fbe80;
    }
    uVar10 = *(undefined8 *)(self + 0x8daa0);
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG(&DAT_00a507c4), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fStack_364 = (float)(iVar9 + 0x76);
    local_368 = (float)(*(int *)(self + 0x1160) + -0xb4);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_380), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kFont__drawDString_0047b574(GH_ARG(local_380), GH_ARG(local_380 >> 0x20), GH_ARG(uStack_378 & 0xffffffff), GH_ARG(uStack_378 >> 0x20), GH_ARG(uVar10), GH_ARG(&local_1d0), GH_ARG(&local_368), GH_ARG(0x19), GH_ARG(900), GH_ARG(0));
    puVar7 = (undefined8 *)(local_1d0 - 0x18);
    if (puVar7 == &DAT_00d40300) goto switchD_003fa874_caseD_8;
    piVar8 = (int *)(local_1d0 - 8);
    do {
      iVar9 = *piVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar9 < 1) {
    operator_delete(puVar7);
  }
switchD_003fa874_caseD_8:
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(param_4 + -0x23), GH_ARG(param_5 + *(int *)(self + 0x32c824) + -10), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
  iVar9 = 0;
  if (*(int *)(self + 0x32c824) < 7) {
    iVar9 = *(int *)(self + 0x32c824) + 1;
  }
  *(int *)(self + 0x32c824) = iVar9;
  *piVar1 = *piVar1 + 1;
  if (*(gh_long *)(lVar6 + 0x28) != local_88) {
                    
    __stack_chk_fail();
  }
  return param_3;
}

