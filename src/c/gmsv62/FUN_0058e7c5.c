/* FUN_0058e7c5 - 0x0058e7c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0058e7c5(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x78) + 0x144) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x78) + 0x13c) == 1)) {
    return 1;
  }
  return 0;
}


