"""
pack_image.py — 원작 .so 의 데이터 영역을 런타임용 이미지로 묶는다.

출력 (AOS5/Content/aos5core/)
- image.bin : [IMG_BASE, IMG_END) 구간 바이트 (초기화 데이터 + .bss 0)
- reloc.bin : 이미지 안 포인터 위치(u32 원작주소) 목록 — 로드 시 원작주소→호스트주소로 바꾼다
- 헤더 recomp/include/aos5_image_layout.h : IMG_BASE/IMG_END 상수
"""
import os, struct, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMGDIR = os.path.join(os.path.dirname(ROOT), 're', 'image')
OUTDIR = os.path.join(os.path.dirname(ROOT), 'AOS5', 'Content', 'aos5core')

IMG_BASE = 0xa00000      # .rodata(0xa47e00) 아래는 코드·동적링크 표라 게임 로직이 참조하지 않는다
IMG_END = 0xd42000       # .bss 끝 + EXTERNAL 까지


def main():
    os.makedirs(OUTDIR, exist_ok=True)
    img = bytearray(IMG_END - IMG_BASE)
    rows = list(csv.DictReader(open(os.path.join(IMGDIR, 'blocks.tsv'), encoding='utf-8'), delimiter='\t'))
    for r in rows:
        start = int(r['start'], 16)
        size = int(r['size'])
        if r['init'] != 'true' or 'x' in r['perm']:
            continue
        if start + size <= IMG_BASE or start >= IMG_END:
            continue
        data = open(os.path.join(IMGDIR, f'blk_{r["start"]}.bin'), 'rb').read()
        lo = max(start, IMG_BASE)
        img[lo - IMG_BASE: start + size - IMG_BASE] = data[lo - start:]
    # 재배치: 이미지 안에 있고 값이 이미지 범위를 가리키는 8바이트 포인터만 기록
    rel = []
    for line in open(os.path.join(IMGDIR, 'relocs.tsv'), encoding='utf-8'):
        a = int(line.split('\t', 1)[0], 16)
        if not (IMG_BASE <= a and a + 8 <= IMG_END):
            continue
        v = struct.unpack_from('<Q', img, a - IMG_BASE)[0]
        if IMG_BASE <= v < IMG_END:
            rel.append(a)
    open(os.path.join(OUTDIR, 'image.bin'), 'wb').write(img)
    open(os.path.join(OUTDIR, 'reloc.bin'), 'wb').write(struct.pack(f'<{len(rel)}I', *rel))
    with open(os.path.join(ROOT, 'include', 'aos5_image_layout.h'), 'w', encoding='utf-8') as w:
        w.write('/* 자동 생성: pack_image.py */\n#pragma once\n')
        w.write(f'#define AOS5_IMG_BASE 0x{IMG_BASE:x}ULL\n#define AOS5_IMG_END 0x{IMG_END:x}ULL\n')
    print(f'image {len(img)} bytes, relocs {len(rel)}')


if __name__ == '__main__':
    main()
