/* FUN_005930c8 - 0x005930c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005930c8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_18 [16];
  int local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + 0x1c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + -4);
  }
  iVar4 = 0;
  local_8 = param_1;
  if (0 < iVar3) {
    do {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar1 = FUN_00592cf6(local_18,iVar4);
      iVar2 = (*DAT_0097b57c)(uVar1,uVar5,uVar6);
      if (iVar2 != 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return -1;
}


