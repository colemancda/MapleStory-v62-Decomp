/* FUN_50c0c1a9 - 0x50c0c1a9 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0c1a9(void *this,int *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = this;
  iVar1 = (**(code **)(*(int *)this + 0x14))((int)&uStack_8 + 3,1);
  if (iVar1 != 1) {
    param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
  }
  if (uStack_8._3_1_ == -0x80) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,8);
    if (iVar1 != 8) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
    }
  }
  else {
    *param_1 = (int)uStack_8._3_1_;
    param_1[1] = (int)uStack_8._3_1_ >> 0x1f;
  }
  return;
}


