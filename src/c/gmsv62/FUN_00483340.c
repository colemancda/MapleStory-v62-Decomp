/* FUN_00483340 - 0x00483340 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00483340(int param_1)

{
  if (param_1 % 100 == 0) {
    return 1;
  }
  param_1 = param_1 % 10;
  if (param_1 == 0) {
    return 2;
  }
  if (param_1 == 1) {
    return 3;
  }
  if (param_1 == 2) {
    return 4;
  }
  return 0;
}


