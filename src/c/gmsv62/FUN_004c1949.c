/* FUN_004c1949 - 0x004c1949 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004c1949(int param_1)

{
  int iVar1;
  
  if (((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(&DAT_0097bd2c), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x1c) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + -4;
  }
  if (iVar1 == 0) {
    if (((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
        (iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(&DAT_0097bd14), iVar1 == 0)) ||
       (*(int *)(param_1 + 0x1c) == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x1c) + -4;
    }
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_0055eabf(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}


