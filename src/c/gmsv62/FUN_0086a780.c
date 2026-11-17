/* FUN_0086a780 - 0x0086a780 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086a780(void)

{
  LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter;
  undefined1 *puVar1;
  
  if (DAT_0097fc64 != (undefined1 *)0x0) {
    return 0;
  }
  lpTopLevelExceptionFilter =
       SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_0086ec30);
  puVar1 = (undefined1 *)FUN_00402605(0x2b98);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x28));
    *(undefined4 *)(puVar1 + 0x1464) = 0;
    FUN_008740c0();
    FUN_00873290();
    *(undefined4 *)(puVar1 + 0x2b0c) = 0;
    *(undefined4 *)(puVar1 + 0x2b30) = 0;
    *(undefined4 *)(puVar1 + 0x2b34) = 0;
    puVar1[0x2b78] = 0;
    puVar1[0x2b79] = 0;
    *(undefined4 *)(puVar1 + 0x2b7c) = 1000;
    *(undefined4 *)(puVar1 + 0x2b80) = 0;
    *(undefined4 *)(puVar1 + 0x2b84) = 0;
    *(undefined4 *)(puVar1 + 0x2b88) = 0;
    puVar1[0x2b8c] = 0;
    *(undefined4 *)(puVar1 + 0x2b90) = 0;
    *(undefined4 *)(puVar1 + 0x2b94) = 0;
    puVar1[0x2b38] = 0;
  }
  DAT_0097fc64 = puVar1;
  *(undefined4 *)(puVar1 + 0x10) = 0x755;
  if (*(HANDLE *)(DAT_0097fc64 + 0x18) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(DAT_0097fc64 + 0x18));
  }
  if (*(HANDLE *)(DAT_0097fc64 + 0x1c) != (HANDLE)0x0) {
    TerminateProcess(*(HANDLE *)(DAT_0097fc64 + 0x1c),0);
  }
  if (lpTopLevelExceptionFilter != (LPTOP_LEVEL_EXCEPTION_FILTER)0x0) {
    SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  }
  return *(undefined4 *)(DAT_0097fc64 + 0x10);
}


