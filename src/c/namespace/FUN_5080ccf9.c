/* FUN_5080ccf9 - 0x5080ccf9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080ccf9(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = (*DAT_5081e6a0)(*(int *)(param_1 + 0x18),0);
    if (iVar1 == 0) {
      local_8 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    iVar1 = (*DAT_5081e6c0)(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      local_8 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  return;
}


