/* FUN_500028d1 - 0x500028d1 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_500028d1(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_50081da8)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_5000257e(&DAT_50081f98,(undefined4 *)param_1[1]);
  }
  return;
}


