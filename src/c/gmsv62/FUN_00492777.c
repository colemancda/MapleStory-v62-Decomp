/* FUN_00492777 - 0x00492777 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00492777(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  FUN_004927e9(&local_14,param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
  FUN_00817e8a(iVar1 + 0x22 + local_14,iVar2 + 0x22 + local_10,0);
  return;
}


