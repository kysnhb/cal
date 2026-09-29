/*
 * gh.h — Ghidra 역변환 C 코드를 그대로 컴파일하기 위한 기본 타입·매크로.
 * 원작: libMyGame.so (arm64, LP64). 호스트는 Win64(LLP64)·Android arm64(LP64) 둘 다
 * 지원해야 하므로 `long` 은 변환기(fixdecomp.py)가 gh_long 으로 바꿔 넣는다.
 */
#ifndef AOS5_GH_H
#define AOS5_GH_H

#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#ifndef __cplusplus
#include <stdbool.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef int64_t gh_long;
typedef uint64_t gh_ulong;
typedef uint64_t ulong;
typedef uint32_t uint;
typedef uint16_t ushort;
typedef uint8_t uchar;
typedef uint8_t byte;
typedef int8_t sbyte;
typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined3;
typedef uint32_t undefined4;
typedef uint64_t undefined5;
typedef uint64_t undefined6;
typedef uint64_t undefined7;
typedef uint64_t undefined8;
typedef struct { uint64_t lo, hi; } undefined16;
typedef uint64_t ulonglong;
typedef int64_t longlong;
typedef double longdouble;
typedef float float4;
typedef char sbyte1;
typedef int32_t int3;
typedef uint32_t uint3;
typedef int16_t word;
typedef uint32_t dword;
typedef uint64_t qword;

/* 간접 호출 대상: (**(code **)(...))(args) 형태로만 쓰인다. */
typedef gh_long code();

/* ---- 원작 메모리 이미지 (DAT_/PTR_ 전역을 원래 주소 그대로 참조) ---- */
extern uint8_t *g_aos5_img;              /* 원작 주소 IMG_BASE 에 대응하는 호스트 버퍼 */
#include "aos5_image_layout.h"
#define IMG(a) ((void *)(g_aos5_img + ((uint64_t)(a) - AOS5_IMG_BASE)))

/* ---- 스택 보호 (tpidr_el0 + 0x28 canary) ---- */
extern uint8_t g_aos5_tls[0x100];
#define tpidr_el0 ((gh_long)(uintptr_t)g_aos5_tls)
void __stack_chk_fail();

/* ---- COW std::string 참조카운트 원자 연산 (단일 스레드 실행) ---- */
#define ExclusiveMonitorPass(p, sz) (1)
#define ExclusiveMonitorsStatus() (0)

/* ---- Ghidra 의사 연산 ---- */
#define CONCAT11(a, b) ((uint16_t)(((uint16_t)(uint8_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT12(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT13(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(b) & 0xffffff)))
#define CONCAT22(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT31(a, b) ((uint32_t)(((uint32_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)GH_U32(a) << 32) | (uint64_t)GH_U32(b)))   /* 비트 결합: float 는 비트 그대로 */
#define CONCAT71(a, b) ((uint64_t)(((uint64_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT62(a, b) ((uint64_t)(((uint64_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT53(a, b) ((uint64_t)(((uint64_t)(a) << 24) | ((uint64_t)(b) & 0xffffff)))
#define CONCAT35(a, b) ((uint64_t)(((uint64_t)(a) << 40) | ((uint64_t)(b) & 0xffffffffffULL)))
#define CONCAT26(a, b) ((uint64_t)(((uint64_t)(a) << 48) | ((uint64_t)(b) & 0xffffffffffffULL)))
#define CONCAT17(a, b) ((uint64_t)(((uint64_t)(a) << 56) | ((uint64_t)(b) & 0xffffffffffffffULL)))
#define SUB41(x, n) ((uint8_t)((uint32_t)(x) >> ((n) * 8)))
#define SUB42(x, n) ((uint16_t)((uint32_t)(x) >> ((n) * 8)))
#define SUB81(x, n) ((uint8_t)((uint64_t)(x) >> ((n) * 8)))
#define SUB82(x, n) ((uint16_t)((uint64_t)(x) >> ((n) * 8)))
#define SUB84(x, n) ((uint32_t)((uint64_t)(x) >> ((n) * 8)))
#define SUB164(x, n) ((uint32_t)0)
#define ZEXT48(x) ((uint64_t)(uint32_t)(x))
#define ZEXT816(x) ((uint64_t)(x))
#define SEXT48(x) ((int64_t)(int32_t)(x))
#define SBORROW4(a, b) ((((int32_t)(a) ^ (int32_t)(b)) & ((int32_t)(a) ^ (int32_t)((int32_t)(a) - (int32_t)(b)))) < 0)
#define SBORROW8(a, b) ((((int64_t)(a) ^ (int64_t)(b)) & ((int64_t)(a) ^ (int64_t)((int64_t)(a) - (int64_t)(b)))) < 0)
#define SCARRY4(a, b) ((((int32_t)(a) ^ ~(int32_t)(b)) & ((int32_t)(a) ^ (int32_t)((int32_t)(a) + (int32_t)(b)))) < 0)
#define CARRY4(a, b) ((uint32_t)((uint32_t)(a) + (uint32_t)(b)) < (uint32_t)(a))
#define CARRY8(a, b) ((uint64_t)((uint64_t)(a) + (uint64_t)(b)) < (uint64_t)(a))
#define POPCOUNT(x) __gh_popcount((uint64_t)(x))
#define LZCOUNT(x) __gh_lzcount((uint64_t)(x))
#define NAN_GH (0.0 / 0.0)
#define NEON_fmov(x, ...) (x)
/* NEON_scvtf(v, esize): 벡터 레인별 부호 정수 → 실수 변환 (Ghidra 표기, esize = 레인 바이트 수).
   게임에서는 CONCAT44(y, x) 두 int 를 Vec2{(float)x, (float)y} 로 만드는 데 쓴다. 결과는 레인 비트 묶음. */
