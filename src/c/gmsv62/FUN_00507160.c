/* FUN_00507160 - 0x00507160 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00507160(int param_1,undefined4 param_2)

{
  if (param_1 == 0xe2) {
    FUN_00507198(param_2);
  }
  else if (param_1 == 0xe9) {
    FUN_005071bc(param_2);
  }
  else {
    FUN_004eb26f(param_1,param_2);
  }
  return;
}


