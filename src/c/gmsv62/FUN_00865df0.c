/* FUN_00865df0 - 0x00865df0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00865df0(uint *param_1,byte param_2)

{
  *(byte *)param_1 = (char)*param_1 + ((&DAT_0096ccb8)[*(byte *)((int)param_1 + 1)] - param_2);
  *(byte *)((int)param_1 + 1) =
       *(byte *)((int)param_1 + 1) - (*(byte *)((int)param_1 + 2) ^ (&DAT_0096ccb8)[param_2]);
  *(byte *)((int)param_1 + 2) =
       (&DAT_0096ccb8)[*(byte *)((int)param_1 + 3)] + param_2 ^ *(byte *)((int)param_1 + 2);
  *(byte *)((int)param_1 + 3) =
       (*(byte *)((int)param_1 + 3) - (char)*param_1) + (&DAT_0096ccb8)[param_2];
  *param_1 = *param_1 >> 0x1d | *param_1 << 3;
  return;
}


