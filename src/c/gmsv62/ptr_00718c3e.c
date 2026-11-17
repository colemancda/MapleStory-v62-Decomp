/* ptr_00718c3e - 0x00718c3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00718c3e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00814891(param_2,param_3);
  if (((*(int *)(param_1 + 0xb0) != 0) || (*(int *)(param_1 + 0xb8) != 0)) ||
     (*(int *)(param_1 + 0xc0) != 0)) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
    FUN_004deee3(iVar2 + 0xf3,uVar1);
  }
  return;
}


