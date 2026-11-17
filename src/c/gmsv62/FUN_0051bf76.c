/* FUN_0051bf76 - 0x0051bf76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0051bf76(undefined4 *param_1)

{
  DAT_00979110 = -(uint)(param_1 + 1 != (undefined4 *)0x0) & (uint)param_1;
  *param_1 = &PTR_FUN_008eaf78;
  FUN_00879c20(param_1 + 1,&DAT_009651d8,0x1bd);
  FUN_00879c20((int)param_1 + 0x1c1,&DAT_009651d8,0x1bd);
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  return param_1;
}


