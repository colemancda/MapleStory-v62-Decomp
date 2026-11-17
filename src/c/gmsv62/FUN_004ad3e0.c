/* FUN_004ad3e0 - 0x004ad3e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ad3e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c) / 0x10;
  if (iVar1 < 0x10) {
    iVar1 = 0x10;
  }
  iVar1 = iVar1 * param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
  FUN_004ad01d();
  FUN_004b3daf();
  if (iVar1 < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = **(int **)(param_1 + 0x24);
    uVar2 = 0x12e;
  }
  else {
    if (iVar1 < 1) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = **(int **)(param_1 + 0x24);
    uVar2 = 0x12f;
  }
  (**(code **)(iVar1 + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar2,uVar3);
  return;
}


