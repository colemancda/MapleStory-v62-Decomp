/* FUN_004746e3 - 0x004746e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined8 __fastcall FUN_004746e3(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (*DAT_0097b45c)(*(undefined4 *)(param_1 + 0x10),&local_c);
  if (iVar1 == -1) {
    iVar2 = (*DAT_0097b49c)();
    if (iVar2 != 0) {
      local_8 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_8,&DAT_008f9b80);
    }
  }
  return CONCAT44(local_c,iVar1);
}


