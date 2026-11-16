/* FUN_51802f88 - 0x51802f88 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51802f88(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_518017b5();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_51802f1d();
      FUN_51801ac1(&DAT_5181fdb0,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_5181f8a0);
  }
  return iVar2;
}


