/* FUN_0042bc27 - 0x0042bc27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0042bc27(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2,param_3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963d08);
  }
  return iVar1;
}


