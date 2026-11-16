/* ptr_5080ab1b - 0x5080ab1b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_5080ab1b(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (uint *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = *(uint *)(*(int *)(param_1 + 0x1c) + 8) >> 2 & 1;
    uVar1 = 0;
  }
  return uVar1;
}


