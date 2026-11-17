/* FUN_006090f8 - 0x006090f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006090f8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x94);
  iVar1 = 2;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0xa4);
  iVar1 = 4;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0xc4);
  iVar1 = 4;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 0x24))(0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xec) + 4) + 0x24))(0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xf4) + 4) + 0x24))(0);
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x94);
    iVar1 = 2;
    do {
      (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xf4) + 4) + 0x24))(1);
    FUN_004b3b8f(0);
    iVar1 = *(int *)(param_1 + 0xec);
    *(undefined4 *)(iVar1 + 0x88) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 1;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    (**(code **)(*(int *)(*(int *)(param_1 + 0xec) + 4) + 0x24))(1);
  }
  else if (iVar1 == 1) {
    piVar2 = (int *)(param_1 + 0xa4);
    iVar1 = 4;
    do {
      (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 0x24))(1);
    FUN_004b3b8f(0);
    if (*(int *)(*(int *)(param_1 + 0x100) + 0x18) == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 0x24))(0);
    }
    else {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbc) + 4) + 0x24))(0);
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    piVar2 = (int *)(param_1 + 0xc4);
    iVar1 = 4;
    do {
      (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 0x24))(1);
    FUN_004b3b8f(0);
    *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x88) = 0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0xec) + 4) + 0x24))(1);
    FUN_004b3b8f(0);
    if (*(int *)(*(int *)(param_1 + 0x104) + 0x20) == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xd4) + 4) + 0x24))(0);
    }
    else {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x24))(0);
    }
  }
  FUN_004b3b8f(0);
  return;
}


