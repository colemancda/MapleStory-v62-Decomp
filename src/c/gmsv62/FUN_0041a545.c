/* FUN_0041a545 - 0x0041a545 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0041a545(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar1 = uVar2 + *(int *)(uVar2 - 4) * 4;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_0041bc53(0);
    }
    FUN_00402b41(*param_1 - 4);
    *param_1 = 0;
  }
  return;
}


