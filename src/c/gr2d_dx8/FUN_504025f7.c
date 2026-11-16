/* FUN_504025f7 - 0x504025f7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __fastcall FUN_504025f7(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)(param_1 + 0xc),0,0x10);
  memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


