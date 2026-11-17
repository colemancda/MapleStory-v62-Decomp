/* FUN_00772cd7 - 0x00772cd7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00772cd7(int param_1,int param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  _memset(param_3,0,0x40);
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0xd4), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar3 + iVar1) == param_2) {
      FUN_00772d62(uVar2 * 0x40 + *(int *)(param_1 + 0xd4));
      return 0;
    }
    iVar3 = iVar3 + 0x40;
  }
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x150), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)))
      ; uVar2 = uVar2 + 1) {
    if (*(int *)(iVar3 + iVar1) == param_2) {
      FUN_00772d62(uVar2 * 0x40 + *(int *)(param_1 + 0x150));
      return 1;
    }
    iVar3 = iVar3 + 0x40;
  }
  return 0xffffffff;
}


