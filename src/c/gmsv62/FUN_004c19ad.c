/* FUN_004c19ad - 0x004c19ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c19ad(int param_1)

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
    FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (local_8 != 0) {
      FUN_00449913(0);
    }
    uVar2 = FUN_0045e2eb();
    iVar1 = FUN_0070cdd7(uVar2);
    if (iVar1 != 0) {
      uVar2 = FUN_0070ccfc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      return uVar2;
    }
  }
  return 0;
}


