/* FUN_5042341f - 0x5042341f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5042341f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,uint param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10 [2];
  
  FUN_5042325b(local_20,param_2,param_5,param_6);
  FUN_5042325b(local_10,param_3,param_4,param_6);
  uVar1 = (ulonglong)param_6;
  uVar2 = PackedFloatingMUL(uVar1,uVar1);
  uVar2 = PackedFloatingSUB(uVar1,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_5042faa8);
  FUN_5042325b(param_1,local_20,local_10,(uint)uVar2);
  FastExitMediaState();
  return;
}


