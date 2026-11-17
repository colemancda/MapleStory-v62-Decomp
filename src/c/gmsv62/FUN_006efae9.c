/* FUN_006efae9 - 0x006efae9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006efae9(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x558) != 0) {
    FUN_004acfe9(*(int *)(*(int *)(param_1 + 0x558) + 0x38) + param_2);
  }
  return;
}


