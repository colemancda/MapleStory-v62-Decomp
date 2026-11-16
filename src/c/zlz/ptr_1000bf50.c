/* ptr_1000bf50 - 0x1000bf50 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall ptr_1000bf50(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 8) & 0xf) != 0) {
    param_3 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_3,(ThrowInfo *)&DAT_1000eff8);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  (**(code **)(**(int **)(param_1 + 4) + 4))(param_2,param_3);
  return;
}


