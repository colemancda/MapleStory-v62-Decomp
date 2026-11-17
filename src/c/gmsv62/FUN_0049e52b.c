/* FUN_0049e52b - 0x0049e52b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0049e52b(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_004b3daf();
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xc))();
    FUN_0049e753();
  }
  return;
}


