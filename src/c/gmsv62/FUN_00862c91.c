/* FUN_00862c91 - 0x00862c91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00862c91(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00862c62(0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


