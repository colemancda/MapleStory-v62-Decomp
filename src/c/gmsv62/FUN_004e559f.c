/* FUN_004e559f - 0x004e559f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004e559f(undefined4 *param_1)

{
  FUN_004e5bd6();
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1ca] = &PTR_FUN_008ea8f0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  *param_1 = &PTR_FUN_008ea8cc;
  param_1[1] = &PTR_FUN_008ea880;
  param_1[2] = &PTR_FUN_008ea87c;
  param_1[3] = &PTR_FUN_008ea878;
  return param_1;
}


