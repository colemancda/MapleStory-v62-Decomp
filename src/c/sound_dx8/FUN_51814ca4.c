/* FUN_51814ca4 - 0x51814ca4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51814ca4(void *this,int param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  if (*(int *)((int)this + 0x70) == 0) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b(local_14,0x80004003,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  if (*(int *)((int)this + 0x88) == 0) {
    iVar1 = FUN_5180c8a6(param_1);
  }
  else {
    iVar1 = 0;
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x1c))(*(int **)((int)this + 0x70),iVar1);
  if (iVar1 < 0) {
    FUN_51802c9b(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  *(int *)((int)this + 0x84) = param_1;
  return;
}


