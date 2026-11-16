/* FUN_5080c951 - 0x5080c951 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined8 __fastcall FUN_5080c951(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (*DAT_5081e6c4)(*(undefined4 *)(param_1 + 0x10),&local_c);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5081e704)();
    if (iVar2 != 0) {
      local_8 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  return CONCAT44(local_c,iVar1);
}


