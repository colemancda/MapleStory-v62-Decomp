/* FUN_0070a0ad - 0x0070a0ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0070a0ad(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00814891(param_2,param_3);
  if ((*(int *)(param_1 + 0x59c) != 0) && (*(int *)(*(int *)(param_1 + 0x59c) + 0x584) == 0)) {
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    *(undefined4 *)(param_1 + 0x578) = 1;
    FUN_004deee3(iVar2 + -0x34,iVar3 + -5 + iVar1 / 2);
    *(undefined4 *)(param_1 + 0x578) = 0;
  }
  return;
}


