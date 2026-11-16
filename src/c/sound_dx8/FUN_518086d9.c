/* FUN_518086d9 - 0x518086d9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518086d9(int param_1)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8 = 1;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
  }
  return;
}


