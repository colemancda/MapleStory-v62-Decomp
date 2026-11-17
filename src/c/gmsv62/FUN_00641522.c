/* FUN_00641522 - 0x00641522 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00641522(undefined4 *param_1)

{
  DAT_00979250 = -(uint)(param_1 + 1 != (undefined4 *)0x0) & (uint)param_1;
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008ed308;
  return;
}


