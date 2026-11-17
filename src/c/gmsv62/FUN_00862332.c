/* FUN_00862332 - 0x00862332 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00862332(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0x94) = iVar2 + 1;
  puVar1 = (undefined4 *)(iVar2 * 0x1c + 8 + param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  FUN_008623dc(param_2 + 4);
  puVar1[6] = param_2[6];
  if (0 < *(int *)(param_1 + 4)) {
    *(int *)param_2[6] = param_1;
  }
  if (*(int *)(param_1 + 0x94) == 1) {
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined4 *)(param_1 + 0x9c) = *param_2;
    *(undefined4 *)(param_1 + 0xa0) = param_2[1];
    *(undefined4 *)(param_1 + 0xa4) = param_2[2];
    *(undefined4 *)(param_1 + 0xa8) = param_2[3];
  }
  else if (*(int *)(param_1 + 0x98) != 0) {
    FUN_00862aa0(param_1 + 0x9c,param_2);
  }
  return;
}