#define NEON_scvtf(x, esize) gh_neon_scvtf((uint64_t)(x), (esize))


/* ---- 비트 보존 변환 (Ghidra 의 CONCAT/레인 연산은 «비트» 단위) ---- */
static inline uint32_t gh_u32_f(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint32_t gh_u32_d(double d) { return gh_u32_f((float)d); }
static inline uint32_t gh_u32_i(uint64_t v) { return (uint32_t)v; }
#ifndef __cplusplus
#define GH_U32(x) _Generic((x), float: gh_u32_f, double: gh_u32_d, default: gh_u32_i)(x)
#else
#define GH_U32(x) ((uint32_t)(x))
#endif
/* Ghidra CAST(비트 그대로 복사) 자리 — 내보내기 스크립트(codeWithBitcasts)가 «(int)x» 대신 붙인다.
   C 의 (int)x 는 값 변환이라, 실수 비트를 정수 칸에 저장하는 원작 코드(str s0 …)가 1.0 → 1 로 깨진다. */
static inline float gh_f_bits(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline double gh_d_bits(uint64_t u) { double d; memcpy(&d, &u, 8); return d; }
static inline uint64_t gh_u64_d(double d) { uint64_t u; memcpy(&u, &d, 8); return u; }
static inline uint64_t gh_u64_f(float f) { return gh_u32_f(f); }
static inline uint64_t gh_u64_i(uint64_t v) { return v; }
#ifndef __cplusplus
#define GH_U64(x) _Generic((x), float: gh_u64_f, double: gh_u64_d, default: gh_u64_i)(x)
#define GH_F2I(T, x) ((T)GH_U32(x))
#define GH_D2L(T, x) ((T)GH_U64(x))
#define GH_I2F(T, x) gh_f_bits(GH_U32(x))
#define GH_L2D(T, x) gh_d_bits(GH_U64(x))
#endif
static inline void gh_store64(void *p, uint64_t v) { memcpy(p, &v, 8); }
static inline uint64_t gh_neon_scvtf(uint64_t v, int esize)
{
    if (esize == 4) {
        float lo = (float)(int32_t)(uint32_t)v, hi = (float)(int32_t)(uint32_t)(v >> 32);
        return ((uint64_t)gh_u32_f(hi) << 32) | gh_u32_f(lo);
    }
    double d = (double)(int64_t)v; uint64_t u; memcpy(&u, &d, 8); return u;
}

static inline int __gh_popcount(uint64_t x) { int n = 0; while (x) { n += (int)(x & 1); x >>= 1; } return n; }
static inline int __gh_lzcount(uint64_t x) { int n = 0; if (!x) return 64; while (!(x & 0x8000000000000000ULL)) { n++; x <<= 1; } return n; }



/* ---- 호출 규약: 재컴파일 함수 사이 인자는 전부 uint64. 실수는 비트 패턴으로 싣는다 ---- */
static inline uint64_t gh_f2b(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint64_t gh_d2b(double d) { return gh_f2b((float)d); }
static inline uint64_t gh_i2b(uint64_t v) { return v; }
static inline float gh_b2f(uint64_t b) { uint32_t u = (uint32_t)b; float f; memcpy(&f, &u, 4); return f; }
static inline double gh_b2d(uint64_t b) { double d; memcpy(&d, &b, 8); return d; }
#define GH_ARG(x) _Generic((x), float: gh_f2b, double: gh_d2b, default: gh_i2b)(x)

/* 레지스터 쌍(x0:x1 / q 레지스터) 값: Ghidra 의 auVarN._8_4_ 부분 접근용 */
typedef struct { uint64_t lo, hi; } gh_u128;
#define GH_PART(v, off, T) (*(T *)((uint8_t *)&(v) + (off)))
static inline void gh_set128_s(gh_u128 *v, gh_u128 e) { *v = e; }
static inline void gh_set128_i(gh_u128 *v, uint64_t e) { v->lo = e; v->hi = 0; }
#define GH_SET128(v, e) _Generic((e), gh_u128: gh_set128_s, default: gh_set128_i)(&(v), (e))

/* 가상 호출 디스패치 (fixdecomp.py 가 (**(code **)(*obj + off))(...) 를 이것으로 바꾼다).
   수신 객체의 vtable[off/8] 을 (obj, a1..a7) 로 부른다. */
gh_long gh_vcall(uint64_t recv, uint64_t off, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5,
                 uint64_t a6, uint64_t a7);
float gh_vcall_f(uint64_t recv, uint64_t off, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5,
                 uint64_t a6, uint64_t a7);

/* 메모리 할당 (원작 libstdc++ operator new/delete) */
void *operator_new(gh_ulong n);
void *operator_new_nothrow(gh_ulong n, void *tag);
void operator_delete(void *p);
void operator_delete__(void *p);

#ifdef __cplusplus
}
#endif
#endif
