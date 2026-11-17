/* FUN_0077e521 - 0x0077e521 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077e521(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)(param_1 + 0x590);
  iVar1 = 6;
  piVar5 = piVar6;
  do {
    (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(0);
    piVar5 = piVar5 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar5 = (int *)(param_1 + 0x5c0);
  iVar1 = 9;
  piVar4 = piVar5;
  do {
    (**(code **)(*(int *)(*piVar4 + 4) + 0x24))(0);
    piVar4 = piVar4 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar4 = (int *)(param_1 + 0x608);
  iVar1 = 0xc;
  piVar3 = piVar4;
  do {
    (**(code **)(*(int *)(*piVar3 + 4) + 0x24))(0);
    piVar3 = piVar3 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar3 = (int *)(param_1 + 0x698);
  iVar1 = 0xb;
  piVar2 = piVar3;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0x770);
  iVar1 = 2;
  piVar7 = piVar2;
  do {
    (**(code **)(*(int *)(*piVar7 + 4) + 0x24))(0);
    piVar7 = piVar7 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 == 0) {
    iVar1 = 6;
    do {
      (**(code **)(*(int *)(*piVar6 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar6 = piVar6 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar1 == 1) {
    iVar1 = 9;
    do {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar5 = piVar5 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar1 == 2) {
    iVar1 = 0xc;
    do {
      (**(code **)(*(int *)(*piVar4 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar1 == 3) {
    iVar1 = 0xb;
    do {
      (**(code **)(*(int *)(*piVar3 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar3 = piVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar1 == 4) {
    iVar1 = 2;
    do {
      (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


