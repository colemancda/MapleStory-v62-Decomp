/* FUN_510057a6 - 0x510057a6 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int * __cdecl FUN_510057a6(int *param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&param_1);
  if (iVar1 < 0) {
    FUN_51005455(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_51007720);
  }
  return param_1;
}


