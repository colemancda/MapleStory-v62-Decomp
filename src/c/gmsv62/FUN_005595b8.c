/* FUN_005595b8 - 0x005595b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_005595b8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  local_8 = 0x31;
  do {
    FUN_00434e79();
    FUN_00559727(((int)param_2 - (int)param_1) + (int)puVar1);
    puVar1 = puVar1 + 5;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_00434e79();
  FUN_00559727(param_2 + 0xf6);
  return param_1;
}


