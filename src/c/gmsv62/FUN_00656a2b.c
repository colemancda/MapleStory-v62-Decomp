/* FUN_00656a2b - 0x00656a2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00656a2b(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *(int *)(uVar1 - 4) * 0x5c + uVar1;
    for (; uVar1 < uVar2; uVar1 = uVar1 + 0x5c) {
      FUN_0065763e();
    }
    FUN_00402b41(*param_1 - 4);
    *param_1 = 0;
  }
  return;
}


