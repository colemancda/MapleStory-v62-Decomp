/* FUN_0045246d - 0x0045246d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0045246d(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x135) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00452368(*(int *)(param_1 + 0x1c),&DAT_008f39b4,*(undefined4 *)(param_1 + 0x20));
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x80))(*(int **)(param_1 + 0x1c));
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (*DAT_0097b518)(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    (*DAT_0097b55c)(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}


