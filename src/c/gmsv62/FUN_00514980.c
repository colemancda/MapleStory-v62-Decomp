/* FUN_00514980 - 0x00514980 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00514980(int param_1,undefined4 param_2)

{
  if (param_1 == 0xfb) {
    FUN_005149c0(param_2);
  }
  else if (param_1 == 0xfc) {
    FUN_00514ffe(param_2);
  }
  else {
    FUN_004eb26f(param_1,param_2);
  }
  return;
}


