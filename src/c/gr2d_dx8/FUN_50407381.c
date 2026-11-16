/* FUN_50407381 - 0x50407381 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


LONG __fastcall FUN_50407381(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_504073b2(param_1);
      FUN_5040170b(&DAT_50438f50,param_1);
    }
    LVar1 = 0;
  }
  else {
    LVar1 = param_1[2];
  }
  return LVar1;
}


