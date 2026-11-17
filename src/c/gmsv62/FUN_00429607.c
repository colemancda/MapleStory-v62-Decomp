/* FUN_00429607 - 0x00429607 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00429607(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 100))(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963de8);
  }
  return;
}


