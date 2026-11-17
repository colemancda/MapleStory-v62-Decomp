/* FUN_0052b5b4 - 0x0052b5b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052b5b4(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_6 != 0) {
    param_5 = -param_5;
  }
  if (param_6 != 0) {
    param_4 = -param_4;
  }
  *param_1 = param_2 + param_4;
  param_1[1] = param_3 + param_5;
  return;
}


