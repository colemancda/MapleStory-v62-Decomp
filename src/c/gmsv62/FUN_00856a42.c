/* FUN_00856a42 - 0x00856a42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00856a42(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2cac) == 0) {
LAB_00856a70:
    uVar2 = 1;
  }
  else {
    iVar3 = 0;
    for (uVar4 = 0;
        (iVar1 = *(int *)(param_1 + 0x2cbc), iVar1 != 0 && (uVar4 < *(uint *)(iVar1 + -4)));
        uVar4 = uVar4 + 1) {
      if (param_2 == *(int *)(iVar3 + 0x15 + iVar1)) goto LAB_00856a70;
      iVar3 = iVar3 + 0x25;
    }
    uVar2 = 0;
  }
  return uVar2;
}


