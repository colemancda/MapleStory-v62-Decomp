/* FUN_00474666 - 0x00474666 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined8 FUN_00474666(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_3;
  iVar1 = (*DAT_0097b460)(param_1,param_2,&local_8,param_4,param_2);
  if (iVar1 == -1) {
    iVar2 = (*DAT_0097b49c)();
    if (iVar2 != 0) {
      param_4 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_4,&DAT_008f9b80);
    }
  }
  return CONCAT44(local_8,iVar1);
}


