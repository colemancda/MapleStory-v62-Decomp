/* FUN_5001236d - 0x5001236d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5001236d(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 8) & 0xf) != 0) {
    param_2 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_50016da8);
  }
  piVar1 = (int *)FUN_500123a1((int)this);
  (**(code **)(*piVar1 + 4))(param_1,param_2);
  return;
}


