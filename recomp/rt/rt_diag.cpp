/*
 * rt_diag.cpp — 복원 디버깅용 진단: 로그 파일 + (Windows) 충돌 시 스택 역추적.
 * 크래시는 막지 않는다. 기록만 남기고 원래대로 죽게 둔다.
 * 예외: 정수 0 나누기는 원작(ARM64)에서 죽지 않고 0 이 되므로, 윈도우 빌드도 원작 규칙대로 이어 간다(기록은 남김).
 */
#include <cstdio>
#include <cstdint>
#include <cstdarg>
#include <ctime>
#include <mutex>

#ifdef _WIN32
#include <windows.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")
#endif
#ifdef __ANDROID__
#include <android/log.h>
#endif

static FILE *g_log = nullptr;
static std::mutex g_log_mx;

extern "C" void aos5_log(const char *fmt, ...)
{
    std::lock_guard<std::mutex> lk(g_log_mx);
#ifdef __ANDROID__
    {   // 안드로이드: logcat (adb logcat -s AOS5)
        va_list ap;
        va_start(ap, fmt);
        __android_log_vprint(ANDROID_LOG_INFO, "AOS5", fmt, ap);
        va_end(ap);
    }
#endif
    if (!g_log) {
        g_log = fopen("aos5_run.log", "w");
        if (!g_log) return;
    }
    va_list ap;
    va_start(ap, fmt);
    vfprintf(g_log, fmt, ap);
    va_end(ap);
    fputc('\n', g_log);
    fflush(g_log);
}

#ifdef _WIN32
static void log_stack(CONTEXT ctx, int max_frames)
{
    HANDLE proc = GetCurrentProcess();
    static bool sym_ready = false;
    if (!sym_ready) {
        SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES);
        SymInitialize(proc, nullptr, TRUE);
        sym_ready = true;
    }
    STACKFRAME64 sf = {};
    sf.AddrPC.Offset = ctx.Rip; sf.AddrPC.Mode = AddrModeFlat;
    sf.AddrFrame.Offset = ctx.Rbp; sf.AddrFrame.Mode = AddrModeFlat;
    sf.AddrStack.Offset = ctx.Rsp; sf.AddrStack.Mode = AddrModeFlat;
    char buf[sizeof(SYMBOL_INFO) + 512];
    for (int i = 0; i < max_frames; i++) {
        if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, proc, GetCurrentThread(), &sf, &ctx, nullptr,
                         SymFunctionTableAccess64, SymGetModuleBase64, nullptr) || !sf.AddrPC.Offset)
            break;
        auto *sym = (SYMBOL_INFO *)buf;
        sym->SizeOfStruct = sizeof(SYMBOL_INFO);
        sym->MaxNameLen = 500;
        DWORD64 disp = 0;
        IMAGEHLP_LINE64 line = {sizeof(line)};
        DWORD ldisp = 0;
        const char *name = SymFromAddr(proc, sf.AddrPC.Offset, &disp, sym) ? sym->Name : "?";
        if (SymGetLineFromAddr64(proc, sf.AddrPC.Offset, &ldisp, &line))
            aos5_log("  #%02d %s+0x%llx  %s:%lu", i, name, (unsigned long long)disp, line.FileName, line.LineNumber);
        else
            aos5_log("  #%02d %s+0x%llx", i, name, (unsigned long long)disp);
    }
}

static LONG WINAPI crash_filter(EXCEPTION_POINTERS *ep)
{
    aos5_log("=== CRASH code=0x%08lx addr=%p", ep->ExceptionRecord->ExceptionCode,
             ep->ExceptionRecord->ExceptionAddress);
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && ep->ExceptionRecord->NumberParameters >= 2)
        aos5_log("    %s address %p", ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read",
                 (void *)ep->ExceptionRecord->ExceptionInformation[1]);
    log_stack(*ep->ContextRecord, 40);
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

/* 진단: 지금 이 자리의 호출 스택을 로그로 남긴다 (값이 이상한 호출부 추적용) */
extern "C" void aos5_log_stack(const char *why)
{
    aos5_log("--- stack: %s", why);
#ifdef _WIN32
    CONTEXT ctx;
    RtlCaptureContext(&ctx);
    log_stack(ctx, 12);
#endif
}

#ifdef _WIN32
/*
 * 정수 나눗셈을 원작(ARM64) 규칙으로: x86 은 0 으로 나누면(또는 INT_MIN / -1) 예외로 죽지만,
 * ARM64 의 sdiv/udiv 는 조용히 몫 0 을 낸다 (나머지는 msub 로 계산되어 피제수 그대로).
 * 원작이 실제로 그렇게 돌던 코드이므로 «원작과 같게» 결과를 채우고 다음 명령으로 넘어간다. 기록은 남긴다.
 * (안드로이드 ARM64 빌드에서는 CPU 가 원래 이렇게 동작하므로 해당 없음)
 */
