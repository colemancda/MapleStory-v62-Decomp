/* FUN_5080df14 - 0x5080df14 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined8 __cdecl FUN_5080df14(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (*DAT_5081e6c8)(param_1,0,&local_8,1,0);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5081e704)();
    if (iVar2 != 0) {
      param_1 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  return CONCAT44(local_8,iVar1);
}


