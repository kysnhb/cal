"""Recover only global COW string construction constants from the original
ARM64 game's .init_array routine at 0x295cf0 (Ghidra +0x100000).
The original .bss image contains zero pointers until this routine runs.
Input: GNU AArch64 objdump disassembly; output: reviewed address pairs.
"""
import re,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
text=(ROOT.parent/'qa/game_globals_arm64.txt').read_text(encoding='utf-8-sig')
regs={}; pairs=[]
for line in text.splitlines():
    m=re.match(r'\s*([a-f0-9]+):\s+[a-f0-9]+\s+(\w+)\s+(.*)',line)
    if not m: continue
    at,op,args=m.groups()
    if op=='adrp':
        q=re.match(r'(x\d+),\s*([a-f0-9]+)',args)
        if q: regs[q[1]]=int(q[2],16)
    elif op in ('add','sub'):
        q=re.match(r'(x\d+),\s*(x\d+),\s*#0x([a-f0-9]+)',args)
        if q:
            regs[q[1]]=None if regs.get(q[2]) is None else regs[q[2]]+(1 if op=='add' else -1)*int(q[3],16)
    elif op=='mov':
        q=re.match(r'(x\d+),\s*(x\d+)',args)
        if q: regs[q[1]]=regs.get(q[2])
    elif op=='bl':
        if args.startswith('8d4eac '):
            out,src=regs.get('x0'),regs.get('x1')
            if out and src and 0xc23000<=out<0xc24000 and 0x947e00<=src<0xba0000:
                pairs.append({'call':hex(int(at,16)+0x100000),'out':out+0x100000,'source':src+0x100000})
        for i in range(19): regs['x'+str(i)]=None
    elif op in ('ldr','ldur','ldp'):
        for r in re.findall(r'\bx\d+\b',args.split('[')[0]): regs[r]=None
assert len(pairs)>=23,pairs
header='/* Recovered original game COW static strings; see game_globals_arm64.txt. */\n'
header+='static const uint32_t kGameGlobalStrings[][2] = {\n'
header+=''.join(f'    {{0x{p["out"]:x},0x{p["source"]:x}}}, /* {p["call"]} */\n' for p in pairs)
header+='};\n'
(ROOT/'include/aos5_global_strings.h').write_text(header,encoding='utf-8')
(ROOT.parent/'qa/game_global_strings.json').write_text(json.dumps(pairs,indent=2),encoding='utf-8')
print('Recovered',len(pairs),'original game static strings.')
