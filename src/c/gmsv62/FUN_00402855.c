/* FUN_00402855 - 0x00402855 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00402855(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_1 + 4) + 4));
  }
  return;
}


