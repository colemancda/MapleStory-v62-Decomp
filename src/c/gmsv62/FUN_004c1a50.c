/* FUN_004c1a50 - 0x004c1a50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c1a50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004c2076(1);
  if (iVar1 != 0) {
    if (((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
        (iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(&DAT_009794f4), iVar1 == 0)) ||
       (*(int *)(param_1 + 0x1c) == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x1c) + -4;
    }
    if (iVar1 != 0) {
      if (*(int *)(param_3 + 0x59c) == *(int *)(param_1 + 0x10)) {
        uVar2 = FUN_0060f740(*(undefined4 *)(param_1 + 0x18));
        return uVar2;
      }
      FUN_006c061a(*(int *)(param_1 + 0x10) + -1);
      FUN_0081820c(*(undefined4 *)(param_1 + 0x1c),param_1);
    }
  }
  return 0;
}


