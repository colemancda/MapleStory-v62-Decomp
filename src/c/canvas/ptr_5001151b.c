/* ptr_5001151b - 0x5001151b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall ptr_5001151b(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return;
}


