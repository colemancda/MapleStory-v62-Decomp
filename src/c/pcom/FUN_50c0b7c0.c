/* FUN_50c0b7c0 - 0x50c0b7c0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b7c0(void *this,undefined1 *param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,1);
    if (iVar1 != 1) {
      param_1 = (undefined1 *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
    }
  }
  else {
    FUN_50c0b7fe(this,*param_1);
  }
  return;
}


