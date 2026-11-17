/* FUN_00579f0d - 0x00579f0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00579f0d(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x74) + 0x13c) == 1) && (*(int *)(param_1 + 0xc0) == 0)) {
    *(int *)(param_1 + 0xc0) = 1;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_00568758();
    }
    return 1;
  }
  return 0;
}


