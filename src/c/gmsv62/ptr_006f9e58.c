/* ptr_006f9e58 - 0x006f9e58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006f9e58(int param_1)

{
  if (param_1 == 0x202) {
    if (*(int *)(DAT_00978368 + 0x2c94) == 2) {
      FUN_0083c91f();
    }
    else if (*(int *)(DAT_00978368 + 0x2c94) == 3) {
      FUN_0083c8d9();
    }
  }
  else if (param_1 == 0x205) {
    FUN_0083c94d();
  }
  return;
}


