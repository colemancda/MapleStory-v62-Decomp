/* FUN_00727b4b - 0x00727b4b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00727b4b(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar2 = FUN_00455c59(local_10);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_c != 0) {
    FUN_0045e7c2(0);
    local_c = 0;
  }
  local_8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  FUN_00483340((int)sVar1);
  iVar3 = FUN_00727c20(*param_2);
  if ((iVar3 != 0) || (iVar2 = FUN_00650dae(iVar2,*param_2,0), iVar2 < 1)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 200);
  if (local_8 != iVar2) {
    if (iVar2 == 1) {
      iVar2 = FUN_00727d03(0);
    }
    else {
      if (iVar2 == 2) {
        iVar2 = FUN_00727d03(1);
      }
      else {
        if (iVar2 != 3) {
          return 1;
        }
        iVar2 = FUN_00727d03(2);
        iVar3 = FUN_00727d03(1);
        iVar2 = iVar2 + iVar3;
      }
      iVar3 = FUN_00727d03(0);
      iVar2 = iVar2 + iVar3;
    }
    if (iVar2 < 1) {
      return 0;
    }
  }
  return 1;
}


