/* FUN_514075c9 - 0x514075c9 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_514075c9(int param_1,int param_2,int param_3)

{
  if (*(void **)(param_1 + 0x24) == (void *)0x0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  }
  else {
    FUN_514075f5(*(void **)(param_1 + 0x24),param_2,param_3);
  }
  return 0;
}


