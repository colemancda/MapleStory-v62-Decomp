/* FUN_518066f9 - 0x518066f9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __fastcall FUN_518066f9(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0x14) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return *(undefined4 *)(param_1 + 4);
}


