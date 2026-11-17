/* FUN_00593123 - 0x00593123 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00593123(int param_1)

{
  if (((*(int *)(*(int *)(param_1 + 0xcc) + 0x144) == 0) &&
      (*(int *)(*(int *)(param_1 + 0xcc) + 0x13c) == 1)) && (*(int *)(param_1 + 0xb0) == 0)) {
    return 1;
  }
  return 0;
}


