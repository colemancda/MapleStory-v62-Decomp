/* FUN_006217c6 - 0x006217c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006217c6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -4);
  }
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 4 + iVar1 * 8);
    (*DAT_0097b504)(local_14,*(int *)(iVar2 + 0xc) + -0x32,*(int *)(iVar2 + 0x10) + -0x32,
                    *(int *)(iVar2 + 0xc) + 0x32,*(int *)(iVar2 + 0x10) + 0x32);
    iVar3 = (*DAT_0097b57c)(local_14,param_2,param_3);
  } while (iVar3 == 0);
  return iVar2;
}


