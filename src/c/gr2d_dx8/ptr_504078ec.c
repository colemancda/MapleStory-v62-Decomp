/* ptr_504078ec - 0x504078ec in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


LONG ptr_504078ec(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0xc));
  if ((LVar1 == 0) && (param_1 != 8)) {
    (*(code *)**(undefined4 **)(param_1 + 4))(1);
  }
  return LVar1;
}


