/* FUN_51406728 - 0x51406728 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __fastcall FUN_51406728(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)(param_1 + 0xc),0,0x10);
  memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


