/* FUN_00866e79 - 0x00866e79 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00866e79(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_0086726e();
  uVar1 = FUN_00424561();
  for (uVar1 = uVar1 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    puVar2 = (undefined4 *)FUN_00867290(0xffffffff);
    uVar3 = FUN_0042459a();
    *puVar2 = uVar3;
    uVar3 = FUN_0042459a();
    puVar2[1] = uVar3;
  }
  return;
}


