/* bzStateGame::drawString_003aee28 @ 0x003aee28 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__drawString_003aee28(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gh_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gh_a6;
  int param_8 = (int)gh_a7;

  gh_long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t gh_frame64[49] = {0};   /* 원작 스택 프레임 (SP-0x170 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x170;
#define local_170 (*(float *)(gh_fb - 0x170))
#define fStack_16c (*(float *)(gh_fb - 0x16c))
#define local_168 (*(float *)(gh_fb - 0x168))
#define fStack_164 (*(float *)(gh_fb - 0x164))
#define local_160 (*(float *)(gh_fb - 0x160))
#define fStack_15c (*(float *)(gh_fb - 0x15c))
#define local_158 (*(float *)(gh_fb - 0x158))
#define fStack_154 (*(float *)(gh_fb - 0x154))
#define local_150 (*(float *)(gh_fb - 0x150))
#define fStack_14c (*(float *)(gh_fb - 0x14c))
#define local_148 (*(float *)(gh_fb - 0x148))
#define fStack_144 (*(float *)(gh_fb - 0x144))
#define local_140 (*(float *)(gh_fb - 0x140))
#define fStack_13c (*(float *)(gh_fb - 0x13c))
#define local_138 (*(float *)(gh_fb - 0x138))
#define fStack_134 (*(float *)(gh_fb - 0x134))
#define local_130 (*(float *)(gh_fb - 0x130))
#define fStack_12c (*(float *)(gh_fb - 0x12c))
#define local_128 (*(float *)(gh_fb - 0x128))
#define fStack_124 (*(float *)(gh_fb - 0x124))
#define local_120 (*(float *)(gh_fb - 0x120))
#define fStack_11c (*(float *)(gh_fb - 0x11c))
#define local_118 (*(float *)(gh_fb - 0x118))
#define fStack_114 (*(float *)(gh_fb - 0x114))
#define local_110 (*(float *)(gh_fb - 0x110))
#define fStack_10c (*(float *)(gh_fb - 0x10c))
#define local_108 (*(float *)(gh_fb - 0x108))
#define fStack_104 (*(float *)(gh_fb - 0x104))
#define local_100 (*(float *)(gh_fb - 0x100))
#define fStack_fc (*(float *)(gh_fb - 0xfc))
#define local_f8 (*(float *)(gh_fb - 0xf8))
#define fStack_f4 (*(float *)(gh_fb - 0xf4))
#define local_f0 (*(float *)(gh_fb - 0xf0))
#define fStack_ec (*(float *)(gh_fb - 0xec))
#define local_e8 (*(float *)(gh_fb - 0xe8))
#define fStack_e4 (*(float *)(gh_fb - 0xe4))
#define local_e0 (*(float *)(gh_fb - 0xe0))
#define fStack_dc (*(float *)(gh_fb - 0xdc))
#define local_d8 (*(float *)(gh_fb - 0xd8))
#define fStack_d4 (*(float *)(gh_fb - 0xd4))
#define local_d0 (*(float *)(gh_fb - 0xd0))
#define fStack_cc (*(float *)(gh_fb - 0xcc))
#define local_c8 (*(float *)(gh_fb - 0xc8))
#define fStack_c4 (*(float *)(gh_fb - 0xc4))
#define local_c0 (*(float *)(gh_fb - 0xc0))
#define fStack_bc (*(float *)(gh_fb - 0xbc))
#define local_b8 (*(float *)(gh_fb - 0xb8))
#define fStack_b4 (*(float *)(gh_fb - 0xb4))
#define local_b0 (*(float *)(gh_fb - 0xb0))
#define fStack_ac (*(float *)(gh_fb - 0xac))
#define local_a8 (*(float *)(gh_fb - 0xa8))
#define fStack_a4 (*(float *)(gh_fb - 0xa4))
#define local_a0 (*(float *)(gh_fb - 0xa0))
#define fStack_9c (*(float *)(gh_fb - 0x9c))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
  
  lVar1 = tpidr_el0;
  local_98 = *(gh_long *)(lVar1 + 0x28);
  switch(param_8) {
  case 1:
    local_a0 = (float)param_3;
    fStack_9c = (float)param_4;
    uVar2 = *(undefined8 *)(self + 0x8da80);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_a0;
    break;
  case 2:
    fVar6 = (float)param_4;
    local_a8 = (float)(param_3 + -1);
    fStack_a4 = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(param_2), GH_ARG(&local_a8), GH_ARG(param_5));
    local_b0 = (float)(param_3 + 1);
    fStack_ac = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(param_2), GH_ARG(&local_b0), GH_ARG(param_5));
    fVar7 = (float)param_3;
    fStack_b4 = (float)(param_4 + -1);
    local_b8 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(param_2), GH_ARG(&local_b8), GH_ARG(param_5));
    fStack_bc = (float)(param_4 + 1);
    local_c0 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da88)), GH_ARG(param_2), GH_ARG(&local_c0), GH_ARG(param_5));
    uVar2 = *(undefined8 *)(self + 0x8da88);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_c8;
    local_c8 = fVar7;
    fStack_c4 = fVar6;
    break;
  case 3:
    local_d0 = (float)param_3;
    fStack_cc = (float)param_4;
    uVar2 = *(undefined8 *)(self + 0x8da90);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_d0;
    break;
  case 4:
    fVar6 = (float)param_4;
    fVar7 = (float)(param_3 + -2);
    local_d8 = fVar7;
    fStack_d4 = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_d8), GH_ARG(param_5));
    fVar8 = (float)(param_3 + 2);
    local_e0 = fVar8;
    fStack_dc = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_e0), GH_ARG(param_5));
    fVar9 = (float)param_3;
    fVar10 = (float)(param_4 + -2);
    local_e8 = fVar9;
    fStack_e4 = fVar10;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_e8), GH_ARG(param_5));
    fVar11 = (float)(param_4 + 2);
    local_f0 = fVar9;
    fStack_ec = fVar11;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_f0), GH_ARG(param_5));
    local_f8 = fVar7;
    fStack_f4 = fVar10;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_f8), GH_ARG(param_5));
    local_100 = fVar8;
    fStack_fc = fVar11;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_100), GH_ARG(param_5));
    local_108 = fVar7;
    fStack_104 = fVar11;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_108), GH_ARG(param_5));
    local_110 = fVar8;
    fStack_10c = fVar10;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_110), GH_ARG(param_5));
    uVar2 = *(undefined8 *)(self + 0x8da90);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_118;
    local_118 = fVar9;
    fStack_114 = fVar6;
    break;
  case 5:
    fVar6 = (float)param_4;
    local_128 = (float)(param_3 + -1);
    fStack_124 = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(param_2), GH_ARG(&local_128), GH_ARG(param_5));
    local_130 = (float)(param_3 + 1);
    fStack_12c = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(param_2), GH_ARG(&local_130), GH_ARG(param_5));
    fVar7 = (float)param_3;
    fStack_134 = (float)(param_4 + -1);
    local_138 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(param_2), GH_ARG(&local_138), GH_ARG(param_5));
    fStack_13c = (float)(param_4 + 1);
    local_140 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(param_2), GH_ARG(&local_140), GH_ARG(param_5));
    uVar2 = *(undefined8 *)(self + 0x8da80);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_148;
    local_148 = fVar7;
    fStack_144 = fVar6;
    break;
  case 6:
    local_120 = (float)param_3;
    fStack_11c = (float)param_4;
    uVar2 = *(undefined8 *)(self + 0x8da88);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_120;
    break;
  case 7:
    fVar6 = (float)param_4;
    local_150 = (float)(param_3 + -1);
    fStack_14c = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_150), GH_ARG(param_5));
    local_158 = (float)(param_3 + 1);
    fStack_154 = fVar6;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_158), GH_ARG(param_5));
    fVar7 = (float)param_3;
    fStack_15c = (float)(param_4 + -1);
    local_160 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_160), GH_ARG(param_5));
    fStack_164 = (float)(param_4 + 1);
    local_168 = fVar7;
    kFont__drawString_0047ae54(GH_ARG(*(undefined8 *)param_7), GH_ARG((int)((ulong)*(undefined8 *)param_7 >> 0x20)), GH_ARG((int)*(undefined8 *)(param_7 + 8)), GH_ARG((int)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20)), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(param_2), GH_ARG(&local_168), GH_ARG(param_5));
    uVar2 = *(undefined8 *)(self + 0x8da90);
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar4 = *(undefined8 *)param_6;
    pfVar3 = &local_170;
    local_170 = fVar7;
    fStack_16c = fVar6;
    break;
  default:
    goto switchD_003aee98_default;
  }
  kFont__drawString_0047ae54(GH_ARG(uVar4), GH_ARG((int)((ulong)uVar4 >> 0x20)), GH_ARG((int)uVar5), GH_ARG((int)((ulong)uVar5 >> 0x20)), GH_ARG(uVar2), GH_ARG(param_2), GH_ARG(pfVar3), GH_ARG(param_5));
switchD_003aee98_default:
  if (*(gh_long *)(lVar1 + 0x28) != local_98) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
