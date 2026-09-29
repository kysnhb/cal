"""Restore the two original coupon keyboard string-literal addresses.
The original image has b'H\\0' at Ghidra address 0xaf7615. Unlike DAT_
symbols, this numeric pointer was not relocated by fixdecomp.py.
Only the two reviewed string-constructor arguments are corrected.
"""
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
FILES=['bzStateGame__CouponResource_003ae1f4.c','bzStateGame__CouponImage_003af994.c']
def apply():
    image=(ROOT.parent/'AOS5/Content/aos5core/image.bin').read_bytes()
    assert image[0xaf7615-0xa00000:0xaf7615-0xa00000+2]==b'H\0'
    count=0
    for name in FILES:
        p=ROOT/'gen/bzStateGame'/name
        src=p.read_text(encoding='utf-8')
        assert src.count('GH_ARG(0xaf7615)')+src.count('GH_ARG(IMG(0xaf7615))')==1,(name,'unexpected site count')
        count+=src.count('GH_ARG(0xaf7615)')
        p.write_text(src.replace('GH_ARG(0xaf7615)','GH_ARG(IMG(0xaf7615))'),encoding='utf-8')
    print('Coupon literal pointers restored:',count,'(two reviewed sites)')
if __name__=='__main__':apply()
