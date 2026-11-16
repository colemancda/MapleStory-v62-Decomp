/* FUN_500073e6 - 0x500073e6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_500073e6(uint param_1)

{
  return ((((param_1 & 0xfffff000) << 4 | param_1 & 0xff00) << 4 | param_1 & 0xff0) << 4 |
         param_1 & 0xff) << 4 | param_1 & 0xf;
}


