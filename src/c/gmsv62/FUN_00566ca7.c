/* FUN_00566ca7 - 0x00566ca7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00566ca7(int param_1,undefined4 param_2)

{
  if (param_1 < 10) {
    if (param_1 == 9) {
      FUN_00568d6c(param_2);
      return;
    }
    switch(param_1) {
    case 0:
      FUN_00566e0d(param_2);
      break;
    case 1:
      FUN_005678d0(param_2);
      break;
    default:
      goto switchD_00566cc5_caseD_2;
    case 3:
      FUN_00567c4e(param_2);
      break;
    case 4:
      FUN_00569d96(param_2);
      break;
    case 5:
      FUN_00569eb3(param_2);
      break;
    case 6:
      FUN_00569f18(param_2);
      break;
    case 7:
      FUN_0056a259(param_2);
      break;
    case 8:
      FUN_005687f5(param_2);
    }
  }
  else {
    if (param_1 == 10) {
      FUN_00567c7f(param_2);
      return;
    }
    if (param_1 == 0xb) {
      FUN_00567ecd(param_2);
      return;
    }
    if (param_1 == 0xc) {
      FUN_0056903c(param_2);
      return;
    }
    if (param_1 == 0xd) {
      FUN_005681eb(param_2);
      return;
    }
    if (param_1 == 0xe) {
      FUN_005684e7(param_2);
      return;
    }
    if (param_1 == 0xf) {
      FUN_005682c6(param_2);
      return;
    }
    if (param_1 == 0x16) {
      FUN_0056930c(param_2);
      return;
    }
switchD_00566cc5_caseD_2:
    if ((0x5b < param_1) && (param_1 < 0x5f)) {
      FUN_0065bbb6(param_1,param_2);
    }
  }
  return;
}


