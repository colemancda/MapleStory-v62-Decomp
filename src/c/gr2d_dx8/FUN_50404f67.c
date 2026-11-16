/* FUN_50404f67 - 0x50404f67 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50404f67(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_5040508d(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


