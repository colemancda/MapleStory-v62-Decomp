/* FUN_00621716 - 0x00621716 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00621716(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [16];
  int local_8;
  
  iVar1 = 0;
  local_8 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + -4);
  }
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 4 + iVar1 * 8);
    } while (*(int *)(iVar2 + 8) == 0);
    (*DAT_0097b504)(local_18,*(int *)(iVar2 + 0xc) - param_4,*(int *)(iVar2 + 0x10) + -0x32,
                    *(int *)(iVar2 + 0xc) + param_4,*(int *)(iVar2 + 0x10) + 0x32);
    iVar3 = (*DAT_0097b57c)(local_18,param_2,param_3);
    param_1 = local_8;
  } while (iVar3 == 0);
  return iVar2;
}


