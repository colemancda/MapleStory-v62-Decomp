/* FUN_50009a05 - 0x50009a05 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50009a05(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (&DAT_5001dad0)[param_2];
  *param_1 = uVar1 >> 0x10 & 0xff;
  param_1[2] = uVar1 & 0xff;
  param_1[1] = uVar1 >> 8 & 0xff;
  return;
}


