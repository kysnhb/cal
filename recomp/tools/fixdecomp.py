"""
fixdecomp.py — Ghidra 역변환 C(decomp2/) → 컴파일 가능한 C(recomp/gen/) 변환기.

원칙
- 원작 로직은 한 글자도 «의미상» 바꾸지 않는다. 바꾸는 것은 C 문법·타입 표기뿐.
- 게임 상태는 원작과 같은 평면 메모리(bzStateGame 객체 0x32c9d8 바이트)를 그대로 쓴다.
- 전역(DAT_/PTR_ 등)은 원작 주소 그대로 메모리 이미지(IMG)에 매핑한다.
- 원작 엔진 래퍼(kScene/kSprite/kFont/...)와 cocos2d 호출은 여기서 만들지 않고
  recomp/rt/ 의 C++ 셈(Axmol 구현)이 같은 이름으로 제공한다.

출력
- gen/<ns>/<func>.c      : 함수별 C 파일 (함수 자신이 참조하는 전역 매크로 포함)
- gen/aos5_protos.h      : 재컴파일 대상 전 함수 원형
- gen/aos5_types.h       : 역변환 코드에 등장하는 불투명 타입 typedef
- gen/_externs.tsv       : 대상 밖(셈이 구현해야 할) 호출 이름 목록
"""
import os, re, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.environ.get('AOS5_DECOMP') or os.path.join(os.path.dirname(ROOT), 're', 'decomp2')
OUT = os.path.join(ROOT, 'gen')

# 재컴파일 제외 = 엔진 래퍼·광고/결제 SDK 연동층. 이들은 rt/ 셈(Axmol)이 같은 이름으로 구현한다.
# 그 밖(게임 로직 bzStateGame, 데이터 로더, 게임 코드 안의 std 템플릿 인스턴스 등)은 전부 재컴파일.
REPLACE_NS = re.compile(r'^(kScene|kSprite|kFont|kFile|kDraw|kDate|kPopup|SoundClip|AppDelegate|Node|Sprite|'
                        r'Label|Layer|JniHelper|_JNIEnv|\w*Interface|\w*Controller|\w*Callback|GoogleGDPR\w*|'
                        r'uniform_int_distribution_int_|StringUtils|_Function_handler_void_std__vector_cocos2d__Touch|_Function_handler_void_cocos2d__Ref|'
                        r'_Function_handler_void_cocos2d__EventKeyboard|_Base_manager_std___Bind_std___Mem_fn_void_kScene|'
                        r'_Base_manager_std___Bind_std___Mem_fn_void_kPopup|_Rb_tree_int_std__pair_int_const_kSprite)')
# _global 중 제외: 시스템 시각 (rt 에서 구현)
GLOBAL_SKIP = re.compile(r'^(getSysDate|FUN_009d1a48)$')


def is_target(ns, base):
    if ns == '_global':
        return not GLOBAL_SKIP.match(base)
    return not REPLACE_NS.match(ns)


BUILTIN_TYPES = set('''void char short int long float double signed unsigned bool _Bool
gh_long gh_ulong ulong uint ushort uchar byte sbyte undefined undefined1 undefined2 undefined3
undefined4 undefined5 undefined6 undefined7 undefined8 undefined16 ulonglong longlong longdouble
float4 sbyte1 int3 uint3 word dword qword code size_t int8_t int16_t int32_t int64_t uint8_t
uint16_t uint32_t uint64_t wchar_t wchar16 wchar32 char16_t char32_t'''.split())

C_KEYWORDS = set('''if else while for do switch case default return break continue goto sizeof
struct union enum typedef static extern const volatile register auto inline'''.split())


def sanitize_name(s):
    s = s.replace('::', '__')
    s = re.sub(r'[^A-Za-z0-9_]', '_', s)
    return s


# A::B<...>::C  또는 A::operator() 같은 한정 이름
QUAL_RE = re.compile(
    r'(?<![\w:])((?:~?[A-Za-z_]\w*(?:<(?:[^<>()]|<[^<>()]*>)*>)?::)+'
    r'(?:operator\s*\(\)|operator\s*[^\s(]+|~?[A-Za-z_]\w*(?:<(?:[^<>()]|<[^<>()]*>)*>)?))')
TEMPLATE_TYPE_RE = re.compile(r'\b([A-Za-z_]\w*)<((?:[^<>()]|<[^<>()]*>)*)>')


def flatten_templates(text):
    """name<...> (공백 없이 붙은 '<' = 템플릿) 을 균형 괄호로 찾아 식별자로 평탄화."""
    out, i = [], 0
    pat = re.compile(r'[A-Za-z_]\w*<')
    while True:
        m = pat.search(text, i)
        if not m:
            out.append(text[i:]); break
        j, depth = m.end(), 1
        while j < len(text) and depth:
            c = text[j]
            if c == '<': depth += 1
            elif c == '>': depth -= 1
            elif c in ';{}\n': break
            j += 1
        if depth:
            out.append(text[i:m.end()]); i = m.end(); continue
        out.append(text[i:m.start()])
        out.append(sanitize_name(text[m.start():j]))
        i = j
    return ''.join(out)


def qualify(text):
    text = flatten_templates(text)
    text = QUAL_RE.sub(lambda m: sanitize_name(m.group(1)), text)
    # 한정 없이 남은 템플릿 타입: uniform_int_distribution<int> → uniform_int_distribution_int_
    for _ in range(3):
        text = TEMPLATE_TYPE_RE.sub(lambda m: sanitize_name(m.group(0)), text)
    return text


ELF_SYMS = None


def elf_sym_addr(name):
    """Ghidra 가 상수 주소를 ELF 표 기호(__DT_RELA 등)로 잘못 붙인 경우의 원래 주소."""
    global ELF_SYMS
    if ELF_SYMS is None:
        ELF_SYMS = {}
        p = os.path.join(os.path.dirname(ROOT), 're', 'image', 'symbols.tsv')
        for line in open(p, encoding='utf-8'):
            a, _t, n = line.rstrip('\n').split('\t', 2)
            if n.startswith(('__DT_', '_elf')) and n not in ELF_SYMS:
                ELF_SYMS[n] = int(a, 16)
    return ELF_SYMS.get(name)


