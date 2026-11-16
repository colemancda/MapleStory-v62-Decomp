/* FUN_5000963c - 0x5000963c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_5000963c(ushort param_1,uint param_2)

{
  if (param_1 <= (ushort)(param_2 >> 0x1c)) {
    return 0;
  }
  return (uint)param_1 - (param_2 >> 0x1c) & 0xf000 | param_1 & 0xfff;
}


