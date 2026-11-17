/* FUN_005b1605 - 0x005b1605 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b1605(int param_1,undefined4 param_2)

{
  if (param_1 < 0x38) {
    if (param_1 == 0x37) {
      FUN_005b211d(param_2);
    }
    else if (param_1 == 0x2c) {
      FUN_005b1e5a(param_2);
    }
    else if (param_1 == 0x2d) {
      FUN_005b1ee8(param_2);
    }
    else if (param_1 == 0x34) {
      FUN_005b2089(param_2);
    }
    else if (param_1 == 0x35) {
      FUN_005b20ef(param_2);
    }
  }
  else if (param_1 == 0x38) {
    FUN_005b1f18(param_2);
  }
  else if (param_1 == 0x39) {
    FUN_005b2207(param_2);
  }
  else if (param_1 == 0x3e) {
    FUN_005b1cbc(param_2);
  }
  return;
}


