/* FUN_004745b0 - 0x004745b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004745b0(int param_1)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8 = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_008f9b80);
  }
  return;
}


