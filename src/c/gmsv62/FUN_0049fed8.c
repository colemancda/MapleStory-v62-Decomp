/* FUN_0049fed8 - 0x0049fed8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049fed8(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_14 [3];
  int local_8;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_004a2734();
  if (*(int *)(param_1 + 0x60) == 0) {
    local_8 = iVar1 + 4;
    iVar2 = (param_4 + -3) / (local_8 * 2);
    local_14[1] = 3;
    local_14[0] = local_8 * iVar2 * 2 + 3;
    local_14[2] = iVar1 * 2 + 6;
    iVar1 = (*DAT_0097b57c)(local_14,param_4,param_5);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x78);
  }
  else {
    iVar2 = (param_5 + -2) / (iVar1 + 1);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  uVar3 = iVar2 + iVar1;
  if ((-1 < (int)uVar3) && (uVar3 < (uint)(*(int *)(param_1 + 0x6c) + iVar1))) {
    if (param_2 == 0x201) {
      uVar4 = 0x12;
    }
    else {
      if (param_2 != 0x202) {
        return;
      }
      if (*(uint *)(param_1 + 0x80) != uVar3) {
        return;
      }
      uVar4 = 0x11;
    }
    FUN_0081b22c(uVar4,0,uVar3);
  }
  return;
}


