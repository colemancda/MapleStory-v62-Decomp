/* FUN_00514ffe - 0x00514ffe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00514ffe(int param_1)

{
  if (*(int **)(param_1 + 0x738) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x738) + 0x20))(0x2001);
    FUN_004c26e1();
  }
  FUN_0051502d(1);
  return;
}


