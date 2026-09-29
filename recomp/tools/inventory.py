"""외부 호출 인벤토리: 재컴파일 대상 코드가 부르는 함수 중 대상 밖에 있는 것."""
import os, re, collections, sys
ROOT = r'D:/newgaems/aos5_restore/re/decomp_range'
TARGET_NS = {'bzStateGame', 'AppDelegate', 'dataLoad', 'PurchaseStruct'}
defined = set()
files = []
for ns in os.listdir(ROOT):
    d = os.path.join(ROOT, ns)
    if not os.path.isdir(d): continue
    for f in os.listdir(d):
        src = open(os.path.join(d, f), encoding='utf-8', errors='replace').read()
        m = re.search(r'^// (\S+) @', src, re.M)
        full = m.group(1) if m else f
        if ns in TARGET_NS:
            defined.add(full)
            files.append((full, src))
calls = collections.Counter(); where = collections.defaultdict(set)
call_re = re.compile(r'((?:[A-Za-z_][\w<>,\* ]*?::)*[A-Za-z_]\w*)\s*\(')
KW = {'if','while','for','switch','return','sizeof','do','else','case'}
for full, src in files:
    body = src.split('{', 1)[1] if '{' in src else src
    for m in call_re.finditer(body):
        n = m.group(1).strip()
        base = n.split('::')[-1]
        if base in KW or n in defined: continue
        if re.match(r'^(undefined\d?|u?int|u?long|char|bool|float|double|short|byte|code|void)$', base): continue
        if base[0].isupper() and '::' not in n and not n.startswith(('FUN_', 'CONCAT', 'SUB', 'ZEXT', 'SEXT')): 
            # 캐스트 모양 제외 안 하고 그대로 셈
            pass
        calls[n] += 1; where[n].add(full.split('::')[-1])
out = open(r'D:/newgaems/aos5_restore/recomp/tools/external_calls.tsv', 'w', encoding='utf-8')
out.write('count\tname\tused_in\n')
for n, c in calls.most_common():
    out.write(f"{c}\t{n}\t{','.join(sorted(where[n])[:6])}\n")
print('target functions', len(files), 'external names', len(calls))
grp = collections.Counter()
for n, c in calls.items():
    grp[n.split('::')[0] if '::' in n else ('FUN_' if n.startswith('FUN_') else n)] += c
for k, v in grp.most_common(40): print(v, k)
