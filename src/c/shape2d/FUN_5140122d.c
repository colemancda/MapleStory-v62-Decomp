/* FUN_5140122d - 0x5140122d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


LONG FUN_5140122d(int param_1)

{
  int *piVar1;
  LONG LVar2;
  
  FUN_5140126a();
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 4));
  if (*(LONG *)(param_1 + 4) == 2) {
    InterlockedIncrement(&DAT_51411574);
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return LVar2;
}


