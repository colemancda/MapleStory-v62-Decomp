/* FUN_006f91c1 - 0x006f91c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006f91c1(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  undefined1 local_c [4];
  int *local_8;
  
  piVar3 = (int *)(param_1 + 0x5ac);
  local_10 = 0x13;
  local_8 = piVar3;
  do {
    (**(code **)(*(int *)(*local_8 + 4) + 0x24))(0);
    local_8 = local_8 + 2;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if (*(int *)(param_1 + 0x668) == 1) {
    iVar2 = FUN_00455c59(local_c);
    iVar2 = *(int *)(iVar2 + 4);
    if (local_8 != (int *)0x0) {
      FUN_0045e7c2(0);
      local_8 = (int *)0x0;
    }
    bVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
    if (bVar1 < 0x1e) {
      (**(code **)(*(int *)(*piVar3 + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5b4) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5bc) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5dc) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5fc) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x614) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x62c) + 4) + 0x24))(1);
      FUN_004b3b8f(0);
    }
    else {
      iVar2 = 0x13;
      do {
        (**(code **)(*(int *)(*piVar3 + 4) + 0x24))(1);
        FUN_004b3b8f(0);
        piVar3 = piVar3 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


