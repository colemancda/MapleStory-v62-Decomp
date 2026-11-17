/* FUN_007786a2 - 0x007786a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007786a2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    FUN_00878dfb(0x80004003);
  }
  local_8 = *(undefined4 *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0040e53d();
  iVar2 = FUN_0040e53d();
  iVar3 = FUN_0040e53d();
  iVar4 = FUN_0040e53d();
  iVar4 = iVar1 + iVar2 + iVar3 + 0x26 + iVar4;
  iVar1 = 0;
  do {
    (*DAT_0097b504)(local_18,6,iVar4,0xe3,iVar4 + 0x12);
    iVar2 = (*DAT_0097b57c)(local_18,param_2,param_3);
    if (iVar2 != 0) {
      return iVar1 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x12;
  } while (iVar1 < 5);
  return 0;
}


