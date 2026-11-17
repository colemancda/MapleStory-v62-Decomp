/* FUN_00444db8 - 0x00444db8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00444db8(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963de8);
  }
  return;
}


