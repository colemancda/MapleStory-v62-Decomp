/* FUN_004114f3 - 0x004114f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004114f3(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return 1;
}


