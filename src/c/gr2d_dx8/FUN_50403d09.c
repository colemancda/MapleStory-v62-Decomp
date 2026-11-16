/* FUN_50403d09 - 0x50403d09 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50403d09(int param_1)

{
  memset((void *)(param_1 + 0xc),0,0x44);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}


