/* FUN_007bce39 - 0x007bce39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007bce39(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [4];
  int *local_8;
  
  iVar2 = FUN_007d1e08();
  iVar3 = FUN_00455c59(local_c);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  if (local_8 != (int *)0x0) {
    FUN_0045e7c2(0);
  }
  if ((*(int *)(param_1 + 0x1e84) != 0) && (-1 < iVar2 - *(int *)(param_1 + 0x1e8c))) {
    iVar2 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4));
    if (iVar2 == *(int *)(param_1 + 0x1e88)) {
      local_8 = (int *)0x0;
      iVar2 = FUN_00650dae(uVar1,*(undefined4 *)(param_1 + 0x1e84),&local_8);
      if ((0 < iVar2) && (*local_8 == 0x406849)) {
        FUN_007a71f1(local_8,iVar2,0,0x406849,*(undefined4 *)(param_1 + 0x1e90),0,0);
      }
    }
    *(undefined4 *)(param_1 + 0x1e84) = 0;
  }
  return;
}


