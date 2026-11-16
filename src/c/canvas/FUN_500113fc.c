/* FUN_500113fc - 0x500113fc in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_500113fc(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x18))(param_1,param_2);
  if (param_2 != iVar1) {
    param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_50016da8);
  }
  return;
}


