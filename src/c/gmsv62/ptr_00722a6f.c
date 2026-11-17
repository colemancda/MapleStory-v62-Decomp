/* ptr_00722a6f - 0x00722a6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00722a6f(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x5f8) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = FUN_00720e0f(*(undefined4 *)(param_1 + 0x5f0));
    iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
    FUN_004deee3(iVar2 + iVar3,uVar1);
  }
  return;
}


