/* ptr_004fe25b - 0x004fe25b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004fe25b(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004e63c1(param_2,param_3);
  if (*(int *)(param_1 + 0x730) == 1) {
    *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
    if (*(int *)(param_1 + 0x76c) == 0x28) {
      *(undefined4 *)(param_1 + 0x76c) = 0;
      FUN_004fdfc8();
    }
  }
  return;
}


