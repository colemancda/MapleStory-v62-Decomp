/* FUN_00683d1f - 0x00683d1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00683d1f(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (*DAT_0097b704)();
  param_1[3] = uVar1;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_008ed540;
  return param_1;
}


