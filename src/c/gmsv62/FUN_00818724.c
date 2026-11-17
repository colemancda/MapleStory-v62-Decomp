/* FUN_00818724 - 0x00818724 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00818724(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_008195d7(0);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}


