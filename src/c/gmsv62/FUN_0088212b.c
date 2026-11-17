/* FUN_0088212b - 0x0088212b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_0088212b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = FUN_008821db(param_2);
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_24 = param_1;
    local_c = param_7;
    uStack_8 = param_8;
    FUN_008823f2(param_9,0xffff);
    iVar1 = FUN_00886fe8(&local_24);
    if (iVar1 == 0) {
      FUN_008821b3(param_1);
    }
    return (float10)(double)CONCAT44(uStack_8,local_c);
  }
  FUN_008823f2(param_9,0xffff);
  FUN_008821b3(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


