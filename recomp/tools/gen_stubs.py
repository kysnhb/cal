"""
gen_stubs.py — rt/ 에 아직 구현되지 않은 외부 함수를 자리표시 함수로 생성한다.

자리표시 함수는 처음 불릴 때 이름을 로그로 남기고 0 을 돌려준다.
→ 복원판을 돌리면서 «실제로 쓰이는데 비어 있는» 기능이 로그로 드러난다.
출력: rt/rt_autostub.c
"""
import os, re, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    rows = list(csv.DictReader(open(os.path.join(ROOT, 'gen', '_externs.tsv'), encoding='utf-8'), delimiter='\t'))
    defined = set()
    for fn in os.listdir(os.path.join(ROOT, 'rt')):
        if fn == 'rt_autostub.c' or not fn.endswith(('.c', '.cpp')):
            continue
        src = open(os.path.join(ROOT, 'rt', fn), encoding='utf-8').read()
        src = re.sub(r'/\*.*?\*/', '', src, flags=re.S)   # 주석 안의 «이름(…)» 오인 방지
        src = re.sub(r'//[^\n]*', '', src)
        defined |= set(re.findall(r'^(?:EXT\s+)?[\w\s\*]+?\b(\w+)\s*\([^;]*?\)\s*\{', src, re.M))
    out = ['/* 자동 생성: gen_stubs.py — 미구현 외부 함수 자리표시 (첫 호출 시 로그) */',
           '#include "gh.h"', 'void aos5_stub_hit(const char *name);', '']
    n = 0
    for r in rows:
        name, k = r['name'], int(r['arity'])
        if name in defined:
            continue
        params = ', '.join(f'uint64_t a{i}' for i in range(k)) or 'void'
        out.append(f'gh_long {name}({params}) {{ static int hit; if (!hit++) aos5_stub_hit("{name}"); return 0; }}')
        n += 1
    open(os.path.join(ROOT, 'rt', 'rt_autostub.c'), 'w', encoding='utf-8').write('\n'.join(out) + '\n')
    print(f'stubs: {n} (implemented: {len(rows) - n})')


if __name__ == '__main__':
    main()
