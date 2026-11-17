/* FUN_005ea7e8 - 0x005ea7e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_005ea7e8(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa0);
  }
  else {
    uVar1 = FUN_0043f6fe();
  }
  return uVar1 < 0x80000000;
}


