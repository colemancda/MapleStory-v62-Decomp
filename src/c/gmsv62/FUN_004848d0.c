/* FUN_004848d0 - 0x004848d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_004848d0(int *param_1,int param_2,int param_3,int param_4)

{
  *param_1 = param_4;
  if (param_4 != 0) {
    InterlockedIncrement((LONG *)(param_4 + 8));
  }
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = 0;
  if (param_4 != 0) {
    FUN_004030b1();
  }
  return param_1;
}


