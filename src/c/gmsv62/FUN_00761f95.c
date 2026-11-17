/* FUN_00761f95 - 0x00761f95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00761f95(int param_1)

{
  FUN_006b0ec7(param_1);
  if (*(int *)(param_1 + 0x5e4) != 0) {
    FUN_00815de9();
    FUN_00766bbf();
  }
  if (*(int *)(param_1 + 0x5ec) != 0) {
    FUN_00815de9();
    FUN_00766bd5();
  }
  if (*(int *)(param_1 + 0x5f4) != 0) {
    FUN_00815de9();
    FUN_00766beb();
  }
  FUN_0078a218();
  return;
}


