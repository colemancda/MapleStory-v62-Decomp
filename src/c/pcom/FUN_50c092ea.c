/* FUN_50c092ea - 0x50c092ea in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __fastcall FUN_50c092ea(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_50c15658);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return *(undefined4 *)(param_1 + 4);
}


