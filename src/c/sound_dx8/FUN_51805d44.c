/* FUN_51805d44 - 0x51805d44 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51805d44(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = param_1;
  if ((param_1 != -1) && (param_1 != 0)) {
    iVar2 = FUN_51805e03(this);
    if (iVar2 == 0) {
      param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    *(int *)((int)this + 0x10) = iVar1;
    uVar3 = FUN_51805db5(iVar1);
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
    *(undefined8 *)((int)this + 8) = uVar3;
    if (param_2 != 0) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
    }
    return;
  }
  param_1 = 6;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
}


