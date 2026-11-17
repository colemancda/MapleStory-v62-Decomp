/* FUN_0045e08c - 0x0045e08c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0045e08c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
  }
  FUN_0045ece0(param_2,iVar1 - param_3,0xffffffff);
  return param_2;
}


