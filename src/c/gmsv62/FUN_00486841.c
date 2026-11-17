/* FUN_00486841 - 0x00486841 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00486841(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(*(int *)(param_1 + 0x3d8) + 0x1df4) == param_2) {
    param_2 = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x410) = param_3;
  }
  FUN_0079757b(param_2);
  return;
}


