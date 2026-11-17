/* FUN_00862bcc - 0x00862bcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00862bcc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = *(int *)(param_1 + 0x94) * 0x1c + -0x14 + param_1; param_1 + 8U <= uVar1;
      uVar1 = uVar1 - 0x1c) {
    FUN_00862c91();
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


