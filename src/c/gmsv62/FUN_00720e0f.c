/* FUN_00720e0f - 0x00720e0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00720e0f(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = 0x25;
    }
    else if (param_1 == 2) {
      uVar1 = 0xad;
    }
  }
  return uVar1;
}


