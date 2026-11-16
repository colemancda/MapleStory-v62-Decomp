/* FUN_51401959 - 0x51401959 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


LONG FUN_51401959(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_51401923(param_1);
    FUN_5140256c(&DAT_51411a90,param_1);
  }
  return LVar1;
}


