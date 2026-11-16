/* FUN_5000b1b6 - 0x5000b1b6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __fastcall FUN_5000b1b6(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)(param_1 + 0xc),0,0x10);
  memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


