/* FUN_0041aaaf - 0x0041aaaf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0041aaaf(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
  }
  return 0;
}


