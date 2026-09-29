/* bzStateGame::AdEvent @ 0x0047633c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__AdEvent(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  gh_long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t gh_frame64[143] = {0};   /* 원작 스택 프레임 (SP-0x460 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x460;
#define local_460 (*(ulong *)(gh_fb - 0x460))
#define uStack_458 (*(ulong *)(gh_fb - 0x458))
#define local_448 (*(float *)(gh_fb - 0x448))
#define fStack_444 (*(float *)(gh_fb - 0x444))
#define local_440 (*(ulong *)(gh_fb - 0x440))
#define uStack_438 (*(ulong *)(gh_fb - 0x438))
#define local_428 (*(float *)(gh_fb - 0x428))
#define fStack_424 (*(float *)(gh_fb - 0x424))
#define local_420 (*(ulong *)(gh_fb - 0x420))
#define uStack_418 (*(ulong *)(gh_fb - 0x418))
#define local_408 (*(float *)(gh_fb - 0x408))
#define fStack_404 (*(float *)(gh_fb - 0x404))
#define local_400 (*(ulong *)(gh_fb - 0x400))
#define uStack_3f8 (*(ulong *)(gh_fb - 0x3f8))
#define local_3e8 (*(float *)(gh_fb - 0x3e8))
#define fStack_3e4 (*(float *)(gh_fb - 0x3e4))
#define local_3e0 (*(ulong *)(gh_fb - 0x3e0))
#define uStack_3d8 (*(ulong *)(gh_fb - 0x3d8))
#define local_3c8 (*(float *)(gh_fb - 0x3c8))
#define fStack_3c4 (*(float *)(gh_fb - 0x3c4))
#define local_3c0 (*(ulong *)(gh_fb - 0x3c0))
#define uStack_3b8 (*(ulong *)(gh_fb - 0x3b8))
#define local_3a8 (*(float *)(gh_fb - 0x3a8))
#define fStack_3a4 (*(float *)(gh_fb - 0x3a4))
#define local_3a0 (*(ulong *)(gh_fb - 0x3a0))
#define uStack_398 (*(ulong *)(gh_fb - 0x398))
#define local_388 (*(float *)(gh_fb - 0x388))
#define fStack_384 (*(float *)(gh_fb - 0x384))
#define local_380 (*(ulong *)(gh_fb - 0x380))
#define uStack_378 (*(ulong *)(gh_fb - 0x378))
#define local_368 (*(float *)(gh_fb - 0x368))
#define fStack_364 (*(float *)(gh_fb - 0x364))
#define local_360 (*(ulong *)(gh_fb - 0x360))
#define uStack_358 (*(ulong *)(gh_fb - 0x358))
#define local_348 (*(float *)(gh_fb - 0x348))
#define local_344 (*(float *)(gh_fb - 0x344))
#define local_340 (*(ulong *)(gh_fb - 0x340))
#define uStack_338 (*(ulong *)(gh_fb - 0x338))
#define local_328 (*(float *)(gh_fb - 0x328))
#define local_324 (*(float *)(gh_fb - 0x324))
#define local_320 (*(ulong *)(gh_fb - 0x320))
#define uStack_318 (*(ulong *)(gh_fb - 0x318))
#define local_308 (*(float *)(gh_fb - 0x308))
#define local_304 (*(float *)(gh_fb - 0x304))
#define local_300 (*(ulong *)(gh_fb - 0x300))
#define uStack_2f8 (*(ulong *)(gh_fb - 0x2f8))
#define local_2e8 (*(float *)(gh_fb - 0x2e8))
#define local_2e4 (*(float *)(gh_fb - 0x2e4))
#define local_2e0 (*(ulong *)(gh_fb - 0x2e0))
#define uStack_2d8 (*(ulong *)(gh_fb - 0x2d8))
#define local_2c8 (*(float *)(gh_fb - 0x2c8))
#define local_2c4 (*(float *)(gh_fb - 0x2c4))
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
#define local_1e0 (*(ulong *)(gh_fb - 0x1e0))
#define uStack_1d8 (*(ulong *)(gh_fb - 0x1d8))
#define local_1c8 (*(float *)(gh_fb - 0x1c8))
#define local_1c4 (*(float *)(gh_fb - 0x1c4))
#define local_1c0 (*(ulong *)(gh_fb - 0x1c0))
#define uStack_1b8 (*(ulong *)(gh_fb - 0x1b8))
#define local_1a8 (*(float *)(gh_fb - 0x1a8))
#define local_1a4 (*(float *)(gh_fb - 0x1a4))
#define local_1a0 (*(ulong *)(gh_fb - 0x1a0))
#define uStack_198 (*(ulong *)(gh_fb - 0x198))
#define local_188 (*(float *)(gh_fb - 0x188))
#define local_184 (*(float *)(gh_fb - 0x184))
#define local_180 (*(ulong *)(gh_fb - 0x180))
#define uStack_178 (*(ulong *)(gh_fb - 0x178))
#define local_168 (*(float *)(gh_fb - 0x168))
#define local_164 (*(float *)(gh_fb - 0x164))
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
#define local_c8 (*(float *)(gh_fb - 0xc8))
#define fStack_c4 (*(float *)(gh_fb - 0xc4))
#define local_c0 (*(ulong *)(gh_fb - 0xc0))
#define uStack_b8 (*(ulong *)(gh_fb - 0xb8))
#define local_a8 (*(undefined8 *)(gh_fb - 0xa8))
#define local_a0 (*(ulong *)(gh_fb - 0xa0))
#define uStack_98 (*(ulong *)(gh_fb - 0x98))
#define local_88 (*(undefined8 (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar1 = tpidr_el0;
  local_78 = *(gh_long *)(lVar1 + 0x28);
  if (self[0xb18] == '\0') goto LAB_00477484;
  uVar5 = *(undefined8 *)(self + 0xc38);
  self[0xb65] = 1;
  cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)local_88), GH_ARG(0.0), GH_ARG(0.0), GH_ARG((float)*(int *)(self + 0x1158)), GH_ARG((float)*(int *)(self + 0x115c)))
  ;
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_a0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.5));
  kDraw__drawRect_00479ae8(GH_ARG(local_a0), GH_ARG(local_a0 >> 0x20), GH_ARG(uStack_98 & 0xffffffff), GH_ARG(uStack_98 >> 0x20), GH_ARG(uVar5), GH_ARG(local_88));
  bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x20), GH_ARG(1));
  if (self[0xb64] == '\0') {
    uVar5 = *(undefined8 *)(self + 0xb10);
    local_a8 = 0x43a0000043f00000;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kSprite__drawPos_0047f378(GH_ARG(local_c0), GH_ARG(local_c0 >> 0x20), GH_ARG(uStack_b8 & 0xffffffff), GH_ARG(uStack_b8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_a8), GH_ARG(0));
    local_88[0] = 0x3f0000003f000000;
    gh_vcall(GH_ARG(*(gh_long **)(self + 0xb10)), 0x148, GH_ARG(local_88), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG(*(gh_long **)(self + 0xb10)), 0x90, GH_ARG(0x3f4ccccd), GH_ARG(0x3f666666), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    plVar2 = *(gh_long **)(self + 0xb10);
    iVar3 = (int)*(float *)(self + 0x8dabc);
    iVar4 = (int)(*(float *)((gh_long)plVar2 + 0x4c4) * 0.5 + 350.0);
    if ((iVar4 < iVar3) && (iVar3 < iVar4 + 0x32)) {
      iVar3 = (int)*(float *)(self + 0x8dac0);
      iVar4 = (int)(*(float *)(plVar2 + 0x99) * 0.5 + 25.0);
      if ((iVar4 < iVar3) && (iVar3 < iVar4 + 0x32)) {
        self[0xb18] = 0;
      }
    }
    if (((*(int *)(self + 0xb78) != *(int *)(self + 0xb7c)) ||
        (*(int *)(self + 0xb74) != *(int *)(self + 0xb80))) ||
       (*(int *)(self + 0xb70) != *(int *)(self + 0xb84))) {
      switch(*(undefined4 *)(self + 0x32c814)) {
      case 0:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fStack_c4 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_c8 = fVar7 + -250.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_e0), GH_ARG(local_e0 >> 0x20), GH_ARG(uStack_d8 & 0xffffffff), GH_ARG(uStack_d8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_c8), GH_ARG(0));
        break;
      case 1:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fStack_e4 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_e8 = fVar7 + -160.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_100), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_100), GH_ARG(local_100 >> 0x20), GH_ARG(uStack_f8 & 0xffffffff), GH_ARG(uStack_f8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_e8), GH_ARG(0));
        break;
      case 2:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fStack_104 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_108 = fVar7 + -65.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_120), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_120), GH_ARG(local_120 >> 0x20), GH_ARG(uStack_118 & 0xffffffff), GH_ARG(uStack_118 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_108), GH_ARG(0));
        break;
      case 3:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        local_124 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_128 = fVar7 + 35.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_140), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_140), GH_ARG(local_140 >> 0x20), GH_ARG(uStack_138 & 0xffffffff), GH_ARG(uStack_138 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_128), GH_ARG(0));
        break;
      case 4:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        local_144 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_148 = fVar7 + 125.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_160), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_160), GH_ARG(local_160 >> 0x20), GH_ARG(uStack_158 & 0xffffffff), GH_ARG(uStack_158 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_148), GH_ARG(0));
        break;
      case 5:
        uVar5 = *(undefined8 *)(self + 0xb58);
        fVar7 = (float)gh_vcall_f(GH_ARG(plVar2), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        local_164 = fVar8 + 20.0 + (float)*(int *)(self + 0xb60);
        local_168 = fVar7 + 225.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_180), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_180), GH_ARG(local_180 >> 0x20), GH_ARG(uStack_178 & 0xffffffff), GH_ARG(uStack_178 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_168), GH_ARG(0));
      }
      gh_vcall(GH_ARG(*(gh_long **)(self + 0xb58)), 0x90, GH_ARG(0x3f000000), GH_ARG(0x3f000000), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      iVar4 = *(int *)(self + 0xb60);
      iVar3 = 0;
      if (iVar4 < 7) {
        iVar3 = iVar4 + 1;
      }
      *(int *)(self + 0xb60) = iVar3;
    }
    piVar6 = (int *)(self + 0x32c814);
    iVar3 = *piVar6;
    if (iVar3 == 1) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_184 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_184 = local_184 + -32.0;
      local_188 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_1a0), GH_ARG(local_1a0 >> 0x20), GH_ARG(uStack_198 & 0xffffffff), GH_ARG(uStack_198 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_188), GH_ARG(0));
      iVar3 = *piVar6;
    }
    if (iVar3 == 2) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1a4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1a4 = local_1a4 + -32.0;
      local_1a8 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_1c0), GH_ARG(local_1c0 >> 0x20), GH_ARG(uStack_1b8 & 0xffffffff), GH_ARG(uStack_1b8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_1a8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb28);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb20)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1c4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1c4 = local_1c4 + -32.0;
      local_1c8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_1e0), GH_ARG(local_1e0 >> 0x20), GH_ARG(uStack_1d8 & 0xffffffff), GH_ARG(uStack_1d8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_1c8), GH_ARG(0));
      iVar3 = *piVar6;
    }
    if (iVar3 == 3) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1e4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_1e4 = local_1e4 + -32.0;
      local_1e8 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_200), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_200), GH_ARG(local_200 >> 0x20), GH_ARG(uStack_1f8 & 0xffffffff), GH_ARG(uStack_1f8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_1e8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb28);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb20)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_204 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_204 = local_204 + -32.0;
      local_208 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_220), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_220), GH_ARG(local_220 >> 0x20), GH_ARG(uStack_218 & 0xffffffff), GH_ARG(uStack_218 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_208), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb30);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb28)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_224 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_224 = local_224 + -32.0;
      local_228 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_240), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_240), GH_ARG(local_240 >> 0x20), GH_ARG(uStack_238 & 0xffffffff), GH_ARG(uStack_238 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_228), GH_ARG(0));
      iVar3 = *piVar6;
    }
    if (iVar3 == 4) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_244 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_244 = local_244 + -32.0;
      local_248 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_260), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_260), GH_ARG(local_260 >> 0x20), GH_ARG(uStack_258 & 0xffffffff), GH_ARG(uStack_258 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_248), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb28);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb20)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_264 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_264 = local_264 + -32.0;
      local_268 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_280), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_280), GH_ARG(local_280 >> 0x20), GH_ARG(uStack_278 & 0xffffffff), GH_ARG(uStack_278 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_268), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb30);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb28)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_284 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_284 = local_284 + -32.0;
      local_288 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_2a0), GH_ARG(local_2a0 >> 0x20), GH_ARG(uStack_298 & 0xffffffff), GH_ARG(uStack_298 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_288), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb38);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb30)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2a4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2a4 = local_2a4 + -32.0;
      local_2a8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_2c0), GH_ARG(local_2c0 >> 0x20), GH_ARG(uStack_2b8 & 0xffffffff), GH_ARG(uStack_2b8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_2a8), GH_ARG(0));
      iVar3 = *piVar6;
    }
    if (iVar3 == 5) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2c4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2c4 = local_2c4 + -32.0;
      local_2c8 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_2e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_2e0), GH_ARG(local_2e0 >> 0x20), GH_ARG(uStack_2d8 & 0xffffffff), GH_ARG(uStack_2d8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_2c8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb28);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb20)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2e4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_2e4 = local_2e4 + -32.0;
      local_2e8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_300), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_300), GH_ARG(local_300 >> 0x20), GH_ARG(uStack_2f8 & 0xffffffff), GH_ARG(uStack_2f8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_2e8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb30);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb28)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_304 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_304 = local_304 + -32.0;
      local_308 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_320), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_320), GH_ARG(local_320 >> 0x20), GH_ARG(uStack_318 & 0xffffffff), GH_ARG(uStack_318 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_308), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb38);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb30)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_324 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_324 = local_324 + -32.0;
      local_328 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_340), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_340), GH_ARG(local_340 >> 0x20), GH_ARG(uStack_338 & 0xffffffff), GH_ARG(uStack_338 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_328), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb40);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb38)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_344 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      local_344 = local_344 + -32.0;
      local_348 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_360), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_360), GH_ARG(local_360 >> 0x20), GH_ARG(uStack_358 & 0xffffffff), GH_ARG(uStack_358 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_348), GH_ARG(0));
      iVar3 = *piVar6;
    }
    if (5 < iVar3) {
      uVar5 = *(undefined8 *)(self + 0xb20);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_364 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_364 = fStack_364 + -32.0;
      local_368 = fVar7 + -340.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_380), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_380), GH_ARG(local_380 >> 0x20), GH_ARG(uStack_378 & 0xffffffff), GH_ARG(uStack_378 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_368), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb28);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb20)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_384 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_384 = fStack_384 + -32.0;
      local_388 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3a0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_3a0), GH_ARG(local_3a0 >> 0x20), GH_ARG(uStack_398 & 0xffffffff), GH_ARG(uStack_398 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_388), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb30);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb28)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3a4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3a4 = fStack_3a4 + -32.0;
      local_3a8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3c0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_3c0), GH_ARG(local_3c0 >> 0x20), GH_ARG(uStack_3b8 & 0xffffffff), GH_ARG(uStack_3b8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_3a8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb38);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb30)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3c4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3c4 = fStack_3c4 + -32.0;
      local_3c8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_3e0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_3e0), GH_ARG(local_3e0 >> 0x20), GH_ARG(uStack_3d8 & 0xffffffff), GH_ARG(uStack_3d8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_3c8), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb40);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb38)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3e4 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_3e4 = fStack_3e4 + -32.0;
      local_3e8 = fVar7 + 95.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_400), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_400), GH_ARG(local_400 >> 0x20), GH_ARG(uStack_3f8 & 0xffffffff), GH_ARG(uStack_3f8 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_3e8), GH_ARG(0));
      piVar6 = (int *)(self + 0x32c80c);
      if (*piVar6 != 0) {
        self[0xb89] = 0;
        uVar5 = *(undefined8 *)(self + 0xb38);
        fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb40)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fStack_404 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fStack_404 = fStack_404 + -35.0;
        local_408 = fVar7 + 110.0;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_420), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
        kSprite__drawPos_0047f378(GH_ARG(local_420), GH_ARG(local_420 >> 0x20), GH_ARG(uStack_418 & 0xffffffff), GH_ARG(uStack_418 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_408), GH_ARG(0));
        if (*piVar6 == 1) goto LAB_00477374;
      }
      local_88[0] = 0x3f0000003f000000;
      gh_vcall(GH_ARG(*(gh_long **)(self + 0xb48)), 0x148, GH_ARG(local_88), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar5 = *(undefined8 *)(self + 0xb48);
      fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_424 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      fStack_424 = fStack_424 + -13.0;
      local_428 = fVar7 + 190.0;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_440), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      kSprite__drawPos_0047f378(GH_ARG(local_440), GH_ARG(local_440 >> 0x20), GH_ARG(uStack_438 & 0xffffffff), GH_ARG(uStack_438 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_428), GH_ARG(0));
      if (*piVar6 != 1) {
        iVar3 = (int)*(float *)(self + 0x8dabc);
        fVar7 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        fVar9 = *(float *)(self + 0x8dac0);
        fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb10)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        if (((int)(fVar7 + 180.0) < iVar3) && (iVar3 < (int)(fVar7 + 180.0) + 100)) {
          iVar3 = (int)fVar9;
          if (((int)(fVar8 + -15.0) < iVar3) && (iVar3 < (int)(fVar8 + -15.0) + 100)) {
            self[0xb64] = 1;
            goto LAB_0047737c;
          }
        }
      }
    }
LAB_00477374:
    if (self[0xb64] != '\0') goto LAB_0047737c;
  }
  else {
LAB_0047737c:
    uVar5 = *(undefined8 *)(self + 0xb50);
    local_448 = (float)*(int *)(self + 0x1164);
    fStack_444 = (float)(*(int *)(self + 0x1160) + -0x15e);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_460), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kSprite__drawPos_0047f378(GH_ARG(local_460), GH_ARG(local_460 >> 0x20), GH_ARG(uStack_458 & 0xffffffff), GH_ARG(uStack_458 >> 0x20), GH_ARG(0x3f800000), GH_ARG(uVar5), GH_ARG(&local_448), GH_ARG(0));
    fVar7 = *(float *)(self + 0x8dabc);
    fVar8 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb50)), 0xe0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    fVar10 = *(float *)(self + 0x8dac0);
    fVar9 = (float)gh_vcall_f(GH_ARG(*(gh_long **)(self + 0xb50)), 0xf0, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    if (((int)(fVar8 + 20.0) < (int)fVar7) && ((int)fVar7 < (int)(fVar8 + 20.0) + 0x104)) {
      if (((int)(fVar9 + -130.0) < (int)fVar10) && ((int)fVar10 < (int)(fVar9 + -130.0) + 0x46)) {
        self[0xb18] = 0;
        bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(1000));
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x21), GH_ARG(1));
        self[0xb64] = 0;
      }
    }
  }
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
LAB_00477484:
  if (*(gh_long *)(lVar1 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
