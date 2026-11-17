/* FUN_00862c03 - 0x00862c03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00862c03(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x94) * 0x1c + -0x14 + param_1);
  puVar2 = (undefined4 *)(param_2 * 0x1c + 8 + param_1);
  if (puVar2 < puVar1) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    FUN_008623dc(puVar1 + 4);
    puVar2[6] = puVar1[6];
  }
  FUN_00862c91();
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


