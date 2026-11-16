/* FUN_51409d30 - 0x51409d30 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __cdecl FUN_51409d30(void *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_5140a5ba();
  if (iVar1 < 0) {
    FUN_51405a7c(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
  }
  iVar1 = FUN_5140a821(param_1,&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_5140ac47(iVar1);
  }
  return local_8;
}


