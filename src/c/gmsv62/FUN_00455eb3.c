/* FUN_00455eb3 - 0x00455eb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00455eb3(int param_1)

{
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x34))(3);
    FUN_0045e621();
  }
  return;
}


