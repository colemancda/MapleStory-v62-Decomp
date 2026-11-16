/* FUN_50c08a10 - 0x50c08a10 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c08a10(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,param_2);
  if (param_2 != iVar1) {
    param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_50c15658);
  }
  return;
}


