/* FUN_005eb2b4 - 0x005eb2b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005eb2b4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = -1;
  *param_2 = -1;
  if (((*(int *)(param_1 + 0xd0) < 1) && (*(int *)(param_1 + 0x18) == 0)) &&
     (iVar1 = FUN_005ea7e8(), iVar1 == 0)) {
    FUN_005ea6f6();
    iVar1 = *(int *)(param_1 + 0x98);
    iVar4 = 0;
    if (*(int *)(iVar1 + 0x60) != 0) {
      iVar4 = *(int *)(*(int *)(iVar1 + 0x60) + -4);
    }
    iVar4 = iVar4 - *(int *)(iVar1 + 100);
    iVar5 = 0;
    if (*(int *)(iVar1 + 0x5c) != 0) {
      iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + -4);
    }
    if (iVar5 + iVar4 != 0) {
      uVar2 = FUN_004133f0();
      iVar5 = (int)(((ulonglong)uVar2 % 0x32) % (ulonglong)(uint)(iVar5 + iVar4));
      iVar1 = *(int *)(*(int *)(param_1 + 0x98) + 0x30);
      if (iVar1 < 1) {
        iVar1 = -1;
      }
      if ((iVar5 < iVar4) && (iVar5 + 2 != iVar1)) {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + 0x60) + 4 + iVar5 * 8);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(iVar1 + -4), uVar2 == 0)) {
          iVar4 = -1;
        }
        else {
          uVar3 = FUN_004133f0();
          iVar4 = (int)(((ulonglong)uVar3 % 0x32) % (ulonglong)uVar2);
        }
        *param_2 = iVar5 + 2;
      }
      else {
        iVar4 = iVar5 - iVar4;
      }
      *param_3 = iVar4;
      return 1;
    }
  }
  return 0;
}


