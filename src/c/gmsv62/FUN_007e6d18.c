/* FUN_007e6d18 - 0x007e6d18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007e6d18(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 5) {
    return 0x132;
  }
  if (*(int *)(param_1 + 0x74) != 6) {
    return 0;
  }
  return 0x129;
}


