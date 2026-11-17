/* FUN_005828c5 - 0x005828c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_005828c5(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 100) + 0x144) == 0) &&
     (*(int *)(*(int *)(param_1 + 100) + 0x13c) == 3)) {
    return 1;
  }
  return 0;
}


