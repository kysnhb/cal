"""Restore presentation scopes without changing original LPimg draw arguments.
The historical filename remains for fixdecomp.py compatibility.
"""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / 'recomp/gen/bzStateGame/bzStateGame__LPimg_0041db74.c'
BEGIN = '        aos5_stickrig_begin(param_2, param_5, (int)(lVar36 / 7));'
END = '        aos5_stickrig_end();'
DECL = 'extern void aos5_stickrig_begin(int actor, int frame, int record);\nextern void aos5_stickrig_end(void);'
def apply():
    text = SOURCE.read_text(encoding='utf-8')
    before = text
    text = text.replace('extern void aos5_human_record(int frame, int record);\n', '')
    text = text.replace('          aos5_human_record(param_5, (int)(lVar36 / 7));\n', '')
    text = text.replace('          aos5_human_record(-1, -1);\n', '')
    start = '      do {\n        iVar21 = *(int *)(self + lVar32 * 0x288 + 0x8db14);'
    stop = 'switchD_0041e3e8_caseD_1:\n        lVar36 = lVar36 + 7;'
    if BEGIN not in text:
        if text.count(start) != 1 or text.count(stop) != 1:
            raise RuntimeError('Expected one original record loop')
        text = text.replace(start, '      do {\n' + BEGIN + '\n        iVar21 = *(int *)(self + lVar32 * 0x288 + 0x8db14);')
        text = text.replace(stop, 'switchD_0041e3e8_caseD_1:\n' + END + '\n        lVar36 = lVar36 + 7;')
    if DECL not in text:
        text = text.replace('#include "aos5_protos.h"', '#include "aos5_protos.h"\n' + DECL, 1)
    if text.count(BEGIN) != 1 or text.count(END) != 1:
        raise RuntimeError('Unbalanced or duplicate presentation scopes')
    if text != before: SOURCE.write_text(text,encoding='utf-8',newline='\n')
    print('PASS: per-record art scope; all original draw calls/arguments unchanged')
if __name__ == '__main__': apply()
