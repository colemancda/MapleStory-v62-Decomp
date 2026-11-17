/* ptr_006f2854 - 0x006f2854 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006f2854(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x5e0) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
    FUN_004deee3(iVar2 + 0x9d,uVar1);
  }
  return;
}


