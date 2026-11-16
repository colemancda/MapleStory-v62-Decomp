/* FUN_51402e0b - 0x51402e0b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


LONG __fastcall FUN_51402e0b(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_51402e3c(param_1);
      FUN_5140256c(&DAT_51411a90,param_1);
    }
    LVar1 = 0;
  }
  else {
    LVar1 = param_1[2];
  }
  return LVar1;
}


