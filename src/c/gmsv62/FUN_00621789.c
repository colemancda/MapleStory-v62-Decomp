/* FUN_00621789 - 0x00621789 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00621789(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + -4);
  }
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4 + iVar1 * 8);
    iVar3 = (*DAT_0097b4bc)(param_2,*(undefined4 *)(iVar2 + 4));
  } while (iVar3 != 0);
  return iVar2;
}


