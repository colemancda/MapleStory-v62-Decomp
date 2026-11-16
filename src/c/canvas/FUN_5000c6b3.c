/* FUN_5000c6b3 - 0x5000c6b3 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4
FUN_5000c6b3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  undefined4 uVar1;
  
  if (param_5 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0x30))
                      (param_5,param_2,param_3,param_4,param_1,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13,param_14);
  }
  return uVar1;
}


