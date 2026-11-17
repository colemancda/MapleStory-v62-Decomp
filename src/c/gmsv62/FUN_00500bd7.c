/* FUN_00500bd7 - 0x00500bd7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00500bd7(int param_1,undefined4 param_2)

{
  if (param_1 == 0xe0) {
    FUN_00500ce5(param_2);
  }
  else if (param_1 == 0xe1) {
    FUN_00500d14(param_2);
  }
  else {
    FUN_004eb26f(param_1,param_2);
  }
  return;
}


