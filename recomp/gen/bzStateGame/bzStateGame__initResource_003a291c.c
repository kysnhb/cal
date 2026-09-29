/* bzStateGame::initResource_003a291c @ 0x003a291c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#include <time.h>
#undef DAT_00a4daff
#define DAT_00a4daff (*(undefined1 *)IMG(0x00a4daff))
#undef DAT_00a4db20
#define DAT_00a4db20 (*(undefined1 *)IMG(0x00a4db20))
#undef DAT_00a4db3a
#define DAT_00a4db3a (*(undefined1 *)IMG(0x00a4db3a))
#undef DAT_00a4db55
#define DAT_00a4db55 (*(undefined1 *)IMG(0x00a4db55))
#undef DAT_00a50b50
#define DAT_00a50b50 (*(undefined4 *)IMG(0x00a50b50))
#undef DAT_00a50b54
#define DAT_00a50b54 (*(undefined4 *)IMG(0x00a50b54))
#undef DAT_00a50b58
#define DAT_00a50b58 (*(undefined4 *)IMG(0x00a50b58))
#undef DAT_00a50b5c
#define DAT_00a50b5c (*(undefined4 *)IMG(0x00a50b5c))
#undef DAT_00a50b60
#define DAT_00a50b60 (*(undefined4 *)IMG(0x00a50b60))
#undef DAT_00a50b64
#define DAT_00a50b64 (*(undefined4 *)IMG(0x00a50b64))
#undef DAT_00a50b68
#define DAT_00a50b68 (*(undefined4 *)IMG(0x00a50b68))
#undef DAT_00a50b6c
#define DAT_00a50b6c (*(undefined4 *)IMG(0x00a50b6c))
#undef DAT_00a5150c
#define DAT_00a5150c (*(undefined4 *)IMG(0x00a5150c))
#undef DAT_00a51510
#define DAT_00a51510 (*(undefined4 *)IMG(0x00a51510))
#undef DAT_00a51514
#define DAT_00a51514 (*(undefined4 *)IMG(0x00a51514))
#undef DAT_00a51518
#define DAT_00a51518 (*(undefined4 *)IMG(0x00a51518))
#undef DAT_00a5151c
#define DAT_00a5151c (*(undefined4 *)IMG(0x00a5151c))
#undef DAT_00a51520
#define DAT_00a51520 (*(undefined4 *)IMG(0x00a51520))
#undef DAT_00a51524
#define DAT_00a51524 (*(undefined4 *)IMG(0x00a51524))
#undef DAT_00a51528
#define DAT_00a51528 (*(undefined4 *)IMG(0x00a51528))
#undef DAT_00a51748
#define DAT_00a51748 (*(undefined4 *)IMG(0x00a51748))
#undef DAT_00a5174c
#define DAT_00a5174c (*(undefined4 *)IMG(0x00a5174c))
#undef DAT_00a51750
#define DAT_00a51750 (*(undefined4 *)IMG(0x00a51750))
#undef DAT_00a51754
#define DAT_00a51754 (*(undefined4 *)IMG(0x00a51754))
#undef DAT_00a51758
#define DAT_00a51758 (*(undefined4 *)IMG(0x00a51758))
#undef DAT_00a5175c
#define DAT_00a5175c (*(undefined4 *)IMG(0x00a5175c))
#undef DAT_00a51760
#define DAT_00a51760 (*(undefined4 *)IMG(0x00a51760))
#undef DAT_00a51764
#define DAT_00a51764 (*(undefined4 *)IMG(0x00a51764))
#undef DAT_00a51984
#define DAT_00a51984 (*(undefined4 *)IMG(0x00a51984))
#undef DAT_00a51988
#define DAT_00a51988 (*(undefined4 *)IMG(0x00a51988))
#undef DAT_00a53078
#define DAT_00a53078 (*(undefined1 *)IMG(0x00a53078))
#undef UNK_00a53080
#define UNK_00a53080 (*(undefined1 *)IMG(0x00a53080))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long bzStateGame__initResource_003a291c(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  char *__s;
  int iVar1;
  char cVar2;
  gh_long lVar3;
  bool bVar4;
  undefined4 *puVar5;
  time_t tVar7;
  size_t sVar8;
  int iVar9;
  undefined1 *puVar10;
  gh_long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined4 uVar20;
  undefined4 uVar21;
  uint64_t gh_frame64[15] = {0};   /* 원작 스택 프레임 (SP-0x60 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x60;
#define local_60 (*(undefined1 **)(gh_fb - 0x60))
#define local_58 (*(undefined1 *(*)[2])(gh_fb - 0x58))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  undefined4 *puVar6;
  
  lVar3 = tpidr_el0;
  local_48 = *(gh_long *)(lVar3 + 0x28);
  cocos2d__log_005d21e4(GH_ARG("initResource"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  tVar7 = time((time_t *)0x0);
  srand((uint)tVar7);
  *(undefined4 *)(self + 0xb90) = 0x46;
  rand();
  *(undefined4 *)(self + 0xb8c) = 0;
  __s = self + 0xd38;
  local_58[0] = &DAT_00d40318;
  kScene__getSysInfo_0047e070(GH_ARG((kScene *)self), GH_ARG(1), GH_ARG(__s));
  sVar8 = strlen(__s);
  FUN_009d7480(GH_ARG(local_58), GH_ARG(__s), GH_ARG(sVar8));
  cocos2d__log_005d21e4(GH_ARG(" deviceID %s "), GH_ARG(local_58[0]), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  local_60 = &DAT_00d40318;
  FUN_009d899c(GH_ARG(&local_60), GH_ARG(local_58));
  *(undefined4 *)(self + 0x1b04) = 0;
  if (*(gh_long *)(local_60 + -0x18) != 0) {
    iVar9 = 0;
    uVar14 = 0;
    puVar10 = local_60;
    do {
      if (-1 < *(int *)(puVar10 + -8)) {
        FUN_009d719c(GH_ARG(&local_60));
        puVar10 = local_60;
      }
      iVar1 = iVar9 + (int)uVar14 * (int)(char)puVar10[uVar14];
      iVar9 = -iVar1;
      if (-1 < iVar1) {
        iVar9 = iVar1;
      }
      *(int *)(self + 0x1b04) = iVar9;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulong *)(puVar10 + -0x18));
  }
  bzStateGame__DailyCheck_003a41ac(GH_ARG(self));
  lVar11 = 0;
  puVar13 = (undefined8 *)(self + 0x31af58);
  do {
    uVar15 = *(undefined4 *)((gh_long)&DAT_00a50b50 + lVar11);
    uVar17 = *(undefined4 *)((gh_long)&DAT_00a50b54 + lVar11);
    uVar16 = *(undefined4 *)((gh_long)&DAT_00a50b58 + lVar11);
    uVar19 = *(undefined4 *)((gh_long)&DAT_00a50b5c + lVar11);
    puVar5 = (undefined4 *)((gh_long)&DAT_00a50b60 + lVar11);
    uVar20 = *(undefined4 *)((gh_long)&DAT_00a50b64 + lVar11);
    puVar6 = (undefined4 *)((gh_long)&DAT_00a50b68 + lVar11);
    uVar21 = *(undefined4 *)((gh_long)&DAT_00a50b6c + lVar11);
    lVar11 = lVar11 + 0x20;
    puVar13[1] = CONCAT44(*puVar6,*puVar5);
    *puVar13 = CONCAT44(uVar16,uVar15);
    puVar13[0xb0] = CONCAT44(uVar21,uVar20);
    puVar13[0xaf] = CONCAT44(uVar19,uVar17);
    puVar13 = puVar13 + 2;
  } while (lVar11 != 0x9a0);
  *(undefined8 *)(self + 0x31b428) = 0;
  *(undefined8 *)(self + 0x31b9a0) = 0;
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a4daff), GH_ARG(0x137), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  lVar11 = 0;
  puVar13 = (undefined8 *)(self + 0x31ba48);
  do {
    uVar15 = *(undefined4 *)((gh_long)&DAT_00a5150c + lVar11);
    uVar17 = *(undefined4 *)((gh_long)&DAT_00a51510 + lVar11);
    uVar16 = *(undefined4 *)((gh_long)&DAT_00a51514 + lVar11);
    uVar19 = *(undefined4 *)((gh_long)&DAT_00a51518 + lVar11);
    puVar5 = (undefined4 *)((gh_long)&DAT_00a5151c + lVar11);
    uVar20 = *(undefined4 *)((gh_long)&DAT_00a51520 + lVar11);
    puVar6 = (undefined4 *)((gh_long)&DAT_00a51524 + lVar11);
    uVar21 = *(undefined4 *)((gh_long)&DAT_00a51528 + lVar11);
    lVar11 = lVar11 + 0x20;
    puVar13[1] = CONCAT44(*puVar6,*puVar5);
    *puVar13 = CONCAT44(uVar16,uVar15);
    puVar13[0x65] = CONCAT44(uVar21,uVar20);
    puVar13[100] = CONCAT44(uVar19,uVar17);
    puVar13 = puVar13 + 2;
  } while (lVar11 != 0x220);
  *(undefined8 *)(self + 0x31bb58) = 0;
  *(undefined8 *)(self + 0x31be78) = 0;
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a4db20), GH_ARG(0x47), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  lVar11 = 0;
  puVar13 = (undefined8 *)(self + 0x31cd08);
  do {
    uVar15 = *(undefined4 *)((gh_long)&DAT_00a51748 + lVar11);
    uVar17 = *(undefined4 *)((gh_long)&DAT_00a5174c + lVar11);
    uVar16 = *(undefined4 *)((gh_long)&DAT_00a51750 + lVar11);
    uVar19 = *(undefined4 *)((gh_long)&DAT_00a51754 + lVar11);
    puVar5 = (undefined4 *)((gh_long)&DAT_00a51758 + lVar11);
    uVar20 = *(undefined4 *)((gh_long)&DAT_00a5175c + lVar11);
    puVar6 = (undefined4 *)((gh_long)&DAT_00a51760 + lVar11);
    uVar21 = *(undefined4 *)((gh_long)&DAT_00a51764 + lVar11);
    lVar11 = lVar11 + 0x20;
    puVar13[1] = CONCAT44(*puVar6,*puVar5);
    *puVar13 = CONCAT44(uVar16,uVar15);
    puVar13[0x65] = CONCAT44(uVar21,uVar20);
    puVar13[100] = CONCAT44(uVar19,uVar17);
    puVar13 = puVar13 + 2;
  } while (lVar11 != 0x220);
  *(undefined8 *)(self + 0x31ce18) = 0;
  *(undefined8 *)(self + 0x31d138) = 0;
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a4db3a), GH_ARG(0x47), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar14 = 0;
  piVar12 = (int *)(self + 0x31f468);
  do {
    if ((&DAT_00a51984)[uVar14] == -999) {
      iVar9 = (int)uVar14;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      cocos2d__log_005d21e4(GH_ARG(&DAT_00a4db55), GH_ARG((ulong)((iVar9 >> 1) + 1)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      break;
    }
    iVar9 = (&DAT_00a51988)[uVar14];
    *piVar12 = (&DAT_00a51984)[uVar14];
    bVar4 = uVar14 < 0x7ce;
    uVar14 = uVar14 + 2;
    piVar12[800] = iVar9;
    piVar12 = piVar12 + 1;
  } while (bVar4);
  *(undefined8 *)(self + 0x32ab0c) = 0x23500000002;
  *(undefined8 *)(self + 0x32ab04) = 0x200000235;
  *(undefined8 *)(self + 0x32ab1c) = 0x3200000235;
  *(undefined8 *)(self + 0x32ab14) = 0xfffffff30000001a;
  *(undefined8 *)(self + 0x32ab2c) = 0xffffffd30000004b;
  *(undefined8 *)(self + 0x32ab24) = 0x235ffffffe3;
  *(undefined8 *)(self + 0x32ab3c) = 0x235ffffffc3;
  *(undefined8 *)(self + 0x32ab34) = 0x6600000235;
  *(undefined8 *)(self + 0x32ab4c) = 0x9b00000235;
  *(undefined8 *)(self + 0x32ab44) = 0xffffffb200000080;
  *(undefined8 *)(self + 0x32ab5c) = 0xffffff94000000ba;
  *(undefined8 *)(self + 0x32ab54) = 0x24effffffa1;
  *(undefined8 *)(self + 0x32ab6c) = 0x26cffffff8d;
  *(undefined8 *)(self + 0x32ab64) = 0xe000000262;
  *(undefined8 *)(self + 0x32ab7c) = 0x1280000000f;
  *(undefined8 *)(self + 0x32ab74) = 0xffffff8900000105;
  *(undefined8 *)(self + 0x32ab8c) = 0xffffff980000014b;
  *(undefined8 *)(self + 0x32ab84) = 0x37ffffff8c;
  *(undefined8 *)(self + 0x32ab9c) = 0x69ffffffab;
  *(undefined8 *)(self + 0x32ab94) = 0x1620000005a;
  *(undefined8 *)(self + 0x32abac) = 0x1890000004b;
  *(undefined8 *)(self + 0x32aba4) = 0xffffffcc00000174;
  *(undefined8 *)(self + 0x32abbc) = 0x2000001a7;
  *(undefined8 *)(self + 0x32abb4) = 0x3cffffffe7;
  *(undefined8 *)(self + 0x32abcc) = 0x1e00000014;
  *(undefined8 *)(self + 0x32abc4) = 0x1ca0000002d;
  *(undefined8 *)(self + 0x32abdc) = 0x20e00000041;
  *(undefined8 *)(self + 0x32abd4) = 0x25000001ee;
  *(undefined8 *)(self + 0x32abec) = 0x500000022a;
  *(undefined8 *)(self + 0x32abe4) = 0x5a00000035;
  *(undefined8 *)(self + 0x32abfc) = 0x7800000073;
  *(undefined8 *)(self + 0x32abf4) = 0x23f00000069;
  *(undefined8 *)(self + 0x32ac0c) = 0x25a00000055;
  *(undefined8 *)(self + 0x32ac04) = 0x940000024e;
  *(undefined8 *)(self + 0x32ac1c) = 0xc700000274;
  *(undefined8 *)(self + 0x32ac14) = 0x41000000b4;
  *(undefined8 *)(self + 0x32ac2c) = 0x5a000000dc;
  *(undefined8 *)(self + 0x32ac24) = 0x29100000037;
  *(undefined8 *)(self + 0x32ac3c) = 0x2b800000064;
  *(undefined8 *)(self + 0x32ac34) = 0xf2000002aa;
  *(undefined8 *)(self + 0x32ac4c) = 0x12d000002c4;
  *(undefined8 *)(self + 0x32ac44) = 0x6400000113;
  *(undefined8 *)(self + 0x32ac54) = 0xfffffc19fffffc19;
  *(undefined4 *)(self + 0x32ac5c) = 0xfffffc19;
  *(undefined8 *)(self + 0x32ad3c) = 0x23000000003;
  *(undefined8 *)(self + 0x32ad34) = 0x100000230;
  *(undefined8 *)(self + 0x32ad4c) = 0x3900000230;
  *(undefined8 *)(self + 0x32ad44) = 0xffffffee0000001d;
  *(undefined8 *)(self + 0x32ad5c) = 0xffffffc500000056;
  *(undefined8 *)(self + 0x32ad54) = 0x230ffffffda;
  *(undefined8 *)(self + 0x32ad6c) = 0x21cffffffb0;
  *(undefined8 *)(self + 0x32ad64) = 0x7600000230;
  *(undefined8 *)(self + 0x32ad7c) = 0x9e000001f9;
  *(undefined8 *)(self + 0x32ad74) = 0xffffff9400000090;
  *(undefined8 *)(self + 0x32ad8c) = 0xffffff4d000000a2;
  *(undefined8 *)(self + 0x32ad84) = 0x1d6ffffff74;
  *(undefined8 *)(self + 0x32ad9c) = 0x172ffffff2e;
  *(undefined8 *)(self + 0x32ad94) = 0x9c0000019f;
  *(undefined8 *)(self + 0x32adac) = 0x5e00000145;
  *(undefined8 *)(self + 0x32ada4) = 0xffffff1500000081;
  *(undefined8 *)(self + 0x32adbc) = 0xffffff090000003c;
  *(undefined8 *)(self + 0x32adb4) = 0x11dffffff06;
  *(undefined8 *)(self + 0x32adcc) = 0xc8ffffff17;
  *(undefined8 *)(self + 0x32adc4) = 0x1e000000f5;
  *(undefined8 *)(self + 0x32addc) = 0x1000000a5;
  *(undefined8 *)(self + 0x32add4) = 0xffffff2e0000000b;
  *(undefined8 *)(self + 0x32adec) = 0xffffff6f00000009;
  *(undefined8 *)(self + 0x32ade4) = 0x7dffffff4e;
  *(undefined8 *)(self + 0x32adfc) = 0x32ffffff8b;
  *(undefined8 *)(self + 0x32adf4) = 0x1a0000004b;
  *(undefined8 *)(self + 0x32ae0c) = 0x4f00000037;
  *(undefined8 *)(self + 0x32ae04) = 0xffffffa200000034;
  *(undefined8 *)(self + 0x32ae1c) = 0xffffffc40000006d;
  *(undefined8 *)(self + 0x32ae14) = 0x37ffffffb2;
  *(undefined8 *)(self + 0x32ae2c) = 0x37ffffffd7;
  *(undefined8 *)(self + 0x32ae24) = 0x8900000037;
  *(undefined8 *)(self + 0x32ae3c) = 0xc200000037;
  *(undefined8 *)(self + 0x32ae34) = 0xffffffeb000000a6;
  *(undefined8 *)(self + 0x32ae4c) = 0x12000000e0;
  *(undefined8 *)(self + 0x32ae44) = 0x37fffffffd;
  *(undefined8 *)(self + 0x32ae5c) = 0x6400000028;
  *(undefined8 *)(self + 0x32ae54) = 0xf70000005a;
  *(undefined8 *)(self + 0x32ae6c) = 0x11f00000064;
  *(undefined8 *)(self + 0x32ae64) = 0x480000010d;
  *(undefined8 *)(self + 0x32ae7c) = 0x8100000135;
  *(undefined8 *)(self + 0x32ae74) = 0x5000000065;
  *(undefined8 *)(self + 0x32ae8c) = 0x50000008f;
  *(undefined8 *)(self + 0x32ae84) = 0x1510000001e;
  *(undefined8 *)(self + 0x32ae9c) = 0x1a400000271;
  *(undefined8 *)(self + 0x32ae94) = 0x9600000179;
  *(undefined8 *)(self + 0x32aeac) = 0x92000001c9;
  *(undefined8 *)(self + 0x32aea4) = 0x26200000096;
  *(undefined8 *)(self + 0x32aebc) = 0x2530000008c;
  *(undefined8 *)(self + 0x32aeb4) = 0x1f000000262;
  *(undefined8 *)(self + 0x32aecc) = 0x24100000253;
  *(undefined8 *)(self + 0x32aec4) = 0x850000021d;
  *(undefined8 *)(self + 0x32aedc) = 0x7800000261;
  *(undefined8 *)(self + 0x32aed4) = 0x2710000007b;
  *(undefined8 *)(self + 0x32aeec) = 0x230000007f;
  *(undefined8 *)(self + 0x32aee4) = 0x27f00000014;
  *(undefined8 *)(self + 0x32aefc) = 0x2c60000003c;
  *(undefined8 *)(self + 0x32aef4) = 0x91000002a4;
  *(undefined8 *)(self + 0x32af0c) = 0xb5000002df;
  *(undefined8 *)(self + 0x32af04) = 0x4b000000a1;
  *(undefined8 *)(self + 0x32af1c) = 0x5a000000cd;
  *(undefined8 *)(self + 0x32af14) = 0x2f40000005a;
  *(undefined8 *)(self + 0x32af2c) = 0x31e0000004b;
  *(undefined8 *)(self + 0x32af24) = 0xe500000309;
  *(undefined8 *)(self + 0x32af3c) = 0x11a0000033b;
  *(undefined8 *)(self + 0x32af34) = 0x4b000000fe;
  *(undefined8 *)(self + 0x32af4c) = 0xfffffc1900000134;
  *(undefined8 *)(self + 0x32af44) = 0x3550000004b;
  *(undefined4 *)(self + 0x32af54) = 0xfffffc19;
  *(undefined4 *)(self + 0x32af58) = 0xfffffc19;
  lVar11 = 0;
  do {
    uVar18 = *(undefined8 *)(&DAT_00a53078 + lVar11);
    *(undefined8 *)((gh_long)(self + lVar11 + 0x32af64) + 8) = *(undefined8 *)(&UNK_00a53080 + lVar11);
    *(undefined8 *)(self + lVar11 + 0x32af64) = uVar18;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x1e0);
  *(undefined8 *)(self + 0x32b144) = 0xfffffc19fffffc19;
  *(undefined4 *)(self + 0x32b14c) = 0xfffffc19;
  *(undefined8 *)(self + 0x32b19c) = 0x23500000002;
  *(undefined8 *)(self + 0x32b194) = 0x200000235;
  *(undefined8 *)(self + 0x32b1ac) = 0x3400000235;
  *(undefined8 *)(self + 0x32b1a4) = 0xfffffff300000019;
  *(undefined8 *)(self + 0x32b1bc) = 0xffffffd400000051;
  *(undefined8 *)(self + 0x32b1b4) = 0x258ffffffe4;
  *(undefined8 *)(self + 0x32b1cc) = 0x271ffffffcd;
  *(undefined8 *)(self + 0x32b1c4) = 0x7100000262;
  *(undefined8 *)(self + 0x32b1dc) = 0xbc00000019;
  *(undefined8 *)(self + 0x32b1d4) = 0xffffffcc00000095;
  *(undefined8 *)(self + 0x32b1ec) = 0xffffffde000000de;
  *(undefined8 *)(self + 0x32b1e4) = 0xaffffffd3;
  *(undefined8 *)(self + 0x32b1fc) = 0x253ffffffe0;
  *(undefined8 *)(self + 0x32b1f4) = 0x10600000267;
  *(undefined8 *)(self + 0x32b20c) = 0x14500000244;
  *(undefined8 *)(self + 0x32b204) = 0xffffffdd00000124;
  *(undefined8 *)(self + 0x32b21c) = 0xffffffc200000165;
  *(undefined8 *)(self + 0x32b214) = 0x22bffffffd2;
  *(undefined8 *)(self + 0x32b22c) = 0x23affffffa8;
  *(undefined8 *)(self + 0x32b224) = 0x17d00000212;
  *(undefined8 *)(self + 0x32b23c) = 0x1b300000258;
  *(undefined8 *)(self + 0x32b234) = 0xffffff9200000192;
  *(undefined8 *)(self + 0x32b24c) = 0xffffff84000001d8;
  *(undefined8 *)(self + 0x32b244) = 0xfffffff88;
  *(undefined8 *)(self + 0x32b25c) = 0x55ffffff8f;
  *(undefined8 *)(self + 0x32b254) = 0x1f700000032;
  *(undefined8 *)(self + 0x32b26c) = 0x22600000073;
  *(undefined8 *)(self + 0x32b264) = 0xffffffa100000214;
  *(undefined8 *)(self + 0x32b27c) = 0xffffffda0000022d;
  *(undefined8 *)(self + 0x32b274) = 0x9bffffffb8;
  *(undefined8 *)(self + 0x32b28c) = 0xc8fffffff6;
  *(undefined8 *)(self + 0x32b284) = 0x22b000000af;
  *(undefined8 *)(self + 0x32b29c) = 0x20a000000e1;
  *(undefined8 *)(self + 0x32b294) = 0x150000021d;
  *(undefined8 *)(self + 0x32b2ac) = 0x46000001f1;
  *(undefined8 *)(self + 0x32b2a4) = 0xf00000002e;
  *(undefined8 *)(self + 0x32b2bc) = 0x1090000005a;
  *(undefined8 *)(self + 0x32b2b4) = 0x1d3000000ff;
  *(undefined8 *)(self + 0x32b2cc) = 0x19a00000104;
  *(undefined8 *)(self + 0x32b2c4) = 0x6b000001b9;
  *(undefined8 *)(self + 0x32b2dc) = 0x870000017c;
  *(undefined8 *)(self + 0x32b2d4) = 0xf500000079;
  *(undefined8 *)(self + 0x32b2ec) = 0xe10000009b;
  *(undefined8 *)(self + 0x32b2e4) = 0x161000000eb;
  *(undefined8 *)(self + 0x32b2fc) = 0x139000000d7;
  *(undefined8 *)(self + 0x32b2f4) = 0xb20000014b;
  *(undefined8 *)(self + 0x32b30c) = 0xe700000130;
  *(undefined8 *)(self + 0x32b304) = 0xb4000000cd;
  *(undefined8 *)(self + 0x32b31c) = 0x9600000103;
  *(undefined8 *)(self + 0x32b314) = 0x12c000000a5;
  *(undefined8 *)(self + 0x32b32c) = 0x13100000096;
  *(undefined8 *)(self + 0x32b324) = 0x1200000012e;
  *(undefined8 *)(self + 0x32b33c) = 0xfffffc19fffffc19;
  *(undefined8 *)(self + 0x32b334) = 0xfffffc1900000139;
  *(undefined8 *)(self + 0x32b3cc) = 0x23500000003;
  *(undefined8 *)(self + 0x32b3c4) = 0x200000235;
  *(undefined8 *)(self + 0x32b3dc) = 0x3700000235;
  *(undefined8 *)(self + 0x32b3d4) = 0xfffffff20000001c;
  *(undefined8 *)(self + 0x32b3ec) = 0xffffffd100000052;
  *(undefined8 *)(self + 0x32b3e4) = 0x235ffffffe2;
  *(undefined8 *)(self + 0x32b3fc) = 0x24effffffc3;
  *(undefined8 *)(self + 0x32b3f4) = 0x6d0000023f;
  *(undefined8 *)(self + 0x32b40c) = 0xaa00000258;
  *(undefined8 *)(self + 0x32b404) = 0xffffffb60000008a;
  *(undefined8 *)(self + 0x32b41c) = 0xffffffa8000000cb;
  *(undefined8 *)(self + 0x32b414) = 0x262ffffffad;
  *(undefined8 *)(self + 0x32b42c) = 0xffffffa7;
  *(undefined8 *)(self + 0x32b424) = 0xf000000000;
  *(undefined8 *)(self + 0x32b43c) = 0x12e00000253;
  *(undefined8 *)(self + 0x32b434) = 0xffffffab00000110;
  *(undefined8 *)(self + 0x32b44c) = 0xffffff9a0000014b;
  *(undefined8 *)(self + 0x32b444) = 0x23affffffa9;
  *(undefined8 *)(self + 0x32b45c) = 0x1f9ffffff81;
  *(undefined8 *)(self + 0x32b454) = 0x16200000212;
  *(undefined8 *)(self + 0x32b46c) = 0x172000001d1;
  *(undefined8 *)(self + 0x32b464) = 0xffffff640000016f;
  *(undefined8 *)(self + 0x32b47c) = 0xffffff2300000166;
  *(undefined8 *)(self + 0x32b474) = 0x1aeffffff42;
  *(undefined8 *)(self + 0x32b48c) = 0x14affffff0b;
  *(undefined8 *)(self + 0x32b484) = 0x15000000168;
  *(undefined8 *)(self + 0x32b49c) = 0x11200000113;
  *(undefined8 *)(self + 0x32b494) = 0xffffff0500000132;
  *(undefined8 *)(self + 0x32b4ac) = 0xffffff18000000f8;
  *(undefined8 *)(self + 0x32b4a4) = 0xebffffff09;
  *(undefined8 *)(self + 0x32b4bc) = 0x96ffffff2c;
  *(undefined8 *)(self + 0x32b4b4) = 0xe7000000b9;
  *(undefined8 *)(self + 0x32b4cc) = 0xe800000078;
  *(undefined8 *)(self + 0x32b4c4) = 0xffffff46000000e1;
  *(undefined8 *)(self + 0x32b4dc) = 0xffffff77000000f7;
  *(undefined8 *)(self + 0x32b4d4) = 0x5affffff60;
  *(undefined8 *)(self + 0x32b4ec) = 0x2dffffff8b;
  *(undefined8 *)(self + 0x32b4e4) = 0x10e00000037;
  *(undefined8 *)(self + 0x32b4fc) = 0x1460000002d;
  *(undefined8 *)(self + 0x32b4f4) = 0xffffff990000012b;
  *(undefined8 *)(self + 0x32b50c) = 0xffffffb800000164;
  *(undefined8 *)(self + 0x32b504) = 0x2dffffffa8;
  *(undefined8 *)(self + 0x32b51c) = 0x2dffffffc7;
  *(undefined8 *)(self + 0x32b514) = 0x17d0000002d;
  *(undefined8 *)(self + 0x32b52c) = 0x1b30000002d;
  *(undefined8 *)(self + 0x32b524) = 0xffffffd600000199;
  *(undefined8 *)(self + 0x32b53c) = 0xfffffff5000001cd;
  *(undefined8 *)(self + 0x32b534) = 0x2dffffffe7;
  *(undefined8 *)(self + 0x32b54c) = 0x5a00000005;
  *(undefined8 *)(self + 0x32b544) = 0x1e40000004b;
  *(undefined8 *)(self + 0x32b55c) = 0x20a0000005f;
  *(undefined8 *)(self + 0x32b554) = 0x1c000001fa;
  *(undefined8 *)(self + 0x32b56c) = 0x4c00000219;
  *(undefined8 *)(self + 0x32b564) = 0x7800000034;
  *(undefined8 *)(self + 0x32b57c) = 0x9600000069;
  *(undefined8 *)(self + 0x32b574) = 0x21f00000087;
  *(undefined8 *)(self + 0x32b58c) = 0x220000000a5;
  *(undefined8 *)(self + 0x32b584) = 0x8700000222;
  *(undefined8 *)(self + 0x32b59c) = 0xc300000219;
  *(undefined8 *)(self + 0x32b594) = 0xaf000000a5;
  *(undefined8 *)(self + 0x32b5ac) = 0xa5000000de;
  *(undefined8 *)(self + 0x32b5a4) = 0x20f000000b4;
  *(undefined8 *)(self + 0x32b5bc) = 0x20a0000009b;
  *(undefined8 *)(self + 0x32b5b4) = 0xfc00000208;
  *(undefined8 *)(self + 0x32b5c4) = 0x9b0000011e;
  *(undefined8 *)(self + 0x32b5cc) = 0x1370000020b;
  *(undefined8 *)(self + 0x32b5d4) = 0xfffffc19fffffc19;
  *(undefined4 *)(self + 0x32b5dc) = 0xfffffc19;
  *(undefined8 *)(self + 0x32b5fc) = 0x23500000002;
  *(undefined8 *)(self + 0x32b5f4) = 0x200000235;
  *(undefined8 *)(self + 0x32b60c) = 0x2b00000235;
  *(undefined8 *)(self + 0x32b604) = 0xfffffff600000017;
  *(undefined8 *)(self + 0x32b61c) = 0xffffffdb00000042;
  *(undefined8 *)(self + 0x32b614) = 0x235ffffffea;
  *(undefined8 *)(self + 0x32b62c) = 0x24effffffce;
  *(undefined8 *)(self + 0x32b624) = 0x5a00000235;
  *(undefined8 *)(self + 0x32b63c) = 0x970000025d;
  *(undefined8 *)(self + 0x32b634) = 0xffffffc000000078;
  *(undefined8 *)(self + 0x32b64c) = 0xffffffb5000000b8;
  *(undefined8 *)(self + 0x32b644) = 0x271ffffffba;
  *(undefined8 *)(self + 0x32b65c) = 0x23ffffffba;
  *(undefined8 *)(self + 0x32b654) = 0xd80000000f;
  *(undefined8 *)(self + 0x32b66c) = 0x10f0000003c;
  *(undefined8 *)(self + 0x32b664) = 0xffffffc5000000f3;
  *(undefined8 *)(self + 0x32b67c) = 0xffffffe70000012b;
  *(undefined8 *)(self + 0x32b674) = 0x41ffffffd3;
  *(undefined8 *)(self + 0x32b68c) = 0x41fffffffb;
  *(undefined8 *)(self + 0x32b684) = 0x14200000041;
  *(undefined8 *)(self + 0x32b69c) = 0x17100000041;
  *(undefined8 *)(self + 0x32b694) = 0xf0000015a;
  *(undefined8 *)(self + 0x32b6ac) = 0x3100000189;
  *(undefined8 *)(self + 0x32b6a4) = 0x4100000020;
  *(undefined8 *)(self + 0x32b6bc) = 0x3200000045;
  *(undefined8 *)(self + 0x32b6b4) = 0x1a400000032;
  *(undefined8 *)(self + 0x32b6cc) = 0x1dd00000032;
  *(undefined8 *)(self + 0x32b6c4) = 0x55000001c1;
  *(undefined8 *)(self + 0x32b6dc) = 0x75000001f6;
  *(undefined8 *)(self + 0x32b6d4) = 0x3200000066;
  *(undefined8 *)(self + 0x32b6ec) = 0x1400000085;
  *(undefined8 *)(self + 0x32b6e4) = 0x20f00000028;
  *(undefined8 *)(self + 0x32b6fc) = 0x2490000000a;
  *(undefined8 *)(self + 0x32b6f4) = 0x900000022a;
  *(undefined8 *)(self + 0x32b70c) = 0x9900000268;
  *(undefined8 *)(self + 0x32b704) = 0x500000096;
  *(undefined8 *)(self + 0x32b71c) = 0x50000009c;
  *(undefined8 *)(self + 0x32b714) = 0x28400000005;
  *(undefined8 *)(self + 0x32b72c) = 0x2bf00000005;
  *(undefined8 *)(self + 0x32b724) = 0x9e000002a4;
  *(undefined8 *)(self + 0x32b73c) = 0xa1000002de;
  *(undefined8 *)(self + 0x32b734) = 0x50000009f;
  *(undefined8 *)(self + 0x32b74c) = 0x23000000a5;
  *(undefined8 *)(self + 0x32b744) = 0x2f900000014;
  *(undefined8 *)(self + 0x32b75c) = 0x33200000037;
  *(undefined8 *)(self + 0x32b754) = 0xaf00000319;
  *(undefined8 *)(self + 0x32b76c) = 0xcd00000346;
  *(undefined8 *)(self + 0x32b764) = 0x4b000000bc;
  *(undefined8 *)(self + 0x32b77c) = 0x5a000000e1;
  *(undefined8 *)(self + 0x32b774) = 0x3580000005a;
  *(undefined8 *)(self + 0x32b78c) = 0x3760000005a;
  *(undefined8 *)(self + 0x32b784) = 0xf80000036a;
  *(undefined8 *)(self + 0x32b79c) = 0x12200000386;
  *(undefined8 *)(self + 0x32b794) = 0x5a0000010e;
  *(undefined8 *)(self + 0x32b7ac) = 0xfffffc1900000138;
  *(undefined8 *)(self + 0x32b7a4) = 0x3980000005a;
  *(undefined4 *)(self + 0x32b7b4) = 0xfffffc19;
  *(undefined4 *)(self + 0x32b7b8) = 0xfffffc19;
  bzStateGame__loadFont_003a439c(GH_ARG(self));
  *(undefined4 *)(self + 0x8da3c) = 1;
  *(undefined4 *)(self + 0x32c130) = 0;
  *(undefined4 *)(self + 0x1ae8) = 1000;
  bzStateGame__STGload_003a4888(GH_ARG(self));
  bzStateGame__BackupStage_Save_003a4b34(GH_ARG(self));
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar12 = (int *)(local_60 + -8);
    do {
      iVar9 = *piVar12;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar12 = (int *)(local_58[0] + -8);
    do {
      iVar9 = *piVar12;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 < 1) {
      operator_delete(local_58[0] + -0x18);
    }
  }
  if (*(gh_long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
