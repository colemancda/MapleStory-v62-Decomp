/* FUN_006f9cc6 - 0x006f9cc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006f9cc6(int param_1)

{
  if (*(int *)(param_1 + 0x670) != 0) {
    FUN_006f9fdd(0);
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  if (*(int *)(param_1 + 0x678) != 0) {
    FUN_006fa00b(0);
    *(undefined4 *)(param_1 + 0x678) = 0;
  }
  FUN_006b0ec7(param_1);
  FUN_0078a218();
  return;
}


