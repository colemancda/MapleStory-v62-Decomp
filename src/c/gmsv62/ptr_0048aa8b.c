/* ptr_0048aa8b - 0x0048aa8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0048aa8b(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x3ea) {
    uVar1 = 1;
  }
  else if (param_1 == 0x3eb) {
    uVar1 = 2;
  }
  else if (param_1 == 0x3ec) {
    uVar1 = 3;
  }
  else if (param_1 == 0x3ed) {
    uVar1 = 4;
  }
  else {
    if (param_1 != 0x3ee) {
      if (param_1 != 0x3ef) {
        return;
      }
      FUN_00458313();
      return;
    }
    uVar1 = 5;
  }
  FUN_00457fca(uVar1);
  return;
}


