/* FUN_50005fa7 - 0x50005fa7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_50005fa7(void *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_50006746();
  if (iVar1 < 0) {
    FUN_50007006(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50015eb8);
  }
  iVar1 = FUN_5000d209(param_1,&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_50012c97(iVar1);
  }
  return local_8;
}


