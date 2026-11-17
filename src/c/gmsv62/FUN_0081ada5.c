/* FUN_0081ada5 - 0x0081ada5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081ada5(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_5;
  
  uVar2 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
  if ((param_2 & 0x10) == 0) {
    FUN_0045ebca();
  }
  else {
    uVar3 = (*DAT_0097b6f8)(uVar2,0x10,0,0);
    FUN_0045ebec(uVar3,1,&local_5);
    (*DAT_0097b6f8)(uVar2,0x10,*(undefined4 *)(param_1 + 0xb8),uVar3);
  }
  if ((param_2 & 0x20) == 0) {
    FUN_0047cf76();
  }
  else {
    uVar4 = (*DAT_0097b6f8)(uVar2,0x20,0,0);
    FUN_0047d03c(uVar4 >> 2,1,&local_5);
    (*DAT_0097b6f8)(uVar2,0x20,*(undefined4 *)(param_1 + 0xbc),uVar4);
  }
  if ((param_2 & 0x800) == 0) {
    FUN_0067a091();
  }
  else {
    iVar5 = (*DAT_0097b6f8)(uVar2,0x800,0,0);
    piVar1 = (int *)(param_1 + 0xc4);
    FUN_0081b263(iVar5 + 1,1,&local_5);
    (*DAT_0097b6f8)(uVar2,0x800,*piVar1,iVar5);
    *(undefined1 *)(*piVar1 + iVar5) = 0;
    FUN_0045ebca();
    FUN_0081b1a4(*piVar1);
  }
  if ((param_2 & 8) == 0) {
    FUN_0067a091();
    *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  }
  else {
    uVar4 = (*DAT_0097b6f8)(uVar2,8,0,0);
    FUN_0081b263(uVar4 + 1,1,&local_5);
    (*DAT_0097b6f8)(uVar2,8,*(int *)(param_1 + 200),uVar4);
    *(undefined1 *)(*(int *)(param_1 + 200) + uVar4) = 0;
    if ((param_2 & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
    }
    else {
      uVar6 = (*DAT_0097b6f8)(uVar2,0x80,0,0);
      *(uint *)(param_1 + 0xcc) = uVar6 & 0xffff;
      if ((int)uVar4 < (int)(uVar6 & 0xffff)) {
        *(uint *)(param_1 + 0xcc) = uVar4;
      }
    }
    FUN_0081affb();
  }
  if (param_2 == 0) {
    FUN_0081affb();
  }
  (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),uVar2);
  return;
}


