"""
check_shim_arity.py — rt/ 셈 함수의 인자 개수를 gen/aos5_ext.h(호출부 기준 원형)와 대조한다.

셈이 호출부보다 인자를 «더 많이» 받으면, 넘어오지 않은 인자를 쓰레기 값으로 읽는다 → 오류로 보고.
셈이 «더 적게» 받는 것은 무해(남는 인자를 무시)하므로 참고로만 보고.
"""
import os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    ext = open(os.path.join(ROOT, 'gen', 'aos5_ext.h'), encoding='utf-8').read()
    want = {}
    for m in re.finditer(r'^\S+\s+(\w+)\(([^)]*)\);', ext, re.M):
        ps = m.group(2).strip()
        want[m.group(1)] = 0 if ps in ('', 'void') else len(ps.split(','))
    bad = 0
    for fn in sorted(os.listdir(os.path.join(ROOT, 'rt'))):
        if not fn.endswith(('.c', '.cpp')) or fn == 'rt_autostub.c':
            continue
        src = open(os.path.join(ROOT, 'rt', fn), encoding='utf-8').read()
        src = re.sub(r'/\*.*?\*/', '', src, flags=re.S)   # 주석 안의 «이름(…)» 오인 방지
        src = re.sub(r'//[^\n]*', '', src)
        for m in re.finditer(r'^(?:EXT\s+)?[\w\s\*]+?\b(\w+)\s*\(([^)]*)\)\s*\{', src, re.M):
            name, ps = m.group(1), m.group(2).strip()
            if name not in want:
                continue
            n = 0 if ps in ('', 'void') else len(ps.split(','))
            if n > want[name]:
                bad += 1
                print(f'ERROR {fn}: {name} takes {n}, callers pass {want[name]}')
            elif n < want[name]:
                print(f'note  {fn}: {name} takes {n}, callers pass up to {want[name]}')
    print('mismatch errors:', bad)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
