/* FUN_004245d2 - 0x004245d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004245d2(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3;
  if ((uint)*(ushort *)(param_1 + 0xc) - *(int *)(param_1 + 0x14) < param_3) {
    param_3 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_3,&DAT_008f9b80);
  }
  FUN_00879c20(param_2,*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14),param_3);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar1;
  return;
}


