/* FUN_51404f95 - 0x51404f95 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __fastcall FUN_51404f95(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0xf) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5140e3a0);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  return *(undefined4 *)(param_1 + 4);
}


