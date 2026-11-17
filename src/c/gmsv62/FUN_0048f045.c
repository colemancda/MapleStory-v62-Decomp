/* FUN_0048f045 - 0x0048f045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0048f045(undefined4 *param_1,undefined4 param_2)

{
  FUN_004bc4fa();
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_2;
  *param_1 = &PTR_FUN_008e98b8;
  param_1[1] = &PTR_FUN_008e986c;
  param_1[2] = &PTR_FUN_008e9868;
  return param_1;
}


