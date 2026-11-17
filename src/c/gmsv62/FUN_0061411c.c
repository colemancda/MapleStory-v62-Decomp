/* FUN_0061411c - 0x0061411c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0061411c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 8))();
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00455c59(&local_c);
    if (local_8 != 0) {
      FUN_0045e7c2(0);
    }
    uVar2 = FUN_00458d57(5,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    iVar1 = FUN_00458c4f(&local_c,5,uVar2);
    uVar2 = *(undefined4 *)(iVar1 + 4);
    if (local_8 != 0) {
      FUN_00449913(0);
    }
  }
  return uVar2;
}


