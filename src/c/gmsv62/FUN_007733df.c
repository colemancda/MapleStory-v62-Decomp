/* FUN_007733df - 0x007733df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007733df(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar3 = FUN_007839b8(param_1);
      FUN_00783f7c(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839b8(param_1);
      FUN_00783f1f(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar3 = FUN_007839b8(param_1);
      FUN_00784036(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839b8(param_1);
      FUN_00783fd9(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar3 = FUN_007839b8(param_1);
      FUN_007840f0(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839b8(param_1);
      FUN_00784093(param_1 + 0x70,uVar2,uVar3);
    }
  }
  else if (iVar1 == 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar3 = FUN_007839b8(param_1);
      FUN_007841aa(param_1 + 0x70,uVar2,uVar3);
    }
    else {
      uVar3 = FUN_007839b8(param_1);
      FUN_0078414d(param_1 + 0x70,uVar2,uVar3);
    }
  }
  return;
}


