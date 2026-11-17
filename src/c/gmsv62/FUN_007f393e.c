/* FUN_007f393e - 0x007f393e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f393e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_2 + 0x18) - iVar2) * (iVar3 - iVar4) -
      (iVar1 - iVar2) * (*(int *)(param_2 + 0x14) - iVar4) < 1) {
    if ((iVar3 - iVar4) * (param_4 - iVar2) - (iVar1 - iVar2) * (param_3 - iVar4) < 1)
    goto LAB_007f39c5;
LAB_007f39ec:
    uVar5 = 1;
  }
  else {
    if (0 < (iVar3 - iVar4) * (param_4 - iVar2) - (iVar1 - iVar2) * (param_3 - iVar4)) {
LAB_007f39c5:
      if (0 < (*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc)) *
              (param_4 - *(int *)(param_2 + 0x10)) -
              (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x10)) *
              (param_3 - *(int *)(param_2 + 0xc))) goto LAB_007f39ec;
    }
    uVar5 = 0;
  }
  return uVar5;
}


