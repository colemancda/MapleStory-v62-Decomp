/* FUN_5040569d - 0x5040569d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_5040569d(void *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_5040606a();
  if (iVar1 < 0) {
    FUN_50405e1f(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50430d08);
  }
  iVar1 = FUN_504060e1(param_1,&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_5042a358(iVar1);
  }
  return local_8;
}


