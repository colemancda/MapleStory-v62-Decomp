/* ptr_0075f0f0 - 0x0075f0f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0075f0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x58c) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar1 = iVar1 + 0x78;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(iVar1);
    FUN_004deee3(uVar2,iVar1);
  }
  return;
}


