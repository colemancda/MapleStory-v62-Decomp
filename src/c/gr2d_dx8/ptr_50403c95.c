/* ptr_50403c95 - 0x50403c95 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403c95(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x328) = param_2;
  if (*(int *)(param_1 + 0xc0) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xc0);
  (**(code **)(*piVar1 + 0x5c))(piVar1,param_2);
  return 0;
}


