/* FUN_007f5465 - 0x007f5465 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f5465(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 == 0) || (param_5 == 0)) {
    uVar2 = 0x80070057;
  }
  else {
    FUN_004f1993(param_1 + 0xb,param_1[0xf]);
    FUN_004f1993(param_1 + 5,param_1[9]);
    iVar1 = *param_1;
    uVar2 = __ftol();
    uVar2 = __ftol(uVar2);
    uVar2 = (**(code **)(iVar1 + 0x40))(param_1,uVar2);
  }
  return uVar2;
}


