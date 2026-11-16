/* FUN_50002ae7 - 0x50002ae7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


LONG FUN_50002ae7(int param_1)

{
  int *piVar1;
  LONG LVar2;
  
  FUN_500024f7();
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 4));
  if (*(LONG *)(param_1 + 4) == 2) {
    InterlockedIncrement(&DAT_5001da54);
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return LVar2;
}


