/* FUN_00670975 - 0x00670975 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00670975(undefined4 *param_1)

{
  param_1[-1] = &PTR_LAB_008ed5f4;
  *param_1 = &PTR_FUN_008ed5f0;
  param_1[1] = &PTR_LAB_008ed5ec;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)(param_1 + 1)) = &PTR_LAB_008ed60c;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)param_1) = &PTR_LAB_008ed610;
  return;
}


