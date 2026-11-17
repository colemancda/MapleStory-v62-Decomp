/* FUN_0058bab7 - 0x0058bab7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0058bab7(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (param_4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00815f0f(param_2,param_3,param_4);
    if (((iVar1 != 0) && (*param_4 == 0)) && (*(int *)(param_1 + 0x34) != 0)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


