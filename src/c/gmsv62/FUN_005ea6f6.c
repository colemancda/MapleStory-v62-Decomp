/* FUN_005ea6f6 - 0x005ea6f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_005ea6f6(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004133f0();
  *(uint *)(param_1 + 0xd0) = uVar1 % 6000 + 3000;
  return uVar1 / 6000;
}


