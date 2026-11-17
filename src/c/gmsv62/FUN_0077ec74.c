/* FUN_0077ec74 - 0x0077ec74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077ec74(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x808) == 0) {
    piVar1 = (int *)(param_1 + 0x784);
    *piVar1 = *piVar1 + -0x28;
    if (*piVar1 < 0) {
      if (DAT_0097bef0 != 0) {
        FUN_00815de9();
        if (DAT_0097bef0 != 0) {
          (*(code *)**(undefined4 **)(DAT_0097bef0 + 8))(1);
        }
      }
      *(undefined4 *)(param_1 + 0x80c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x810) == 0) {
    piVar1 = (int *)(param_1 + 0x784);
    *piVar1 = *piVar1 + -0x28;
    if (*piVar1 < 0) {
      if (DAT_0097bef8 != 0) {
        FUN_00815de9();
        if (DAT_0097bef8 != 0) {
          (*(code *)**(undefined4 **)(DAT_0097bef8 + 8))(1);
        }
      }
      *(undefined4 *)(param_1 + 0x814) = 0;
    }
  }
  FUN_0077221e();
  FUN_00775d6e();
  return;
}