# ELF 구조체 필드: (구조체 크기, 필드 오프셋)
ELF_STRUCT = {
    'r_offset': (24, 0), 'r_info': (24, 8), 'r_addend': (24, 16),
    'st_name': (24, 0), 'st_info': (24, 4), 'st_other': (24, 5), 'st_shndx': (24, 6),
    'st_value': (24, 8), 'st_size': (24, 16),
    'd_tag': (16, 0), 'd_val': (16, 8), 'd_ptr': (16, 8),
}


THUNKS = None


def thunk_map():
    """PLT 스텁 이름(한정/비한정) → 실제 대상 C 이름."""
    global THUNKS
    if THUNKS is None:
        THUNKS = {}
        p = os.path.join(os.path.dirname(ROOT), 're', 'image', 'thunks.tsv')
        for line in open(p, encoding='utf-8'):
            parts = line.rstrip(chr(10)).split(chr(9))
            if len(parts) < 3 or not parts[2]:
                continue
            src, dst = sanitize_name(parts[0]), sanitize_name(parts[2])
            if len(parts) > 4 and parts[4] == 'EXTERNAL':
                # 외부 라이브러리(libc 등) → 주소 없는 원래 이름
                dst = sanitize_name(parts[2].split('::')[-1])
            # 원작에 정적 링크된 libstdc++ new/delete → 런타임 공용 이름
            dst = re.sub(r'^(operator_new|operator_delete)(_[0-9a-f]{8})?$', r'\1', dst)
            THUNKS[src] = dst
            THUNKS.setdefault(sanitize_name(parts[0].split('::')[-1]), dst)
    return THUNKS


LABELS = None


def label_addr():
    """symbols.tsv 의 데이터 기호(Label) → 주소 (sanitize 이름 기준)"""
    global LABELS
    if LABELS is None:
        LABELS = {}
        p = os.path.join(os.path.dirname(ROOT), 're', 'image', 'symbols.tsv')
        for line in open(p, encoding='utf-8'):
            a, t, n = line.rstrip(chr(10)).split(chr(9), 2)
            if t != 'Label':
                continue
            try:
                v = int(a, 16)
            except ValueError:
                continue
            if 0xa00000 <= v < 0xd42000:
                LABELS.setdefault(sanitize_name(n), v)
    return LABELS


def apply_thunks(body):
    tm = thunk_map()
    return re.sub(r'(?<![\w])([A-Za-z_]\w*_00[0-9a-f]{6})(?=\s*\()', lambda m: tm.get(m.group(1), m.group(1)), body)


def fix_stack_refs(body):
    """&stack0xFFFF...F0 + off → 같은 스택 위치의 이름 있는 지역 변수 주소.
    Ghidra 는 지역 변수를 «진입 SP 기준 음수 오프셋»으로 local_88 처럼 이름 붙인다.
    주소 계산으로만 쓰인 지역은 stack0x 기호로 남으므로, 오프셋을 더해 같은 이름을 찾는다."""
    decl = {}
    for m in re.finditer(r'^\s+[\w\s\*]+?\b([A-Za-z]\w*?_([0-9a-f]+))\s*(?:\[[^\]]*\])?\s*;', body, re.M):
        decl.setdefault(int(m.group(2), 16), m.group(1))

    def rep(m):
        base = int(m.group(2), 16)
        if base >= 1 << 63:
            base -= 1 << 64
        off = int(m.group(4).replace(' ', ''), 0) if m.group(4) else 0
        addr = base + off
        name = decl.get(-addr) if addr < 0 else None
        if not name:
            return m.group(0)
        return f'((gh_long)(uintptr_t)&{name})'
    return re.sub(r'(\(\s*[\w\s\*]+\)\s*)?&stack0x([0-9a-f]{16})(\s*\+\s*(-?\s*0x[0-9a-f]+|-?\s*\d+))?',
                  lambda m: rep(m) if True else m.group(0), body)


def fix_patterns(body):
    # 0) 이름 없는 스택 주소 → 지역 변수
    body = fix_stack_refs(body)
    # 1) 줄바꿈으로 끊긴 한정 이름 (std::\n    _Function_handler...)
    body = re.sub(r'::\s*\n\s*', '::', body)
    body = re.sub(r'\s*\n\s*::', '::', body)

    # 2) ELF 표 기호로 잘못 붙은 상수 주소 → 원래 숫자 주소 기준 IMG() (인덱스는 식일 수 있음)
    out, i = [], 0
    pat = re.compile(r'(&?)(__DT_\w+|_elf\w+)\[')
    while True:
        m = pat.search(body, i)
        if not m:
            out.append(body[i:]); break
        base = elf_sym_addr(m.group(2))
        j, depth = m.end(), 1
        while depth:
            depth += {'[': 1, ']': -1}.get(body[j], 0); j += 1
        idx = body[m.end():j - 1]
        fm = re.match(r'\s*\.\s*(\w+)', body[j:])
        field = fm.group(1) if fm else None
        end = j + (fm.end() if fm else 0)
        if base is None:
            out.append(body[i:end]); i = end; continue
        size, off = ELF_STRUCT.get(field, (1, 0)) if field else (1, 0)
        addr_expr = f'((uint8_t *)IMG(0x{base + off:x}) + ({idx}) * {size})'
        out.append(body[i:m.start()])
        out.append(addr_expr if m.group(1) == '&' else f'(*{addr_expr})')
        i = end
    body = ''.join(out)

    body = re.sub(r'\bNAN\(', 'isnan(', body)

    # 3) 복원 못 한 점프테이블: switch 값이 «목적지 코드 주소» 가 되도록 원래 숫자 주소로 계산
    body = re.sub(r'\((?:gh_)?long\)&(switchD_\w+?(?:__|::)switchdataD_([0-9a-f]+))\b',
                  lambda m: f'(gh_long)0x{m.group(2)}', body)
    body = re.sub(r'\(&(switchD_\w+?(?:__|::)switchdataD_([0-9a-f]+))\)\[',
                  lambda m: f'((int32_t *)IMG(0x{m.group(2)}))[', body)

    # 4) 문자 배열 즉치 대입: *(char (*) [8])(p) = (char  [8])0x...;
    width = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}
    body = re.sub(r'\*\(\w+ \(\*\) \[(\d+)\]\)',
                  lambda m: f'*({width.get(int(m.group(1)), "uint64_t")} *)', body)
    body = re.sub(r'\(\w+\s+\[(\d+)\]\)(0x[0-9a-f]+|\d+)',
                  lambda m: f'({width.get(int(m.group(1)), "uint64_t")}){m.group(2)}ULL', body)

    # 5) 레지스터 쌍 반환값 등 부분 접근: auVar52._8_4_ → GH_PART(auVar52, 8, uint32_t)
    used = set(re.findall(r'\b(\w+)\._\d+_\d+_', body))
    body = re.sub(r'\bundefined1?\s+(\w+)\s*\[(12|16)\];',
                  lambda m: f'gh_u128 {m.group(1)};' if m.group(1) in used else m.group(0), body)
    part_type = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}

    def part(m):
        pre, var, off, sz = m.group(1), m.group(2), int(m.group(3)), int(m.group(4))
        if pre == '*' and sz == 8:
            return f'*GH_PART({var}, {off}, gh_long *)'
        return f'{pre}GH_PART({var}, {off}, {part_type.get(sz, "uint64_t")})'
    body = re.sub(r'(\*?)\b(\w+)\._(\d+)_(\d+)_', part, body)
    u128 = set(re.findall(r'gh_u128 (\w+);', body))
    if u128:
        body = re.sub(r'^(\s*)(' + '|'.join(map(re.escape, u128)) + r') = (.+);$',
                      r'\1GH_SET128(\2, \3);', body, flags=re.M)
    return body


