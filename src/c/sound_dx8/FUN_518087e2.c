/* FUN_518087e2 - 0x518087e2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518087e2(int *param_1)

{
  int extraout_EDX;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0x3c))();
  if (extraout_EDX != 0) {
    local_8 = (int *)0x1;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
  }
  return;
}


