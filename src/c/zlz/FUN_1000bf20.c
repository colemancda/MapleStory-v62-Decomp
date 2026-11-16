/* FUN_1000bf20 - 0x1000bf20 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __fastcall FUN_1000bf20(int param_1)

{
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 8) & 0xf) != 0) {
    local_4 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_4,(ThrowInfo *)&DAT_1000eff8);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  return *(undefined4 *)(param_1 + 4);
}