CAST_UNSEEN = []
# 토큰에 안 드러난 CAST(비트 복사) — 기계어를 보고 판정한 결과 (2026-09-27)
#   교정 필요: 식 안에서 «정수 칸에 든 실수 비트»를 (float) 값 변환으로 찍은 자리 → 텍스트 치환
MANUAL_BITCASTS = {
    'bzStateGame::LPimg2_0046df14': [
        ('(float)piVar20[0x9b]', 'GH_I2F(float, piVar20[0x9b])'),   # 0x46ee94 fmul s1,s2,s15
        ('(int)(float)uVar30', '(int)GH_I2F(float, uVar30)'),       # 0x46e320 Vec2(8바이트) 아래 절반 → fcvtzs
    ],
    # uVar22 는 실수 «비트»를 담는 변수 (0x3f99999a = 1.2f 도 대입) — 넣을 때도 꺼낼 때도 비트로
    'bzStateGame::MBarimg_003ecaf4': [
        ('(ulong)(uint)(float)iVar15', '(ulong)GH_F2I(uint, (float)iVar15)'),
        ('(ulong)(uint)(float)iVar14', '(ulong)GH_F2I(uint, (float)iVar14)'),
        ('(float)uVar22', 'GH_I2F(float, uVar22)'),
    ],
}
# SUBPIECE(8바이트 → 실수 조각) 가 토큰에 안 드러나는 표기 — 일반 규칙
#   (float)((ulong)X >> 0x20)   : 위 절반 실수   (float)*(undefined8 *)X : 8바이트 메모리의 아래 절반 실수
SUBPIECE_HI_RE = re.compile(r'\(float\)\(\(ulong\)([^;]*?) >> 0x20\)')
SUBPIECE_LOAD_RE = re.compile(r'\(float\)\*\(undefined8 \*\)(\w+)')
#   무해: ldr s0 → scvtf s0,s0 (정수를 실수 레지스터로 읽어 변환) — C 의 (float)*(int *) 와 같다
REVIEWED_UNSEEN = {
    ('bzStateGame::MBarimg_003ecaf4', '003ecd34'), ('bzStateGame::MBarimg_003ecaf4', '003ecf00'),
    ('bzStateGame::MBarimg_003ecaf4', '003ed1e8'), ('bzStateGame::LPimg2_0046df14', '0046ee94'),
}


def parse_file(path):
    src = open(path, encoding='utf-8', errors='replace').read()
    head = re.search(r'^// (\S+) @ ([0-9a-f]+)', src, re.M)
    full_name, addr = head.group(1), head.group(2)
    globals_ = []
    for m in re.finditer(r'^//@G (\S+)\t([0-9a-f]*)\t(\d+)\t(.*)$', src, re.M):
        globals_.append((m.group(1), m.group(2), int(m.group(3)), m.group(4).strip()))
    # 토큰에 드러나지 않은 CAST(비트 복사) 주소 — 내보내기가 본문 뒤에 붙인다. 본문에서 빼고 기록만.
    cx = re.findall(r'^//@CX (\S+)', src, re.M)
    if cx:
        CAST_UNSEEN.extend((full_name, a) for a in cx)
        src = re.sub(r'^//@CX \S+\r?\n?', '', src, flags=re.M)
    # 본문: 첫 번째 비주석 줄부터
    lines = src.splitlines()
    body_start = 0
    for i, l in enumerate(lines):
        if l.startswith('//'):
            continue
        body_start = i
        break
    body = '\n'.join(lines[body_start:])
    failed = 'DECOMPILE FAILED' in src
    return dict(full=full_name, addr=addr, globals=globals_, body=body, failed=failed)


def c_type_for_global(size, tname):
    t = tname.strip()
    if t in ('float',):
        return 'float'
    if t in ('double',):
        return 'double'
    if t.endswith('*') or t.startswith('pointer'):
        return 'uint8_t *'
    if t in ('int', 'uint', 'long', 'ulong', 'short', 'ushort', 'char', 'uchar', 'bool', 'byte'):
        return {'long': 'gh_long', 'bool': 'uint8_t'}.get(t, t)
    return {1: 'undefined1', 2: 'undefined2', 4: 'undefined4', 8: 'undefined8'}.get(size, 'undefined1')


LIBC = set('''memcpy memset memmove memcmp strlen strcmp strncmp strcpy strncpy strcat strchr strstr
sprintf snprintf printf atoi atof atol malloc free calloc realloc cosf sinf atanf atan2f sqrtf powf
fabsf floorf ceilf cos sin atan atan2 sqrt pow fabs floor ceil rand srand time abs labs isnan
fmodf fmod expf exp logf log roundf lroundf'''.split())
MACROS_PREFIX = ('CONCAT', 'SUB', 'ZEXT', 'SEXT', 'SBORROW', 'SCARRY', 'CARRY', 'NEON_', 'Exclusive',
                 'POPCOUNT', 'LZCOUNT', 'IMG', 'GH_')
