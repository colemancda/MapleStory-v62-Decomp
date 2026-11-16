/* FUN_5000b378 - 0x5000b378 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_5000b378(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_50081b7c)(0,param_1 + -0xc);
    (*DAT_50081b78)(uVar1);
  }
  return;
}


