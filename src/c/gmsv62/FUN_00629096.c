/* FUN_00629096 - 0x00629096 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00629096(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return param_1;
  }
  return 0;
}


