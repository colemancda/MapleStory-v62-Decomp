/* FUN_50c0b0e9 - 0x50c0b0e9 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0b0e9(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    FUN_50c026fc();
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
    }
    else if (**(int **)(param_1 + 0x28) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(**(int **)(param_1 + 0x28) + -4);
    }
    *param_2 = uVar2;
    piVar1 = (int *)(param_1 + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


