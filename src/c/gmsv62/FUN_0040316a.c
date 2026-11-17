/* FUN_0040316a - 0x0040316a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0040316a(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_0097b650)(*param_1 + -4);
  }
  if (param_1[1] != 0) {
    FUN_00402b41(param_1[1]);
  }
  return;
}


