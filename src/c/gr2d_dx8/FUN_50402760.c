/* FUN_50402760 - 0x50402760 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50402760(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_50438b2c)(0,param_1 + -0xc);
    (*DAT_50438b28)(uVar1);
  }
  return;
}


