/* FUN_00402fb9 - 0x00402fb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00402fb9(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 1;
  iVar1 = FUN_00402fed(param_2);
  *param_1 = iVar1;
  if ((iVar1 == 0) && (param_2 != 0)) {
    FUN_00878dfb(0x8007000e);
  }
  return param_1;
}


