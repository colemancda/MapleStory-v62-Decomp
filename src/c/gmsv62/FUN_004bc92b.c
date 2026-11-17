/* FUN_004bc92b - 0x004bc92b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004bc92b(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  FUN_00815de9();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1);
  }
  return;
}


