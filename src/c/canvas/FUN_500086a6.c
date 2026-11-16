/* FUN_500086a6 - 0x500086a6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_500086a6(uint param_1,uint param_2,int param_3)

{
  if (0x7f < (byte)(&DAT_50071ad0)
                   [((param_2 & 0x8000 | 0x1f00000) >> 4 | param_2 & 0xf000) >> 5 |
                    param_3 >> 2 & 0x3fU]) {
    param_1 = FUN_50008666(param_2);
  }
  return param_1;
}


