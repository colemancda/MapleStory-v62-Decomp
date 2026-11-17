/* FUN_007655b1 - 0x007655b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007655b1(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00814891(param_2,param_3);
  if (*(int *)(param_1 + 0x5e4) == 0) {
    if (*(int *)(param_1 + 0x5ec) == 0) goto LAB_0076561c;
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(uVar1);
  }
  FUN_004deee3(iVar2 + 0x10e,uVar1);
LAB_0076561c:
  if (*(int *)(param_1 + 0x5f4) != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar2 = iVar2 + (-(uint)(*(int *)(param_1 + 0x618) != 0) & 0xa2) + 0x22;
    iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(iVar2);
    FUN_004deee3(iVar3 + 0x10e,iVar2);
  }
  return;
}


