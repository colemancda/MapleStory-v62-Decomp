/* ptr_5000bd13 - 0x5000bd13 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_5000bd13(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 1) || (((2 < param_2 && (param_2 != 0x201)) && (param_2 != 0x402)))) {
    uVar1 = 0x80070057;
  }
  else {
    param_1[6] = param_2;
    uVar1 = (**(code **)(*param_1 + 0x5c))(param_1,param_1[7]);
  }
  return uVar1;
}


