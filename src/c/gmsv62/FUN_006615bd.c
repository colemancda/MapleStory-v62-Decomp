/* FUN_006615bd - 0x006615bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006615bd(undefined4 *param_1)

{
  param_1[6] = &PTR_LAB_008ed508;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 6)) = &PTR_LAB_008ed55c;
  *param_1 = &PTR_FUN_008ed540;
  return;
}


