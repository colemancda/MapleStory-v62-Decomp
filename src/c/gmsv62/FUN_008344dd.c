/* FUN_008344dd - 0x008344dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008344dd(int param_1)

{
  if (DAT_00978358 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x32dc) == 0) && (*(int *)(param_1 + 0x32f4) == 0)) {
    FUN_007b1e21();
    return;
  }
  FUN_007b1ae2();
  return;
}


