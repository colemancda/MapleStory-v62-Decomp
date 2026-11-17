/* FUN_0083c94d - 0x0083c94d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0083c94d(int param_1)

{
  if (DAT_0097bd7c != 0) {
    FUN_006f9a31();
    FUN_006f9c4f();
    return;
  }
  FUN_0085cdbd();
  *(undefined4 *)(param_1 + 0x2c94) = 0;
  FUN_0083c6d2();
  FUN_0085b06d();
  return;
}


