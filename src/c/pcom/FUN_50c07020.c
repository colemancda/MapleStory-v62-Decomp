/* FUN_50c07020 - 0x50c07020 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c07020(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [16];
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,iVar2,param_3,&param_2);
    if (iVar1 < 0) {
      FUN_50c101d2(iVar1,param_1,&DAT_50c174a8);
    }
    if (param_2 == 0) break;
    iVar2 = iVar2 + param_2;
    param_3 = param_3 - param_2;
    if (param_3 == 0) {
      return;
    }
  }
  FUN_50c061b4(local_14,0x80070026,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_50c14eb0);
}


