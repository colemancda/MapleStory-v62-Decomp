/* FUN_00616a66 - 0x00616a66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00616a66(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0xb0;
  }
  else if (param_2 == 1) {
    param_1 = param_1 + 200;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


