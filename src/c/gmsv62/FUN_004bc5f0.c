/* FUN_004bc5f0 - 0x004bc5f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004bc5f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_004033a1(param_2);
  FUN_008163ca();
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb();
  }
  uVar5 = 10;
  uVar1 = FUN_0040e53d(10);
  uVar2 = FUN_0040e48b(uVar1);
  iVar3 = FUN_0040e53d(uVar2);
  uVar4 = 600U - iVar3 >> 1;
  iVar3 = FUN_0040e48b(uVar4);
  FUN_0081420c(800U - iVar3 >> 1,uVar4,uVar2,uVar1,uVar5);
  return;
}


