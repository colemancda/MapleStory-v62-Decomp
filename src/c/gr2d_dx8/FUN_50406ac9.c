/* FUN_50406ac9 - 0x50406ac9 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


LONG FUN_50406ac9(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x10));
  if ((LVar1 == 0) && (param_1 != 0)) {
    (*(code *)**(undefined4 **)(param_1 + 4))(1);
  }
  return LVar1;
}


