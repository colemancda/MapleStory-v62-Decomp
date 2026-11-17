/* FUN_00653ddc - 0x00653ddc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00653ddc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  local_c = 1000;
  iVar2 = FUN_004b8f25(&local_c,&local_8);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = local_8;
  }
  param_1 = 0x3e9;
  iVar2 = FUN_004b8f25(&param_1,&local_8);
  if (iVar2 != 0) {
    iVar4 = iVar4 + local_8;
  }
  param_1 = 0x3ea;
  iVar2 = FUN_004b8f25(&param_1,&local_8);
  if (iVar2 != 0) {
    iVar4 = iVar4 + local_8;
  }
  uVar3 = FUN_0045f03e(iVar1 + 0x33,*(undefined4 *)(iVar1 + 0x35));
  uVar3 = uVar3 & 0xff;
  if (6 < uVar3) {
    uVar3 = 7;
  }
  return (uVar3 - iVar4) + -1;
}


