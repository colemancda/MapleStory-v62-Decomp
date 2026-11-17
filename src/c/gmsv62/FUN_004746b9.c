/* FUN_004746b9 - 0x004746b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004746b9(int *param_1)

{
  int extraout_EDX;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0x3c))();
  if (extraout_EDX != 0) {
    local_8 = (int *)0x1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_008f9b80);
  }
  return;
}


