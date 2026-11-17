/* FUN_00423562 - 0x00423562 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00423562(undefined4 *param_1)

{
  DAT_00978108 = -(uint)(param_1 + 1 != (undefined4 *)0x0) & (uint)param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = &PTR_FUN_008e89c4;
  param_1[7] = 0;
  param_1[8] = 0x1f;
  param_1[9] = 0;
  param_1[6] = &PTR_FUN_008e89c0;
  param_1[10] = 100;
  param_1[0xb] = 0x18;
  *param_1 = &PTR_FUN_008e89bc;
  return;
}


