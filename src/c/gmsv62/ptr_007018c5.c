/* ptr_007018c5 - 0x007018c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007018c5(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x5dc) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
    FUN_004deee3(iVar2 + 0xf0,uVar1);
  }
  return;
}