RT_DECLARED = {'operator_new', 'operator_delete', 'operator_delete__', 'operator_new_nothrow',
               '__stack_chk_fail'}

# 셈(rt/) 함수 중 반환 타입이 정수가 아닌 것 (호출부 정합용)
EXT_RET = {}


def split_params(params):
    """정의부 매개변수 목록 → [(type, name)]"""
    params = params.strip()
    if not params or params == 'void':
        return []
    out = []
    for p in split_top(params):
        p = p.strip()
        if p == '...':
            out.append(('...', '...'))
            continue
        m = re.match(r'^(.*?)([A-Za-z_]\w*)\s*((?:\[[^\]]*\])*)$', p, re.S)
        if not m:
            out.append((p, None))
            continue
        t = (m.group(1) + ('*' if m.group(3) else '')).strip()
        out.append((t, m.group(2)))
    return out


def split_top(s):
    """최상위 쉼표로 분리 (괄호·대괄호·문자열 안 쉼표 무시)"""
    parts, depth, cur, i, n = [], 0, [], 0, len(s)
    while i < n:
        c = s[i]
        if c in '"\'':
            j = i + 1
            while j < n and s[j] != c:
                j += 2 if s[j] == '\\' else 1
            cur.append(s[i:j + 1]); i = j + 1; continue
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
        if c == ',' and depth == 0:
            parts.append(''.join(cur)); cur = []
        else:
            cur.append(c)
        i += 1
    parts.append(''.join(cur))
    return parts


def find_close(s, i):
    """s[i] == '(' 의 짝 ')' 위치"""
    depth, n = 0, len(s)
    while i < n:
        c = s[i]
        if c in '"\'':
            j = i + 1
            while j < n and s[j] != c:
                j += 2 if s[j] == '\\' else 1
            i = j + 1; continue
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                return i
        i += 1
    return -1


