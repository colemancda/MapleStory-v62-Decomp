/* FUN_5140828f - 0x5140828f in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_5140828f(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  
  if ((param_4 == 0) || (param_4 == 10)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 0x20) = param_3;
    }
    else {
      FUN_51407a34();
    }
  }
  else {
    FUN_514072cf();
    iVar1 = FUN_51406adc();
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_51407fe1();
    if (iVar1 == 0) {
      return -0x7ff8ffa9;
    }
    FUN_5140833b();
  }
  return 0;
}


