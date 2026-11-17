/* FUN_0081b1a4 - 0x0081b1a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081b1a4(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))(param_2);
  }
  return;
}


