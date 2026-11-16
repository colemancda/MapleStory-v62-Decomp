/* FUN_50002d9b - 0x50002d9b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_50002d9b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_500864e0 & 1) == 0) {
    DAT_500864e0 = DAT_500864e0 | 1;
    if (DAT_5001da94 == (HMODULE)0x0) {
      DAT_500864e4 = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_500864e4 = GetProcAddress(DAT_5001da94,s_FNotifyAlloc_50018317 + 1);
  }
  if (DAT_500864e4 == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_500864e4)(param_1,param_2,param_3);
  return iVar1;
}


