/* FUN_0046a470 - 0x0046a470 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0046a470(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return param_1;
  }
  return 0;
}


