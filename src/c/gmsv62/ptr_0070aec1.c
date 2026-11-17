/* ptr_0070aec1 - 0x0070aec1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall ptr_0070aec1(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1[0x161] = param_2;
  param_1[0x162] = param_3;
  iVar1 = (**(code **)(param_1[-1] + 0x24))(param_2,param_3,0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x34))();
  }
  else {
    FUN_0070b05e();
  }
  return iVar1 != 0;
}


