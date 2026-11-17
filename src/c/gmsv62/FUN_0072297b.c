/* FUN_0072297b - 0x0072297b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0072297b(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x58c + param_2 * 8;
  (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x24))(param_3);
  (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x1c))(param_3);
  return;
}


