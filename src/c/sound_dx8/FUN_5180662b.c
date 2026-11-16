/* FUN_5180662b - 0x5180662b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180662b(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 8) & 0xf) != 0) {
    param_2 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5181b518);
  }
  piVar1 = (int *)FUN_5180665f((int)this);
  (**(code **)(*piVar1 + 4))(param_1,param_2);
  return;
}


