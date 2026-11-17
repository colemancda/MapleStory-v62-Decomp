/* FUN_006b0e95 - 0x006b0e95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006b0e95(int param_1)

{
  if (*(int *)(param_1 + 0x57c) != 0) {
    FUN_00815de9();
    FUN_006b4156();
  }
  FUN_006b0ec7(param_1);
  FUN_0078a218();
  return;
}


