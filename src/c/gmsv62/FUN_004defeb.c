/* FUN_004defeb - 0x004defeb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004defeb(undefined4 *param_1)

{
  FUN_004de520();
  param_1[0x34] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *param_1 = &PTR_FUN_008ea674;
  param_1[1] = &PTR_LAB_008ea628;
  param_1[2] = &PTR_FUN_008ea624;
  InterlockedIncrement(&DAT_00979220);
  return param_1;
}


