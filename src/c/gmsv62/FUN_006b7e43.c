/* FUN_006b7e43 - 0x006b7e43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006b7e43(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_004184ca(param_2,0xffffffff);
  if (param_3 != 0) {
    uVar1 = FUN_0087a007(&DAT_00965698);
    FUN_0046febf(&DAT_00965698,uVar1);
    uVar1 = FUN_0087a007(param_3);
    FUN_0046febf(param_3,uVar1);
  }
  return *param_1;
}


