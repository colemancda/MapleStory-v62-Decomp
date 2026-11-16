/* FUN_50008463 - 0x50008463 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


ushort __fastcall FUN_50008463(ushort param_1,ushort param_2)

{
  if (param_1 <= param_2) {
    return 0;
  }
  return param_1 - param_2 & 0xf000 | param_1 & 0xfff;
}


