/* FUN_0076fa45 - 0x0076fa45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0076fa45(int param_1,int param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  _memset(param_3,0,0x50);
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar3 + iVar1) == param_2) {
      FUN_0076d1a5(uVar2 * 0x50 + *(int *)(param_1 + 0x28));
      return 0;
    }
    iVar3 = iVar3 + 0x50;
  }
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x2c), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar3 + iVar1) == param_2) {
      FUN_0076d1a5(uVar2 * 0x50 + *(int *)(param_1 + 0x2c));
      return 1;
    }
    iVar3 = iVar3 + 0x50;
  }
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar1 + iVar3) == param_2) {
      FUN_0076d1a5(uVar2 * 0x50 + *(int *)(param_1 + 0x30));
      return 2;
    }
    iVar3 = iVar3 + 0x50;
  }
  return 0xffffffff;
}


