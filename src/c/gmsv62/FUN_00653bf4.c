/* FUN_00653bf4 - 0x00653bf4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653bf4(int param_1)

{
  if ((param_1 == 0x23435e) || (param_1 == 0x2f785a)) {
    return 1;
  }
  if (param_1 != 0x2f785d) {
    if (param_1 == 0x30fefa) {
      return 1;
    }
    if (param_1 != 0x30fefd) {
      return 0;
    }
  }
  return 2;
}


