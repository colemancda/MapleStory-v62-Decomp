/* FUN_004deebf - 0x004deebf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004deebf(int param_1)

{
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 5;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 5;
  FUN_004deee3(*(undefined4 *)(param_1 + 0x8c),*(int *)(param_1 + 0x90) + 5);
  return;
}


