/* FUN_50003845 - 0x50003845 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


LONG FUN_50003845(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_500037bb(param_1);
    FUN_5000257e(&DAT_50081f98,param_1);
  }
  return LVar1;
}


