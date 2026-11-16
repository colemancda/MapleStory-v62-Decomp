/* FUN_510041fb - 0x510041fb in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __cdecl FUN_510041fb(int *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_510057dd(&local_8);
  if (iVar1 < 0) {
    FUN_51005455(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_51007720);
  }
  iVar1 = FUN_51004c26(param_1,(int *)&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_5100581a(iVar1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if ((*param_1 == 0) && (local_8 != (int *)0x0)) {
    FUN_51005455(local_18,0x80004002,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_51007720);
  }
  return;
}


