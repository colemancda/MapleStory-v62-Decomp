/* FUN_5000a6a3 - 0x5000a6a3 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_5000a6a3(int *param_1,int *param_2)

{
  *param_2 = *param_1 * 7 >> 4;
  param_2[1] = param_1[1] * 7 >> 4;
  param_2[2] = param_1[2] * 7 >> 4;
  param_2[3] = param_1[3] * 7 >> 4;
  return;
}


