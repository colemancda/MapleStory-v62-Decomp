/* FUN_00576e3b - 0x00576e3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00576e3b(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_2 != 0x3ea) || (param_3 < 300)) || (0x130 < param_3)) {
    if (param_3 != 100) {
      return;
    }
    (**(code **)(*param_1 + 0x20))(param_2);
    return;
  }
  iVar2 = *(int *)(param_1[0x19] + 0x160);
  iVar1 = FUN_00576edb();
  iVar1 = iVar2 + iVar1 * -3;
  if (iVar1 < 9) {
    if (-1 < iVar1) goto LAB_00576e9d;
    iVar1 = FUN_00576edb();
  }
  else {
    iVar1 = FUN_00576edb();
    iVar1 = iVar1 + 2;
  }
  iVar2 = iVar1 * 3 + iVar2 % 3;
LAB_00576e9d:
  FUN_005753a5(iVar2);
  return;
}


