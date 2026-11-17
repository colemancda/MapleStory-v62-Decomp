/* FUN_0087f0ad - 0x0087f0ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087f0ad(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_2c [24];
  int local_14 [4];
  
  FUN_00886a09(*param_1,local_14,local_2c);
  FUN_00886992((uint)(0 < param_3) + param_2 + (uint)(local_14[0] == 0x2d),param_3 + 1,local_14);
  FUN_0087f10e(param_2,param_3,param_4,local_14,0);
  return param_2;
}


