/* FUN_5080c4b8 - 0x5080c4b8 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __fastcall FUN_5080c4b8(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0xf) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  return *(undefined4 *)(param_1 + 4);
}


