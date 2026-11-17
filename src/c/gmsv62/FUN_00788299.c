/* FUN_00788299 - 0x00788299 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00788299(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  param_3 = param_3 - param_2;
  for (iVar1 = param_3 / 2; 0 < iVar1; iVar1 = iVar1 + -1) {
    FUN_00789649(param_1,iVar1,param_3,param_2,param_4);
  }
  if (1 < param_3) {
    iVar1 = (param_3 + param_2) * 0x44;
    do {
      FUN_0078975b(*param_1 + param_2 * 0x44,iVar1 + -0x44 + *param_1);
      param_3 = param_3 + -1;
      FUN_00789649(param_1,1,param_3,param_2,param_4);
      iVar1 = iVar1 + -0x44;
    } while (1 < param_3);
  }
  return;
}


