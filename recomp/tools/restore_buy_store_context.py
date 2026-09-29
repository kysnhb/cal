"""Scope BuyStoreWin presentation without changing game state or call arguments."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / 'recomp/gen/bzStateGame/bzStateGame__drawScene.c'
DECL = 'extern void aos5_buy_store_context(int type);'
CALL = '    bzStateGame__BuyStoreWin_0042c364(GH_ARG(self));'
WRAPPED = '    aos5_buy_store_context(*(int *)(self + 0x1af0));\n' + CALL + '\n    aos5_buy_store_context(0);'

def apply():
    original = SOURCE.read_text(encoding='utf-8')
    text = original
    if text.count(CALL) != 1:
        raise RuntimeError('BuyStoreWin context: expected exactly one unchanged call')
    if WRAPPED not in text:
        if 'aos5_buy_store_context(*(int *)' in text:
            raise RuntimeError('BuyStoreWin context: ambiguous partial hook')
        text = text.replace(CALL, WRAPPED, 1)
    if DECL not in text:
        text = text.replace('#include "aos5_protos.h"', '#include "aos5_protos.h"\n' + DECL, 1)
    if text != original:
        SOURCE.write_text(text, encoding='utf-8')
    print('PASS: BuyStoreWin display context; original call/arguments unchanged')

if __name__ == '__main__':
    apply()
