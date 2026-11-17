/* FUN_0043f6a6 - 0x0043f6a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043f6a6(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_1[0x121] = 0;
  param_1[0x10a] = param_2;
  if (param_2 != 0) {
    FUN_00879c20(param_1 + 0xd9,param_3,0xc4);
  }
  FUN_00441501(0);
  uVar1 = FUN_0043f6fe();
  if (0x7fffffff < uVar1) {
    (**(code **)(*param_1 + 0xc))(param_1[0x12d],1);
  }
  return;
}


