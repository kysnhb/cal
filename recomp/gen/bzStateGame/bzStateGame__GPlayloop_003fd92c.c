/* bzStateGame::GPlayloop_003fd92c @ 0x003fd92c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GPlayloop_003fd92c(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  gh_long lVar35;
  gh_long lVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  mersenne_twister_engine *pmVar49;
  ulong uVar50;
  undefined4 uVar51;
  gh_long lVar52;
  gh_long lVar53;
  undefined *puVar54;
  gh_long lVar55;
  gh_long lVar56;
  undefined8 *puVar57;
  undefined4 *puVar58;
  int iVar59;
  int iVar60;
  gh_long lVar61;
  int iVar62;
  undefined4 *puVar63;
  gh_long lVar64;
  int *piVar65;
  gh_long lVar66;
  uint uVar67;
  uint uVar68;
  int *piVar69;
  int *piVar70;
  int *piVar71;
  int *piVar72;
  gh_long lVar73;
  gh_long lVar74;
  gh_long lVar75;
  gh_long lVar76;
  float fVar77;
  undefined8 uVar78;
  float fVar79;
  int in_stack_fffffffffffffc88 = 0;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  lVar35 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar35 + 0x28);
  piVar2 = (int *)(self + 0x32ba14);
  iVar47 = *piVar2;
  iVar48 = *(int *)(self + 0x32ba24);
  piVar3 = (int *)(self + 0x32ba40);
  pfVar4 = (float *)(self + 0x32ba28);
  iVar32 = 0;
  if (iVar47 != 0) {
    iVar32 = *(int *)(self + 0x32ba20) / iVar47;
  }
  uVar33 = 0;
  if (iVar47 != 0) {
    uVar33 = iVar48 / iVar47;
  }
  iVar31 = *(int *)(self + 0x32ba20) - iVar32 * iVar47;
  lVar55 = (gh_long)iVar32;
  lVar56 = (gh_long)(int)uVar33;
  iVar34 = iVar48 - uVar33 * iVar47;
  piVar71 = (int *)(self + (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2) +
                           (gh_long)iVar32 * 0x2d0 + 0x13f260);
  lVar74 = 0x1e;
  do {
    lVar75 = 0;
    piVar70 = piVar71;
    do {
      iVar39 = *piVar70;
      if (iVar39 < 0x10e) {
        switch(iVar39) {
        case 0x15:
        case 0x1b:
        case 0x30:
        case 0x31:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x62:
        case 99:
        case 0x7c:
        case 0x7f:
        case 0x81:
          goto switchD_003fdaa0_caseD_15;
        }
      }
      else {
        if (iVar39 - 0x10eU < 9) {
switchD_003fdaa0_caseD_15:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * ((int)lVar75 + -7) - iVar31;
          iVar60 = (*piVar2 * (int)lVar74 - iVar34) + *piVar3;
        }
        else {
          if (5 < iVar39 - 0x1deU) {
            if (iVar39 != 0x194) goto switchD_003fdaa0_caseD_16;
            goto switchD_003fdaa0_caseD_15;
          }
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * ((int)lVar75 + -7) - iVar31;
          iVar60 = (0x20 - iVar34) + *piVar2 * (int)lVar74 + *piVar3;
        }
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(iVar38), GH_ARG(iVar60), GH_ARG(0), GH_ARG(1.0), GH_ARG(fVar79));
      }
switchD_003fdaa0_caseD_16:
      lVar75 = lVar75 + 1;
      piVar70 = piVar70 + 0xb4;
    } while (lVar75 != 0x33);
    piVar71 = piVar71 + -1;
    bVar37 = -4 < lVar74;
    lVar74 = lVar74 + -1;
  } while (bVar37);
  piVar70 = (int *)(self + 0x32c134);
  puVar5 = (uint *)(self + 0x8dae0);
  piVar72 = (int *)(self + 0x8dac8);
  piVar6 = (int *)(self + 0x32ba90);
  piVar7 = (int *)(self + 0x1ae8);
  piVar8 = (int *)(self + 0x32ba60);
  uVar50 = 0x32ba48;
  piVar9 = (int *)(self + 0x8db14);
  piVar10 = (int *)(self + 0x32ba48);
  pfVar11 = (float *)(self + 0x8db24);
  piVar12 = (int *)(self + 0x32ba84);
  piVar13 = (int *)(self + 0x8dad8);
  piVar14 = (int *)(self + 0x32c908);
  piVar15 = (int *)(self + 0x32c160);
  piVar16 = (int *)(self + 0x32b828);
  piVar17 = (int *)(self + 0x32b824);
  piVar18 = (int *)(self + 0x8dacc);
  piVar19 = (int *)(self + 0x8dd14);
  piVar20 = (int *)(self + 0x8dd18);
  piVar21 = (int *)(self + 0x8dd1c);
  piVar22 = (int *)(self + 0x8db0c);
  piVar23 = (int *)(self + 0x32c8a8);
  piVar24 = (int *)(self + 0x8d16c);
  piVar25 = (int *)(self + 0x32c8e8);
  piVar26 = (int *)(self + 0x8d264);
  piVar27 = (int *)(self + 0x32ba68);
  piVar28 = (int *)(self + 0x32ba6c);
  puVar29 = (undefined8 *)(self + 0xb0ce0);
  piVar71 = (int *)(self + 0xba8);
  lVar74 = 0x1e;
  do {
    lVar76 = lVar74 + lVar56;
    lVar52 = lVar76 + -1;
    lVar75 = lVar76 + 2;
    lVar73 = lVar76 + 3;
    lVar1 = lVar76 + 1;
    lVar64 = -0xd;
    do {
      lVar53 = lVar64 + lVar55;
      piVar69 = (int *)(self + lVar76 * 4 + lVar53 * 0x2d0 + 0x140598);
      iVar39 = *piVar69;
      iVar60 = (int)lVar64;
      iVar38 = (int)lVar74;
      switch(iVar39) {
      case 0:
      case 0x15:
      case 0x1b:
      case 0x29:
      case 0x31:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x4e:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x62:
      case 99:
      case 0x66:
      case 0x67:
      case 0x7c:
      case 0x7d:
      case 0x7f:
      case 0x81:
      case 0xd3:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x15f:
      case 0x160:
      case 0x161:
      case 0x162:
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x189:
      case 0x18a:
      case 0x194:
      case 0x19f:
      case 0x1a0:
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
      case 0x1a7:
      case 0x1a8:
      case 0x1a9:
      case 0x1aa:
      case 0x1ab:
      case 0x1ac:
      case 0x1ad:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b3:
      case 0x210:
      case 0x211:
      case 700:
        break;
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
      case 0x11f:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
        uVar50 = 0;
        bzStateGame__AttTileimg_00433c2c(GH_ARG(self), GH_ARG(iVar39), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3 + *(int *)(self + 0x32ba7c)), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4), GH_ARG((int)lVar53), GH_ARG((int)lVar76));
        break;
      default:
        if (0 < iVar39) {
          fVar79 = *pfVar4;
          iVar40 = *piVar2 * iVar60 - iVar31;
          iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
          fVar77 = 1.0;
          goto LAB_004012bc;
        }
        break;
      case 0xf:
      case 0x4b:
        if ((*(int *)(self + lVar76 * 4 + lVar53 * 0x2d0 + 0x1402c8) != 0) &&
           (*(int *)(self + lVar76 * 4 + lVar53 * 0x2d0 + 0x140868) != 0)) {
          fVar79 = *pfVar4;
          iVar40 = *piVar2 * iVar60 - iVar31;
          iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
          goto LAB_004012b0;
        }
        lVar53 = lVar52 * 4 + lVar53 * 0x2d0;
        *(undefined4 *)(self + lVar53 + 0x14059c) = 0;
        *(undefined4 *)(self + lVar53 + 0x140598) = 0;
        iVar39 = *(int *)(self + 0x1ae8);
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar59 = 0xc;
        }
        else {
          local_b0 = 0xb00000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar59 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar40 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        iVar41 = *piVar2;
        iVar62 = *piVar3;
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar42 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        uVar67 = iVar39 - 0xd;
        if ((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_003fe974:
          iVar59 = 0xc;
        }
        else {
          iVar43 = *piVar71;
          if ((iVar43 != 1) && (0 < *piVar16)) {
            lVar53 = 0;
            puVar57 = puVar29;
            do {
              if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                puVar57[4] = 0xff000000ff;
                *(int *)(puVar57 + -5) = iVar41 * iVar60 - iVar31;
                *(int *)((gh_long)puVar57 + -0x24) = (iVar41 * iVar38 - iVar34) + iVar62;
                puVar57[-3] = 0x6400000085;
                *(int *)(puVar57 + -4) = iVar40;
                *(undefined4 *)(puVar57 + 1) = 0;
                *(int *)((gh_long)puVar57 + 0xc) = iVar42;
                puVar57[-1] = 0x3f80000000000000;
                *(int *)(puVar57 + -2) = iVar59 + 0x137;
                *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                *puVar57 = 0x3f800000;
                puVar57[3] = 0xff00000000;
                puVar57[2] = 0;
                break;
              }
              lVar53 = lVar53 + 1;
              puVar57 = puVar57 + 10;
            } while (lVar53 < *piVar16);
          }
          if (((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar43 == 1)) goto LAB_003fe974;
          local_b0 = 0xb00000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar59 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar40 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        iVar41 = *piVar2;
        iVar62 = *piVar3;
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar42 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        uVar67 = iVar39 - 0xd;
        if ((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_003fe9f8:
          iVar59 = 0xc;
        }
        else {
          iVar43 = *piVar71;
          if ((iVar43 != 1) && (0 < *piVar16)) {
            lVar53 = 0;
            puVar57 = puVar29;
            do {
              if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                puVar57[4] = 0xff000000ff;
                *(int *)(puVar57 + -5) = iVar41 * iVar60 - iVar31;
                *(int *)((gh_long)puVar57 + -0x24) = (iVar41 * iVar38 - iVar34) + iVar62;
                puVar57[-3] = 0x6400000085;
                *(int *)(puVar57 + -4) = iVar40;
                *(undefined4 *)(puVar57 + 1) = 0;
                *(int *)((gh_long)puVar57 + 0xc) = iVar42;
                puVar57[-1] = 0x3f80000000000000;
                *(int *)(puVar57 + -2) = iVar59 + 0x137;
                *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                *puVar57 = 0x3f800000;
                puVar57[3] = 0xff00000000;
                puVar57[2] = 0;
                break;
              }
              lVar53 = lVar53 + 1;
              puVar57 = puVar57 + 10;
            } while (lVar53 < *piVar16);
          }
          if (((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar43 == 1)) goto LAB_003fe9f8;
          local_b0 = 0xb00000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar59 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar40 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        iVar41 = *piVar2;
        iVar62 = *piVar3;
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar42 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        uVar67 = iVar39 - 0xd;
        if ((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) {
LAB_003fea7c:
          iVar59 = 0xc;
        }
        else {
          iVar43 = *piVar71;
          if ((iVar43 != 1) && (0 < *piVar16)) {
            lVar53 = 0;
            puVar57 = puVar29;
            do {
              if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                puVar57[4] = 0xff000000ff;
                *(int *)(puVar57 + -5) = iVar41 * iVar60 - iVar31;
                *(int *)((gh_long)puVar57 + -0x24) = (iVar41 * iVar38 - iVar34) + iVar62;
                puVar57[-3] = 0x6400000085;
                *(int *)(puVar57 + -4) = iVar40;
                *(undefined4 *)(puVar57 + 1) = 0;
                *(int *)((gh_long)puVar57 + 0xc) = iVar42;
                puVar57[-1] = 0x3f80000000000000;
                *(int *)(puVar57 + -2) = iVar59 + 0x137;
                *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                *puVar57 = 0x3f800000;
                puVar57[3] = 0xff00000000;
                puVar57[2] = 0;
                break;
              }
              lVar53 = lVar53 + 1;
              puVar57 = puVar57 + 10;
            } while (lVar53 < *piVar16);
          }
          if (((uVar67 < 0x3e) && ((1LL << ((ulong)uVar67 & 0x3f) & 0x3200000000000081U) != 0)) ||
             (iVar43 == 1)) goto LAB_003fea7c;
          local_b0 = 0xb00000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar59 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar40 = 2;
        }
        else {
          local_b0 = 0x100000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        iVar41 = *piVar2;
        iVar62 = *piVar3;
        if (((iVar39 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)
           ) {
          iVar42 = 4;
        }
        else {
          local_b0 = 0x300000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
          iVar39 = *piVar7;
        }
        if ((((0x3d < iVar39 - 0xdU) ||
             ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
            (*piVar71 != 1)) && (0 < *piVar16)) {
          lVar53 = 0;
          puVar57 = puVar29;
          do {
            if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
              puVar57[4] = 0xff000000ff;
              *(int *)(puVar57 + -5) = iVar41 * iVar60 - iVar31;
              *(int *)((gh_long)puVar57 + -0x24) = (iVar41 * iVar38 - iVar34) + iVar62;
              puVar57[-3] = 0x6400000085;
              *(int *)(puVar57 + -4) = iVar40;
              *(undefined4 *)(puVar57 + 1) = 0;
              *(int *)((gh_long)puVar57 + 0xc) = iVar42;
              puVar57[-1] = 0x3f80000000000000;
              *(int *)(puVar57 + -2) = iVar59 + 0x137;
              *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
              *puVar57 = 0x3f800000;
              puVar57[3] = 0xff00000000;
              puVar57[2] = 0;
              break;
            }
            lVar53 = lVar53 + 1;
            puVar57 = puVar57 + 10;
          } while (lVar53 < *piVar16);
        }
        break;
      case 0x19:
        uVar67 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        uVar50 = (ulong)uVar67;
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(0x10), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG(0xd), GH_ARG(uVar67), GH_ARG(0));
        break;
      case 0x1d:
        fVar79 = *pfVar4;
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        fVar77 = 1.0;
        iVar39 = 0x1d;
        goto LAB_004012bc;
      case 0x23:
      case 0xf6:
        iVar59 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(iVar59), GH_ARG(iVar60), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if (*(int *)(self + lVar75 * 4 + lVar53 * 0x2d0 + 0x140598) == 0) {
          lVar53 = lVar53 * 0x2d0 + 0x140598;
          uVar67 = 0;
          *(undefined8 *)(self + (lVar76 + -2) * 4 + lVar53) = 0;
          *(undefined8 *)((gh_long)(self + (lVar76 + -2) * 4 + lVar53) + 8) = 0;
          *(undefined4 *)(self + lVar76 * 4 + lVar53 + -0x2d0) = 0;
          iVar39 = *(int *)(self + 0x1ae8);
          do {
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar38 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar38 = iVar38 + 6;
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar40 = 0xf;
            }
            else {
              local_b0 = 0xe00000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar41 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar41 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar62 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar62 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar62 = iVar62 + -10;
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar42 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar42 = iVar42 + 2;
              iVar39 = *piVar7;
            }
            if (((0x3d < iVar39 - 0xdU) ||
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar71 != 1 && (0 < *piVar16)))) {
              lVar53 = 0;
              puVar57 = puVar29;
              do {
                if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                  *(int *)(puVar57 + -5) = iVar62 + iVar59;
                  *(uint *)((gh_long)puVar57 + -0x24) = iVar60 + -0x32 + uVar67 * 4;
                  *(undefined4 *)(puVar57 + 1) = 0;
                  *(int *)((gh_long)puVar57 + 0xc) = iVar42;
                  puVar57[-3] = 0x6400000085;
                  puVar57[-1] = 0x3f80000000000000;
                  *(int *)(puVar57 + -4) = iVar41;
                  *(undefined4 *)(puVar57 + 2) = 0;
                  *(int *)((gh_long)puVar57 + 0x14) = -iVar38;
                  *(int *)(puVar57 + -2) = iVar40 + 0x125;
                  *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                  *(undefined4 *)puVar57 = 0x3f800000;
                  *(undefined4 *)((gh_long)puVar57 + 4) = 0;
                  puVar57[3] = 0xff00000000;
                  puVar57[4] = 0xff000000ff;
                  break;
                }
                lVar53 = lVar53 + 1;
                puVar57 = puVar57 + 10;
              } while (lVar53 < *piVar16);
            }
            bVar37 = uVar67 < 0x18;
            uVar67 = uVar67 + 1;
          } while (bVar37);
          uVar67 = 0;
          do {
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar38 = 0xc;
            }
            else {
              local_b0 = 0xb00000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar38 = iVar38 + 5;
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar40 = 0xf;
            }
            else {
              local_b0 = 0xe00000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar41 = 2;
            }
            else {
              local_b0 = 0x100000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar41 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar62 = 0x14;
            }
            else {
              local_b0 = 0x1300000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar62 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar62 = iVar62 + -10;
              iVar39 = *piVar7;
            }
            if (((iVar39 - 0xdU < 0x3e) &&
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
               (*piVar71 == 1)) {
              iVar42 = 4;
            }
            else {
              local_b0 = 0x300000000;
              pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
              iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
              iVar42 = iVar42 + 2;
              iVar39 = *piVar7;
            }
            if (((0x3d < iVar39 - 0xdU) ||
                ((1LL << ((ulong)(iVar39 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
               ((*piVar71 != 1 && (0 < *piVar16)))) {
              lVar53 = 0;
              puVar57 = puVar29;
              do {
                if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                  *(int *)(puVar57 + -5) = iVar62 + iVar59;
                  *(uint *)((gh_long)puVar57 + -0x24) = iVar60 + -0x2d + uVar67 * 7;
                  *(undefined4 *)(puVar57 + 1) = 0;
                  *(int *)((gh_long)puVar57 + 0xc) = iVar42;
                  puVar57[-3] = 0x6400000085;
                  puVar57[-1] = 0x3f80000000000000;
                  *(int *)(puVar57 + -4) = iVar41;
                  *(undefined4 *)(puVar57 + 2) = 0;
                  *(int *)((gh_long)puVar57 + 0x14) = -iVar38;
                  *(int *)(puVar57 + -2) = iVar40 + 0x125;
                  *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                  *(undefined4 *)puVar57 = 0x3f800000;
                  *(undefined4 *)((gh_long)puVar57 + 4) = 0;
                  puVar57[3] = 0xff00000000;
                  puVar57[4] = 0xff000000ff;
                  break;
                }
                lVar53 = lVar53 + 1;
                puVar57 = puVar57 + 10;
              } while (lVar53 < *piVar16);
            }
            bVar37 = uVar67 < 0xd;
            uVar67 = uVar67 + 1;
          } while (bVar37);
        }
        break;
      case 0x2a:
        fVar79 = *pfVar4;
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        fVar77 = 1.0;
        iVar39 = 0x2a;
        goto LAB_004012bc;
      case 0x30:
      case 0x33:
        iVar39 = *piVar70;
        if (5 < iVar39) {
          iVar59 = 0;
          lVar53 = 4;
          piVar69 = (int *)(self + 0x8e4e8);
          do {
            if (1 < piVar69[9]) {
              if (piVar69[0x91] == 0x2611) {
                iVar59 = 0x1d;
              }
              else {
                iVar40 = *piVar2 * iVar60 - iVar31;
                if ((*piVar69 + -100 < iVar40) && (iVar40 < *piVar69 + 100)) {
                  iVar40 = *piVar3 + (*piVar2 * iVar38 - iVar34);
                  if ((piVar69[1] + -0x3c < iVar40 + 0x54) && (iVar40 + 0x18 < piVar69[1])) {
                    piVar69[0x91] = 0x2611;
                    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar53), GH_ARG(0x2d), GH_ARG(piVar69[4]), GH_ARG((int)uVar50));
                    iVar39 = *piVar70;
                  }
                }
              }
            }
            lVar53 = lVar53 + 1;
            piVar69 = piVar69 + 0xa2;
          } while (lVar53 < iVar39 + -1);
          if ((iVar59 != 0) &&
             (piVar69 = (int *)(self + (gh_long)iVar59 * 0x288 + 0x8db14), *piVar69 != 0x16)) {
            piVar69[0] = 0x16;
            piVar69[1] = 0;
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8dd3c) = 0x5e4;
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8daec) = 500;
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8dad8) = 0;
            uVar78 = NEON_fmov(0x3f800000,4);
            *(undefined8 *)(self + (gh_long)iVar59 * 0x288 + 0x8db20) = uVar78;
            *(undefined8 *)(self + (gh_long)iVar59 * 0x288 + 0x8db08) = 0x3c;
            *(int *)(self + (gh_long)iVar59 * 0x288 + 0x8dac8) = *piVar2 * iVar60 - iVar31;
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8dacc) = 0xffffff9c;
            *(undefined8 *)(self + (gh_long)iVar59 * 0x288 + 0x8dd14) = 0xff000000ff;
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8dd1c) = 0xff;
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar59), GH_ARG(0x66), GH_ARG(0), GH_ARG((int)uVar50));
            *(undefined4 *)(self + (gh_long)iVar59 * 0x288 + 0x8dae0) = 0xc;
            *(undefined4 *)(self + 0x32c868) = 0x1d;
          }
        }
        break;
      case 0x3c:
        iVar60 = *piVar2 * iVar60 - iVar31;
        uVar50 = (ulong)(uint)((*piVar2 * iVar38 - iVar34) + *piVar3);
        iVar39 = -0x18;
        iVar38 = 0xd;
        goto LAB_004000dc;
      case 0x40:
      case 0x117:
      case 0x119:
      case 0x12f:
        if (((int)*puVar5 < 0x41) && ((*piVar9 < 0x15 || (*piVar9 == 0x17)))) {
          fVar79 = *pfVar11;
          iVar40 = *piVar2 * iVar60 - iVar31;
          iVar59 = iVar40 + 0x1e;
          if (fVar79 == 1.0) {
            iVar41 = 0x2d;
          }
          else {
            if (fVar79 <= 1.0) {
              fVar79 = 45.0 - (1.0 - fVar79) * 45.0;
            }
            else {
              fVar79 = fVar79 * 45.0;
            }
            iVar41 = (int)fVar79;
          }
          if ((*piVar72 - iVar41 < iVar59) && (iVar59 < iVar41 + *piVar72)) {
            iVar59 = *piVar3 + (*piVar2 * iVar38 - iVar34);
            if ((*piVar18 + -0x3c < iVar59 + 0x54) && (iVar59 + 0x18 < *piVar18)) {
              uVar50 = 0;
              bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39 + 1), GH_ARG(iVar40), GH_ARG(iVar59), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
              if ((*piVar10 == 0) && (*piVar15 == 0)) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1698)), GH_ARG(false));
              }
              *piVar10 = *(int *)(self + lVar1 * 4 + lVar53 * 0x2d0 + 0x140598);
              break;
            }
          }
        }
        if ((*piVar10 != 0) && (*piVar15 == 0)) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1698)), GH_ARG(false));
        }
        *piVar10 = 0;
        iVar39 = *piVar69;
        fVar79 = *pfVar4;
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        fVar77 = 1.0;
        goto LAB_004012bc;
      case 0x4f:
      case 0x54:
        iVar59 = *piVar2;
        iVar40 = iVar59 * iVar60 - iVar31;
        iVar60 = *piVar3;
        fVar79 = *pfVar4;
        iVar41 = 5 - iVar34;
        goto LAB_004012a4;
      case 0x5e:
      case 0x5f:
      case 0x60:
        fVar79 = *pfVar4;
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        goto LAB_004012b0;
      case 0x6e:
        if (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140868) == 0xf5) {
          if (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140b38) == 0xf5) {
            uVar67 = 0xe08;
            goto LAB_0040008c;
          }
        }
        else if (((*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140868) == 0) &&
                 (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140b38) == 0xf5)) &&
                (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140e08) == 0xf5)) {
          uVar67 = 0x10d8;
LAB_0040008c:
          if (*(int *)(self + (ulong)(uVar67 | 0x140000) + lVar52 * 4 + lVar53 * 0x2d0) == 0xf5) {
LAB_004000a0:
            *piVar69 = 0;
            break;
          }
        }
        iVar39 = *piVar70;
        iVar60 = *piVar2 * iVar60 - iVar31;
        uVar50 = (ulong)(uint)((*piVar2 * iVar38 - iVar34) + *piVar3);
        iVar38 = 0xe;
        goto LAB_004000dc;
      case 0x77:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0x77), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if ((*(int *)(self + lVar75 * 4 + lVar53 * 0x2d0 + 0x140598) == 0) &&
           (*(int *)(self + lVar75 * 4 + (lVar53 + 1) * 0x2d0 + 0x140598) == 0)) {
          lVar61 = lVar76 * 4;
          lVar36 = lVar53 * 0x2d0 + 0x1402c8;
          puVar54 = self + (lVar53 + 1) * 0x2d0 + 0x140598;
          lVar66 = lVar1 * 4;
          *(undefined4 *)(self + lVar66 + lVar36) = *(undefined4 *)(self + lVar61 + lVar36);
          *(undefined4 *)(self + lVar61 + lVar36) = 0;
          *(undefined8 *)(self + lVar66 + lVar53 * 0x2d0 + 0x140598) = *(undefined8 *)piVar69;
          *(undefined8 *)(puVar54 + lVar66) = *(undefined8 *)(puVar54 + lVar61);
LAB_004007e8:
          *(undefined4 *)(puVar54 + lVar76 * 4) = 0;
          *piVar69 = 0;
        }
        break;
      case 0x78:
        fVar79 = *pfVar4;
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        fVar77 = 1.0;
        iVar39 = 0x78;
        goto LAB_004012bc;
      case 0x79:
      case 0x7a:
      case 0x7b:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if (*(int *)(self + lVar73 * 4 + (lVar53 + 1) * 0x2d0 + 0x140598) == 0) {
          if (*(int *)(self + lVar73 * 4 + (lVar53 + 2) * 0x2d0 + 0x140598) == 0) {
            iVar39 = *(int *)(self + lVar73 * 4 + lVar53 * 0x2d0 + 0x140598);
            if (iVar39 == 0) {
              piVar65 = (int *)(self + lVar75 * 4 + lVar53 * 0x2d0 + 0x140598);
              iVar39 = *piVar65;
            }
            else {
              if (iVar39 != 0x31) break;
              piVar65 = (int *)(self + lVar75 * 4 + lVar53 * 0x2d0 + 0x140598);
              iVar39 = 0x34;
            }
            *(int *)(self + lVar73 * 4 + lVar53 * 0x2d0 + 0x140598) = iVar39;
            puVar54 = self + (lVar53 + 1) * 0x2d0 + 0x140598;
            lVar36 = (lVar53 + 2) * 0x2d0 + 0x140598;
            lVar61 = lVar53 * 0x2d0 + 0x140598;
            *(int *)(self + lVar73 * 4 + (lVar53 + 1) * 0x2d0 + 0x140598) =
                 *(int *)(puVar54 + lVar75 * 4);
            *(int *)(self + lVar73 * 4 + (lVar53 + 2) * 0x2d0 + 0x140598) =
                 *(int *)(self + lVar75 * 4 + lVar36);
            lVar66 = lVar1 * 4;
            lVar53 = lVar76 * 4;
            *piVar65 = *(int *)(self + lVar66 + lVar61);
            *(int *)(self + lVar66 + lVar61) = *piVar69;
            *(undefined8 *)(puVar54 + lVar66) = *(undefined8 *)(puVar54 + lVar53);
            *(undefined8 *)(self + lVar66 + lVar36) = *(undefined8 *)(self + lVar53 + lVar36);
            *(undefined4 *)(self + lVar53 + lVar36) = 0;
            goto LAB_004007e8;
          }
        }
        break;
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
        iVar59 = *piVar2;
        iVar40 = iVar59 * iVar60 - iVar31;
        iVar60 = *piVar3;
        fVar79 = *pfVar4;
        iVar41 = -0x10 - iVar34;
        goto LAB_004012a4;
      case 0x92:
        iVar40 = *piVar2 * iVar60 - iVar31;
        fVar79 = *pfVar4;
        fVar77 = 1.0;
        iVar60 = (-0x10 - iVar34) + *piVar2 * iVar38 + *piVar3;
        iVar39 = 0x92;
        goto LAB_004012bc;
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0xa0), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if (*puVar5 == 0x95) {
          if (*piVar69 < 0xa6) goto LAB_004011e8;
        }
        else if ((*puVar5 == 0x96) && (*(int *)(self + 0x8dd08) == 0)) {
LAB_004011e8:
          if (*piVar9 == 0x17) {
            iVar59 = *piVar19;
            fVar79 = *pfVar11;
            iVar40 = *piVar20;
            iVar41 = *piVar13;
            iVar62 = *piVar21;
            in_stack_fffffffffffffc88 = *piVar22;
            iVar39 = (-0x11 - iVar31) + *piVar2 * iVar60 + iVar41 * 0x22;
            iVar42 = *piVar18 + -0x24;
            iVar43 = 0x26d;
          }
          else {
            iVar39 = *piVar2 * iVar60 - iVar31;
            if (*piVar9 == 0x13) {
              iVar59 = *piVar19;
              fVar79 = *pfVar11;
              iVar41 = *piVar13;
              iVar40 = *piVar20;
              in_stack_fffffffffffffc88 = *piVar22;
              iVar62 = *piVar21;
              iVar39 = iVar39 + iVar41 * 0x22 + -0x11;
              iVar42 = *piVar18 + -0x24;
              iVar43 = 0x115;
            }
            else {
              iVar43 = 0xe;
              iVar41 = *piVar13;
              fVar79 = *pfVar11;
              iVar59 = *piVar19;
              in_stack_fffffffffffffc88 = *piVar22;
              iVar42 = *piVar18 + -0x24;
              iVar40 = *piVar20;
              iVar62 = *piVar21;
            }
          }
          bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(0), GH_ARG(iVar39), GH_ARG(iVar42), GH_ARG(iVar43), GH_ARG(iVar41), GH_ARG(iVar59), GH_ARG(iVar40), GH_ARG(iVar62), GH_ARG(fVar79), GH_ARG(in_stack_fffffffffffffc88));
          bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x10), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG(*piVar69), GH_ARG(*piVar18 + -0x24));
        }
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(*piVar69), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if (((int)*puVar5 < 0x96) && ((*piVar9 < 0x15 || (*piVar9 == 0x17)))) {
          fVar79 = *pfVar11;
          iVar39 = *piVar2 * iVar60 - iVar31;
          if (fVar79 == 1.0) {
            iVar60 = 0x23;
          }
          else {
            if (fVar79 <= 1.0) {
              fVar79 = 35.0 - (1.0 - fVar79) * 35.0;
            }
            else {
              fVar79 = fVar79 * 35.0;
            }
            iVar60 = (int)fVar79;
          }
          if ((*piVar72 - iVar60 < iVar39) && (iVar39 < iVar60 + *piVar72)) {
            iVar39 = *piVar3 + (*piVar2 * iVar38 - iVar34);
            if ((iVar39 < *piVar18 + 0x1c) && (*piVar18 + -0x3c < iVar39 + 0x20)) {
              iVar39 = *piVar69;
              if (iVar39 < 0xa7) {
                iVar39 = iVar39 + 1;
                *piVar69 = iVar39;
              }
              if (iVar39 == 0xa7) {
                *piVar27 = (int)lVar53;
                *piVar28 = (int)lVar76;
                piVar10[0] = 1;
                piVar10[1] = 0;
                if (*puVar5 == 0x95) {
                  bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
                  uVar50 = 0;
                  bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x11), GH_ARG(0), GH_ARG(0), GH_ARG(0));
                }
              }
              break;
            }
          }
        }
        if (0xa1 < *piVar69) {
          *piVar69 = *piVar69 + -1;
        }
        *piVar10 = 0;
        break;
      case 0xb3:
        iVar60 = *piVar2 * iVar60 - iVar31;
        iVar39 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0xb2), GH_ARG(iVar60), GH_ARG(iVar39), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        bzStateGame__TileImg_drawImage_004379e0(GH_ARG(self), GH_ARG(0x73), GH_ARG(iVar60 + -10), GH_ARG(iVar39 + -0x2d), GH_ARG(*(int *)(self + 0x8cb80)), GH_ARG(*(int *)(self + 0x8cb84)), GH_ARG(*(int *)(self + 0x8cb88)), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0xb3), GH_ARG(iVar60), GH_ARG(iVar39), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        if (((0 < iVar60) && (*(int *)(self + 0x32c790) < 0)) && (iVar60 < *(int *)(self + 0x1158)))
        {
          *(int *)(self + 0x32c790) = -2;
          *(int *)(self + 0x32c818) = iVar60;
          *(int *)(self + 0x32c81c) = iVar39 + -0x46;
          uVar51 = 2;
          if (*piVar72 + 0x96 <= iVar60 || iVar60 <= *piVar72 + -0x96) {
            uVar51 = 0;
          }
          *(undefined4 *)(self + 0x32c838) = uVar51;
        }
        break;
      case 0xb4:
        iVar40 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0xb2), GH_ARG(iVar40), GH_ARG(iVar60), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        fVar79 = *pfVar4;
        iVar39 = 0xb4;
        fVar77 = 1.0;
        goto LAB_004012bc;
      case 0xbb:
      case 0xc1:
      case 0xc2:
        uVar50 = 0;
        bzStateGame__TileRGBimg_00437c50(GH_ARG(self), GH_ARG(iVar39), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(0xaa), GH_ARG(5), GH_ARG(1.0), GH_ARG(*pfVar4));
        break;
      case 0xc0:
        if (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x1402c8) == 0xf5) {
          if (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x13fff8) == 0xf5) {
            uVar67 = 0xfd28;
            goto LAB_00400014;
          }
        }
        else if (((*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x1402c8) == 0) &&
                 (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x13fff8) == 0xf5)) &&
                (*(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x13fd28) == 0xf5)) {
          uVar67 = 0xfa58;
LAB_00400014:
          if (*(int *)(self + (ulong)(uVar67 | 0x130000) + lVar52 * 4 + lVar53 * 0x2d0) == 0xf5)
          goto LAB_004000a0;
        }
        iVar39 = *piVar70;
        iVar60 = *piVar2 * iVar60 - iVar31;
        uVar50 = (ulong)(uint)((*piVar2 * iVar38 - iVar34) + *piVar3);
        iVar38 = 0xf;
LAB_004000dc:
        bzStateGame__PCMiniAni_00434368(GH_ARG(self), GH_ARG(iVar39), GH_ARG(iVar60), GH_ARG(iVar38), GH_ARG((int)uVar50), GH_ARG(1));
        break;
      case 0xe9:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0xe9), GH_ARG(-iVar31 + *piVar2 * iVar60), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        uVar51 = 0;
        if (*(int *)(self + 0x32c7d0) < 0) {
          iVar39 = -iVar31 + *piVar2 * iVar60;
          uVar51 = 0;
          if ((*piVar72 + -300 < iVar39) && (uVar51 = 0, iVar39 < *piVar72 + 300)) {
            iVar60 = *piVar3 + (*piVar2 * iVar38 - iVar34);
            uVar51 = 0;
            if ((iVar60 < *piVar18 + 0x3c) && (*piVar18 + -200 < iVar60 + 0x8c)) {
              uVar50 = 0xff;
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x86), GH_ARG(iVar39 + -0xc), GH_ARG((iVar60 + -0x28) - *piVar23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0));
              uVar51 = 0x29b;
            }
          }
        }
        *(undefined4 *)(self + 0x32c820) = uVar51;
        break;
      case 0xea:
      case 0xeb:
      case 0xec:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(-iVar31 + *piVar2 * iVar60), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        fVar79 = *pfVar11;
        iVar39 = -iVar31 + *piVar2 * iVar60;
        if (fVar79 == 1.0) {
          iVar60 = 0x23;
        }
        else {
          if (fVar79 <= 1.0) {
            fVar79 = 35.0 - (1.0 - fVar79) * 35.0;
          }
          else {
            fVar79 = fVar79 * 35.0;
          }
          iVar60 = (int)fVar79;
        }
        if ((*piVar72 - iVar60 < iVar39) && (iVar39 < iVar60 + *piVar72)) {
          iVar39 = *piVar3 + (*piVar2 * iVar38 - iVar34);
          if ((*piVar18 + -0x50 < iVar39 + 0x8c) && (iVar39 + 0x3c < *piVar18)) {
            cocos2d__log_005d21e4(GH_ARG("Bump_Item_GetAd"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
            if (*piVar69 == 0xeb) {
              bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d264) * *piVar26));
            }
            else if (*piVar69 == 0xea) {
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d16c) * *piVar24));
            }
            else {
              uVar50 = 1;
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x19), GH_ARG(0), GH_ARG(0), GH_ARG(1));
            }
            *piVar69 = 0xee;
          }
        }
        break;
      case 0xf1:
      case 0xf2:
      case 0xf3:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(-iVar31 + *piVar2 * iVar60), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        fVar79 = *pfVar11;
        iVar39 = -iVar31 + *piVar2 * iVar60;
        if (fVar79 == 1.0) {
          iVar59 = 0x23;
        }
        else {
          if (fVar79 <= 1.0) {
            fVar79 = 35.0 - (1.0 - fVar79) * 35.0;
          }
          else {
            fVar79 = fVar79 * 35.0;
          }
          iVar59 = (int)fVar79;
        }
        if ((*piVar72 - iVar59 < iVar39) && (iVar39 < iVar59 + *piVar72)) {
          iVar39 = *piVar3 + (*piVar2 * iVar38 - iVar34);
          if ((*piVar18 + -0x50 < iVar39 + 0x8c) && (iVar39 + 0x3c < *piVar18)) {
            if (*piVar69 == 0xf3) {
              bzStateGame__AitemSsave_003ab270(GH_ARG(self));
              bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
              *(undefined4 *)(self + 0x1ae8) = 0x46;
              *(undefined4 *)(self + 0x32c990) = 0;
              *(int *)(self + 0xb9c) = *piVar2 * iVar60 - iVar31;
              *(int *)(self + 0xba0) = (*piVar2 * iVar38 - iVar34) + *piVar3;
            }
            else {
              bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d16c) * *piVar24));
              if (*piVar69 == 0xf2) {
                bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d264) * *piVar26));
              }
            }
            *piVar69 = 0xf0;
          }
        }
        break;
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      case 0xff:
      case 0x100:
      case 0x101:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        iVar39 = *piVar69;
        if (iVar39 < 0x101) {
          *piVar69 = iVar39 + 1;
        }
        else if (iVar39 == 0x101) {
          *piVar69 = 0xfa;
        }
        break;
      case 0x106:
        iVar39 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        if (((*puVar5 != 0xf) && (*puVar5 != 0x3b)) || (*piVar13 == 0)) {
          uVar50 = 0;
          bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0x106), GH_ARG(iVar39), GH_ARG(iVar60), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        }
        if (*piVar12 != 3) {
          if (((int)*puVar5 < 0x41) && (*piVar9 < 0x15)) {
            fVar79 = *pfVar11;
            if (fVar79 == 1.0) {
              iVar38 = 0x32;
            }
            else {
              if (fVar79 <= 1.0) {
                fVar79 = 50.0 - (1.0 - fVar79) * 50.0;
              }
              else {
                fVar79 = fVar79 * 50.0;
              }
              iVar38 = (int)fVar79;
            }
            if ((((*piVar72 - iVar38 < iVar39 + 0x46) && (iVar39 + 0x46 < iVar38 + *piVar72)) &&
                (*piVar18 + -0x55 < iVar60)) && (iVar60 < *piVar18 + -0x19)) {
              if (*puVar5 != 0x3b) {
                *piVar12 = 2;
              }
              iVar39 = iVar39 + 0x5b;
LAB_00400b30:
              *(int *)(self + 0x32ba88) = iVar39;
              break;
            }
          }
LAB_00400b3c:
          *piVar12 = 0;
        }
        break;
      case 0x107:
        iVar39 = *piVar2 * iVar60 - iVar31;
        iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
        if (((*puVar5 != 0xf) && (*puVar5 != 0x3b)) || (*piVar13 == 1)) {
          uVar50 = 1;
          bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(0x107), GH_ARG(iVar39 + 0x93), GH_ARG(iVar60), GH_ARG(1), GH_ARG(1.0), GH_ARG(*pfVar4));
        }
        if (*piVar12 != 2) {
          if (((int)*puVar5 < 0x41) && (*piVar9 < 0x15)) {
            fVar79 = *pfVar11;
            if (fVar79 == 1.0) {
              iVar38 = 0x32;
            }
            else {
              if (fVar79 <= 1.0) {
                fVar79 = 50.0 - (1.0 - fVar79) * 50.0;
              }
              else {
                fVar79 = fVar79 * 50.0;
              }
              iVar38 = (int)fVar79;
            }
            if ((((*piVar72 - iVar38 < iVar39 + 5) && (iVar39 + 5 < iVar38 + *piVar72)) &&
                (*piVar18 + -0x55 < iVar60)) && (iVar60 < *piVar18 + -0x19)) {
              if (*puVar5 != 0x3b) {
                *piVar12 = 3;
              }
              iVar39 = iVar39 + -0x12;
              goto LAB_00400b30;
            }
          }
          goto LAB_00400b3c;
        }
        break;
      case 0x109:
        iVar39 = *(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140598);
        if (iVar39 < 0) {
          *(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140598) = iVar39 + 1;
          if (iVar39 < -5) {
            if (iVar39 < -10) break;
            iVar40 = *piVar2 * iVar60 - iVar31;
            iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
            fVar79 = *pfVar4;
            fVar77 = 0.3;
            iVar39 = 0x108;
          }
          else {
            iVar40 = *piVar2 * iVar60 - iVar31;
            iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
            fVar79 = *pfVar4;
            fVar77 = 0.7;
            iVar39 = 0x108;
          }
          goto LAB_004012bc;
        }
        *piVar69 = 0x108;
        *(undefined4 *)(self + lVar76 * 4 + lVar53 * 0x2d0 + 0x140868) = 0x29;
        break;
      case 0x10a:
        if (3 < *piVar6) goto switchD_00400b84_caseD_10b;
        break;
      case 0x10b:
switchD_00400b84_caseD_10b:
        iVar59 = *piVar7;
        if ((iVar59 == 0xb) && (0xf < *piVar14 - 5U)) {
          piVar69 = (int *)(self + lVar76 * 4 + lVar53 * 0x2d0 + 0x140868);
          if (*piVar69 < 0) {
            *piVar69 = *piVar69 + 1;
          }
          else {
            iVar59 = 0xf;
            if (3 < *piVar6) {
              iVar59 = 5;
            }
            iVar59 = iVar59 * *piVar6 + -0x46;
            if (-0xb < iVar59) {
              iVar59 = -10;
            }
            *piVar69 = iVar59;
            iVar59 = *piVar6;
            *(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140598) = iVar59 * -0x1e + -0x10e;
            uVar67 = *piVar2 * iVar60 - iVar31;
            uVar50 = (ulong)uVar67;
            bzStateGame__ComCreate_00429718(GH_ARG(self), GH_ARG(*piVar70), GH_ARG(iVar39), GH_ARG(iVar59 * 0x1e + 0x10e), GH_ARG(uVar67), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3));
          }
        }
        else if (*piVar14 == 10) {
          lVar53 = (gh_long)*piVar70;
          iVar39 = *piVar17;
          if (*piVar70 < iVar39) {
            iVar60 = *(int *)(self + 0x1158);
            puVar63 = (undefined4 *)(self + lVar53 * 0x288 + 0x8daec);
            do {
              if ((iVar60 + 0x50 < (int)puVar63[-9]) || ((int)puVar63[-9] < -0x50)) {
                *puVar63 = 0;
              }
              lVar53 = lVar53 + 1;
              puVar63 = puVar63 + 0xa2;
            } while (lVar53 < iVar39);
          }
          if (*piVar6 < 1) {
            iVar39 = 10;
          }
          else {
            iVar39 = 0;
            do {
              if (((iVar59 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar59 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar71 == 1)) {
                iVar60 = 0x14;
              }
              else {
                local_b0 = 0x1300000000;
                pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar60 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
                iVar60 = iVar60 + 0xc;
                iVar59 = *piVar7;
              }
              if (((iVar59 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar59 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar71 == 1)) {
                iVar38 = 3;
              }
              else {
                local_b0 = 0x200000000;
                pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar38 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
                iVar59 = *piVar7;
              }
              if (((iVar59 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar59 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar71 == 1)) {
                iVar40 = 2;
              }
              else {
                local_b0 = 0x100000000;
                pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
                iVar59 = *piVar7;
              }
              uVar51 = *(undefined4 *)(self + 0x1160);
              if (((iVar59 - 0xdU < 0x3e) &&
                  ((1LL << ((ulong)(iVar59 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
                 (*piVar71 == 1)) {
                iVar41 = 8;
              }
              else {
                local_b0 = 0x700000000;
                pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
                iVar41 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
                iVar59 = *piVar7;
                iVar41 = iVar41 + 2;
              }
              if (((0x3d < iVar59 - 0xdU) ||
                  ((1LL << ((ulong)(iVar59 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
                 ((*piVar71 != 1 && (0 < *piVar16)))) {
                lVar53 = 0;
                puVar57 = puVar29;
                do {
                  if (*(int *)((gh_long)puVar57 + -0x14) < 1) {
                    *(undefined4 *)(puVar57 + 1) = 0;
                    *(int *)((gh_long)puVar57 + 0xc) = iVar41;
                    *(undefined4 *)(puVar57 + 2) = 0;
                    *(int *)((gh_long)puVar57 + 0x14) = -iVar60;
                    puVar57[-3] = 0x6400000086;
                    puVar57[-1] = 0x3f80000000000000;
                    *(undefined4 *)(puVar57 + -5) = uVar51;
                    *(undefined4 *)((gh_long)puVar57 + -0x24) = 0x32;
                    *(int *)(puVar57 + -4) = iVar40;
                    *(int *)(puVar57 + -2) = iVar38 + 0x21d;
                    *(undefined4 *)((gh_long)puVar57 + -0xc) = 1;
                    *(undefined4 *)puVar57 = 0x3f800000;
                    *(undefined4 *)((gh_long)puVar57 + 4) = 0;
                    puVar57[3] = 0xff00000000;
                    puVar57[4] = 0xff000000ff;
                    break;
                  }
                  lVar53 = lVar53 + 1;
                  puVar57 = puVar57 + 10;
                } while (lVar53 < *piVar16);
              }
              iVar39 = iVar39 + 1;
            } while (iVar39 < *piVar6 * 5);
            iVar39 = *piVar14;
          }
          *piVar14 = iVar39 + -1;
        }
        break;
      case 0x10d:
        iVar39 = *(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140598);
        if (iVar39 < 0) {
          *(int *)(self + lVar52 * 4 + lVar53 * 0x2d0 + 0x140598) = iVar39 + 1;
          if (iVar39 < -5) {
            if (iVar39 < -10) break;
            iVar40 = *piVar2 * iVar60 - iVar31;
            iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
            fVar79 = *pfVar4;
            fVar77 = 0.3;
            iVar39 = 0x10c;
          }
          else {
            iVar40 = *piVar2 * iVar60 - iVar31;
            iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
            fVar79 = *pfVar4;
            fVar77 = 0.7;
            iVar39 = 0x10c;
          }
          goto LAB_004012bc;
        }
        lVar53 = (lVar76 + -3) * 4 + lVar53 * 0x2d0;
        *(undefined8 *)(self + lVar53 + 0x1405a0) = 0x10c00000039;
        *(undefined8 *)(self + lVar53 + 0x140598) = 0x3900000039;
        break;
      case 0x172:
      case 0x188:
        if (((*piVar7 == 0x16) || (*piVar7 == 0xb)) && (*piVar15 == 0)) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x11e8)), GH_ARG(false));
        }
        break;
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x1d9:
      case 0x1da:
      case 0x1db:
      case 0x1dc:
        iVar59 = *piVar2;
        iVar40 = iVar59 * iVar60 - iVar31;
        iVar60 = *piVar3;
        fVar79 = *pfVar4;
        iVar41 = 0x20 - iVar34;
        goto LAB_004012a4;
      case 0x1b7:
      case 0x1b8:
      case 0x1b9:
      case 0x1ba:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
      case 0x1c1:
      case 0x1c2:
      case 0x1c3:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
        if (*piVar8 < 1) {
          fVar79 = *pfVar4;
          iVar40 = *piVar2 * iVar60 - iVar31;
          iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
          fVar77 = 1.0;
          iVar39 = 0x1b7;
          goto LAB_004012bc;
        }
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar8 * 4 +
                                              (gh_long)*(int *)(self + 0x32ba64) * 0x7c + 0x1352c)), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        iVar39 = 0;
        if (*(int *)(self + (gh_long)*piVar8 * 4 + (gh_long)*(int *)(self + 0x32ba64) * 0x7c + 0x1352c) !=
            0x1b7) {
          iVar39 = *piVar8 + 1;
        }
        *piVar8 = iVar39;
        break;
      case 0x1d2:
      case 0x1d4:
      case 0x1d5:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(-iVar31 + *piVar2 * iVar60), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4));
        fVar79 = *pfVar11;
        iVar39 = -iVar31 + *piVar2 * iVar60;
        if (fVar79 == 1.0) {
          iVar60 = 0x28;
        }
        else {
          if (fVar79 <= 1.0) {
            fVar79 = 40.0 - (1.0 - fVar79) * 40.0;
          }
          else {
            fVar79 = fVar79 * 40.0;
          }
          iVar60 = (int)fVar79;
        }
        if ((*piVar72 - iVar60 < iVar39) && (iVar39 < iVar60 + *piVar72)) {
          iVar39 = *piVar3 + (*piVar2 * iVar38 - iVar34);
          if ((*piVar18 + -0x32 < iVar39 + 0x40) && (iVar39 + 0xe < *piVar18)) {
            bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d16c) * *piVar24));
            if (*piVar69 == 0x1d5) {
              uVar50 = 1;
              *piVar69 = 0xbf;
              bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x19), GH_ARG(0), GH_ARG(0), GH_ARG(1));
            }
            else if (*piVar69 == 0x1d2) {
              *piVar69 = 0x1d3;
              bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(self + (gh_long)*piVar25 * 4 + 0x8d264) * *piVar26));
            }
            else {
              *piVar69 = 0xbe;
            }
          }
        }
        break;
      case 0x1e4:
      case 0x1e5:
      case 0x1e6:
      case 0x1e7:
      case 0x1e8:
      case 0x1e9:
      case 0x1ea:
        iVar59 = *piVar2;
        iVar40 = iVar59 * iVar60 - iVar31;
        iVar60 = *piVar3;
        fVar79 = *pfVar4;
        iVar41 = 0x60 - iVar34;
        goto LAB_004012a4;
      case 0x1eb:
      case 0x1ec:
        iVar59 = *piVar2;
        iVar40 = iVar59 * iVar60 - iVar31;
        iVar60 = *piVar3;
        fVar79 = *pfVar4;
        iVar41 = 0x5c - iVar34;
LAB_004012a4:
        iVar60 = iVar41 + iVar59 * iVar38 + iVar60;
LAB_004012b0:
        fVar77 = 1.0;
LAB_004012bc:
        uVar50 = 0;
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(iVar40), GH_ARG(iVar60), GH_ARG(0), GH_ARG(fVar77), GH_ARG(fVar79));
        break;
      case 500:
        *piVar69 = 0;
        in_stack_fffffffffffffc88 = *(int *)(self + 0x130d4);
        uVar50 = 0;
        bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG(-iVar34 + *piVar2 * iVar38 + *piVar3), GH_ARG(*(int *)(self + 0x32c170)), GH_ARG(*(int *)(self + 0x130d0)), GH_ARG(in_stack_fffffffffffffc88), GH_ARG(0), GH_ARG(1.1), GH_ARG(0x1f), GH_ARG(0x1c), GH_ARG(1));
        *(undefined4 *)(self + 0x32c934) = 0x1040;
        if ((*(int *)(self + 0x1ae8) == 0x15) || (*(int *)(self + 0x1ae8) == 0xb)) {
          uVar67 = -iVar34 + *piVar2 * iVar38 + *piVar3;
          uVar50 = (ulong)uVar67;
          bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1b), GH_ARG(1), GH_ARG((-0x32 - iVar31) + *piVar2 * iVar60), GH_ARG(uVar67));
        }
        if (*(int *)(self + 0x32c9ac) == 2) {
          uVar50 = 0;
          in_stack_fffffffffffffc88 = 0;
          bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(1), GH_ARG(0x1a), GH_ARG(0), GH_ARG(0), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(3000), GH_ARG(0), GH_ARG(0), GH_ARG(0x14), GH_ARG(1.0), GH_ARG(0), GH_ARG(0), GH_ARG(0x5e5));
        }
        break;
      case 0x1f5:
      case 0x1f6:
      case 0x1f7:
      case 0x1f8:
      case 0x1f9:
      case 0x1fa:
      case 0x1fb:
      case 0x1fc:
      case 0x1fd:
      case 0x1fe:
      case 0x1ff:
      case 0x200:
      case 0x201:
      case 0x202:
      case 0x203:
      case 0x204:
      case 0x205:
      case 0x206:
      case 0x207:
      case 0x208:
      case 0x209:
      case 0x20a:
      case 0x20b:
      case 0x20c:
      case 0x20d:
      case 0x20e:
      case 0x20f:
      case 0x213:
      case 0x214:
      case 0x215:
      case 0x216:
      case 0x217:
      case 0x218:
      case 0x219:
      case 0x21a:
      case 0x21b:
      case 0x21c:
      case 0x21d:
      case 0x21e:
      case 0x21f:
      case 0x220:
      case 0x221:
      case 0x222:
      case 0x223:
      case 0x224:
      case 0x225:
      case 0x226:
      case 0x227:
      case 0x228:
      case 0x229:
      case 0x22a:
      case 0x22b:
      case 0x22c:
      case 0x22d:
      case 0x22e:
      case 0x22f:
      case 0x230:
      case 0x231:
      case 0x232:
      case 0x233:
      case 0x23a:
      case 0x23b:
      case 0x23c:
      case 0x23d:
      case 0x23e:
      case 0x23f:
      case 0x240:
      case 0x241:
      case 0x242:
      case 0x243:
      case 0x244:
      case 0x245:
        lVar53 = lVar52 * 4 + lVar53 * 0x2d0;
        uVar67 = *piVar2 * iVar60 - iVar31;
        uVar50 = (ulong)uVar67;
        bzStateGame__ComCreate_00429718(GH_ARG(self), GH_ARG(*piVar70), GH_ARG(iVar39), GH_ARG(-*(int *)(self + lVar53 + 0x140598)), GH_ARG(uVar67), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3));
        *(undefined4 *)(self + lVar53 + 0x14059c) = 0;
        *(undefined4 *)(self + lVar53 + 0x140598) = 0;
        break;
      case 0x212:
        *piVar69 = 0;
        if (((*piVar7 - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*piVar7 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
           (*piVar71 == 1)) {
          iVar39 = 8;
        }
        else {
          local_b0 = 0x700000000;
          pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar39 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
        }
        in_stack_fffffffffffffc88 = *(int *)(self + 0x13b8c);
        uVar50 = (ulong)(*piVar13 == 0);
        bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(1), GH_ARG(0), GH_ARG(iVar39 + 1), GH_ARG((uint)(*piVar13 == 0)), GH_ARG(*piVar2 * iVar60 - iVar31), GH_ARG((*piVar2 * iVar38 - iVar34) + *piVar3), GH_ARG(*(int *)(self + 0x13b84)), GH_ARG(*(int *)(self + 0x13b88)), GH_ARG(in_stack_fffffffffffffc88), GH_ARG(*(int *)(self + 0x13b90)), GH_ARG((float)*(int *)(self + (gh_long)iVar39 * 0x28 + 0x14044) / 10.0), GH_ARG(*(int *)(self + (gh_long)iVar39 * 0x28 + 0x14048)), GH_ARG(*(int *)(self + (gh_long)iVar39 * 0x28 + 0x1404c)), GH_ARG(0x5dd));
      }
      bVar37 = lVar64 < 0x31;
      lVar64 = lVar64 + 1;
    } while (bVar37);
    bVar37 = -4 < lVar74;
    lVar74 = lVar74 + -1;
  } while (bVar37);
  puVar63 = (undefined4 *)(self + 0x32ba44);
  iVar39 = uVar33 + 0x22;
  puVar30 = (undefined4 *)(self + 0xb0ce0);
  lVar74 = 0x1e;
  uVar67 = uVar33;
LAB_00401480:
  lVar75 = lVar55 * 0x2d0 + 0x13db68 + (gh_long)iVar39 * 4;
  lVar1 = lVar74 + lVar56;
  lVar73 = lVar1 + 4;
  lVar76 = -0xd;
LAB_004019e8:
  lVar64 = lVar76 + lVar55;
  piVar70 = (int *)(self + lVar1 * 4 + lVar64 * 0x2d0 + 0x140598);
  iVar60 = *piVar70;
  iVar59 = (int)lVar76;
  iVar38 = (int)lVar74;
  if (iVar60 - 0x1edU < 4) {
    iVar40 = 0x1ed;
    if (iVar60 < 0x1f0) {
      iVar40 = iVar60 + 1;
    }
    *piVar70 = iVar40;
    *(undefined4 *)(self + 0x9d5b8) = 0x3f800000;
    iVar62 = *piVar2;
    iVar60 = iVar62 * iVar59 - iVar31;
    iVar41 = (0x80 - iVar34) + iVar62 * iVar38 + *piVar3;
    if (((*(int *)(self + lVar73 * 4 + lVar64 * 0x2d0 + 0x140598) < 1) &&
        (*(int *)(self + lVar73 * 4 + lVar64 * 0x2d0 + 0x13fff8) < 1)) &&
       (*(int *)(self + lVar73 * 4 + lVar64 * 0x2d0 + 0x140b38) < 1)) {
      lVar53 = lVar64 * 0x2d0 + 0x140598;
      iVar40 = ((uVar33 * iVar47 + 0x80) - iVar48) + *piVar3 + iVar38 * iVar62;
      piVar72 = (int *)(self + (lVar1 + -2) * 4 + lVar53);
      lVar52 = lVar75;
      iVar62 = 0x1d;
      do {
        if (((*(int *)(self + lVar52 + 0x5a0) - 0xfaU < 8) ||
            (*(int *)(self + lVar52 + 0x2d0) == 0xf9)) ||
           ((*(int *)(self + lVar52 + 0x870) - 0xfaU < 8 ||
            ((*(int *)(self + lVar52) == 0xf9 || (*(int *)(self + lVar52 + 0xb40) - 0xfaU < 8))))))
        {
          in_stack_fffffffffffffc88 = 0;
          bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(99), GH_ARG(iVar60), GH_ARG(iVar40), GH_ARG(*piVar70 + -0xb4), GH_ARG(-*piVar72), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0));
          iVar62 = *(int *)(self + 0x1ae8);
          iVar41 = *piVar72;
          if (((iVar62 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar71 == 1)) {
            iVar42 = 0xb4;
          }
          else {
            local_b0 = 0xb300000000;
            pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
            iVar42 = iVar42 + -0x5a;
            iVar62 = *piVar7;
          }
          if (((iVar62 - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
             (*piVar71 == 1)) {
            iVar43 = 0x46;
          }
          else {
            local_b0 = 0x4500000000;
            pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar43 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
            iVar62 = *piVar7;
          }
          uVar68 = iVar62 - 0xd;
          if (((uVar68 < 0x3e) && ((1LL << ((ulong)uVar68 & 0x3f) & 0x3200000000000081U) != 0)) ||
             ((*piVar71 == 1 || (*piVar16 < 1)))) goto LAB_0040201c;
          lVar52 = 0;
          puVar58 = puVar30;
          goto LAB_00401724;
        }
        if ((*(int *)(self + (lVar1 + 1) * 4 + lVar53) == 0) &&
           (((0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar52 + 0x5a0) * 0x12 | 1) * 4 +
                                     0x11c378) ||
             (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar52) * 0x12 | 1) * 4 + 0x11c378)
             )) || (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + lVar52 + 0xb40) * 0x12 | 1) *
                                           4 + 0x11c378))))) {
          in_stack_fffffffffffffc88 = 0;
          bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(99), GH_ARG(iVar60), GH_ARG(iVar41 + 0x20), GH_ARG(*piVar70 + -0xb4), GH_ARG(-*piVar72), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0));
          iVar40 = *piVar70;
          iVar60 = *(int *)(self + (lVar1 + -1) * 4 + lVar53);
          iVar41 = *piVar72;
          piVar72[0] = 0;
          piVar72[1] = 0;
          iVar62 = uVar67 + iVar62;
          lVar52 = lVar64 * 0x2d0 + 0x140598;
          *piVar70 = 0;
          *(int *)(self + (gh_long)(iVar62 + 1) * 4 + lVar52) = iVar40;
          *(int *)(self + (gh_long)iVar62 * 4 + lVar52) = iVar60;
          *(int *)(self + (gh_long)(iVar62 + -1) * 4 + lVar52) = iVar41;
          break;
        }
        lVar52 = lVar52 + 4;
        iVar40 = iVar40 + 0x20;
        iVar42 = iVar62 + -0x19;
        iVar62 = iVar62 + 1;
      } while (iVar42 < 0x13);
    }
    else {
      piVar72 = (int *)(self + (lVar1 + -2) * 4 + lVar64 * 0x2d0 + 0x140598);
      in_stack_fffffffffffffc88 = 0;
      bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(99), GH_ARG(iVar60), GH_ARG(iVar41), GH_ARG(iVar40 + -0xb4), GH_ARG(-*piVar72), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0));
    }
    if (*piVar72 != -1) {
      if (0x40 < (int)*puVar5) goto LAB_00402864;
      goto LAB_00401b14;
    }
    if ((0x40 < (int)*puVar5) || (0x14 < *piVar9)) goto LAB_00402864;
    iVar40 = *(int *)(self + 0x8dac8) + 0x1e;
    fVar79 = *pfVar11;
    iVar59 = *piVar2 * iVar59 - iVar31;
    if (fVar79 == 1.0) {
      iVar62 = 100;
    }
    else {
      if (fVar79 <= 1.0) {
        fVar79 = 100.0 - (1.0 - fVar79) * 100.0;
      }
      else {
        fVar79 = fVar79 * 100.0;
      }
      iVar62 = (int)fVar79;
    }
    if ((iVar59 <= iVar40 - iVar62) || (iVar62 + iVar40 <= iVar59)) goto LAB_00402864;
    iVar38 = *piVar3 + (*piVar2 * iVar38 - iVar34);
    if ((iVar38 + 0xa0 <= *piVar18 + -0x3c) || (*piVar18 <= iVar38 + 100)) goto LAB_00402864;
    *piVar27 = (int)lVar64;
    *piVar28 = (int)lVar1;
    *puVar63 = 2;
    if (0x12 < *piVar9) goto LAB_0040286c;
    iVar60 = iVar60 + -0x46;
    iVar38 = *piVar23;
    goto LAB_00402838;
  }
  puVar58 = puVar30;
  if (iVar60 == 0x67) {
    if (*(int *)(self + lVar1 * 4 + lVar64 * 0x2d0 + 0x1402c8) == 0) {
      *piVar70 = 0;
      iVar60 = *piVar7;
      if (((iVar60 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1))
      {
        iVar40 = 4;
      }
      else {
        local_b0 = 0x300000000;
        pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
        iVar60 = *piVar7;
      }
      iVar41 = *piVar2;
      iVar62 = *piVar3;
      if (((iVar60 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1))
      {
        iVar42 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
        iVar60 = *piVar7;
        iVar42 = iVar42 + 2;
      }
      if (((0x3d < iVar60 - 0xdU) ||
          ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*piVar71 != 1 && (0 < *piVar16)))) {
        lVar64 = 0;
        do {
          if ((int)puVar58[-5] < 1) {
            puVar58[-10] = iVar41 * iVar59 - iVar31;
            puVar58[-9] = (iVar41 * iVar38 - iVar34) + iVar62;
            puVar58[-8] = 0;
            goto LAB_00401910;
          }
          lVar64 = lVar64 + 1;
          puVar58 = puVar58 + 0x14;
        } while (lVar64 < *piVar16);
      }
    }
    else {
      iVar40 = 0x67;
      fVar79 = *pfVar4;
      iVar41 = 1;
      iVar59 = (0x60 - iVar31) + *piVar2 * iVar59;
      iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
LAB_00401c7c:
      bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar40), GH_ARG(iVar59), GH_ARG(iVar60), GH_ARG(iVar41), GH_ARG(1.0), GH_ARG(fVar79));
    }
  }
  else if (iVar60 == 0x66) {
    if (*(int *)(self + lVar1 * 4 + lVar64 * 0x2d0 + 0x140868) != 0) {
      fVar79 = *pfVar4;
      iVar59 = *piVar2 * iVar59 - iVar31;
      iVar40 = 0x66;
      iVar60 = (*piVar2 * iVar38 - iVar34) + *piVar3;
      iVar41 = 0;
      goto LAB_00401c7c;
    }
    *piVar70 = 0;
    iVar60 = *piVar7;
    if (((iVar60 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar40 = 4;
    }
    else {
      local_b0 = 0x300000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar40 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar60 = *piVar7;
    }
    iVar41 = *piVar2;
    iVar62 = *piVar3;
    if (((iVar60 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar42 = 2;
    }
    else {
      local_b0 = 0x100000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar60 = *piVar7;
      iVar42 = iVar42 + 2;
    }
    if (((0x3d < iVar60 - 0xdU) ||
        ((1LL << ((ulong)(iVar60 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar71 != 1 && (0 < *piVar16)))) {
      lVar64 = 0;
LAB_00401e20:
      if (0 < (int)puVar58[-5]) goto code_r0x00401e2c;
      puVar58[-10] = iVar41 * iVar59 - iVar31;
      puVar58[-9] = (iVar41 * iVar38 - iVar34) + iVar62;
      puVar58[-8] = 1;
LAB_00401910:
      *(undefined8 *)(puVar58 + -4) = 0x100000005;
      *(undefined8 *)(puVar58 + -6) = 0x6400000085;
      puVar58[2] = 0;
      puVar58[3] = iVar42;
      *puVar58 = 0x3f800000;
      puVar58[1] = 0;
      puVar58[4] = 0;
      puVar58[5] = -iVar40;
      *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
      *(undefined8 *)(puVar58 + 6) = 0xff00000000;
      *(undefined8 *)(puVar58 + 8) = 0xff000000ff;
    }
  }
  goto LAB_0040286c;
  while( true ) {
    lVar52 = lVar52 + 1;
    puVar58 = puVar58 + 0x14;
    if (*piVar16 <= lVar52) break;
LAB_00401724:
    if ((int)puVar58[-5] < 1) {
      puVar58[-10] = iVar42 + iVar60;
      puVar58[-9] = iVar40 - iVar43;
      puVar58[-8] = iVar41;
      *(undefined8 *)(puVar58 + 3) = 0;
      *(undefined8 *)(puVar58 + -4) = 0x85;
      *(undefined8 *)(puVar58 + -6) = 0x6400000078;
      *(undefined8 *)(puVar58 + 1) = 0;
      puVar58[9] = 0xff;
      *puVar58 = 0x3f800000;
      *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
      *(undefined8 *)(puVar58 + 7) = 0xff000000ff;
      *(undefined8 *)(puVar58 + 5) = 99;
      break;
    }
  }
LAB_0040201c:
  iVar41 = *piVar72;
  if (((uVar68 < 0x3e) && ((1LL << ((ulong)uVar68 & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*piVar71 == 1)) {
    iVar42 = 0x8c;
  }
  else {
    local_b0 = 0x8b00000000;
    pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
    iVar42 = iVar42 + -0x46;
    iVar62 = *piVar7;
  }
  if (((iVar62 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
    iVar43 = 0x3c;
  }
  else {
    local_b0 = 0x3b00000000;
    pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar43 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
    iVar62 = *piVar7;
  }
  uVar68 = iVar62 - 0xd;
  if (((0x3d < uVar68) || ((1LL << ((ulong)uVar68 & 0x3f) & 0x3200000000000081U) == 0)) &&
     ((*piVar71 != 1 && (0 < *piVar16)))) {
    lVar52 = 0;
    puVar58 = puVar30;
    do {
      if ((int)puVar58[-5] < 1) {
        puVar58[-10] = iVar42 + iVar60;
        puVar58[-9] = iVar40 - iVar43;
        puVar58[-8] = iVar41;
        *(undefined8 *)(puVar58 + 3) = 0;
        *(undefined8 *)(puVar58 + -4) = 0x85;
        *(undefined8 *)(puVar58 + -6) = 0x6400000078;
        *(undefined8 *)(puVar58 + 1) = 0;
        puVar58[9] = 0xff;
        *puVar58 = 0x3f800000;
        *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
        *(undefined8 *)(puVar58 + 7) = 0xff000000ff;
        *(undefined8 *)(puVar58 + 5) = 99;
        break;
      }
      lVar52 = lVar52 + 1;
      puVar58 = puVar58 + 0x14;
    } while (lVar52 < *piVar16);
  }
  iVar41 = *piVar72;
  if (((uVar68 < 0x3e) && ((1LL << ((ulong)uVar68 & 0x3f) & 0x3200000000000081U) != 0)) ||
     (*piVar71 == 1)) {
    iVar42 = 0xa0;
  }
  else {
    local_b0 = 0x9f00000000;
    pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
    iVar42 = iVar42 + -0x50;
    iVar62 = *piVar7;
  }
  if (((iVar62 - 0xdU < 0x3e) &&
      ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
    iVar43 = 0x32;
  }
  else {
    local_b0 = 0x3100000000;
    pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar43 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
    iVar62 = *piVar7;
  }
  if (((0x3d < iVar62 - 0xdU) ||
      ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
     ((*piVar71 != 1 && (0 < *piVar16)))) {
    lVar52 = 0;
    puVar58 = puVar30;
    do {
      if ((int)puVar58[-5] < 1) {
        puVar58[-10] = iVar42 + iVar60;
        puVar58[-9] = iVar40 - iVar43;
        puVar58[-8] = iVar41;
        *(undefined8 *)(puVar58 + 3) = 0;
        *(undefined8 *)(puVar58 + -4) = 0x85;
        *(undefined8 *)(puVar58 + -6) = 0x6400000078;
        *(undefined8 *)(puVar58 + 1) = 0;
        puVar58[9] = 0xff;
        *puVar58 = 0x3f800000;
        *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
        *(undefined8 *)(puVar58 + 7) = 0xff000000ff;
        *(undefined8 *)(puVar58 + 5) = 99;
        break;
      }
      lVar52 = lVar52 + 1;
      puVar58 = puVar58 + 0x14;
    } while (lVar52 < *piVar16);
  }
  uVar68 = 0;
  do {
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar41 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar41 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar41 = iVar41 + 0xc;
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar42 = 5;
    }
    else {
      local_b0 = 0x400000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar43 = 2;
    }
    else {
      local_b0 = 0x100000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar43 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar44 = 0x82;
    }
    else {
      local_b0 = 0x8100000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar44 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar44 = iVar44 + -0x5a;
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar45 = 0x28;
    }
    else {
      local_b0 = 0x2700000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar45 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar46 = 8;
    }
    else {
      local_b0 = 0x700000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar46 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar46 = iVar46 + 6;
      iVar62 = *piVar7;
    }
    if (((0x3d < iVar62 - 0xdU) ||
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*piVar71 != 1 && (0 < *piVar16)))) {
      lVar52 = 0;
      puVar58 = puVar30;
      do {
        if ((int)puVar58[-5] < 1) {
          puVar58[-10] = iVar44 + iVar60;
          puVar58[-9] = iVar40 - iVar45;
          puVar58[-4] = iVar42 + 0x143;
          puVar58[-3] = 1;
          puVar58[-8] = iVar43;
          *(undefined8 *)(puVar58 + -6) = 0x6400000085;
          puVar58[2] = 0;
          puVar58[3] = iVar46;
          *puVar58 = 0x3f800000;
          puVar58[1] = 0;
          *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
          *(undefined8 *)(puVar58 + 6) = 0xff00000000;
          puVar58[4] = 0;
          puVar58[5] = -iVar41;
          *(undefined8 *)(puVar58 + 8) = 0xff000000ff;
          break;
        }
        lVar52 = lVar52 + 1;
        puVar58 = puVar58 + 0x14;
      } while (lVar52 < *piVar16);
    }
    bVar37 = uVar68 < 4;
    uVar68 = uVar68 + 1;
  } while (bVar37);
  uVar68 = 0;
  do {
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar41 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar41 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar41 = iVar41 + 0xc;
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar42 = 5;
    }
    else {
      local_b0 = 0x400000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar42 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar43 = 2;
    }
    else {
      local_b0 = 0x100000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar43 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar44 = 0xbe;
    }
    else {
      local_b0 = 0xbd00000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar44 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar44 = iVar44 + -0x5a;
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar45 = 0x50;
    }
    else {
      local_b0 = 0x4f00000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar45 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar62 = *piVar7;
    }
    if (((iVar62 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) || (*piVar71 == 1)) {
      iVar46 = 8;
    }
    else {
      local_b0 = 0x700000000;
      pmVar49 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar46 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar49), GH_ARG((param_type *)&local_b0));
      iVar46 = iVar46 + 6;
      iVar62 = *piVar7;
    }
    if ((((0x3d < iVar62 - 0xdU) ||
         ((1LL << ((ulong)(iVar62 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) && (*piVar71 != 1))
       && (0 < *piVar16)) {
      lVar52 = 0;
      puVar58 = puVar30;
      do {
        if ((int)puVar58[-5] < 1) {
          puVar58[-10] = iVar44 + iVar60;
          puVar58[-9] = iVar40 - iVar45;
          puVar58[-4] = iVar42 + 0x143;
          puVar58[-3] = 1;
          puVar58[-8] = iVar43;
          *(undefined8 *)(puVar58 + -6) = 0x6400000085;
          puVar58[2] = 0;
          puVar58[3] = iVar46;
          *puVar58 = 0x3f800000;
          puVar58[1] = 0;
          *(undefined8 *)(puVar58 + -2) = 0x3f80000000000000;
          *(undefined8 *)(puVar58 + 6) = 0xff00000000;
          puVar58[4] = 0;
          puVar58[5] = -iVar41;
          *(undefined8 *)(puVar58 + 8) = 0xff000000ff;
          break;
        }
        lVar52 = lVar52 + 1;
        puVar58 = puVar58 + 0x14;
      } while (lVar52 < *piVar16);
    }
    bVar37 = uVar68 < 4;
    uVar68 = uVar68 + 1;
  } while (bVar37);
  piVar72[0] = 0;
  piVar72[1] = 0;
  *piVar70 = 0;
  iVar41 = iVar40;
  if ((int)*puVar5 < 0x41) {
LAB_00401b14:
    if (*piVar9 < 0x15) {
      iVar40 = *(int *)(self + 0x8dac8) + -0x1e;
      fVar79 = *pfVar11;
      iVar59 = *piVar2 * iVar59 - iVar31;
      if (fVar79 == 1.0) {
        iVar62 = 100;
      }
      else {
        if (fVar79 <= 1.0) {
          fVar79 = 100.0 - (1.0 - fVar79) * 100.0;
        }
        else {
          fVar79 = fVar79 * 100.0;
        }
        iVar62 = (int)fVar79;
      }
      if ((iVar40 - iVar62 < iVar59) && (iVar59 < iVar62 + iVar40)) {
        iVar38 = *piVar3 + (*piVar2 * iVar38 - iVar34);
        if ((*piVar18 + -0x3c < iVar38 + 0xa0) && (iVar38 + 100 < *piVar18)) {
          *piVar27 = (int)lVar64;
          *piVar28 = (int)lVar1;
          *puVar63 = 2;
          if (*piVar9 < 0x13) {
            iVar60 = iVar60 + 0x14;
            iVar38 = *piVar23;
LAB_00402838:
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x86), GH_ARG(iVar60), GH_ARG((iVar41 + -0xbe) - iVar38), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(1.2), GH_ARG(0), GH_ARG(1.0));
          }
          goto LAB_0040286c;
        }
      }
    }
  }
LAB_00402864:
  *puVar63 = 0;
LAB_0040286c:
  lVar75 = lVar75 + 0x2d0;
  bVar37 = 0x30 < lVar76;
  lVar76 = lVar76 + 1;
  if (bVar37) goto code_r0x0040288c;
  goto LAB_004019e8;
code_r0x00401e2c:
  lVar64 = lVar64 + 1;
  puVar58 = puVar58 + 0x14;
  if (*piVar16 <= lVar64) goto LAB_0040286c;
  goto LAB_00401e20;
code_r0x0040288c:
  uVar67 = uVar67 - 1;
  iVar39 = iVar39 + -1;
  bVar37 = lVar74 < -3;
  lVar74 = lVar74 + -1;
  if (bVar37) {
    if (0 < *piVar16) {
      lVar75 = 0;
      lVar74 = 0xb0d04;
      lVar73 = 0xb0ce0;
      do {
        if ((0 < *(int *)(self + lVar74 + -0x38)) && (*(int *)(self + lVar74 + -0x3c) < 100)) {
          piVar71 = (int *)(self + lVar74);
          iVar47 = bzStateGame__OBJimg_003fd2e4(GH_ARG(self), GH_ARG((int)lVar75), GH_ARG(piVar71[-0x13]), GH_ARG(piVar71[-0x12]), GH_ARG(piVar71[-0xd]), GH_ARG(piVar71[-0x11]), GH_ARG(piVar71[-2]), GH_ARG(piVar71[-1]), GH_ARG(*piVar71), GH_ARG(*(float *)(self + lVar73)), GH_ARG(in_stack_fffffffffffffc88));
          if (0 < iVar47) {
            bzStateGame__OBJChexk_00437dd8(GH_ARG(self), GH_ARG((int)lVar75), GH_ARG(piVar71[-0xd]), GH_ARG(piVar71[-0x13]), GH_ARG(piVar71[-0x12]), GH_ARG(piVar71[-0x11]));
          }
          if (*(int *)(self + lVar74 + -0x38) == 1) {
            *(undefined4 *)(self + lVar74 + -0x38) = 0;
          }
        }
        lVar75 = lVar75 + 1;
        lVar73 = lVar73 + 0x50;
        lVar74 = lVar74 + 0x50;
      } while (lVar75 < *piVar16);
    }
    if (((*puVar5 & 0xfffffffe) == 0x1e) || (*piVar9 == 0x16)) {
      iVar47 = *piVar17;
      if (-1 < iVar47) {
        lVar75 = (gh_long)iVar47 * 0x288;
        lVar73 = lVar75 + 0x8dac8;
        lVar74 = (gh_long)iVar47 + 1;
        lVar75 = lVar75 + 0x8db24;
        do {
          if ((0 < *(int *)(self + lVar73 + 0x24)) && (*(int *)(self + lVar73 + 0x18) != 0x27)) {
            piVar71 = (int *)(self + lVar73);
            in_stack_fffffffffffffc88 = piVar71[0x11];
            iVar48 = bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(iVar47), GH_ARG(*piVar71), GH_ARG(piVar71[1]), GH_ARG(piVar71[10]), GH_ARG(piVar71[4]), GH_ARG(piVar71[0x93]), GH_ARG(piVar71[0x94]), GH_ARG(piVar71[0x95]), GH_ARG(*(float *)(self + lVar75)), GH_ARG(in_stack_fffffffffffffc88));
            if (0 < iVar48) {
              bzStateGame__PXYChexk_0043875c(GH_ARG(self), GH_ARG(iVar47), GH_ARG(piVar71[10]), GH_ARG(*piVar71), GH_ARG(piVar71[1]), GH_ARG(piVar71[4]));
            }
          }
          lVar74 = lVar74 + -1;
          iVar47 = iVar47 + -1;
          lVar73 = lVar73 + -0x288;
          lVar75 = lVar75 + -0x288;
        } while (0 < lVar74);
        iVar47 = *piVar17;
        if (-1 < iVar47) {
          lVar75 = (gh_long)iVar47 * 0x288;
          lVar73 = lVar75 + 0x8dac8;
          lVar74 = (gh_long)iVar47 + 1;
          lVar75 = lVar75 + 0x8db24;
          do {
            if ((*(int *)(self + lVar73 + 0x18) == 0x27) && (0 < *(int *)(self + lVar73 + 0x24))) {
              piVar71 = (int *)(self + lVar73);
              in_stack_fffffffffffffc88 = piVar71[0x11];
              iVar48 = bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(iVar47), GH_ARG(*piVar71), GH_ARG(piVar71[1]), GH_ARG(piVar71[10]), GH_ARG(piVar71[4]), GH_ARG(piVar71[0x93]), GH_ARG(piVar71[0x94]), GH_ARG(piVar71[0x95]), GH_ARG(*(float *)(self + lVar75)), GH_ARG(in_stack_fffffffffffffc88));
              if (0 < iVar48) {
                bzStateGame__PXYChexk_0043875c(GH_ARG(self), GH_ARG(iVar47), GH_ARG(piVar71[10]), GH_ARG(*piVar71), GH_ARG(piVar71[1]), GH_ARG(piVar71[4]));
              }
            }
            lVar74 = lVar74 + -1;
            iVar47 = iVar47 + -1;
            lVar73 = lVar73 + -0x288;
            lVar75 = lVar75 + -0x288;
          } while (0 < lVar74);
        }
      }
    }
    else {
      iVar47 = *piVar17;
      if (-1 < iVar47) {
        lVar75 = (gh_long)iVar47 * 0x288;
        lVar73 = lVar75 + 0x8dac8;
        lVar74 = (gh_long)iVar47 + 1;
        lVar75 = lVar75 + 0x8db24;
        do {
          if ((0 < *(int *)(self + lVar73 + 0x24)) &&
             (*(int *)(self + lVar73 + 4) <= *piVar18 + 0x1e)) {
            piVar71 = (int *)(self + lVar73);
            in_stack_fffffffffffffc88 = piVar71[0x11];
            iVar48 = bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(iVar47), GH_ARG(*piVar71), GH_ARG(*(int *)(self + lVar73 + 4)), GH_ARG(piVar71[10]), GH_ARG(piVar71[4]), GH_ARG(piVar71[0x93]), GH_ARG(piVar71[0x94]), GH_ARG(piVar71[0x95]), GH_ARG(*(float *)(self + lVar75)), GH_ARG(in_stack_fffffffffffffc88));
            if (0 < iVar48) {
              bzStateGame__PXYChexk_0043875c(GH_ARG(self), GH_ARG(iVar47), GH_ARG(piVar71[10]), GH_ARG(*piVar71), GH_ARG(*(int *)(self + lVar73 + 4)), GH_ARG(piVar71[4]));
            }
          }
          lVar74 = lVar74 + -1;
          iVar47 = iVar47 + -1;
          lVar73 = lVar73 + -0x288;
          lVar75 = lVar75 + -0x288;
        } while (0 < lVar74);
        if (1 < *piVar17) {
          lVar74 = 0x8ddac;
          lVar75 = 1;
          lVar73 = 0x8dac8;
          do {
            if ((0 < *(int *)(self + lVar73 + 0x2ac)) &&
               ((*piVar18 + 0x1e < *(int *)(self + lVar73 + 0x28c) ||
                (*(int *)(self + lVar73 + 0x2a0) == 0x27)))) {
              piVar71 = (int *)(self + lVar73 + 0x288);
              in_stack_fffffffffffffc88 = piVar71[0x11];
              iVar47 = bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG((int)lVar75), GH_ARG(*piVar71), GH_ARG(*(int *)(self + lVar73 + 0x28c)), GH_ARG(piVar71[10]), GH_ARG(piVar71[4]), GH_ARG(piVar71[0x93]), GH_ARG(piVar71[0x94]), GH_ARG(piVar71[0x95]), GH_ARG(*(float *)(self + lVar74)), GH_ARG(in_stack_fffffffffffffc88));
              if (0 < iVar47) {
                bzStateGame__PXYChexk_0043875c(GH_ARG(self), GH_ARG((int)lVar75), GH_ARG(piVar71[10]), GH_ARG(*piVar71), GH_ARG(*(int *)(self + lVar73 + 0x28c)), GH_ARG(piVar71[4]));
              }
            }
            lVar75 = lVar75 + 1;
            lVar74 = lVar74 + 0x288;
            lVar73 = lVar73 + 0x288;
          } while (lVar75 < *piVar17);
        }
      }
    }
    piVar71 = (int *)(self + 0x32c8f0);
    piVar70 = (int *)(self + lVar55 * 0x2d0 + lVar56 * 4 + 0x13f260);
    lVar74 = 0x1e;
    do {
      lVar55 = 0;
      iVar47 = -7;
      iVar48 = (int)lVar74;
      piVar72 = piVar70;
      do {
        iVar39 = *piVar72;
        iVar60 = (int)lVar55;
        switch(iVar39) {
        case 0x59:
        case 0x5a:
        case 0x5b:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * (iVar60 + -7) - iVar31;
          iVar60 = (0x40 - iVar34) + *piVar2 * iVar48 + *piVar3;
          break;
        default:
          goto switchD_00403054_caseD_5c;
        case 0x5e:
        case 0x5f:
        case 0x60:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * (iVar60 + -7) - iVar31;
          iVar60 = (*piVar2 * iVar48 - iVar34) + *piVar3;
          iVar39 = 0x65;
          break;
        case 0x9e:
          if (*piVar9 == 0x16) {
            iVar38 = *(int *)(self + 0x8dac8);
            iVar60 = *piVar2 * (iVar60 + -7) - iVar31;
            iVar39 = iVar47;
            if ((iVar38 + -200 < iVar60) && (iVar60 < iVar38 + 200)) {
              iVar60 = *piVar3 + (*piVar2 * iVar48 - iVar34);
              if ((*piVar18 + -0x118 < iVar60) && (iVar60 < *piVar18 + 0xa0))
              goto switchD_00403054_caseD_5c;
            }
          }
          else {
            iVar39 = iVar60 + -7;
          }
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * iVar39 - iVar31;
          iVar60 = (*piVar2 * iVar48 - iVar34) + *piVar3;
          iVar39 = 0xf4;
          break;
        case 0xd0:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * (iVar60 + -7) - iVar31;
          iVar60 = (*piVar2 * iVar48 - iVar34) + *piVar3;
          iVar39 = 0xb6;
          break;
        case 0xd3:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * (iVar60 + -7) - iVar31;
          iVar60 = (*piVar2 * iVar48 - iVar34) + *piVar3;
          iVar39 = 0xd3;
          break;
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0xfd:
        case 0xfe:
        case 0xff:
        case 0x100:
        case 0x101:
          bzStateGame__AttTileimg_00433c2c(GH_ARG(self), GH_ARG(iVar39 + 0x9d), GH_ARG(*piVar2 * (iVar60 + -7) - iVar31), GH_ARG((*piVar2 * iVar48 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4), GH_ARG(iVar32 + -7 + iVar60), GH_ARG(iVar48 + uVar33));
          goto switchD_00403054_caseD_5c;
        case 0x15f:
        case 0x160:
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
          bzStateGame__AttTileimg_00433c2c(GH_ARG(self), GH_ARG(iVar39), GH_ARG(*piVar2 * (iVar60 + -7) - iVar31), GH_ARG((*piVar2 * iVar48 - iVar34) + *piVar3), GH_ARG(0), GH_ARG(1.0), GH_ARG(*pfVar4), GH_ARG(iVar32 + -7 + iVar60), GH_ARG(iVar48 + uVar33));
          iVar39 = 0x15f;
          if (*piVar72 != 0x18a) {
            iVar39 = *piVar72 + 1;
          }
          *piVar72 = iVar39;
          goto switchD_00403054_caseD_5c;
        case 0x18d:
          fVar79 = *pfVar4;
          iVar38 = *piVar2 * (iVar60 + -7) - iVar31;
          iVar60 = (*piVar2 * iVar48 - iVar34) + *piVar3;
          iVar39 = 0x18d;
          break;
        case 0x1b4:
          if (*(int *)(self + 0x32c8a4) == 0) {
            if ((*(int *)(self + 0x1160) * 2 + -100 < *(int *)(self + 0x8dac8)) && (*piVar7 == 0xb))
            {
              bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0.0), GH_ARG(0.0));
            }
            iVar39 = (*(int *)(self + 0x1158) + -0x50) - *piVar71;
            goto LAB_00402f48;
          }
          goto switchD_00403054_caseD_5c;
        case 0x1b6:
          iVar39 = (*(int *)(self + 0x1158) + -0x50) - *piVar71;
LAB_00402f48:
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x23), GH_ARG(iVar39), GH_ARG(0x82), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
          iVar39 = 0;
          if (*piVar71 < 0x11) {
            iVar39 = *piVar71 + 4;
          }
          *piVar71 = iVar39;
          goto switchD_00403054_caseD_5c;
        }
        bzStateGame__Tileimg_00433acc(GH_ARG(self), GH_ARG(iVar39), GH_ARG(iVar38), GH_ARG(iVar60), GH_ARG(0), GH_ARG(1.0), GH_ARG(fVar79));
switchD_00403054_caseD_5c:
        lVar56 = lVar55 + -7;
        iVar47 = iVar47 + 1;
        lVar55 = lVar55 + 1;
        piVar72 = piVar72 + 0xb4;
      } while (lVar56 < 0x2b);
      piVar70 = piVar70 + -1;
      bVar37 = lVar74 < -2;
      lVar74 = lVar74 + -1;
      if (bVar37) {
        lVar74 = 0xb0ce0;
        if (0 < *piVar16) {
          lVar56 = 0;
          lVar55 = 0xb0d04;
          do {
            if ((0 < *(int *)(self + lVar55 + -0x38)) && (99 < *(int *)(self + lVar55 + -0x3c))) {
              piVar2 = (int *)(self + lVar55);
              iVar47 = bzStateGame__OBJimg_003fd2e4(GH_ARG(self), GH_ARG((int)lVar56), GH_ARG(piVar2[-0x13]), GH_ARG(piVar2[-0x12]), GH_ARG(piVar2[-0xd]), GH_ARG(piVar2[-0x11]), GH_ARG(piVar2[-2]), GH_ARG(piVar2[-1]), GH_ARG(*piVar2), GH_ARG(*(float *)(self + lVar74)), GH_ARG(in_stack_fffffffffffffc88));
              if (0 < iVar47) {
                bzStateGame__OBJChexk_00437dd8(GH_ARG(self), GH_ARG((int)lVar56), GH_ARG(piVar2[-0xd]), GH_ARG(piVar2[-0x13]), GH_ARG(piVar2[-0x12]), GH_ARG(piVar2[-0x11]));
              }
            }
            lVar56 = lVar56 + 1;
            lVar74 = lVar74 + 0x50;
            lVar55 = lVar55 + 0x50;
          } while (lVar56 < *piVar16);
        }
        if (*(gh_long *)(lVar35 + 0x28) == local_a8) {
          return 0;
        }
                    
        __stack_chk_fail();
      }
    } while( true );
  }
  goto LAB_00401480;
  return 0;
}
