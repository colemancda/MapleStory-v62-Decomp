/* FUN_005b752b - 0x005b752b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005b752b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x744)) {
    do {
      iVar2 = *(int *)(param_1 + 0x7e4) + (iVar3 / *(int *)(param_1 + 0x7dc)) * 0x43;
      iVar1 = *(int *)(param_1 + 0x7e0) + (iVar3 % *(int *)(param_1 + 0x7dc)) * 0x38;
      (*DAT_0097b504)(local_14,iVar1,iVar2,iVar1 + 0x31,iVar2 + 0x3e);
      iVar1 = (*DAT_0097b57c)(local_14,param_2,param_3);
      if (iVar1 != 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x744));
  }
  return -1;
}


