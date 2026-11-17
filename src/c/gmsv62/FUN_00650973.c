/* FUN_00650973 - 0x00650973 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_00650973(undefined2 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 8;
  iVar1 = FUN_00432e58(param_2);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 == 0) && (param_2 != 0)) {
    FUN_00878dfb(0x8007000e);
  }
  return param_1;
}


