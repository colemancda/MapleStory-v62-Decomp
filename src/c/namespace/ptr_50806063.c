/* ptr_50806063 - 0x50806063 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


LONG ptr_50806063(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 4));
  if ((LVar1 == 0) && ((int *)(param_1 + -4) != (int *)0x0)) {
    (**(code **)(*(int *)(param_1 + -4) + 0x10))(1);
  }
  return LVar1;
}


