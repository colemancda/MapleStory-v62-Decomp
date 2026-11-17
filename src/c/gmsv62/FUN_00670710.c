/* FUN_00670710 - 0x00670710 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00670710(undefined4 *param_1)

{
  param_1[-1] = &PTR_LAB_008ed6d0;
  *param_1 = &PTR_FUN_008ed6cc;
  param_1[2] = &PTR_LAB_008ed6c8;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)(param_1 + 2)) = &PTR_LAB_008ed60c;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)param_1) = &PTR_LAB_008ed6e8;
  return;
}


