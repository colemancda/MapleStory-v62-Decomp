/* ptr_007107e8 - 0x007107e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007107e8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    if (param_1 == 6) {
      uVar1 = 1;
      goto LAB_007107ff;
    }
    if (param_1 != 7) {
      return;
    }
  }
  uVar1 = 0;
LAB_007107ff:
  FUN_0071082b(uVar1);
  return;
}


