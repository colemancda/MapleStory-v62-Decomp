/* ptr_5040ed86 - 0x5040ed86 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_5040ed86(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_5042a358(0x80004003);
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(*(int **)(param_1 + 0x40),param_2);
  }
  return uVar1;
}


