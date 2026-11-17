/* FUN_00839a39 - 0x00839a39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00839a39(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x208c) = param_2;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(param_1 + 0x2090) = uVar1;
  return;
}


