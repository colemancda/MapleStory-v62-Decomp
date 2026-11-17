/* FUN_005c6409 - 0x005c6409 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005c6409(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 < 0) || (0x1a < param_2)) {
LAB_005c6492:
    iVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3b4) + param_2 * 0x14;
    if (*(int *)(*(int *)(param_1 + 0x3b4) + 8 + param_2 * 0x14) == 0) {
      if ((*(int *)(param_1 + 0x274) == 0) || (iVar3 = *(int *)(param_1 + 0x160), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 0x15c);
      }
      uVar2 = FUN_004b8c9b(iVar3 + 0xc,*(undefined4 *)(iVar3 + 0x14));
      FUN_0040a66d(uVar2,param_2,iVar1);
      if (*(int *)(iVar1 + 8) == 0) goto LAB_005c6492;
    }
    iVar3 = 0;
    uVar4 = *(uint *)(iVar1 + 0xc);
    while (uVar4 != 0) {
      iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      iVar3 = iVar3 + *(int *)(*(int *)(uVar4 + 4) + 0x4c);
      uVar4 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
    }
  }
  return iVar3;
}


