/* FUN_51807b04 - 0x51807b04 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51807b04(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,param_2);
  if (param_2 != iVar1) {
    param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5181b518);
  }
  return;
}


