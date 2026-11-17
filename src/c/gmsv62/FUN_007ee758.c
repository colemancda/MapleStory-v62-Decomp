/* FUN_007ee758 - 0x007ee758 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ee758(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0;
      (*(int *)(param_1 + 0x678) != 0 && (uVar1 < *(uint *)(*(int *)(param_1 + 0x678) + -4)));
      uVar1 = uVar1 + 1) {
    FUN_004991c5(0);
  }
  if ((-1 < (int)param_2) &&
     ((*(int *)(param_1 + 0x678) != 0 && (param_2 < *(uint *)(*(int *)(param_1 + 0x678) + -4))))) {
    FUN_004991c5(1);
  }
  return;
}


