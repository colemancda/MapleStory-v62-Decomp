/* FUN_5040edee - 0x5040edee in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040edee(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x24))(*(int **)(param_1 + 0x40),param_2);
  return;
}


