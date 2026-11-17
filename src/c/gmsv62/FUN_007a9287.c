/* FUN_007a9287 - 0x007a9287 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a9287(code *param_1)

{
  if ((int)param_1 < 0x4e23ea) {
    if (param_1 == (code *)&DAT_004e23e9) {
      return 800;
    }
    if (((param_1 == (code *)0x111ae9) || (param_1 == (code *)0x12a189)) ||
       (param_1 == (code *)0x142829)) {
      return 2000;
    }
    if (param_1 != (code *)0x3ee1b0) {
      if (param_1 == (code *)0x4dd5cb) {
        return 1000;
      }
      if (param_1 != ptr_004dfcda) {
        return 0;
      }
      return 400;
    }
  }
  else {
    if (param_1 == ptr_004e23ec) {
      return 900;
    }
    if (param_1 != ptr_004e23ec) {
      if (param_1 == ptr_004e23ec) {
        return 800;
      }
      if (param_1 == ptr_004f5c6a) {
        return 1000;
      }
      if (param_1 == (code *)0x4f5c6e) {
        return 2000;
      }
      if ((int)param_1 < 0x4f837c) {
        return 0;
      }
      if (0x4f837d < (int)param_1) {
        return 0;
      }
      return 0x1c2;
    }
  }
  return 500;
}


