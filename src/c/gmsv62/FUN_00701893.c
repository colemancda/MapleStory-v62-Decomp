/* FUN_00701893 - 0x00701893 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00701893(int param_1)

{
  FUN_006b0ec7(param_1);
  if (*(int *)(param_1 + 0x5dc) != 0) {
    FUN_00815de9();
    FUN_00705ddf();
  }
  FUN_0078a218();
  return;
}


