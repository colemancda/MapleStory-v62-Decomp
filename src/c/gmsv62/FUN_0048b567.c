/* FUN_0048b567 - 0x0048b567 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0048b567(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048b5b3(param_1);
  if (iVar1 < 0x2c) {
    if (0x28 < iVar1) {
      return iVar1;
    }
    if (0xb < iVar1) {
      if (iVar1 < 0x20) {
        return iVar1;
      }
      if (iVar1 == 0x21) {
        return 0x21;
      }
      if (iVar1 == 0x24) {
        return 0x24;
      }
      if (iVar1 == 0x27) {
        return 0x27;
      }
    }
  }
  else if (0x2c < iVar1) {
    if (iVar1 < 0x33) {
      return iVar1;
    }
    if (iVar1 == 0x33) {
      return 0x33;
    }
    if (iVar1 == 0x34) {
      return 0x34;
    }
  }
  return 0;
}


