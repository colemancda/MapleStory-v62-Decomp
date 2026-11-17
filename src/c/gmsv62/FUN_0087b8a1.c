/* FUN_0087b8a1 - 0x0087b8a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087b8a1(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
  }
  FUN_0087b845(param_1,param_2,param_3,uVar1);
  return param_2;
}


