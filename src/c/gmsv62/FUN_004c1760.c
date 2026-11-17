/* FUN_004c1760 - 0x004c1760 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c1760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(&DAT_0097bd2c), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x1c) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + -4;
  }
  if (iVar1 != 0) {
    FUN_00455c59(&local_c);
    if (local_8 != 0) {
      FUN_0045e7c2(0);
    }
    iVar1 = FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    uVar2 = *(undefined4 *)(iVar1 + 4);
    if (local_8 != 0) {
      FUN_00449913(0);
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = FUN_006aabbe(uVar2,1,*(undefined4 *)(param_1 + 0x14));
      return uVar2;
    }
  }
  return 0;
}


