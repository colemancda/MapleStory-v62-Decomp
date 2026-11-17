/* FUN_0077999e - 0x0077999e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0077999e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0040e53d();
  iVar2 = FUN_0040e53d();
  iVar2 = iVar1 + 0x12 + iVar2;
  iVar1 = 0;
  do {
    (*DAT_0097b504)(local_14,6,iVar2,0xe3,iVar2 + 0x12);
    iVar3 = (*DAT_0097b57c)(local_14,param_2,param_3);
    if (iVar3 != 0) {
      return iVar1 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x12;
  } while (iVar1 < 5);
  return 0;
}


