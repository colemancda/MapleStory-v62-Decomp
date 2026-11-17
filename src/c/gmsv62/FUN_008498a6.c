/* FUN_008498a6 - 0x008498a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008498a6(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0;
      (*(int *)(param_1 + 0x3228) != 0 && (uVar1 < *(uint *)(*(int *)(param_1 + 0x3228) + -4)));
      uVar1 = uVar1 + 1) {
    FUN_00815de9();
  }
  FUN_0083f0a6();
  return;
}


