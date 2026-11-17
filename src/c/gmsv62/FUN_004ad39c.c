/* FUN_004ad39c - 0x004ad39c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ad39c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_2;
  FUN_004ad01d();
  FUN_004b3daf();
  if (param_2 < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = **(int **)(param_1 + 0x24);
    uVar2 = 300;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = **(int **)(param_1 + 0x24);
    uVar2 = 0x12d;
  }
  (**(code **)(iVar1 + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar2,uVar3);
  return;
}


