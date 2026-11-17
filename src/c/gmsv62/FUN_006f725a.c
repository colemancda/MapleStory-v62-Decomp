/* FUN_006f725a - 0x006f725a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006f725a(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(DAT_00978368 + 0x2c94);
  if (*(int *)(param_1 + 0x668) == 0) {
    if (iVar1 == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x584) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(0);
      piVar2 = (int *)(param_1 + 0x644);
      iVar1 = 2;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x584) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(1);
      piVar2 = (int *)(param_1 + 0x644);
      iVar1 = 2;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(0);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 2) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x584) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(0);
      piVar2 = (int *)(param_1 + 0x644);
      iVar1 = 2;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 3) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x584) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(0);
      piVar2 = (int *)(param_1 + 0x644);
      iVar1 = 2;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x668) == 1) {
    if (iVar1 == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5a4) + 4) + 0x1c))(0);
      piVar2 = (int *)(param_1 + 0x5ac);
      iVar1 = 0x13;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      piVar2 = (int *)(param_1 + 0x654);
      iVar1 = 3;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5a4) + 4) + 0x1c))(0);
      piVar2 = (int *)(param_1 + 0x5ac);
      iVar1 = 0x13;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      piVar2 = (int *)(param_1 + 0x654);
      iVar1 = 3;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 2) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5a4) + 4) + 0x1c))(1);
      piVar2 = (int *)(param_1 + 0x5ac);
      iVar1 = 0x13;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(0);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar1 = 3;
      piVar2 = (int *)(param_1 + 0x654);
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(0);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (iVar1 == 3) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5a4) + 4) + 0x1c))(1);
      piVar2 = (int *)(param_1 + 0x5ac);
      iVar1 = 0x13;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      piVar2 = (int *)(param_1 + 0x654);
      iVar1 = 3;
      do {
        (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


