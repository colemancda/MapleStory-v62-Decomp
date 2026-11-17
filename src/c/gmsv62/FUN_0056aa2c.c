/* FUN_0056aa2c - 0x0056aa2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0056aa2c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar1 = *(int *)(uVar2 - 4) * 0x280 + uVar2;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 0x280) {
      FUN_0056bb5d();
    }
    FUN_00402b41(*param_1 - 4);
    *param_1 = 0;
  }
  return;
}


