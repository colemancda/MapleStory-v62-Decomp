/* FUN_0082ccc4 - 0x0082ccc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0082ccc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 == 0) {
    if (iVar2 != 0) {
      return;
    }
  }
  else if (iVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_2 != 0) {
      if ((iVar2 != 0) && (iVar2 = (*DAT_0097b644)(iVar2), iVar2 == 0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    uVar3 = (*DAT_0097b380)(0,0);
    iVar2 = (*DAT_0097b640)(0xd,&LAB_0082cc5d,uVar3);
  }
  else {
    bVar4 = param_2 == 0;
    param_2 = 0;
    iVar2 = (*DAT_0097b594)(0x61,bVar4,&param_2,0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = (iVar1 != 0) - 1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}


