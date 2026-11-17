/* FUN_004505d7 - 0x004505d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004505d7(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *(int *)(uVar1 - 4) * 0x3c + uVar1;
    for (; uVar1 < uVar2; uVar1 = uVar1 + 0x3c) {
      FUN_004513bc();
    }
    FUN_00402b41(*param_1 - 4);
    *param_1 = 0;
  }
  return;
}


