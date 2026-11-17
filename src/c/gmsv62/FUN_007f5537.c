/* FUN_007f5537 - 0x007f5537 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f5537(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x8c))
                      (param_1,0,0,param_2,0,0,0,0,0,DAT_00980690,DAT_00980694,DAT_00980698,
                       DAT_0098069c);
  }
  return uVar1;
}


