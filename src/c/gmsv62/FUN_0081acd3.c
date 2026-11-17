/* FUN_0081acd3 - 0x0081acd3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081acd3(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = param_2;
  if (param_2 < 3) {
    return;
  }
  if (param_2 < 6) {
    uVar3 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
    if ((uVar2 == 4) || (iVar4 = (*DAT_0097b6f4)(uVar3,0,0,0), iVar4 == 0)) {
      FUN_0045ebca();
    }
    else {
      FUN_0045ebec(iVar4,1,(int)&param_2 + 3);
      iVar1 = *(int *)(param_1 + 0xc0);
      (*DAT_0097b6f4)(uVar3,0,iVar1,iVar4);
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (((int)(uVar2 - *(int *)(iVar1 + 0x10)) < 0) ||
         ((int)((*(int *)(iVar1 + 0x14) - uVar2) + *(int *)(iVar1 + 0x10)) < 1)) {
        iVar4 = (uVar2 / *(uint *)(iVar1 + 0x14)) * *(uint *)(iVar1 + 0x14);
        *(int *)(iVar1 + 0x10) = iVar4;
        (*DAT_0097b6f0)(uVar3,0x16,0,iVar4);
      }
    }
    (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),uVar3);
    FUN_0081affb();
    return;
  }
  if (param_2 != 8) {
    return;
  }
  FUN_0081af69();
  return;
}


