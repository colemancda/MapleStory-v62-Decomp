/* FUN_0085cb0e - 0x0085cb0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0085cb0e(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = FUN_0085cd50();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_0085cdd3(0xffffffff);
    puVar3 = (uint *)FUN_00524ee9(0xffffffff);
    puVar4 = (undefined4 *)FUN_00524ee9(0xffffffff);
    puVar5 = (undefined4 *)FUN_00524ee9(0xffffffff);
    FUN_004b657c(param_1);
    uVar6 = FUN_0042452b();
    *puVar3 = uVar6 & 0xff;
    uVar7 = FUN_0047c41d(*puVar2,0);
    *puVar4 = uVar7;
    uVar7 = FUN_0047c41d(*puVar2,1);
    *puVar5 = uVar7;
  }
  return;
}


