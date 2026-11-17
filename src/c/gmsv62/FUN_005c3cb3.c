/* FUN_005c3cb3 - 0x005c3cb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005c3cb3(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004030b1();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


