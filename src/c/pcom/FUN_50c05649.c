/* FUN_50c05649 - 0x50c05649 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c05649(void *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_50c05bee();
  if (iVar1 < 0) {
    FUN_50c061b4(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50c14eb0);
  }
  iVar1 = FUN_50c05dae(param_1,&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_50c101c4(iVar1);
  }
  return local_8;
}


