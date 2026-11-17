/* FUN_006ecd2a - 0x006ecd2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006ecd2a(int param_1,int param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    FUN_005e05a2();
    return param_1;
  }
  return 0;
}


