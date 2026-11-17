/* FUN_00413793 - 0x00413793 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00413793(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar1 = uVar2 + *(int *)(uVar2 - 4) * 8;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 8) {
      FUN_00418585(0);
    }
    FUN_00402b41(*param_1 - 4);
    *param_1 = 0;
  }
  return;
}


