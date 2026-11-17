/* FUN_0066fbb2 - 0x0066fbb2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0066fbb2(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 6)) && (-1 < param_2)) && (param_2 < 0xc9)) {
    return (&DAT_00979740)[param_1 * 0xc9 + param_2];
  }
  return 0;
}


