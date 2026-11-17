/* FUN_00609358 - 0x00609358 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00609358(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = param_2;
  piVar2 = (int *)(param_1 + 0x94);
  local_8 = 2;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(param_2);
    piVar2 = piVar2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = (int *)(param_1 + 0xa4);
  param_2 = 4;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(iVar1);
    piVar2 = piVar2 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  piVar2 = (int *)(param_1 + 0xc4);
  param_2 = 4;
  do {
    (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(iVar1);
    piVar2 = piVar2 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 0x1c))(iVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 0x1c))(iVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x1c))(iVar1);
  if (iVar1 != 0) {
    FUN_004ab3a1(&DAT_00978474);
  }
  *(uint *)(param_1 + 0xf8) = (uint)(iVar1 == 0);
  return;
}


