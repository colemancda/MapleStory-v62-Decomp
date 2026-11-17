/* FUN_004ad1b0 - 0x004ad1b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_004ad1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  int local_10;
  
  if (-1 < *(int *)(param_1 + 0x30)) {
    (*DAT_0097b504)(&local_14,0,0,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    if (*(int *)(param_1 + 0x50) == 0) {
      local_10 = local_10 - *(int *)(param_1 + 0x30);
    }
    else if (*(int *)(param_1 + 0x50) == 1) {
      local_14 = local_14 - *(int *)(param_1 + 0x30);
    }
    iVar1 = (*DAT_0097b57c)(&local_14,param_2,param_3);
    if (iVar1 != 0) {
      FUN_004ad39c(param_4);
      return 1;
    }
  }
  return 0;
}


