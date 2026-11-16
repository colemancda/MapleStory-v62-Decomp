/* FUN_5180665f - 0x5180665f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __fastcall FUN_5180665f(int param_1)

{
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0xf) != 0) {
    local_8 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  return *(undefined4 *)(param_1 + 4);
}


