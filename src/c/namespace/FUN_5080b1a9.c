/* FUN_5080b1a9 - 0x5080b1a9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080b1a9(void)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_5080b7bb();
  if (iVar1 < 0) {
    FUN_5080450d(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50819008);
  }
  return local_8;
}


