/* FUN_007770bc - 0x007770bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007770bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar3 = FUN_007839d0(param_1);
      FUN_0078426c(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839d0(param_1);
      FUN_00784207(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar3 = FUN_007839d0(param_1);
      FUN_00784336(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839d0(param_1);
      FUN_007842d1(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar3 = FUN_007839d0(param_1);
      FUN_00784400(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839d0(param_1);
      FUN_0078439b(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar3 = FUN_007839d0(param_1);
      FUN_007844ca(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839d0(param_1);
      FUN_00784465(param_1 + 0x70,uVar2,uVar3);
    }
  }
  return;
}


