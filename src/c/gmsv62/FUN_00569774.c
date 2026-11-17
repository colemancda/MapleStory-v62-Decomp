/* FUN_00569774 - 0x00569774 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00569774(int param_1)

{
  if (((*(int *)(param_1 + 0x13c) == 3) && (*(int *)(param_1 + 400) != 0)) && (DAT_0097940c != 0)) {
    FUN_00580c83(*(int *)(param_1 + 400) + 4);
    FUN_0043f1a0(0);
  }
  return;
}


