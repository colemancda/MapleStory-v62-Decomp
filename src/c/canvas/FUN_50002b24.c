/* FUN_50002b24 - 0x50002b24 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_50002b24(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_500024f7();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_50002ab9();
      FUN_5000257e(&DAT_50081f98,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_5001da54);
  }
  return iVar2;
}


