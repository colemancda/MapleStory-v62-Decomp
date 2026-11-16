/* FUN_504073b2 - 0x504073b2 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_504073b2(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_50438d58)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_5040170b(&DAT_50438f50,(undefined4 *)param_1[1]);
  }
  return;
}


