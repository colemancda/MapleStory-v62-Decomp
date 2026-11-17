/* FUN_0086243e - 0x0086243e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0086243e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_14;
  undefined4 *local_8;
  
  *param_1 = *param_2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  local_8 = param_2 + 2;
  local_14 = 5;
  puVar2 = param_1 + 6;
  do {
    puVar2[-4] = *local_8;
    puVar2[-3] = local_8[1];
    puVar2[-2] = local_8[2];
    puVar2[-1] = local_8[3];
    FUN_008623dc(((int)param_2 - (int)param_1) + (int)puVar2);
    puVar1 = local_8 + 6;
    local_8 = local_8 + 7;
    local_14 = local_14 + -1;
    puVar2[2] = *puVar1;
    puVar2 = puVar2 + 7;
  } while (local_14 != 0);
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}