static bool emulate_arm_div(EXCEPTION_POINTERS *ep)
{
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (code != EXCEPTION_INT_DIVIDE_BY_ZERO && code != EXCEPTION_INT_OVERFLOW) return false;
    CONTEXT *c = ep->ContextRecord;
    const uint8_t *p = (const uint8_t *)c->Rip, *s = p;
    bool op16 = false, rexw = false;
    for (;;) {
        if (*p == 0x66) { op16 = true; p++; }
        else if (*p == 0xF2 || *p == 0xF3 || *p == 0x2E || *p == 0x3E || *p == 0x26 || *p == 0x64 || *p == 0x65 || *p == 0x36) p++;
        else break;
    }
    if ((*p & 0xF0) == 0x40) { rexw = (*p & 8) != 0; p++; }
    uint8_t opc = *p++;
    if (opc != 0xF6 && opc != 0xF7) return false;
    uint8_t modrm = *p++;
    int mod = modrm >> 6, reg = (modrm >> 3) & 7, rm = modrm & 7;
    if (reg != 6 && reg != 7) return false;          // 6 = div, 7 = idiv
    if (mod != 3) {
        if (rm == 4) {                                // SIB
            uint8_t sib = *p++;
            if (mod == 0 && (sib & 7) == 5) p += 4;
        } else if (mod == 0 && rm == 5) p += 4;       // RIP 상대
        if (mod == 1) p += 1;
        else if (mod == 2) p += 4;
    }
    bool zero = code == EXCEPTION_INT_DIVIDE_BY_ZERO;
    if (opc == 0xF6) {                                // 8비트: AX / r8 → AL 몫, AH 나머지
        uint8_t a = (uint8_t)c->Rax;
        c->Rax = (c->Rax & ~0xFFFFull) | (zero ? ((uint16_t)a << 8) : (uint16_t)a);
    } else if (rexw) {                                // 64비트: RDX:RAX / r64
        uint64_t a = c->Rax;
        c->Rax = zero ? 0 : a;                        // 넘침(INT64_MIN / -1): 몫 = INT64_MIN, 나머지 0
        c->Rdx = zero ? a : 0;
    } else if (op16) {
        uint16_t a = (uint16_t)c->Rax;
        c->Rax = (c->Rax & ~0xFFFFull) | (zero ? 0 : a);
        c->Rdx = (c->Rdx & ~0xFFFFull) | (zero ? a : 0);
    } else {                                          // 32비트: 결과는 상위 32비트를 0 으로
        uint32_t a = (uint32_t)c->Rax;
        c->Rax = zero ? 0 : a;
        c->Rdx = zero ? a : 0;
    }
    c->Rip += (DWORD64)(p - s);
    static int logged;
    if (logged < 20) {
        logged++;
        aos5_log("ARM div emulated (%s) at %p", zero ? "x/0 -> 0" : "MIN/-1", (void *)s);
        log_stack(*c, 4);
    }
    return true;
}
#endif

#ifdef _WIN32
/* 진단: 하드웨어 감시점 — 지정 주소(4바이트)에 «쓰기»가 일어날 때마다 값·호출 스택을 기록 (DR0) */
static const DWORD kWatchInstall = 0xE0A05001;
static uintptr_t g_watch_addr;
static bool watch_exception(EXCEPTION_POINTERS *ep)
{
    CONTEXT *c = ep->ContextRecord;
    if (g_watch_addr) {
        static int seen;
        if (seen < 8) {
            seen++;
            aos5_log("VEH code=0x%08lx flags=0x%lx dr6=0x%llx dr7=0x%llx", ep->ExceptionRecord->ExceptionCode,
                     c->ContextFlags, (unsigned long long)c->Dr6, (unsigned long long)c->Dr7);
        }
    }
    if (ep->ExceptionRecord->ExceptionCode == kWatchInstall) {
        c->ContextFlags |= CONTEXT_DEBUG_REGISTERS;   // 넘어온 Dr* 값은 담겨 있지 않으므로 전부 새로 쓴다
        c->Dr0 = g_watch_addr;
        c->Dr1 = c->Dr2 = c->Dr3 = 0;
        c->Dr6 = 0;
        c->Dr7 = 1ull | (1ull << 16) | (3ull << 18);   // L0 사용, 쓰기 감시, 4바이트
        return true;
    }
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_SINGLE_STEP && g_watch_addr && (c->Dr6 & 0xF)) {
        c->ContextFlags |= CONTEXT_DEBUG_REGISTERS;
        c->Dr0 = g_watch_addr;
        c->Dr1 = c->Dr2 = c->Dr3 = 0;
        c->Dr6 = 0;
        c->Dr7 = 1ull | (1ull << 16) | (3ull << 18);
        static int hits;
        static uint32_t last = 0xdeadbeef;
        uint32_t now = *(uint32_t *)g_watch_addr;
        if (hits < 16 && now != last) {   // 값이 «바뀔 때»만 기록 (같은 값 반복 쓰기는 생략)
            hits++;
            aos5_log("WATCH write #%d at %p: now 0x%08x", hits, (void *)g_watch_addr, now);
            log_stack(*c, 6);
        }
        last = now;
        return true;
    }
    return false;
}
#endif

extern "C" void aos5_watch_write(void *addr)
{
#ifdef _WIN32
    g_watch_addr = (uintptr_t)addr;
    aos5_log("WATCH install at %p", addr);
    RaiseException(kWatchInstall, 0, 0, nullptr);
#endif
}

extern "C" void aos5_diag_install(void)
{
    time_t t = time(nullptr);
    aos5_log("AOS5 restore run %s", ctime(&t));
#ifdef _WIN32
    SetUnhandledExceptionFilter(crash_filter);
    AddVectoredExceptionHandler(1, [](EXCEPTION_POINTERS *ep) -> LONG {
        if (emulate_arm_div(ep)) return EXCEPTION_CONTINUE_EXECUTION;
        if (watch_exception(ep)) return EXCEPTION_CONTINUE_EXECUTION;
        if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) crash_filter(ep);
        return EXCEPTION_CONTINUE_SEARCH;
    });
    volatile int z = 0, a = 7;
    int q = a / z, r = a % z;
    aos5_log("div self-test: 7/0=%d 7%%0=%d (ARM: 0, 7)", q, r);
#endif
}
