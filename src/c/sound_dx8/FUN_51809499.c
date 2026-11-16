/* FUN_51809499 - 0x51809499 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51809499(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  *(undefined4 *)((int)this + 0x2c) = *param_1;
  *(undefined4 *)((int)this + 0x30) = param_1[1];
  *(undefined4 *)((int)this + 0x34) = param_1[2];
  *(undefined4 *)((int)this + 0x38) = param_1[3];
  *(undefined4 *)((int)this + 0x40) = param_2;
  iVar1 = (*DAT_5181fc80)(param_2);
  *(int *)((int)this + 0x44) = iVar1;
  if (iVar1 == 0) {
    FUN_51802c9b(local_14,0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  return;
}


