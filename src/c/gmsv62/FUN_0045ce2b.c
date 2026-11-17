/* FUN_0045ce2b - 0x0045ce2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0045ce2b(undefined4 param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 < 2) {
    param_3 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_3,&DAT_008f9b80);
  }
  uVar1 = *param_2 + 2;
  if (param_3 < uVar1) {
    param_3 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_3,&DAT_008f9b80);
  }
  FUN_00414edd(param_2 + 1,(uint)*param_2);
  return uVar1;
}


