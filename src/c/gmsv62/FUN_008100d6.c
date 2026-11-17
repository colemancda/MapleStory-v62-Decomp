/* FUN_008100d6 - 0x008100d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008100d6(int param_1,uint param_2,undefined4 param_3)

{
  if (((param_1 == 0x7d1) && (299 < param_2)) && (param_2 < 0x131)) {
    FUN_008161f1(0);
  }
  else {
    FUN_0080ebbb(param_1,param_2,param_3);
  }
  return;
}


