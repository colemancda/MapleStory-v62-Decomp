/* FUN_51404f61 - 0x51404f61 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51404f61(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 8) & 0xf) != 0) {
    param_2 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5140e3a0);
  }
  piVar1 = (int *)FUN_51404f95((int)this);
  (**(code **)(*piVar1 + 4))(param_1,param_2);
  return;
}


