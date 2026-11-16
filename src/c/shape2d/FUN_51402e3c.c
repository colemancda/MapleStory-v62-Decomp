/* FUN_51402e3c - 0x51402e3c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51402e3c(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_51411898)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_5140256c(&DAT_51411a90,(undefined4 *)param_1[1]);
  }
  return;
}


