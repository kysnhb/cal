/* bzStateGame::AitemSsave_003ab270 @ 0x003ab270 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__AitemSsave_003ab270(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  gh_long lVar7;
  kFile *this;
  ulong uVar8;
  int *piVar9;
  gh_long lVar10;
  uint64_t gh_frame64[19] = {0};   /* 원작 스택 프레임 (SP-0x80 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x80;
#define auStack_80 (*(undefined1 (*)[8])(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
#define auStack_70 (*(undefined1 (*)[8])(gh_fb - 0x70))
#define local_68 (*(gh_long (*)[2])(gh_fb - 0x68))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar7 = tpidr_el0;
  local_58 = *(gh_long *)(lVar7 + 0x28);
  piVar1 = (int *)(self + 0x32c14c);
  iVar3 = *piVar1;
  piVar2 = (int *)(self + 0x32c49c);
  *piVar2 = iVar3 + 0xd8;
  *(int *)(self + 0x32c4a0) = iVar3;
  iVar4 = *(int *)(self + 0x32c148);
  *(int *)(self + 0x32c4a4) = iVar4;
  *(undefined4 *)(self + 0x32c4a8) = *(undefined4 *)(self + 0x32c164);
  *(undefined4 *)(self + 0x32c4ac) = *(undefined4 *)(self + 0x32c15c);
  *(undefined4 *)(self + 0x32c4b0) = *(undefined4 *)(self + 0x32c154);
  *(undefined4 *)(self + 0x32c4b4) = *(undefined4 *)(self + 0x32c168);
  *(undefined4 *)(self + 0x32c4b8) = *(undefined4 *)(self + 0x32c16c);
  *(undefined8 *)(self + 0x32c4c4) = *(undefined8 *)(self + 0x32c17c);
  *(undefined8 *)(self + 0x32c4bc) = *(undefined8 *)(self + 0x32c174);
  *(int *)(self + 0x32c4cc) = *(int *)(self + 0x32c170);
  *(undefined4 *)(self + 0x32c4d0) = *(undefined4 *)(self + 0x32c184);
  *(undefined4 *)(self + 0x32c4d4) = *(undefined4 *)(self + 0x32c188);
  *(undefined4 *)(self + 0x32c4d8) = *(undefined4 *)(self + 0x32c424);
  *(undefined8 *)(self + 0x32c4e4) = *(undefined8 *)(self + 0x32c194);
  *(undefined8 *)(self + 0x32c4dc) = *(undefined8 *)(self + 0x32c18c);
  *(undefined4 *)(self + 0x32c4ec) = *(undefined4 *)(self + 0x32c404);
  *(undefined4 *)(self + 0x32c4f0) = *(undefined4 *)(self + 0x32c3f8);
  *(undefined8 *)(self + 0x32c4fc) = *(undefined8 *)(self + 0x32c1a4);
  *(undefined8 *)(self + 0x32c4f4) = *(undefined8 *)(self + 0x32c19c);
  *(undefined4 *)(self + 0x32c504) = *(undefined4 *)(self + 0x32c214);
  *(undefined4 *)(self + 0x32c508) = *(undefined4 *)(self + 0x32c42c);
  *(undefined4 *)(self + 0x32c50c) = *(undefined4 *)(self + 0x32c430);
  *(undefined4 *)(self + 0x32c510) = *(undefined4 *)(self + 0x32c268);
  *(undefined4 *)(self + 0x32c514) = *(undefined4 *)(self + 0x32c26c);
  *(undefined4 *)(self + 0x32c518) = *(undefined4 *)(self + 0x32c270);
  *(undefined8 *)(self + 0x32c524) = *(undefined8 *)(self + 0x32c27c);
  *(undefined8 *)(self + 0x32c51c) = *(undefined8 *)(self + 0x32c274);
  *(undefined4 *)(self + 0x32c52c) = *(undefined4 *)(self + 0x32c354);
  *(undefined8 *)(self + 0x32c538) = *(undefined8 *)(self + 0x32c28c);
  *(undefined8 *)(self + 0x32c530) = *(undefined8 *)(self + 0x32c284);
  *(undefined8 *)(self + 0x32c548) = *(undefined8 *)(self + 0x32c29c);
  *(undefined8 *)(self + 0x32c540) = *(undefined8 *)(self + 0x32c294);
  *(undefined4 *)(self + 0x32c550) = *(undefined4 *)(self + 0x32c2a4);
  *(undefined4 *)(self + 0x32c554) = *(undefined4 *)(self + 0x32c3a8);
  *(undefined4 *)(self + 0x32c558) = *(undefined4 *)(self + 0x32c3ac);
  *(undefined8 *)(self + 0x32c564) = *(undefined8 *)(self + 0x32c3b8);
  *(undefined8 *)(self + 0x32c55c) = *(undefined8 *)(self + 0x32c3b0);
  *(undefined8 *)(self + 0x32c574) = *(undefined8 *)(self + 0x32c3c8);
  *(undefined8 *)(self + 0x32c56c) = *(undefined8 *)(self + 0x32c3c0);
  *(undefined4 *)(self + 0x32c57c) = *(undefined4 *)(self + 0x32c3d0);
  *(undefined4 *)(self + 0x32c580) = *(undefined4 *)(self + 0x32c3d4);
  *(undefined4 *)(self + 0x32c584) = *(undefined4 *)(self + 0x32c3d8);
  *(undefined8 *)(self + 0x32c590) = *(undefined8 *)(self + 0x32c1d0);
  *(undefined8 *)(self + 0x32c588) = *(undefined8 *)(self + 0x32c1c8);
  *(undefined4 *)(self + 0x32c598) = *(undefined4 *)(self + 0x32c1d8);
  *(undefined4 *)(self + 0x32c59c) = *(undefined4 *)(self + 0x32c1dc);
  *(undefined4 *)(self + 0x32c5a0) = *(undefined4 *)(self + 0x32c1e0);
  *(undefined8 *)(self + 0x32c5ac) = *(undefined8 *)(self + 0x32c310);
  *(undefined8 *)(self + 0x32c5a4) = *(undefined8 *)(self + 0x32c308);
  *(undefined8 *)(self + 0x32c5bc) = *(undefined8 *)(self + 0x32c320);
  *(undefined8 *)(self + 0x32c5b4) = *(undefined8 *)(self + 0x32c318);
  *(undefined4 *)(self + 0x32c5c4) = *(undefined4 *)(self + 0x32c328);
  *(undefined8 *)(self + 0x32c5d0) = *(undefined8 *)(self + 0x32c1ec);
  *(undefined8 *)(self + 0x32c5c8) = *(undefined8 *)(self + 0x32c1e4);
  *(undefined4 *)(self + 0x32c5d8) = *(undefined4 *)(self + 0x32c1f4);
  *(undefined4 *)(self + 0x32c5dc) = *(undefined4 *)(self + 0x32c1f8);
  *(undefined8 *)(self + 0x32c5e8) = *(undefined8 *)(self + 0x32c334);
  *(undefined8 *)(self + 0x32c5e0) = *(undefined8 *)(self + 0x32c32c);
  *(undefined4 *)(self + 0x32c5f0) = *(undefined4 *)(self + 0x32c434);
  *(int *)(self + 0x32c5f4) = *(int *)(self + 0x32c438);
  *(undefined8 *)(self + 0x32c6c8) = *(undefined8 *)(self + 0x32c600);
  *(undefined8 *)(self + 0x32c6c0) = *(undefined8 *)(self + 0x32c5f8);
  *(undefined8 *)(self + 0x32c6d8) = *(undefined8 *)(self + 0x32c610);
  *(undefined8 *)(self + 0x32c6d0) = *(undefined8 *)(self + 0x32c608);
  *(undefined4 *)(self + 0x32c6e0) = *(undefined4 *)(self + 0x32c618);
  *(undefined8 *)(self + 0x32c6ec) = *(undefined8 *)(self + 0x32c624);
  *(undefined8 *)(self + 0x32c6e4) = *(undefined8 *)(self + 0x32c61c);
  *(undefined8 *)(self + 0x32c6fc) = *(undefined8 *)(self + 0x32c634);
  *(undefined8 *)(self + 0x32c6f4) = *(undefined8 *)(self + 0x32c62c);
  *(undefined4 *)(self + 0x32c704) = *(undefined4 *)(self + 0x32c63c);
  *(undefined4 *)(self + 0x32c708) = *(undefined4 *)(self + 0x32c640);
  *(undefined4 *)(self + 0x32c70c) = *(undefined4 *)(self + 0x32c644);
  if ((((iVar3 != 0) && (iVar4 != 0)) && (*(int *)(self + 0x32c170) != 0)) &&
     ((iVar4 == 0x1a05 && ((int)*(undefined8 *)(self + 0x32c174) != 0)))) {
    this = operator_new(0x30);
    kFile__kFile_00479ebc(GH_ARG(this));
    FUN_009d4eac(GH_ARG(local_68), GH_ARG("aos5data.bz"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_78), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_80), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar8 = kFile__wOpenF_0047a5e8(GH_ARG(this), GH_ARG((string *)local_68), GH_ARG((string *)&local_78));
    if ((undefined8 *)(local_78 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_78 + -8);
      do {
        iVar3 = *piVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 < 1) {
        uVar8 = uVar8 & 0xffffffff;
        operator_delete((undefined8 *)(local_78 + -0x18));
      }
    }
    if ((undefined8 *)(local_68[0] + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_68[0] + -8);
      do {
        iVar3 = *piVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 < 1) {
        operator_delete((undefined8 *)(local_68[0] + -0x18));
      }
    }
    if ((uVar8 & 1) != 0) {
      kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(0x1a05));
      kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*piVar1));
      lVar10 = 0;
      do {
        kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*piVar1 + *(int *)(self + lVar10 + 0x32c150)));
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x34c);
      kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*piVar2));
      lVar10 = 0;
      do {
        kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*piVar2 + *(int *)(self + lVar10 + 0x32c4a0)));
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x158);
      lVar10 = 0;
      do {
        kFile__writeInt_0047aa34(GH_ARG(this), GH_ARG(*(int *)(self + 0x32c5f4) + *(int *)(self + lVar10 + 0x32c5f8)));
        lVar10 = lVar10 + 4;
      } while (lVar10 != 400);
    }
    kFile__close_00479f64(GH_ARG(this));
    gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  if (*(gh_long *)(lVar7 + 0x28) == local_58) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
