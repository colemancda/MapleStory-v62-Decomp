/* ptr_007f1026 - 0x007f1026 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007f1026(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))
            (param_1 + 0xc,param_2,param_3,param_4,param_5,param_6);
  return;
}


