/* FUN_005f1378 - 0x005f1378 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f1378(int param_1,undefined4 param_2)

{
  if (param_1 == 0x4e) {
    FUN_005f13f9(param_2);
  }
  else if (param_1 == 0xc2) {
    FUN_005f1584(param_2);
  }
  else if (param_1 == 0xc3) {
    FUN_005f1616(param_2);
  }
  else if (param_1 == 0xc4) {
    FUN_005f1674(param_2);
  }
  else {
    if ((0xc4 < param_1) && (param_1 < 200)) {
      FUN_005f14cf(param_1,param_2);
    }
    if ((199 < param_1) && (param_1 < 0xc9)) {
      FUN_005f156d(param_1,param_2);
    }
  }
  return;
}


