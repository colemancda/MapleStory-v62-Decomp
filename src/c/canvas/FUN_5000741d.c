/* FUN_5000741d - 0x5000741d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_5000741d(uint param_1)

{
  return (((param_1 & 0xfffff800 | 0xffff0000) << 3 | param_1 & 0x7e0) << 2 | param_1 & 0x1f) << 3 |
         (param_1 >> 1 & 0xe | param_1 & 0x600) >> 1;
}


