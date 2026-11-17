/* FUN_006512a0 - 0x006512a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006512a0(char param_1)

{
  if (param_1 == 'F') {
    return 2;
  }
  if (param_1 != 'I') {
    if (param_1 != 'L') {
      return 4;
    }
    return 3;
  }
  return 1;
}


