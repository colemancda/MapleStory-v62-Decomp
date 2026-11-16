/* FUN_500115e9 - 0x500115e9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_500115e9(void *this,int *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = this;
  iVar1 = (**(code **)(*(int *)this + 0x14))((int)&uStack_8 + 3,1);
  if (iVar1 != 1) {
    param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50016da8);
  }
  if (uStack_8._3_1_ == -0x80) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,4);
    if (iVar1 != 4) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50016da8);
    }
  }
  else {
    *param_1 = (int)uStack_8._3_1_;
  }
  return;
}


