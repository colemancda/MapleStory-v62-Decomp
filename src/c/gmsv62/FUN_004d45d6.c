/* FUN_004d45d6 - 0x004d45d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004d45d6(undefined4 *param_1)

{
  DAT_009791f0 = -(uint)(param_1 + 1 != (undefined4 *)0x0) & (uint)param_1;
  param_1[2] = 0;
  param_1[3] = 0x1f;
  param_1[4] = 0;
  param_1[1] = &PTR_FUN_008ea3e8;
  param_1[5] = 100;
  param_1[6] = 0x18;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = &PTR_FUN_008ea3e4;
  *param_1 = &PTR_LAB_008ea3dc;
  return;
}


