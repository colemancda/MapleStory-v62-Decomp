/* FUN_005d6059 - 0x005d6059 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d6059(int param_1,undefined4 param_2)

{
  if (param_1 == 0xaf) {
    FUN_005d6189(param_2);
  }
  else if (param_1 == 0xb0) {
    FUN_005d634c(param_2);
  }
  else if (param_1 == 0xb1) {
    FUN_005d64a1(param_2);
  }
  else if (param_1 == 0xbc) {
    FUN_005d64e8(param_2);
  }
  else if ((0xb1 < param_1) && (param_1 < 0xc1)) {
    FUN_005d60b8(param_1,param_2);
  }
  return;
}


