/* ptr_005f8a96 - 0x005f8a96 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005f8a96(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  param_3[1] = 0x8d;
  if (param_1 == 0) {
    *param_3 = 0x1b6;
  }
  else {
    *param_3 = 0x216;
    *param_2 = 5;
  }
  return;
}


