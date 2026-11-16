/* FUN_51407622 - 0x51407622 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4
FUN_51407622(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_5 == 0)) {
    uVar1 = 0x80070057;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x1c) =
           ((*(int *)(param_1 + 0x1c) - param_6) * param_2) / param_3 + param_6;
      *(int *)(param_1 + 0x20) =
           ((*(int *)(param_1 + 0x20) - param_7) * param_4) / param_5 + param_7;
    }
    else {
      FUN_51406adc();
      *(int *)(param_1 + 0x20) = param_7 + (*(int *)(param_1 + 0x20) * param_4) / param_5;
      *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) * param_2) / param_3 + param_6;
      FUN_51406c64();
    }
    uVar1 = 0;
  }
  return uVar1;
}


