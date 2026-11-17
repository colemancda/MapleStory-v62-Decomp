/* ptr_00731410 - 0x00731410 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00731410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x5b4) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar1 = iVar1 + 0x60;
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(iVar1);
    FUN_004deee3(iVar2 + 0xaa,iVar1);
  }
  return;
}


