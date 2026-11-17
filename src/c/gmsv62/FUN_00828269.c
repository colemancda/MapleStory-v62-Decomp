/* FUN_00828269 - 0x00828269 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00828269(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0x100) {
    if (DAT_00978364 != 0) {
      FUN_00818d3e(0x100,param_2,param_3);
    }
  }
  else if (((0x1ff < param_1) && (param_1 < 0x20b)) && (DAT_00978364 != 0)) {
    FUN_0081874a(param_1,param_2,param_3);
  }
  return;
}


