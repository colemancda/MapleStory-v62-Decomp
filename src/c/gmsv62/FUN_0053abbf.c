/* FUN_0053abbf - 0x0053abbf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0053abbf(int param_1)

{
  if (*(int *)(param_1 + 0x3a8) != 0) {
    FUN_0045e7f1(0);
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  FUN_0045e5f5();
  return;
}


