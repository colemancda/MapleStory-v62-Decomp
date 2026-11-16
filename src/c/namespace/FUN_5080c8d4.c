/* FUN_5080c8d4 - 0x5080c8d4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined8 __cdecl
FUN_5080c8d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_3;
  iVar1 = (*DAT_5081e6c8)(param_1,param_2,&local_8,param_4,param_2);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5081e704)();
    if (iVar2 != 0) {
      param_4 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_4,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  return CONCAT44(local_8,iVar1);
}


