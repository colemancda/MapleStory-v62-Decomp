/* FUN_007ded8f - 0x007ded8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007ded8f(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_14 [16];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    do {
      uVar4 = param_2;
      uVar5 = param_3;
      uVar1 = FUN_007ded43(local_14,iVar3);
      iVar2 = (*DAT_0097b57c)(uVar1,uVar4,uVar5);
      if (iVar2 != 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x7c));
  }
  return -1;
}


