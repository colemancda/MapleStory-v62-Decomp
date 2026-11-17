/* FUN_00474a8b - 0x00474a8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00474a8b(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = (*DAT_0097b438)(*(int *)(param_1 + 0x18),0);
    if (iVar1 == 0) {
      local_8 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_8,&DAT_008f9b80);
    }
  }
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    iVar1 = (*DAT_0097b458)(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      local_8 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_8,&DAT_008f9b80);
    }
  }
  return;
}


