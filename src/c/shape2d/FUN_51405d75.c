/* FUN_51405d75 - 0x51405d75 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int * __cdecl FUN_51405d75(int *param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&param_1);
  if (iVar1 < 0) {
    FUN_51405a7c(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5140e068);
  }
  return param_1;
}


