/* FUN_00402f41 - 0x00402f41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00402f41(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    InterlockedIncrement((LONG *)(*param_2 + 8));
  }
  if (*param_1 != 0) {
    FUN_004030b1();
    *param_1 = 0;
  }
  *param_1 = *param_2;
  return param_1;
}


