/* FUN_006bf12e - 0x006bf12e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_006bf12e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_0047cf1f(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}


