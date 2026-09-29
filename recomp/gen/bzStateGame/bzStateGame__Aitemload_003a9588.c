/* bzStateGame::Aitemload_003a9588 @ 0x003a9588 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__Aitemload_003a9588(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  kFile *this;
  ulong uVar7;
  undefined *self_00;
  int *piVar8;
  gh_long lVar9;
  uint64_t gh_frame64[21] = {0};   /* 원작 스택 프레임 (SP-0x90 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x90;
#define local_90 (*(gh_long *)(gh_fb - 0x90))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
#define auStack_80 (*(undefined1 (*)[8])(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
#define auStack_70 (*(undefined1 (*)[8])(gh_fb - 0x70))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar3 = tpidr_el0;
  local_58 = *(gh_long *)(lVar3 + 0x28);
  this = operator_new(0x30);
  kFile__kFile_00479ebc(GH_ARG(this));
  FUN_009d4eac(GH_ARG(&local_68), GH_ARG("aos5data.bz"), GH_ARG(auStack_70), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_78), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_80), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar7 = kFile__rOpenF_0047a2a0(GH_ARG(this), GH_ARG((string *)&local_68), GH_ARG((string *)&local_78));
  if ((undefined8 *)(local_78 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_78 + -8);
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 < 1) {
      operator_delete((undefined8 *)(local_78 + -0x18));
    }
  }
  if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_68 + -8);
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 < 1) {
      operator_delete((undefined8 *)(local_68 + -0x18));
    }
  }
  if ((uVar7 & 1) == 0) {
    bzStateGame__MenutSet_003ed770(GH_ARG(self), GH_ARG(9), GH_ARG(0x1a04), GH_ARG(0.0), GH_ARG(0.0));
    FUN_009d4eac(GH_ARG(&local_88), GH_ARG("af_first_open"), GH_ARG(&local_78), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    self_00 = (undefined *)FUN_009d4eac(GH_ARG(&local_90), GH_ARG("1"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(self_00), GH_ARG(1), GH_ARG((undefined *)&local_88), GH_ARG((undefined *)&local_90));
    if ((undefined8 *)(local_90 + -0x18) != &DAT_00d40300) {
      piVar8 = (int *)(local_90 + -8);
      do {
        iVar6 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 < 1) {
        operator_delete((undefined8 *)(local_90 + -0x18));
      }
    }
    if ((undefined8 *)(local_88 + -0x18) != &DAT_00d40300) {
      piVar8 = (int *)(local_88 + -8);
      do {
        iVar6 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 < 1) {
        operator_delete((undefined8 *)(local_88 + -0x18));
      }
    }
  }
  else {
    uVar4 = kFile__getSize_0047a88c(GH_ARG(this));
    uVar5 = kFile__readInt_0047aacc(GH_ARG(this));
    *(undefined4 *)(self + 0x32c148) = uVar5;
    iVar6 = kFile__readInt_0047aacc(GH_ARG(this));
    *(int *)(self + 0x32c14c) = iVar6;
    iVar6 = kFile__readInt_0047aacc(GH_ARG(this));
    lVar9 = 0;
    do {
      *(int *)(self + lVar9 + 0x32c150) = iVar6 - *(int *)(self + 0x32c14c);
      iVar6 = kFile__readInt_0047aacc(GH_ARG(this));
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x34c);
    lVar9 = 0;
    *(int *)(self + 0x32c49c) = iVar6;
    do {
      iVar6 = kFile__readInt_0047aacc(GH_ARG(this));
      *(int *)(self + lVar9 + 0x32c4a0) = iVar6 - *(int *)(self + 0x32c49c);
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x158);
    if (uVar4 < 0x4b1) {
      memset(self + 0x32c5f8,0,400);
      *(undefined8 *)(self + 0x32c650) = 0x100000001;
      *(undefined8 *)(self + 0x32c648) = 0x100000001;
      *(undefined8 *)(self + 0x32c660) = 0x100000001;
      *(undefined8 *)(self + 0x32c658) = 0x100000001;
      *(undefined8 *)(self + 0x32c668) = 0x100000001;
      lVar9 = 0;
      do {
        *(int *)(self + lVar9 + 0x32c670) =
             ((*(int *)(self + 0x130d4) +
              (int)(((float)*(int *)(self + 0x130d4) / 10.0) *
                   (float)*(int *)(self + lVar9 + 0x130dc))) * 0x82) / 100;
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x28);
    }
    else {
      lVar9 = 0;
      do {
        iVar6 = kFile__readInt_0047aacc(GH_ARG(this));
        *(int *)(self + lVar9 + 0x32c5f8) = iVar6 - *(int *)(self + 0x32c5f4);
        lVar9 = lVar9 + 4;
      } while (lVar9 != 400);
    }
    if (*(int *)(self + 0x32c174) == 0) {
      *(int *)(self + 0x32c174) = 0x1e;
    }
  }
  *(undefined4 *)(self + 0x32c158) = 0;
  kFile__close_00479f64(GH_ARG(this));
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (*(gh_long *)(lVar3 + 0x28) == local_58) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
