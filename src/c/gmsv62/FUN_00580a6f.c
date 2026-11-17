/* FUN_00580a6f - 0x00580a6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00580a6f(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0xcc) + 0x144) == 0) &&
     (*(int *)(*(int *)(param_1 + 0xcc) + 0x13c) == 3)) {
    return 1;
  }
  return 0;
}


