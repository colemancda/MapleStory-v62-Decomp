/* FUN_50c0b8cb - 0x50c0b8cb in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b8cb(void *this,undefined8 *param_1)

{
  int iVar1;
  undefined8 local_c;
  
  local_c = CONCAT44(this,this);
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,8);
    if (iVar1 != 8) {
      param_1 = (undefined8 *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
    }
  }
  else {
    local_c = *param_1;
    iVar1 = (**(code **)(*(int *)this + 0x18))(&local_c,8);
    if (iVar1 != 8) {
      param_1 = (undefined8 *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
    }
  }
  return;
}


