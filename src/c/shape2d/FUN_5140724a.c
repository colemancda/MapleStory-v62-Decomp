/* FUN_5140724a - 0x5140724a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_5140724a(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_51406adc();
  }
  return uVar1;
}


