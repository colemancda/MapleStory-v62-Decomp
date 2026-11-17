/* FUN_0087fbbb - 0x0087fbbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087fbbb(undefined2 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined2 uVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_0087fb6a(uVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


