/* FUN_0059d9bc - 0x0059d9bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0059d9bc(int param_1)

{
  if (*(int *)(param_1 + 0x3a8) != 0) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    return 1;
  }
  return 0;
}


