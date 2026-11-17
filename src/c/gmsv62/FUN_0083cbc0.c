/* FUN_0083cbc0 - 0x0083cbc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0083cbc0(uint param_1)

{
  undefined4 uVar1;
  
  if (DAT_00979274 == 0) {
LAB_0083cbe5:
    uVar1 = 0;
  }
  else {
    if (param_1 == 9) {
      FUN_006f2894(1);
    }
    else {
      if ((param_1 < 0x70) || (0x7b < param_1)) goto LAB_0083cbe5;
      FUN_006f2b17(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}


