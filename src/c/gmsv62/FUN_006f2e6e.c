/* FUN_006f2e6e - 0x006f2e6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_006f2e6e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00414f8b(param_2 + 1);
  param_1[2] = param_2[2];
  FUN_00414f8b(param_2 + 3);
  FUN_00414f8b(param_2 + 4);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}


