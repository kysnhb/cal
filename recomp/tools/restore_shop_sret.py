"""Apply reviewed ARM64 hidden string return fixes after regeneration."""
from pathlib import Path
import re, shutil

ROOT = Path(__file__).resolve().parents[1]
GEN = ROOT / 'gen'

def apply():
    targets = {
        'bzStateGame__BuyStoreWin_0042c364.c': {
            'getCurCode': ['local_128','local_148','local_158','local_170',
                          'local_c8','local_e8','local_f8','local_110',
                          'local_240','local_260','local_270','local_288','local_a0'],
            'convertMoneyStr': ['local_140','local_e0','local_258'],
        },
        'bzStateGame__drawScene.c': {
            'getCurCode': ['uStack_118','lStack_7d0','lStack_7f0','lStack_800','lStack_818'],
            'convertMoneyStr': ['lStack_7e8'],
        },
    }
    for filename, functions in targets.items():
        path = GEN / 'bzStateGame' / filename
        text = path.read_text(encoding='utf-8')
        for base, destinations in functions.items():
            name = 'bzStateGame__' + base + ('_0039fa6c' if base == 'getCurCode' else '_003fcd68')
            lines = text.splitlines(keepends=True)
            matches = [i for i,line in enumerate(lines) if name+'(' in line]
            assert len(matches) == len(destinations), (filename, base, len(matches))
            for index, destination in zip(matches, destinations):
                prefix = f'{name}(GH_ARG((undefined *)&{destination}), '
                if prefix not in lines[index]:
                    lines[index] = lines[index].replace(name+'(', prefix, 1)
            text = ''.join(lines)
        path.write_text(text,encoding='utf-8')
    header = GEN / 'aos5_protos.h'
    text = header.read_text(encoding='utf-8')
    for name, arity in [('getCurCode_0039fa6c',3),('convertMoneyStr_003fcd68',4)]:
        text=re.sub(r'gh_long bzStateGame__'+name+r'\([^;]+\);',
                    f'gh_long bzStateGame__{name}('+', '.join(['uint64_t']*arity)+');',text)
        shutil.copyfile(ROOT/'overrides'/('bzStateGame__'+name+'.c'),
                        GEN/'bzStateGame'/('bzStateGame__'+name+'.c'))
    header.write_text(text,encoding='utf-8')

if __name__ == '__main__':
    apply()
    print('Restored 18 currency and 4 formatted-price string return buffers.')
