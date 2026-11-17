/* Compatibility typedefs for raw Ghidra decompiler output (src/c/).
 * Sizes follow Ghidra's conventions: undefinedN is an N-byte blob of unspecified
 * signedness. Compiled as plain C (MSVC C mode or GCC -m32). */
#ifndef GHIDRA_TYPES_H
#define GHIDRA_TYPES_H

/* Ghidra's `bool` is ONE byte and its output relies on it (`*(bool *)(p + 0x84) = a < b`
 * is a byte store). MSVC's <stdbool.h> makes bool four bytes, which turns every such store
 * into a 4-byte write over the neighbouring fields. Always use a 1-byte bool. */
#ifndef __cplusplus
typedef unsigned char bool;
#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>
#include <malloc.h>

#ifdef _WIN32
/* The full SDK, not WIN32_LEAN_AND_MEAN: the exe uses COM/OLE, crypto, wininet, multimedia, IME,
 * shell, toolhelp and netbios, and Ghidra names their types in prototypes. winsock2 first. */
#include <winsock2.h>
#include <windows.h>
#include <objbase.h>
#include <oleauto.h>
#include <wincrypt.h>
#include <wininet.h>
#include <mmsystem.h>
#include <imm.h>
#include <shlobj.h>
#include <tlhelp32.h>
#include <nb30.h>
#else
#include "win_shim.h"
#endif

typedef struct _s_ThrowInfo ThrowInfo;   /* MSVC C++ throw descriptor, only ever cast to a pointer */
/* MSVC COM support classes (comdef.h): only ever used through pointers in raw C ports */
typedef struct _com_error _com_error;
typedef struct _bstr_t _bstr_t;
typedef struct _variant_t _variant_t;
typedef long double float10;            /* x87 extended; only the arithmetic has to parse */

typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined3;            /* not 3 bytes: Ghidra uses it for partial reads; 4 here */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint32_t uint3;
typedef int32_t int3;
typedef uint8_t byte;
typedef int8_t sbyte;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef long long longlong;

/* Ghidra's "code pointer" type for `(**(code **)(vtable + N))(...)`. A real function type
 * with an unspecified parameter list (K&R `code()`, not `code(void)`) so every vtable call
 * signature is accepted, returning int so results can be assigned and cast. */
typedef int code();

/* Ghidra's `X._<off>_<size>_` storage subfield, as an lvalue. */
#define SUBFIELD(x, off, ty) (*(ty *)((uint8_t *)&(x) + (off)))

/* __thiscall is a C++-only keyword in MSVC and an error in its C mode, so raw C ports erase
 * it (the true convention is recovered in src/cxx/). __fastcall/__cdecl are only erased for
 * non-MSVC compilers: under MSVC they change codegen and must stay. */
#ifndef __thiscall
#define __thiscall
#endif
#ifndef _MSC_VER
#ifndef __fastcall
#define __fastcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#endif

#include "ghidra_intrinsics.h"

#endif
