/* FUN_00454f90 - 0x00454f90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00454f90(int param_1,byte param_2)

{
  FUN_00454fb4();
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1 + -0xc);
  }
  return param_1 + -0xc;
}


