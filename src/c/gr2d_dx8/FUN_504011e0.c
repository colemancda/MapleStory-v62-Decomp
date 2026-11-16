/* FUN_504011e0 - 0x504011e0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_504011e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_50401895();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_50401175();
      FUN_5040170b(&DAT_50438f50,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_50438a3c);
  }
  return iVar2;
}


