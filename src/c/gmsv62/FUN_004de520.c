/* FUN_004de520 - 0x004de520 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004de520(undefined4 *param_1)

{
  FUN_004bc4fa();
  param_1[0x2f] = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  *param_1 = &PTR_FUN_008ea5e0;
  param_1[1] = &PTR_FUN_008ea594;
  param_1[2] = &PTR_FUN_008ea590;
  return param_1;
}


