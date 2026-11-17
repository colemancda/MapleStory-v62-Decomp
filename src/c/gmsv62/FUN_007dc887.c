/* FUN_007dc887 - 0x007dc887 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007dc887(int param_1,int param_2)

{
  FUN_007dc99a();
  if (param_2 == 1) {
    FUN_0047c308(param_1 + 0x114);
    FUN_0047b671();
  }
  else if (param_2 == 2) {
    FUN_0047c308(param_1 + 0xdc);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  return;
}


