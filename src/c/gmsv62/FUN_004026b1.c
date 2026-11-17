/* FUN_004026b1 - 0x004026b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004026b1(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0040295c(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


