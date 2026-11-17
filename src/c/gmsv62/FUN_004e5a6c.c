/* FUN_004e5a6c - 0x004e5a6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004e5a6c(undefined4 *param_1)

{
  FUN_004e5bd6();
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  *param_1 = &PTR_FUN_008eab30;
  param_1[1] = &PTR_FUN_008eaae4;
  param_1[2] = &PTR_FUN_008eaae0;
  param_1[3] = &PTR_FUN_008eaadc;
  return param_1;
}


