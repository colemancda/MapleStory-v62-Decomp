/* FUN_004aa480 - 0x004aa480 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004aa480(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x44) + -4);
}


