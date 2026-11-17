/* FUN_004bee08 - 0x004bee08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_004bee08(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  FUN_0047cf1f(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}


