/* FUN_0087a034 - 0x0087a034 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087a034(uint param_1,uint param_2)

{
  uint uVar1;
  
  for (param_2 = param_2 & 0x1f; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = param_1 & 1;
    param_1 = param_1 >> 1;
    if (uVar1 != 0) {
      param_1 = param_1 | 0x80000000;
    }
  }
  return;
}


