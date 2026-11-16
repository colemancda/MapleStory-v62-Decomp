/* FUN_5080df8a - 0x5080df8a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


bool __cdecl FUN_5080df8a(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  int iVar1;
  undefined1 local_14 [16];
  
  if (DAT_5081eb04 == 0) {
    FUN_50809a5b();
  }
  iVar1 = (*DAT_5081eafc)(&param_1,param_2,(param_3 | 0xffffff00) << 8 | (uint)param_4);
  if (iVar1 < 0) {
    FUN_5080450d(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
  }
  return iVar1 == 0;
}


