/* FUN_00776a20 - 0x00776a20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00776a20(int param_1,int param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  _memset(param_3,0,0x44);
  piVar3 = (int *)(param_1 + 0xd0);
  do {
    iVar5 = 0;
    for (uVar2 = 0; (iVar1 = *piVar3, iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
        uVar2 = uVar2 + 1) {
      if (*(int *)(iVar1 + iVar5) == param_2) {
        FUN_00776a8e(*(int *)(iVar4 * 0x80 + 0xd0 + param_1) + uVar2 * 0x44);
        return iVar4;
      }
      iVar5 = iVar5 + 0x44;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x20;
  } while (iVar4 < 5);
  return -1;
}


