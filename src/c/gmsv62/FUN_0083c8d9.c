/* FUN_0083c8d9 - 0x0083c8d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0083c8d9(int param_1)

{
  if (DAT_0097bd7c != 0) {
    FUN_006f956f();
    return;
  }
  *(undefined4 *)(param_1 + 0x2c94) = 2;
  FUN_0083c608();
  FUN_0085aff6(*(undefined4 *)(param_1 + 0x2c84),*(undefined4 *)(param_1 + 0x2c88),
               *(undefined4 *)(param_1 + 0x2c8c),*(undefined4 *)(param_1 + 0x2c90));
  return;
}


