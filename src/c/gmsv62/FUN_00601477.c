/* FUN_00601477 - 0x00601477 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00601477(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  param_1[2] = 0;
  *param_1 = param_3;
  if (param_2 != 0x7fffffff) {
    if (param_4 == 0) {
      FUN_0045d247(param_2);
    }
    else {
      FUN_006014b3(param_2,param_3);
    }
  }
  param_1[3] = 0;
  return;
}


