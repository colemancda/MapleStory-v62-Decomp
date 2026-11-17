/* FUN_006014b3 - 0x006014b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006014b3(undefined4 *param_1,int param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *param_1 = param_3;
  if (param_2 != 0x7fffffff) {
    FUN_00457cda(param_2);
  }
  return;
}


