/* FUN_004c6606 - 0x004c6606 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c6606(int param_1)

{
  int iVar1;
  
  if (((*(int **)(param_1 + 0x20) == (int *)0x0) ||
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(&DAT_0097be04), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x20) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20) + -4;
  }
  if (((iVar1 != 0) && (DAT_00978358 != 0)) &&
     ((-1 < *(int *)(param_1 + 0x10) &&
      ((iVar1 = FUN_004bed04(), iVar1 == 0 && (DAT_00979178 == 0)))))) {
    iVar1 = FUN_004c6676(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      FUN_007b8688(*(undefined4 *)(param_1 + 0x10));
    }
    return 1;
  }
  return 0;
}


