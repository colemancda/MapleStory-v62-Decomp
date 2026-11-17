/* FUN_0079d11c - 0x0079d11c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0079d11c(int param_1,undefined *param_2,undefined4 param_3)

{
  if (((param_1 / 10000 != 0xcf) && (param_1 / 1000 != 0x139d)) &&
     (param_2 != (undefined *)0x3eba9c)) {
    if ((param_2 == (undefined *)0x2f785e) || (param_2 == (undefined *)0x30fefe)) {
      return 0x3c;
    }
    if (param_2 != (undefined *)0x4faa8f) {
      if ((param_2 != &DAT_004c4f2b) && (param_2 != (undefined *)0x4f7f90)) {
        return param_3;
      }
      return 0xf0;
    }
  }
  return 0x78;
}


