/* FUN_5000a6da - 0x5000a6da in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_5000a6da(int *param_1,int *param_2)

{
  *param_2 = *param_1 >> 4;
  param_2[1] = param_1[1] >> 4;
  param_2[2] = param_1[2] >> 4;
  param_2[3] = param_1[3] >> 4;
  return;
}


