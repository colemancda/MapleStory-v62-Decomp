/* FUN_008580ee - 0x008580ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_008580ee(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00414f8b(param_2 + 1);
  FUN_004725b8(param_2 + 2);
  FUN_008586ae(param_2 + 3);
  param_1[4] = param_2[4];
  FUN_00414f8b(param_2 + 5);
  return param_1;
}


