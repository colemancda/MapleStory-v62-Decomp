/* FUN_5001243b - 0x5001243b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __fastcall FUN_5001243b(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_50016da8);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return *(undefined4 *)(param_1 + 4);
}


