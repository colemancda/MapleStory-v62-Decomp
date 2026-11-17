/* FUN_00653ee7 - 0x00653ee7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00653ee7(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_006509a1(param_2);
  iVar2 = FUN_00413367(iVar1 + 0x160,*(undefined4 *)(iVar1 + 0x168));
  if (iVar2 < 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar4 = 0;
    if ((iVar1 == 0) || (*(int *)(iVar1 + -4) == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      if (iVar1 != 0) {
        uVar4 = *(uint *)(iVar1 + -4);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x18) + (param_3 % uVar4) * 4);
    }
  }
  else {
    uVar3 = FUN_00413367(iVar1 + 0x160,*(undefined4 *)(iVar1 + 0x168));
  }
  return uVar3;
}


