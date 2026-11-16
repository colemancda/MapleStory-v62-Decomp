/* FUN_51407591 - 0x51407591 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51407591(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    FUN_51406c64();
  }
  return 0;
}


