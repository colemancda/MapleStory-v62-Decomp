/* FUN_5080c81e - 0x5080c81e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080c81e(int param_1)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8 = 1;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
  }
  return;
}


