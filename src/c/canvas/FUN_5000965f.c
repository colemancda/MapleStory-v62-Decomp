/* FUN_5000965f - 0x5000965f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_5000965f(uint param_1,uint param_2,uint param_3)

{
  if (0x7f < (byte)(&DAT_50071ad0)[(int)(param_3 & 0xfc | 0x3e000) >> 2 | param_2 >> 0x15 & 0x7c0])
  {
    param_1 = ((param_2 >> 3 & 0x1f0000 | param_2 & 0xfc00) >> 2 | param_2 & 0xf8) >> 3;
  }
  return param_1;
}


