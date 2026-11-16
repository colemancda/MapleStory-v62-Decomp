/* FUN_50c0921c - 0x50c0921c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0921c(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 8) & 0xf) != 0) {
    param_2 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_50c15658);
  }
  piVar1 = (int *)FUN_50c09250((int)this);
  (**(code **)(*piVar1 + 4))(param_1,param_2);
  return;
}


