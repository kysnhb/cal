"""Validate the shipped static face, its license and its required Unicode glyphs."""
from pathlib import Path
import hashlib
import json
import struct

ROOT = Path(__file__).resolve().parents[1]
FONT = ROOT / "AOS5/Content_gothic/fonts/Pretendard-Regular.otf"
LICENSE = FONT.with_name("Pretendard-LICENSE.txt")
raw = FONT.read_bytes()
assert hashlib.sha256(raw).hexdigest() == "3ffbacde6ab8411f1d2db54bb9b1f0b3ee2a738932033722cf0388c06aed1c93"
assert hashlib.sha256(LICENSE.read_bytes()).hexdigest() == "b04538c9abec39a3db75108cf0af0fd9c77032fe8aa2cf38345b4d250e98e38e"
assert raw[:4] == b"OTTO"
u16 = lambda p: struct.unpack_from(">H", raw, p)[0]
u32 = lambda p: struct.unpack_from(">I", raw, p)[0]
tables = {}
for i in range(u16(4)):
    p = 12 + i * 16
    tables[raw[p:p+4]] = (u32(p+8), u32(p+12))
assert b"CFF " in tables and b"fvar" not in tables, "Must ship the static Regular OTF"
cmap = tables[b"cmap"][0]
subtables = [cmap + u32(cmap + 4 + i*8 + 4) for i in range(u16(cmap+2))]
p = next(p for p in subtables if u16(p) == 4)
n = u16(p+6)//2
ends, starts, deltas, offsets = p+14, p+16+2*n, p+16+4*n, p+16+6*n

def glyph(cp):
    for i in range(n):
        if u16(starts+2*i) <= cp <= u16(ends+2*i):
            delta, offset = u16(deltas+2*i), u16(offsets+2*i)
            if not offset:
                return (cp+delta) & 65535
            value = u16(offsets+2*i+offset+2*(cp-u16(starts+2*i)))
            return (value+delta) & 65535 if value else 0
    return 0

required = list(range(0x20, 0x7f)) + list(range(0xac00, 0xd7a4))
missing = [hex(cp) for cp in required if not glyph(cp)]
assert not missing, missing
result = {"font_bytes": len(raw), "license_bytes": LICENSE.stat().st_size,
          "static_regular_otf": True, "ascii_and_hangul_glyphs": len(required), "missing": missing}
try:
    from PIL import ImageFont
except ImportError:
    result["freetype_raster"] = "not run: Pillow unavailable; cmap validation passed"
else:
    metrics = []
    for size, text in [(16,"LEVEL 100"),(18,"HP: 1000"),(16,"탄창: 350 / 350"),(28,"쿠폰 코드를 등록해주세요.")]:
        font = ImageFont.truetype(str(FONT), size)
        assert font.getname() == ("Pretendard", "Regular")
        assert font.getmask(text).getbbox(), text
        metrics.append({"size":size,"text":text,"ink_bbox":font.getbbox(text),"advance":font.getlength(text)})
    result["freetype_raster"] = "passed via Pillow; full Axmol runtime validation belongs to integration QA"
    result["sample_metrics"] = metrics
print(json.dumps(result, ensure_ascii=False, indent=2))
