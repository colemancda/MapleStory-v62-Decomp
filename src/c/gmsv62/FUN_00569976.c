/* FUN_00569976 - 0x00569976 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00569976(int param_1,int param_2)

{
  if (((param_2 == 0) || (param_2 == *(int *)(param_1 + 0x1a0))) && (*(int *)(param_1 + 0x1a0) != 0)
     ) {
    FUN_00815de9();
    FUN_0056a7d2();
  }
  if (((param_2 == 0) || (param_2 == *(int *)(param_1 + 0x1a8))) && (*(int *)(param_1 + 0x1a8) != 0)
     ) {
    FUN_00815de9();
    FUN_0056a7d2();
  }
  return;
}


