/* FUN_0083c91f - 0x0083c91f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0083c91f(int param_1)

{
  if (DAT_0097bd7c != 0) {
    FUN_006f9c0d();
    return;
  }
  *(undefined4 *)(param_1 + 0x2c94) = 3;
  FUN_0083c66d();
  FUN_0085b06d();
  return;
}


