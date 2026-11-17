/* FUN_006f9339 - 0x006f9339 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006f9339(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x644);
  iVar3 = 2;
  piVar1 = piVar4;
  do {
    (**(code **)(*(int *)(*piVar1 + 4) + 0x24))(0);
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar1 = (int *)(param_1 + 0x654);
  iVar3 = 3;
  piVar2 = piVar1;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x668) == 0) {
    iVar3 = 2;
    do {
      (**(code **)(*(int *)(*piVar4 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar4 = piVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else if (*(int *)(param_1 + 0x668) == 1) {
    iVar3 = 3;
    do {
      (**(code **)(*(int *)(*piVar1 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      piVar1 = piVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


