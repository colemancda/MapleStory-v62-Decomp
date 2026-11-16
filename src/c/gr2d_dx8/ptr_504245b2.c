/* ptr_504245b2 - 0x504245b2 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_504245b2(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong extraout_MM0;
  
  FastExitMediaState();
  FUN_50429ea0();
  uVar2 = DAT_5042fb60;
  *param_1 = DAT_5042fb68;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)((int)param_1 + 0x14) = (int)extraout_MM0;
  param_1[3] = extraout_MM0 >> 0x20;
  uVar1 = (uint)_DAT_5042fb18;
  param_1[6] = 0;
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)((int)param_1 + 0x24) = (uint)(extraout_MM0 >> 0x20) ^ uVar1;
  *(int *)(param_1 + 5) = (int)extraout_MM0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  FastExitMediaState();
  return;
}


