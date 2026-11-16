/* FUN_5080dcdd - 0x5080dcdd in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __cdecl FUN_5080dcdd(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_5081eb04 == 0) {
    FUN_50809a5b();
  }
  iVar1 = (*DAT_5081eafc)(&local_8,param_2,param_3 != 0);
  if (iVar1 < 0) {
    FUN_5080450d(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50819008);
  }
  FUN_50803d00();
  return param_1;
}


