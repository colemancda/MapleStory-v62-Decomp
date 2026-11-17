/* FUN_006c15c2 - 0x006c15c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006c15c2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [8];
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = FUN_00455c59(local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x59c) * 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  iVar3 = *(int *)(param_1 + 0x598);
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x598) + 0x18;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    if (iVar2 <= iVar3) break;
    FUN_006c1bf9(iVar3,local_14);
    iVar2 = (*DAT_0097b57c)(local_14,param_2,param_3);
    if (iVar2 != 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}


