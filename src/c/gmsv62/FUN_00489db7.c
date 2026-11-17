/* FUN_00489db7 - 0x00489db7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00489db7(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0048ba7b(0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


