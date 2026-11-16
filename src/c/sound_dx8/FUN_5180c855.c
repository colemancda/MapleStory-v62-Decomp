/* FUN_5180c855 - 0x5180c855 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180c855(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  piVar1 = *(int **)((int)this + 0x68);
  if (piVar1 == (int *)0x0) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b(local_14,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  iVar2 = *piVar1;
  iVar3 = FUN_5180c8a6(param_1);
  (**(code **)(iVar2 + 0x3c))(piVar1,iVar3);
  return;
}


