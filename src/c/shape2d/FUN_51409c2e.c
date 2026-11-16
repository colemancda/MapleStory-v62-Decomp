/* FUN_51409c2e - 0x51409c2e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51409c2e(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(*(int *)(param_1 + 4) + 4));
  if (LVar1 == 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_1 + 4) + 4));
    FUN_514025ee(*(undefined4 **)(param_1 + 4));
  }
  return;
}


