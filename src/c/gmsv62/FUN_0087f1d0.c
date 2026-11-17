/* FUN_0087f1d0 - 0x0087f1d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087f1d0(undefined8 *param_1,int param_2,int param_3)

{
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  
  FUN_00886a09(*param_1,&local_14,local_2c);
  FUN_00886992((uint)(local_14 == 0x2d) + param_2,local_10 + param_3,&local_14);
  FUN_0087f225(param_2,param_3,&local_14,0);
  return param_2;
}


