/* FUN_5040356d - 0x5040356d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __cdecl FUN_5040356d(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_504027b5();
  if (iVar1 < 0) {
    FUN_50405e1f(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50430d08);
  }
  return param_2;
}


