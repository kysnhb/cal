"""Verify the delivered snapshot using only Python's standard library."""
from pathlib import Path
import argparse, hashlib, json, struct

root=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--report',type=Path)
parser.add_argument('--structure-only', action='store_true', help='Allow intentional content/source changes while checking paths, required inputs and PNG geometry.')
args=parser.parse_args()
errors=[]
content=root/'AOS5/Content_gothic'
rows=json.loads((root/'docs/verification/content_manifest.json').read_text(encoding='utf-8'))
expected={r['path'] for r in rows}
actual={p.relative_to(content).as_posix() for p in content.rglob('*') if p.is_file()}
if actual!=expected:errors.append({'missing':sorted(expected-actual),'extra':sorted(actual-expected)})
png_count=0
for row in rows:
    p=content/row['path']
    if not p.is_file():continue
    data=p.read_bytes()
    if not args.structure_only and hashlib.sha256(data).hexdigest()!=row['sha256']:errors.append('Content changed: '+row['path'])
    if p.suffix.lower()=='.png':
        png_count+=1
        if data[:8]!=b'\x89PNG\r\n\x1a\n':errors.append('PNG signature: '+row['path']);continue
        spec=struct.unpack('>IIBB',data[16:26])
        if spec!=(row['width'],row['height'],row.get('bit_depth',8),row.get('color_type',6)):errors.append('PNG header differs from manifest: '+row['path'])
        if spec[2]!=8 or spec[3] not in (4,6):errors.append('Unsupported PNG type (expected 8-bit LA or RGBA): '+row['path'])
        if max(spec[:2])>2048:errors.append('PNG exceeds 2048: '+row['path'])
snapshot=json.loads((root/'docs/verification/source_snapshot.json').read_text(encoding='utf-8'))
for row in snapshot:
    p=root/row['path']
    if not p.is_file():errors.append('Source file missing: '+row['path'])
    elif not args.structure_only and hashlib.sha256(p.read_bytes()).hexdigest()!=row['sha256']:errors.append('Source snapshot changed: '+row['path'])
for p in root.rglob('*'):
    rel=p.relative_to(root)
    if set(rel.parts)&{'.git','build','out','dist','.deps','.cxx','.gradle','__pycache__'}:continue
    if p.is_file() and p.stat().st_size>=100*1024**2:errors.append('Oversize Git file: '+rel.as_posix())
expected_png_count=sum(row['path'].lower().endswith('.png') for row in rows)
if png_count!=expected_png_count:errors.append(f'PNG count: {png_count}, expected {expected_png_count}')
result={'passed':not errors,'content_files':len(rows),'png_count':png_count,'source_snapshot_files':len(snapshot),'errors':errors,'scope':('paths, PNG headers, required source and runtime data; hashes intentionally skipped' if args.structure_only else 'snapshot hashes, PNG headers, required source and runtime data; not gameplay QA')}
if args.report:
    args.report.parent.mkdir(parents=True,exist_ok=True)
    args.report.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print(json.dumps(result,ensure_ascii=False,indent=2))
raise SystemExit(0 if not errors else 1)
