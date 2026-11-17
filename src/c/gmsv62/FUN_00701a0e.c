/* FUN_00701a0e - 0x00701a0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00701a0e(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x5dc) != 0) {
    if (*(int *)(param_1 + 0x598) == 0) {
      piVar1 = (int *)(param_1 + 0x590);
      *piVar1 = *piVar1 + -0x1e;
      if (*piVar1 < 0) {
        if (*(int *)(param_1 + 0x5dc) != 0) {
          FUN_00815de9();
          FUN_00705ddf();
        }
        *(undefined4 *)(param_1 + 0x58c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x594) = 0;
        FUN_008161f1(0);
      }
    }
    if (*(int *)(param_1 + 0x5dc) != 0) {
      return;
    }
  }
  if (-1 < *(int *)(param_1 + 0x58c)) {
    FUN_00701905(1);
  }
  return;
}


