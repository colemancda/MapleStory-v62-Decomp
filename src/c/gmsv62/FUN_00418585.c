/* FUN_00418585 - 0x00418585 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00418585(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004131c9(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1);
  }
  return param_1;
}


