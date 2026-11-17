/* FUN_0048b8d9 - 0x0048b8d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0048b8d9(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048b5b3(param_1);
  if (iVar1 < 0x2d) {
    if (iVar1 == 0x2c) {
      return 0x2c;
    }
    if (0 < iVar1) {
      if (iVar1 < 8) {
        return iVar1;
      }
      if (0x21 < iVar1) {
        if (iVar1 < 0x24) {
          return iVar1;
        }
        if (iVar1 == 0x26) {
          return 0x26;
        }
        if (iVar1 == 0x28) {
          return 0x28;
        }
      }
    }
  }
  else {
    if (iVar1 == 0x35) {
      return 0x35;
    }
    if (iVar1 == 0x38) {
      return 0x38;
    }
    if (iVar1 == 0x39) {
      return 0x39;
    }
  }
  return 0;
}


