/* FUN_0053c101 - 0x0053c101 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0053c101(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [16];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x38);
  iVar2 = iVar1 * 6;
  iVar1 = iVar1 * 3 + 6;
  while( true ) {
    if (iVar1 * 2 <= iVar2) {
      return -1;
    }
    FUN_0053c07c(local_14,iVar2);
    iVar1 = (*DAT_0097b57c)(local_14,param_2,param_3);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar1 = (*(int *)(*(int *)(param_1 + 0x68) + 0x38) + 2) * 3;
  }
  return iVar2;
}


