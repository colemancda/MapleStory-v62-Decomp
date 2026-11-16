/* FUN_5180c7b1 - 0x5180c7b1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180c7b1(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_18 [16];
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 == (int *)0x0) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b(local_18,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
  }
  local_8 = 0;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_8);
  if (iVar2 < 0) {
    FUN_51802c9b(local_18,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
  }
  FUN_5180c821(local_8);
  return;
}


