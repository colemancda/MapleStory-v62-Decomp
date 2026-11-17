/* FUN_00580c83 - 0x00580c83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00580c83(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00566b10(0);
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  iVar2 = FUN_00566b10(1);
  iVar3 = FUN_00566b10(2);
  *(int *)(param_1 + 0x19) = iVar3 + (iVar2 / 10) * 10;
  uVar1 = FUN_00566b10(3);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  uVar1 = FUN_00566b10(4);
  *(undefined4 *)(param_1 + 0x2d) = uVar1;
  uVar1 = FUN_00566b10(5);
  *(undefined4 *)(param_1 + 0x31) = uVar1;
  uVar1 = FUN_00566b10(6);
  *(undefined4 *)(param_1 + 0x35) = uVar1;
  uVar1 = FUN_00566b10(7);
  *(undefined4 *)(param_1 + 0x45) = uVar1;
  return;
}


