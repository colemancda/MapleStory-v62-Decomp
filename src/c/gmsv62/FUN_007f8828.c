/* FUN_007f8828 - 0x007f8828 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007f8828(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x47c) = param_2;
  *(undefined4 *)(param_1 + 0x15c) = 1;
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x480) = uVar1;
  return;
}


