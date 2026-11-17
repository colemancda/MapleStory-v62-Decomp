/* FUN_007c065b - 0x007c065b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c065b(int param_1,undefined4 param_2)

{
  if (param_1 == 0x78) {
    FUN_007c06ca(param_2);
  }
  else if (param_1 == 0x79) {
    FUN_007c08bb(param_2);
  }
  else if ((param_1 < 0x7a) || (0x8c < param_1)) {
    if ((param_1 < 0x8d) || (0x9f < param_1)) {
      if ((0x9f < param_1) && (param_1 < 0xae)) {
        FUN_007c0bf8(param_1,param_2);
      }
    }
    else {
      FUN_007c0a42(param_1,param_2);
    }
  }
  else {
    FUN_007c09a6(param_1,param_2);
  }
  return;
}


