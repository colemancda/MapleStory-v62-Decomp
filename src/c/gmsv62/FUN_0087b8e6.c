/* FUN_0087b8e6 - 0x0087b8e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087b8e6(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_4 == 10) && (param_2 < 1)) && (param_2 < 0)) {
    uVar1 = 1;
  }
  FUN_0087b917(param_1,param_2,param_3,param_4,uVar1);
  return param_3;
}


