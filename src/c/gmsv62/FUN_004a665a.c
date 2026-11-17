/* FUN_004a665a - 0x004a665a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a665a(int param_1)

{
  FUN_004a6b5a();
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0xc))();
    FUN_0045e60b();
  }
  return;
}


