/* FUN_00653bda - 0x00653bda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653bda(int param_1)

{
  if (param_1 == 0x7d) {
    return 4;
  }
  if (param_1 != 0x82) {
    return 0xffffffff;
  }
  return 2;
}


