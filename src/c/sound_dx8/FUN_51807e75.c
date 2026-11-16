/* FUN_51807e75 - 0x51807e75 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51807e75(void *this,int *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = this;
  iVar1 = (**(code **)(*(int *)this + 0x14))((int)&uStack_8 + 3,1);
  if (iVar1 != 1) {
    param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
  }
  if (uStack_8._3_1_ == -0x80) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,4);
    if (iVar1 != 4) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
  }
  else {
    *param_1 = (int)uStack_8._3_1_;
  }
  return;
}


