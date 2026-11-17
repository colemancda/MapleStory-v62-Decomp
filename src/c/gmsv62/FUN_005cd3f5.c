/* FUN_005cd3f5 - 0x005cd3f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cd3f5(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_007d1e08();
  uVar3 = FUN_0042459a();
  sVar1 = FUN_00424561();
  puVar4 = (undefined4 *)FUN_005d13f0();
  *puVar4 = uVar3;
  puVar4[1] = sVar1 + iVar2;
  if (sVar1 + iVar2 == 0) {
    puVar4[1] = 1;
  }
  puVar4[2] = 0;
  return;
}


