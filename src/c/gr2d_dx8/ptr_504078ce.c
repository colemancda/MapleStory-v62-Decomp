/* ptr_504078ce - 0x504078ce in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


LONG ptr_504078ce(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x10));
  if ((LVar1 == 0) && (param_1 != 4)) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1);
  }
  return LVar1;
}


