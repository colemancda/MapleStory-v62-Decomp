/* FUN_50004a0b - 0x50004a0b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50004a0b(uint param_1)

{
  return (((param_1 >> 4 & 0xf000000 | param_1 & 0xf00000) >> 4 | param_1 & 0xf000) >> 4 |
         param_1 & 0xf0) >> 4;
}


