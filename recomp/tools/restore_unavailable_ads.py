"""Reapply four reviewed unavailable-ad exits after decompilation.
Does not regenerate any source. Refuses changed or ambiguous call sites.
"""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
PATCHES = [
    (
        'recomp/gen/bzStateGame/bzStateGame__AdMob.c',
        """    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x828)));
    if ((uVar2 & 1) == 0) {
      return 0;
    }""",
        """    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x828)));
    if ((uVar2 & 1) == 0) {
      // Complete an unavailable request through the registered load failure handler.
      RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
      return 0;
    }""",
    ),
    (
        'recomp/gen/bzStateGame/bzStateGame__AdMob.c',
        """    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x838)));
    if ((uVar2 & 1) == 0) {
      return 0;
    }""",
        """    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x838)));
    if ((uVar2 & 1) == 0) {
      // Complete an unavailable request through the registered load failure handler.
      RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x838)));
      return 0;
    }""",
    ),
    (
        'recomp/gen/bzStateGame/bzStateGame__handleEvent.c',
        """          if ((uVar15 & 1) != 0) {
            RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x828)));
          }""",
        """          if ((uVar15 & 1) != 0) {
            RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x828)));
          } else {
            // The no-SDK adapter reports failure and releases the input lock.
            RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
          }""",
    ),
    (
        'recomp/gen/bzStateGame/bzStateGame__handleEvent.c',
        """        if ((uVar15 & 1) != 0) {
          RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x838)));
        }""",
        """        if ((uVar15 & 1) != 0) {
          RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + 0x838)));
        } else {
          // The no-SDK adapter reports failure and releases the input lock.
          RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x838)));
        }""",
    ),
]

def apply():
    pending = {}
    changed = 0
    for relative, old, new in PATCHES:
        p = ROOT / relative
        source = pending.get(p, p.read_text(encoding="utf-8"))
        if new in source:
            assert source.count(new) == 1, relative
        else:
            assert source.count(old) == 1, (relative, "ad patch site changed")
            source = source.replace(old, new, 1)
            changed += 1
        pending[p] = source
    for p, source in pending.items():
        if p.read_text(encoding="utf-8") != source:
            p.write_text(source, encoding="utf-8")
    print(f"Unavailable-ad exits restored: {changed} (four reviewed sites)")

if __name__ == "__main__":
    apply()
