/* bzStateGame::ComboAni_0041c714 @ 0x0041c714 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__ComboAni_0041c714(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  int *piVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  int iVar6;
  int iVar7;
  int in_w5 = 0;
  int iVar8;
  Color4F *pCVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  uint64_t gh_frame64[23] = {0};   /* 원작 스택 프레임 (SP-0xa0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xa0;
#define auStack_a0 (*(undefined1 (*)[8])(gh_fb - 0xa0))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
#define local_90 (*(ulong *)(gh_fb - 0x90))
#define uStack_88 (*(ulong *)(gh_fb - 0x88))
  Color4F aCStack_78 [16];
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar5 = tpidr_el0;
  local_68 = *(gh_long *)(lVar5 + 0x28);
  piVar1 = (int *)(self + 0x32c8a8);
  iVar7 = 0;
  if (*piVar1 < 6) {
    iVar7 = *piVar1 + 1;
  }
  *piVar1 = iVar7;
  pfVar2 = (float *)(self + 0x32c8bc);
  *pfVar2 = 0.8;
  if (0 < param_2) {
    FUN_009d4eac(GH_ARG(&local_98), GH_ARG("KEY: "), GH_ARG(auStack_a0), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar7 = *(int *)(self + 0x115c);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG(aCStack_78), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_90), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    pCVar9 = aCStack_78;
    bzStateGame__drawString_003aee28(GH_ARG(self), GH_ARG((undefined *)&local_98), GH_ARG(0x78), GH_ARG(iVar7 + -0x2d), GH_ARG(0), GH_ARG(pCVar9), GH_ARG((undefined *)&local_90), GH_ARG(2));
    in_w5 = (int)pCVar9;
    if ((undefined8 *)(local_98 + -0x18) != &DAT_00d40300) {
      piVar11 = (int *)(local_98 + -8);
      do {
        iVar7 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 < 1) {
        operator_delete((undefined8 *)(local_98 + -0x18));
      }
    }
  }
  if (0x17 < (uint)param_2) goto switchD_0041c824_caseD_10;
  switch(param_2) {
  case 0:
    if (self[0x1138] == '\0') {
      iVar7 = 3;
    }
    else {
      iVar7 = 8;
    }
    iVar8 = 0xff;
    bzStateGame__bigBimg_drawImage_003ec894(GH_ARG(self), GH_ARG(iVar7), GH_ARG(*(int *)(self + 0x32bb90)), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0x16), GH_ARG(*(int *)(self + 0x1158) - *(int *)(self + 0x32c9b8)), GH_ARG(*(int *)(self + 0x115c)), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    goto switchD_0041c824_caseD_10;
  case 1:
  case 0x15:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0x85), GH_ARG(0x1e7), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    fVar14 = 0.5;
    iVar8 = 0x89;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    goto LAB_0041cb1c;
  case 2:
  case 0x16:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0x111), GH_ARG(0x1eb), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    fVar14 = 0.5;
    iVar8 = 0x8a;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    goto LAB_0041cb1c;
  case 3:
    if (*(int *)(self + 0x32c9b4) < 0xe) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
      iVar8 = 0x172;
LAB_0041d240:
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    }
    else if (*(int *)(self + 0x32c9b4) < 0x19) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x111;
      iVar8 = 0x1eb;
      goto LAB_0041d240;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar7 = *(int *)(self + 0x115c);
    iVar8 = 0x8a;
    goto LAB_0041d37c;
  case 4:
    if (*(int *)(self + 0x32c9b4) < 0xe) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
      iVar8 = 0x172;
LAB_0041d2f0:
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    }
    else if (*(int *)(self + 0x32c9b4) < 0x19) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x85;
      iVar8 = 0x1e7;
      goto LAB_0041d2f0;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar7 = *(int *)(self + 0x115c);
    iVar8 = 0x89;
LAB_0041d37c:
    fVar13 = 0.2;
    fVar14 = 0.5;
    iVar7 = iVar7 + -0x3a;
    iVar6 = 0x118;
LAB_0041d7c0:
    iVar10 = 0;
    break;
  case 5:
  case 0x17:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0xe9), GH_ARG(0x172), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
LAB_0041c8a8:
    iVar8 = 0x8b;
    goto LAB_0041cdc8;
  case 6:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(0x4c), GH_ARG(0x1e0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    fVar14 = 0.5;
    iVar8 = 0x88;
    iVar6 = 0xbe;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    iVar10 = 1;
    fVar13 = 1.0;
    break;
  case 7:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0x5d), GH_ARG(0x172), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    iVar8 = 0x87;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    goto LAB_0041cdc8;
  case 8:
    if (*(int *)(self + 0x32c9b4) < 0x10) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x85;
      iVar8 = 0x1e7;
    }
    else if (*(int *)(self + 0x32c9b4) < 0x16) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
      iVar8 = 0x172;
    }
    else {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x111;
      iVar8 = 0x1eb;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0x118), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x159), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8a), GH_ARG(0x172), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x1b3), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar7 = *(int *)(self + 0x115c);
    iVar6 = 0x1cc;
    goto LAB_0041d7a8;
  case 9:
    iVar7 = *(int *)(self + 0x32c9b4);
    if (iVar7 < 0x10) {
LAB_0041c944:
      iVar8 = *(int *)(self + 0x1158);
      fVar14 = *pfVar2;
LAB_0041c950:
      iVar8 = iVar8 + -0x85;
      iVar7 = 0x1e7;
    }
    else {
      if (0x15 < iVar7) {
        if (iVar7 < 0x1c) goto LAB_0041c944;
        iVar8 = *(int *)(self + 0x1158);
        if (0x21 < iVar7) {
          fVar14 = *pfVar2;
          iVar8 = iVar8 + -0x111;
          iVar7 = 0x1eb;
          goto LAB_0041cf58;
        }
        fVar14 = *pfVar2;
        goto LAB_0041c950;
      }
      fVar14 = *pfVar2;
      iVar8 = *(int *)(self + 0x1158) + -0x5d;
      iVar7 = 0x172;
    }
LAB_0041cf58:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar8), GH_ARG(iVar7), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0x118), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x159), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(0x172), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x1b3), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(0x1cc), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x20d), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8a), GH_ARG(0x226), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x267), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar7 = *(int *)(self + 0x115c);
    iVar6 = 0x280;
LAB_0041d7a8:
    fVar13 = 0.2;
    fVar14 = 0.5;
    iVar8 = 0x8a;
    iVar7 = iVar7 + -0x3a;
    goto LAB_0041d7c0;
  case 10:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0x7b), GH_ARG(0x1e0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar8 = 0x8f;
    iVar7 = *(int *)(self + 0x115c) + -0x3c;
    fVar14 = 0.4;
    goto LAB_0041cb1c;
  case 0xb:
    if (*(int *)(self + 0x32c9b4) < 0xf) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
      iVar8 = 0x172;
    }
    else {
      iVar7 = *(int *)(self + 0x1158) + -0x7b;
      iVar8 = 0x1e0;
      fVar14 = 1.0;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar8 = 0x8f;
    iVar6 = 0x118;
    iVar7 = *(int *)(self + 0x115c) + -0x3c;
    fVar14 = 0.4;
    goto LAB_0041cb20;
  case 0xc:
    if (*(int *)(self + 0x32c9b4) - 0x2dU < 7) {
      fVar14 = *pfVar2;
      iVar7 = 0x4c;
      iVar8 = 0x1e0;
LAB_0041ce08:
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    }
    else if (*(int *)(self + 0x32c9b4) < 0x28) {
      fVar14 = *pfVar2;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
      iVar8 = 0x172;
      goto LAB_0041ce08;
    }
    fVar14 = 0.5;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    fVar13 = 1.0;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(0x154), GH_ARG(*(int *)(self + 0x115c) + -10), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.2), GH_ARG(1), GH_ARG(0x154), GH_ARG(*(int *)(self + 0x115c) + -10), GH_ARG(0x139));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x159), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar8 = 0x88;
    iVar6 = 0x172;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    iVar10 = 1;
    break;
  case 0xd:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0x232), GH_ARG(0x1e6), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    iVar8 = 0x84;
    iVar7 = *(int *)(self + 0x115c) + -0x37;
    fVar14 = 0.6;
LAB_0041cb1c:
    iVar6 = 0xbe;
LAB_0041cb20:
    fVar13 = 1.0;
LAB_0041cde0:
    iVar10 = 0;
    break;
  case 0xe:
    iVar7 = *(int *)(self + 0x32c9b4);
    if (iVar7 - 0xdU < 10) {
      fVar14 = 1.0;
      iVar8 = 0x172;
      iVar7 = *(int *)(self + 0x1158) + -0x5d;
LAB_0041d528:
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    }
    else {
      if (iVar7 - 0x17U < 0x23) {
        fVar14 = *pfVar2;
        iVar7 = *(int *)(self + 0x1158) + -0x85;
        iVar8 = 0x1e7;
        goto LAB_0041d528;
      }
      if (iVar7 < 0xd) {
        fVar14 = *pfVar2;
        iVar7 = *(int *)(self + 0x1158) + -0xe9;
        iVar8 = 0x172;
        goto LAB_0041d528;
      }
    }
    if (*piVar1 < 4) {
      iVar7 = 0x8b;
    }
    else {
      iVar7 = 0x89;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar7), GH_ARG(0xbe), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    fVar13 = 1.0;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0xff), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(0x118), GH_ARG(*(int *)(self + 0x115c) + -0x3a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0), GH_ARG(0.5));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xe), GH_ARG(0x159), GH_ARG(*(int *)(self + 0x115c) + -0x23), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    iVar8 = 0x89;
    iVar6 = 0x172;
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    iVar10 = 0;
    fVar14 = 0.5;
    break;
  case 0xf:
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(*(int *)(self + 0x1158) + -0xe6), GH_ARG(0x172), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    iVar7 = *(int *)(self + 0x115c) + -0x3a;
    if (*piVar1 < 4) goto LAB_0041c8a8;
    iVar8 = 0x89;
LAB_0041cdc8:
    fVar14 = 0.5;
    fVar13 = 0.2;
    iVar6 = 0xbe;
    goto LAB_0041cde0;
  default:
    goto switchD_0041c824_caseD_10;
  case 0x14:
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(5), GH_ARG(0), GH_ARG(0x3c), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    uVar12 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)aCStack_78), GH_ARG(0.0), GH_ARG(129.0), GH_ARG(283.0), GH_ARG(5.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_90), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_90), GH_ARG(local_90 >> 0x20), GH_ARG(uStack_88 & 0xffffffff), GH_ARG(uStack_88 >> 0x20), GH_ARG(uVar12), GH_ARG(aCStack_78))
    ;
    uVar12 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)aCStack_78), GH_ARG(3.0), GH_ARG(129.0), GH_ARG(277.0), GH_ARG(4.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_90), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_90), GH_ARG(local_90 >> 0x20), GH_ARG(uStack_88 & 0xffffffff), GH_ARG(uStack_88 >> 0x20), GH_ARG(uVar12), GH_ARG(aCStack_78))
    ;
    if (*piVar1 < 3) {
      uVar12 = *(undefined8 *)(self + 0xc38);
      cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)aCStack_78), GH_ARG(3.0), GH_ARG(129.0), GH_ARG(277.0), GH_ARG(4.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_90), GH_ARG(0.0), GH_ARG(0.78431374), GH_ARG(0.11764706), GH_ARG(1.0));
      kDraw__drawRect_00479ae8(GH_ARG(local_90), GH_ARG(local_90 >> 0x20), GH_ARG(uStack_88 & 0xffffffff), GH_ARG(uStack_88 >> 0x20), GH_ARG(uVar12), GH_ARG(aCStack_78));
      fVar14 = 0.9;
      iVar7 = 0x55;
      iVar8 = 0x8c;
    }
    else {
      iVar7 = 0x51;
      iVar8 = 0x88;
      fVar14 = 1.0;
    }
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xd4), GH_ARG(iVar7), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(fVar14));
    fVar13 = 1.0;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x22), GH_ARG(0x82), GH_ARG(0x92), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(*pfVar2));
    iVar8 = 0xd4;
    iVar6 = 0xbe;
    iVar7 = *(int *)(self + 0x115c) + -0x30;
    fVar14 = fVar13;
    goto LAB_0041d7c0;
  }
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar8), GH_ARG(iVar6), GH_ARG(iVar7), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar13), GH_ARG(iVar10), GH_ARG(fVar14));
switchD_0041c824_caseD_10:
  if (0 < *(int *)(self + 0x32c9b0)) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x43), GH_ARG(*(int *)(self + 0x1158) + -0x2c), GH_ARG(10), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0))
    ;
  }
  if (*(gh_long *)(lVar5 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
