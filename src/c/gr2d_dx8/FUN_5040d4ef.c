/* FUN_5040d4ef - 0x5040d4ef in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_5040d4ef(int *param_1)

{
  if (param_1[2] < *param_1) {
    FUN_5040e4a7(param_1 + 2,param_1);
  }
  if (param_1[3] < param_1[1]) {
    FUN_5040e4a7(param_1 + 3,param_1 + 1);
  }
  return;
}


