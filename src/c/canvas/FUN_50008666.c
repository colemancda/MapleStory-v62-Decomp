/* FUN_50008666 - 0x50008666 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50008666(uint param_1)

{
  return (((param_1 & 0xf00) << 1 | param_1 & 0xf0) << 2 | param_1 & 0xf) << 1 |
         (param_1 >> 2 & 2 | param_1 & 0xc0) >> 1 | param_1 & 0x800;
}


