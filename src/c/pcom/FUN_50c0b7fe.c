/* FUN_50c0b7fe - 0x50c0b7fe in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b7fe(void *this,undefined1 param_1)

{
  int iVar1;
  undefined1 uStack00000007;
  void *local_8;
  
  uStack00000007 = param_1;
  local_8 = this;
  iVar1 = (**(code **)(*(int *)this + 0x18))(&stack0x00000007,1);
  if (iVar1 != 1) {
    local_8 = (void *)0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_50c15658);
  }
  return;
}


