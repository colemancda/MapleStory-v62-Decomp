/* FUN_00862b53 - 0x00862b53 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00862b53(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *puVar1;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x14);
  if (1 < *(int *)(param_1 + 0x94)) {
    iVar2 = *(int *)(param_1 + 0x94) + -1;
    do {
      puVar1 = puVar1 + 7;
      FUN_00862aa0(param_1 + 0x9c,puVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  return;
}


