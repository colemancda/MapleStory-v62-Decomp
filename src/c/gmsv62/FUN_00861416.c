/* FUN_00861416 - 0x00861416 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00861416(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  uVar4 = *(uint *)(param_1 + 0x88);
  iVar2 = 0x7fffffff;
  while (uVar4 != 0) {
    iVar1 = *(int *)(uVar4 + 4);
    iVar3 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    if ((*(int *)(iVar1 + 0xc) + 8 <= *(int *)(iVar1 + 0x14)) &&
       (iVar5 = (*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x14)) / 2 - param_2,
       iVar3 = (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x10)) / 2 - param_3,
       iVar3 = iVar3 * iVar3 + iVar5 * iVar5, iVar3 < iVar2)) {
      iVar2 = iVar3;
      local_8 = iVar1;
    }
  }
  return local_8;
}


