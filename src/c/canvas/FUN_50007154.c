/* FUN_50007154 - 0x50007154 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50007154(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1 != (int *)0x0) && (iVar1 = *(int *)*param_1, iVar1 != 0)) {
    return *(uint *)(iVar1 + -4) >> 1;
  }
  return 0;
}