CALL_NAME_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)(\s*)\(')


def rewrite_scvtf_stores(body, stats):
    """X = NEON_scvtf(...);  →  gh_store64(&(X), NEON_scvtf(...));
    레인 두 개(8바이트) 결과를 변수 자리에 그대로 쓴다. 식이 여러 줄에 걸쳐도 괄호 짝으로 찾는다."""
    out, i = [], 0
    pat = re.compile(r'([A-Za-z_][\w\.\[\]]*)\s*=\s*NEON_scvtf\s*\(')
    while True:
        m = pat.search(body, i)
        if not m:
            out.append(body[i:]); break
        lp = m.end() - 1
        rp = find_close(body, lp)
        k = rp + 1
        while k < len(body) and body[k] in ' \t\n':
            k += 1
        if rp < 0 or k >= len(body) or body[k] != ';':
            out.append(body[i:m.end()]); i = m.end(); continue
        out.append(body[i:m.start()])
        out.append(f'gh_store64(&({m.group(1)}), NEON_scvtf({body[lp + 1:rp]}))')
        stats['scvtf_store'] += 1
        i = rp + 1
    return ''.join(out)


STACK_DECL_RE = re.compile(
    r'^(?P<ind>[ \t]+)(?P<type>[A-Za-z_][\w \t]*?)[ \t]+(?P<ptr>\**)[ \t]*'
    r'(?P<name>(?:local|[a-z]+Stack)_(?P<off>[0-9a-f]+))[ \t]*(?P<arr>(?:\[[^\]\n]*\][ \t]*)*);[ \t]*$', re.M)


def place_stack_locals(body, stats):
    """스택 지역 변수를 원작과 같은 오프셋에 배치한다.

    Ghidra 는 스택 변수를 «진입 시점 SP 기준 음수 오프셋»으로 이름 붙인다(local_60 = SP-0x60).
    원작 코드는 인접한 스택 칸을 한 덩어리(구조체·pair·배열)로 쓰는 일이 많다
    — 예: &local_60 을 넘기면 받는 쪽이 local_58 자리까지 쓴다.
    C 컴파일러는 지역 변수를 임의 순서로 두므로, 함수마다 원작 크기의 스택 버퍼를 만들고
    각 변수를 원래 오프셋 위치의 매크로로 바꾼다."""
    decls = []
    for m in STACK_DECL_RE.finditer(body):
        typ = m.group('type').strip()
        if typ in ('return', 'goto', 'else'):
            continue
        decls.append(m)
    if not decls:
        return body
    maxoff = max(int(m.group('off'), 16) for m in decls)
    size = ((maxoff + 15) // 8) + 2
    out, last = [], 0
    for k, m in enumerate(decls):
        out.append(body[last:m.start()])
        if k == 0:
            out.append(f'  uint64_t gh_frame64[{size}] = {{0}};   /* 원작 스택 프레임 (SP-0x{maxoff:x} ~ SP) */\n'
                       f'  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x{maxoff:x};\n')
        typ, ptr, name, off, arr = (m.group('type').strip(), m.group('ptr'), m.group('name'),
                                   int(m.group('off'), 16), re.sub(r'\s', '', m.group('arr')))
        if arr:
            out.append(f'#define {name} (*({typ} {ptr}(*){arr})(gh_fb - 0x{off:x}))\n')
        else:
            out.append(f'#define {name} (*({typ} {ptr}*)(gh_fb - 0x{off:x}))\n')
        last = m.end() + 1 if m.end() < len(body) and body[m.end()] == '\n' else m.end()
        stats['stack_vars'] += 1
    out.append(body[last:])
    stats['stack_funcs'] += 1
    return ''.join(out)


VCALL_PREFIX = '(**(code **)('
VCALL_MAXARGS = 7


def _norm_expr(e):
    """캐스트·공백을 뺀 식 (수신 객체와 첫 인자가 같은지 비교용)"""
    e = re.sub(r'\(\s*[\w\s]+\*+\s*\)', '', e)
    return re.sub(r'\s+', '', e).strip('()')


def _emit_vcall(recv, off, args, is_float, stats):
    if args and _norm_expr(args[0]) == _norm_expr(recv):
        args = args[1:]                     # Ghidra 가 this 를 적어 준 경우
    else:
        stats['vcall_implicit_this'] += 1   # this 가 빠진 경우 (x0 에 이미 들어 있던 값)
    if len(args) > VCALL_MAXARGS:
        stats['vcall_toomany'] += 1
        args = args[:VCALL_MAXARGS]
    args = args + ['0'] * (VCALL_MAXARGS - len(args))
    fn = 'gh_vcall_f' if is_float else 'gh_vcall'
    stats['vcall'] += 1
    return f'{fn}(GH_ARG({recv.strip()}), 0x{off:x}, ' + ', '.join(f'GH_ARG({a.strip()})' for a in args) + ')'


def rewrite_vcalls(text, stats):
    """가상 호출을 명시적 디스패치로 바꾼다.
      (**(code **)(*RECV + OFF))(ARGS)              → gh_vcall(RECV, OFF, ARGS...)
      pcVarN = *(code **)(*RECV + OFF); … (*pcVarN)(ARGS) → 같은 변환
    Ghidra 는 x0 에 이미 있는 this 를 인자에서 빼먹곤 하므로 수신 객체를 따로 넘긴다.
    호출 결과가 (float) 로 캐스트되면 실수 반환판(gh_vcall_f)을 쓴다."""
    # 1) 한 줄 형태
    out, i = [], 0
    while True:
        p = text.find(VCALL_PREFIX, i)
        if p < 0:
            out.append(text[i:]); break
        q = find_close(text, p)                       # 바깥 (**...) 의 닫는 괄호
        inner = text[p + len(VCALL_PREFIX):q - 1]      # "*RECV + OFF"
        m = re.match(r'^\*(.+?)\s*\+\s*(0x[0-9a-f]+|\d+)$', inner.strip(), re.S)
        k = q + 1
        while k < len(text) and text[k] in ' \n\t':
            k += 1
        if not m or k >= len(text) or text[k] != '(':
            out.append(text[i:q + 1]); i = q + 1; continue
        r = find_close(text, k)
        args_txt = text[k + 1:r]
        args = split_top(args_txt) if args_txt.strip() else []
        before = text[max(0, p - 8):p]
        is_float = before.rstrip().endswith('(float)')
        out.append(text[i:p])
        out.append(_emit_vcall(m.group(1), int(m.group(2), 0), args, is_float, stats))
        i = r + 1
    text = ''.join(out)
    # 2) 함수 포인터 변수에 먼저 담는 형태
    slots = {}
    for m in re.finditer(r'\b(pcVar\d+)\s*=\s*\*\(code \*\*\)\(\*(.+?)\s*\+\s*(0x[0-9a-f]+|\d+)\);', text):
        slots[m.group(1)] = (m.group(2), int(m.group(3), 0))
    for var, (recv, off) in slots.items():
        out, i = [], 0
        pat = '(*' + var + ')'
        while True:
            p = text.find(pat, i)
            if p < 0:
                out.append(text[i:]); break
            k = p + len(pat)
            while k < len(text) and text[k] in ' \n\t':
                k += 1
            if k >= len(text) or text[k] != '(':
                out.append(text[i:k]); i = k; continue
            r = find_close(text, k)
            args_txt = text[k + 1:r]
            args = split_top(args_txt) if args_txt.strip() else []
            is_float = text[max(0, p - 8):p].rstrip().endswith('(float)')
            out.append(text[i:p])
            out.append(_emit_vcall(recv, off, args, is_float, stats))
            i = r + 1
        text = ''.join(out)
    return text


def rewrite_calls(text, arity, stats):
    """arity 에 있는 함수 호출의 인자를 GH_ARG() 로 감싸고 개수를 맞춘다 (재귀)."""
    out, i = [], 0
    while True:
        m = CALL_NAME_RE.search(text, i)
        if not m:
            out.append(text[i:]); break
        name = m.group(1)
        lp = m.end() - 1
        if name not in arity:
            out.append(text[i:lp + 1]); i = lp + 1; continue
        rp = find_close(text, lp)
        if rp < 0:
            out.append(text[i:]); break
        inner = text[lp + 1:rp]
        args = [a for a in split_top(inner)] if inner.strip() else []
        args = [rewrite_calls(a, arity, stats).strip() for a in args]
        n = arity[name]
        if len(args) < n:
            stats['padded'] += 1
            args += ['0'] * (n - len(args))
        elif len(args) > n:
            stats['truncated'] += 1
            extra = args[n:]
            args = args[:n]
            # 버려지는 인자의 부수효과 보존: (void)(x) 를 쉼표식으로 앞에 둔다
            side = [a for a in extra if '(' in a or '=' in a]
            if side:
                out.append(text[i:m.start()])
                out.append('(' + ', '.join(f'(void)({a})' for a in side) + ', ')
                out.append(f'{name}(' + ', '.join(f'GH_ARG({a})' for a in args) + '))')
                i = rp + 1
                continue
        out.append(text[i:m.start()])
        out.append(f'{name}(' + ', '.join(f'GH_ARG({a})' for a in args) + ')')
        i = rp + 1
    return ''.join(out)


STR_RE = re.compile(r'"(?:[^"\\\n]|\\.)*"' + r"|'(?:[^'\\\n]|\\.)+'")


NORMALIZE_LITS = {}


def mask_strings(text):
    """문자열·문자 리터럴을 자리표시자로 바꿔 변환 대상에서 제외한다."""
    lits = []
    def rep(m):
        lits.append(m.group(0))
        return f'\x01{len(lits) - 1}\x01'
    return STR_RE.sub(rep, text), lits


def unmask_strings(text, lits):
    return re.sub(r'\x01(\d+)\x01', lambda m: lits[int(m.group(1))], text)


def match_sig(body, cname):
    """정의부: (반환형, 매개변수 문자열, 여는 중괄호 다음 위치) — 괄호 균형으로 찾는다."""
    m = re.search(r'\b' + re.escape(cname) + r'\s*\(', body)
    if not m:
        return None
    lp = m.end() - 1
    rp = find_close(body, lp)
    if rp < 0:
        return None
    br = re.match(r'\s*\{', body[rp + 1:])
    if not br:
        return None
    return body[:m.start()].strip() or 'void', body[lp + 1:rp], rp + 1 + br.end(), m.start()


WIDE_STR_RE = re.compile(r'(?<!\w)L\x01(\d+)\x01')   # mask_strings 뒤: L + 문자열 자리표시자
C_ESCAPES = {'n': 10, 't': 9, 'r': 13, '0': 0, 'a': 7, 'b': 8, 'f': 12, 'v': 11, '\\': 92, '"': 34, "'": 39,
             '?': 63}


def decode_c_string(s):
    """C 문자열 리터럴 본문의 이스케이프를 풀어 코드포인트 목록으로."""
    out, i = [], 0
    while i < len(s):
        c = s[i]
        if c != '\\':
            out.append(ord(c))
            i += 1
            continue
        n = s[i + 1]
        if n in 'xuU':
            m = re.match(r'[0-9a-fA-F]+', s[i + 2:])
            width = {'x': len(m.group(0)), 'u': 4, 'U': 8}[n]
            out.append(int(s[i + 2:i + 2 + width], 16))
            i += 2 + width
        elif n in '01234567':
            m = re.match(r'[0-7]{1,3}', s[i + 1:])
            out.append(int(m.group(0), 8))
            i += 1 + len(m.group(0))
        else:
            out.append(C_ESCAPES[n])
            i += 2
    return out


def fix_wide_strings(body, lits):
    """Ghidra 는 «값이 전부 글자 코드인 정수 배열»을 L"…" 로 찍는다. 원작(안드로이드) wchar_t 는 4바이트인데
    MSVC 는 2바이트라 memcpy 로 옮기면 표가 반쪽으로 뭉개진다 → uint32_t 배열 리터럴로 바꾼다."""
    def rep(m):
        lit = lits[int(m.group(1))]
        if not (lit.startswith('"') and lit.endswith('"')):
            return m.group(0)
        cps = decode_c_string(lit[1:-1]) + [0]
        return '((const uint32_t[]){' + ','.join(f'0x{c:x}' for c in cps) + '})'
    return WIDE_STR_RE.sub(rep, body)


LHS_BITCAST_RE = re.compile(r'(^[ \t]*|[;{}][ \t]*)GH_(F2I|I2F|D2L|L2D)\(([^,()]+),\s*(\w+)\)(\s*=(?!=)\s*)', re.M)


def fix_lhs_bitcasts(body):
    """비트 복사(CAST) 표기가 대입문 «왼쪽»(CAST 의 결과 변수)에 붙은 자리를 바로잡는다.
    `GH_I2F(float, v) = (float)식;`
      · 식이 함수/가상 호출이면 → `v = (float)식;` (실수 반환 호출은 변환기가 따로 처리)
      · 아니면(메모리·변수 값)   → `v = GH_I2F(float, 식);` (비트 그대로)"""
    out, pos = [], 0
    for m in LHS_BITCAST_RE.finditer(body):
        if m.start() < pos:
            continue
        mac, ty, var = m.group(2), m.group(3), m.group(4)
        # 오른쪽 식: 문장 끝 ';' (괄호 깊이 0) 까지
        i, depth = m.end(), 0
        while i < len(body):
            c = body[i]
            if c in '([':
                depth += 1
            elif c in ')]':
                depth -= 1
            elif c == ';' and depth == 0:
                break
            i += 1
        rhs = body[m.end():i]
        cm = re.match(r'\s*\(\s*[\w ]+\s*\)\s*', rhs)     # 앞의 «(형)» 캐스트
        core = rhs[cm.end():] if cm else rhs
        is_call = bool(re.match(r'\(\*+\(code\s*\*+\)', core) or re.match(r'[A-Za-z_]\w*\s*\(', core))
        out.append(body[pos:m.start()])
        out.append(m.group(1) + var + m.group(5))
        out.append(rhs if is_call else f'GH_{mac}({ty}, {core.strip()})')
        pos = i
    out.append(body[pos:])
    return ''.join(out)


def normalize(body, full, methods_by_ns):
    body = re.sub(r'\b__thiscall\b|\b__cdecl\b|\b__stdcall\b', '', body)
    body = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    body, lits = mask_strings(body)
    body = fix_wide_strings(body, lits)
    NORMALIZE_LITS[full] = lits
    body = fix_lhs_bitcasts(body)
    for old, new in MANUAL_BITCASTS.get(full, []):
        if old not in body:
            print(f'WARN manual bitcast not found in {full}: {old}')
        body = body.replace(old, new)
    body = SUBPIECE_HI_RE.sub(lambda m: f'GH_I2F(float, ((ulong){m.group(1)} >> 0x20))', body)
    body = SUBPIECE_LOAD_RE.sub(lambda m: f'GH_I2F(float, *(undefined8 *){m.group(1)})', body)
    body = fix_patterns(body)
    body = qualify(body)
    body = apply_thunks(body)
    # 원작이 부르는 시스템 함수 중 런타임이 대신 구현하는 것: 안드로이드 빌드에서 진짜 시스템 함수와 이름이 겹치지 않게
    body = re.sub(r'\b__android_log_print\b', 'gh_android_log_print', body)
    ns_c = sanitize_name(full.rsplit('::', 1)[0]) if '::' in full else None
    if ns_c and ns_c in methods_by_ns:
        ms = methods_by_ns[ns_c]
        body = re.sub(r'(?<![\w])([A-Za-z_]\w*)(\s*\()',
                      lambda m: (ns_c + '__' + m.group(1) + m.group(2)) if m.group(1) in ms else m.group(0),
                      body)
    body = re.sub(r'\bunsigned long\b', 'gh_ulong', body)
    body = re.sub(r'\blong\b', 'gh_long', body)
    # 정수 리터럴 접미사 L/UL: 원작(LP64) long 은 64비트, MSVC long 은 32비트 → 1L << 45 가 깨진다
    body = re.sub(r'\b((?:0[xX][0-9a-fA-F]+)|(?:\d+))(?:UL|LU|ul|lu)\b', r'\1ULL', body)
    body = re.sub(r'\b((?:0[xX][0-9a-fA-F]+)|(?:\d+))[lL]\b', r'\1LL', body)
    return body


def main():
    os.makedirs(OUT, exist_ok=True)
    funcs, wrappers = [], []
    for ns in sorted(os.listdir(SRC)):
        d = os.path.join(SRC, ns)
        if not os.path.isdir(d):
            continue
        for fn in sorted(os.listdir(d)):
            if not fn.endswith('.c'):
                continue
            info = parse_file(os.path.join(d, fn))
            info['ns'] = ns
            base = info['full'].split('::')[-1]
            if is_target(ns, base):
                funcs.append(info)
            elif not info['failed']:
                wrappers.append(info)

    methods_by_ns = collections.defaultdict(set)
    for f in funcs:
        f['cname'] = sanitize_name(f['full'])
        if '::' in f['full']:
            ns, base = f['full'].rsplit('::', 1)
            methods_by_ns[sanitize_name(ns)].add(base)
    defined_c = {f['cname'] for f in funcs}

    all_types = collections.Counter()
    arity, rettype = {}, {}

    # 1) 재컴파일 대상: 정규화 + 시그니처 파싱
    for f in funcs:
        if f['failed']:
            print('SKIP failed decompile:', f['full'])
            continue
        body = normalize(f['body'], f['full'], methods_by_ns)
        sm = match_sig(body, f['cname'])
        if not sm:
            print('WARN no signature match:', f['full'][:100])
            continue
        ret, praw, sig_end, name_pos = sm
        if re.match(r'^undefined1?\s*\[16\]$', ret) or ret == 'undefined16':
            ret = 'gh_u128'
        params = split_params(praw)
        f.update(body=body, ret=ret, params=params, sig_end=sig_end)
        arity[f['cname']] = len([p for p in params if p[0] != '...'])
        rettype[f['cname']] = 'gh_long' if ret == 'void' else ret
        for t, _n in params:
            all_types[re.sub(r'[\s*]|const', '', t)] += 1
        all_types[re.sub(r'[\s*]|const', '', ret)] += 1
        for m in re.finditer(r'\(([A-Za-z_]\w*)\s*\*+\s*\)', body):
            all_types[m.group(1)] += 1
        for m in re.finditer(r'^\s+([A-Za-z_]\w*)\s+\**\s*[A-Za-z_]\w*(?:\s*\[[^\]]*\])*\s*;', body, re.M):
            all_types[m.group(1)] += 1

    # 2) 외부(셈) 함수: 호출부 최대 인자 수 / 래퍼 역변환 정의의 인자 수
    wrapper_sig = {}
    for w in wrappers:
        c = sanitize_name(w['full'])
        b = normalize(w['body'], w['full'], {})
        m = re.match(r'\s*(.*?)\b' + re.escape(c) + r'\s*\((.*?)\)\s*\{', b, re.S)
        if m:
            wrapper_sig[c] = (m.group(1).strip() or 'void', split_params(m.group(2)))
    ext_calls = collections.defaultdict(int)
    ext_count = collections.Counter()
    for f in funcs:
        if 'params' not in f:
            continue
        b = f['body'][f['sig_end']:]
        for m in CALL_NAME_RE.finditer(b):
            n = m.group(1)
            if (n in defined_c or n in C_KEYWORDS or n in BUILTIN_TYPES or n in LIBC or n in RT_DECLARED
                    or n.startswith(MACROS_PREFIX) or n in all_types):
                continue
            rp = find_close(b, m.end() - 1)
            inner = b[m.end():rp] if rp > 0 else ''
            k = len(split_top(inner)) if inner.strip() else 0
            ext_calls[n] = max(ext_calls[n], k)
            ext_count[n] += 1
        # 호출이 아니라 «주소»로만 쓰이는 래퍼 함수(콜백 등록 등)도 선언이 있어야 한다
        for n in set(re.findall(r'\b[A-Za-z_]\w*\b', b)) & set(wrapper_sig):
            if n not in ext_calls:
                ext_calls[n] = len(wrapper_sig[n][1])
                ext_count[n] += 0
    for n, k in ext_calls.items():
        if n in wrapper_sig:
            k = max(k, len(wrapper_sig[n][1]))
        arity[n] = k
        rettype[n] = EXT_RET.get(n, 'gh_long')

    # 3) 출력
    sys_types = {'time_t', 'FILE', 'va_list', 'tm', 'div_t', 'pthread_t', 'off_t', 'ssize_t', 'clock_t'}
    opaque = sorted(t for t in all_types if t and re.match(r'^[A-Za-z_]\w*$', t)
                    and t not in BUILTIN_TYPES and t not in C_KEYWORDS and t not in sys_types
                    and not t.startswith('gh_'))
    opaque_set = set(opaque)
    with open(os.path.join(OUT, 'aos5_types.h'), 'w', encoding='utf-8') as w:
        w.write('/* 자동 생성: fixdecomp.py — 역변환 코드의 불투명 타입 (바이트 단위 포인터 연산용) */\n')
        w.write('#pragma once\n#include "gh.h"\n')
        for t in opaque:
            w.write(f'typedef uint8_t {t};\n')

    def proto(name):
        k = arity[name]
        ps = ', '.join(['uint64_t'] * k) if k else 'void'
        return f'{rettype[name]} {name}({ps});'

    with open(os.path.join(OUT, 'aos5_protos.h'), 'w', encoding='utf-8') as w:
        w.write('/* 자동 생성: fixdecomp.py — 재컴파일 함수 원형 (전 인자 uint64 규약) */\n#pragma once\n'
                '#include "aos5_types.h"\n#include "aos5_ext_manual.h"\n#include "aos5_ext.h"\n')
        for f in funcs:
            if 'params' in f:
                w.write(proto(f['cname']) + '\n')
    with open(os.path.join(OUT, 'aos5_ext.h'), 'w', encoding='utf-8') as w:
        w.write('/* 자동 생성: fixdecomp.py — 셈(rt/)이 구현할 외부 함수 원형 (전 인자 uint64 규약)\n'
                '   호출 횟수 / 역변환 래퍼 존재 여부를 주석으로 단다. */\n#pragma once\n#include "aos5_types.h"\n')
        for n in sorted(ext_calls):
            note = 'wrapper' if n in wrapper_sig else 'cocos/std'
            w.write(f'{proto(n)}  /* {ext_count[n]} calls, {note} */\n')

    stats = collections.Counter()
    nfile = 0
    for f in funcs:
        if 'params' not in f:
            continue
        body = f['body']
        # 정의부 교체: 전 인자 uint64 → 머리에서 원래 타입으로 복원
        new_params, prelude = [], []
        for k, (t, name) in enumerate([p for p in f['params'] if p[0] != '...']):
            a = f'gh_a{k}'
            new_params.append(f'uint64_t {a}')
            if name is None:
                continue
            tt = t.replace('const', '').strip()
            if tt == 'float':
                prelude.append(f'  float {name} = gh_b2f({a});')
            elif tt == 'double':
                prelude.append(f'  double {name} = gh_b2d({a});')
            elif '*' in tt:
                if re.sub(r'\s', '', tt) in ('void*', 'pointer', 'pointer*'):
                    tt = 'uint8_t *'   # void* 산술은 MSVC C 에서 불가 → 바이트 포인터 (GNU void* 산술과 같은 의미)
                prelude.append(f'  {tt} {name} = ({tt})(uintptr_t){a};')
            elif tt in opaque_set:
                prelude.append(f'  uint64_t {name} = {a};')
            else:
                prelude.append(f'  {tt} {name} = ({tt}){a};')
        ret = rettype[f['cname']]
        head = f'{ret} {f["cname"]}({", ".join(new_params) or "void"})\n{{\n' + '\n'.join(prelude) + '\n'
        rest = body[f['sig_end']:]
        # 원작에서 호출 직전 채우지 않은 레지스터·반환 부산물(in_*, extraout_*, unaff_*):
        # 역변환으로는 값을 알 수 없으므로 실행마다 같도록 0 으로 초기화한다.
        # (선언만 — «return in_w8;» 같은 문장을 «return in_w8 = 0;» 으로 바꾸면 반환값이 늘 0 이 된다)
        rest = re.sub(r'^([ \t]+(?!return\b|goto\b|case\b)[A-Za-z_][\w \t\*]*?\b(?:in|extraout|unaff)_\w+)\s*;',
                      r'\1 = 0;', rest, flags=re.M)
        rest = re.sub(r'\b(gh_u128\s+\w+) = 0;', r'\1 = {0};', rest)
        rest = place_stack_locals(rest, stats)
        # 벡터 변환 결과(두 레인 = 8바이트)는 대상 변수 주소에 그대로 저장 (float 형 변수라도 x,y 두 칸)
        rest = rewrite_scvtf_stores(rest, stats)
        if f['ret'] == 'void':
            rest = re.sub(r'\breturn\s*;', 'return 0;', rest)
            rest = rest.rstrip()
            if rest.endswith('}'):
                rest = rest[:-1] + '  return 0;\n}'
        rest = rewrite_vcalls(rest, stats)
        rest = rewrite_calls(rest, arity, stats)
        d = os.path.join(OUT, f['ns'])
        os.makedirs(d, exist_ok=True)
        fname = f['cname'] if len(f['cname']) <= 90 else f['cname'][:60] + '_' + f['addr']
        with open(os.path.join(d, fname + '.c'), 'w', encoding='utf-8') as w:
            w.write(f'/* {f["full"]} @ 0x{f["addr"]} — 원작 역변환, fixdecomp.py 자동 변환 */\n')
            w.write('#include "aos5_protos.h"\n')
            for (gname, gaddr, gsize, gtype) in f['globals']:
                gc = sanitize_name(gname)
                if not gaddr or gc in defined_c or gc in arity:
                    continue
                w.write(f'#undef {gc}\n#define {gc} (*({c_type_for_global(gsize, gtype)} *)IMG(0x{gaddr}))\n')
            # //@G 에 없지만 기호 이름으로만 등장하는 데이터(typeinfo 등)
            gnames = {sanitize_name(g[0]) for g in f['globals']}
            for sym in sorted(set(re.findall(r'\b[A-Za-z_]\w*\b', rest)) & set(label_addr())):
                if sym in defined_c or sym in arity or sym in gnames:
                    continue
                w.write(f'#undef {sym}\n#define {sym} (*(undefined1 *)IMG(0x{label_addr()[sym]:x}))\n')
            # 주소를 못 찾은 RTTI(typeinfo) 참조: std::function 타입 질의용이라 값은 쓰이지 않는다
            for sym in sorted(set(re.findall(r'\b\w+_typeinfo\b', rest)) - set(label_addr())):
                w.write(f'static undefined1 {sym};\n')
            w.write(unmask_strings(head + rest, NORMALIZE_LITS.get(f['full'], [])) + '\n')
        nfile += 1

    with open(os.path.join(OUT, '_externs.tsv'), 'w', encoding='utf-8') as w:
        w.write('calls\tarity\tname\twrapper\n')
        for n, c in ext_count.most_common():
            w.write(f'{c}\t{arity[n]}\t{n}\t{"Y" if n in wrapper_sig else ""}\n')
    print(f'functions: {nfile}, opaque types: {len(opaque)}, externs: {len(ext_calls)}, '
          f'calls padded: {stats["padded"]}, truncated: {stats["truncated"]}, '
          f'vcalls: {stats["vcall"]} (implicit this {stats["vcall_implicit_this"]}, too many args {stats["vcall_toomany"]}), '
          f'stack-placed vars: {stats["stack_vars"]} in {stats["stack_funcs"]} funcs')
    if CAST_UNSEEN:
        with open(os.path.join(OUT, '_cast_unseen.tsv'), 'w', encoding='utf-8') as w:
            w.write('function\taddr\n')
            for fn_, a in CAST_UNSEEN:
                w.write(f'{fn_}\t{a}\n')
        new = [c for c in CAST_UNSEEN if c not in REVIEWED_UNSEEN]
        print(f'bit-copy casts not visible in tokens: {len(CAST_UNSEEN)} (reviewed {len(CAST_UNSEEN) - len(new)}) '
              f'-> gen/_cast_unseen.tsv')
        for fn_, a in new:
            print(f'WARN unreviewed bit-copy cast (check machine code): {fn_} @ {a}')


if __name__ == '__main__':
    main()
    from restore_shop_sret import apply
    apply()
    from restore_coupon_literals import apply as restore_coupon_literals
    restore_coupon_literals()

    from restore_unavailable_ads import apply as restore_unavailable_ads
    restore_unavailable_ads()
    from restore_human_context import apply as restore_human_context
    restore_human_context()
    from restore_buy_store_context import apply as restore_buy_store_context
    restore_buy_store_context()
