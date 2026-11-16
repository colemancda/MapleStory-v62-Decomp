/* FUN_504231ef - 0x504231ef in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504231ef(undefined8 *param_1,ulonglong *param_2,uint param_3)

{
  undefined8 extraout_MM0;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_18;
  uint local_10;
  
  FastExitMediaState();
  FUN_50427f22(&local_18,param_2);
  PackedFloatingMUL((ulonglong)param_3,DAT_5042fb30);
  FUN_50429ea0();
  uVar3 = (undefined4)((ulonglong)extraout_MM0 >> 0x20);
  uVar2 = CONCAT44(uVar3,uVar3);
  uVar1 = PackedFloatingMUL(local_18,uVar2);
  uVar2 = PackedFloatingMUL((ulonglong)local_10,uVar2);
  *param_1 = uVar1;
  param_1[1] = CONCAT44((int)extraout_MM0,(int)uVar2);
  FastExitMediaState();
  return;
}


