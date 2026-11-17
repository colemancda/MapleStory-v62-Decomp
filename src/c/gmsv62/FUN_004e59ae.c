/* FUN_004e59ae - 0x004e59ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004e59ae(undefined4 *param_1)

{
  FUN_004e5bd6();
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  *param_1 = &PTR_FUN_008eaa40;
  param_1[1] = &PTR_FUN_008ea9f4;
  param_1[2] = &PTR_FUN_008ea9f0;
  param_1[3] = &PTR_FUN_008ea9ec;
  return param_1;
}


