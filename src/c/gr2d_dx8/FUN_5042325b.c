/* FUN_5042325b - 0x5042325b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5042325b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint extraout_MM0_Da;
  undefined8 extraout_MM0;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar2;
  
  FastExitMediaState();
  uVar3 = PackedFloatingMUL(*param_2,*param_3);
  uVar5 = PackedFloatingMUL(param_2[1],param_3[1]);
  uVar3 = PackedFloatingADD(uVar3,uVar5);
  uVar2 = PackedFloatingSUB((ulonglong)DAT_5042fb28,(ulonglong)param_4);
  uVar1 = (undefined4)uVar2;
  uVar4 = PackedFloatingAccumulate(uVar3,uVar3);
  uVar10 = PackedFloatingCompareGE(0,uVar4);
  uVar10 = uVar10 & _DAT_5042fb70;
  uVar4 = uVar4 ^ uVar10;
  uVar5 = PackedFloatingCompareGE(DAT_5042fb88,uVar4);
  uVar3 = PackedFloatingMUL(uVar4,uVar4);
  uVar3 = PackedFloatingSUBR(uVar3,CONCAT44(_UNK_5042fb2c,DAT_5042fb28));
  if ((int)uVar5 != 0) {
    uVar8 = PackedFloatingReciprocalSQRAprox((ulonglong)param_4,uVar3);
    uVar5 = PackedFloatingMUL(uVar8,uVar8);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar3,uVar8);
    uVar3 = FloatingReciprocalAprox(uVar5,uVar6);
    uVar5 = PackedFloatingReciprocalIter1(uVar6,uVar3);
    PackedFloatingReciprocalIter2(uVar5,uVar3);
    uVar4 = FUN_504297c0();
    PackedFloatingMUL(uVar4,(ulonglong)param_4);
    FUN_50429fa0();
    PackedFloatingMUL(uVar4 & 0xffffffff,uVar2 & 0xffffffff);
    FUN_50429fa0();
    uVar10 = uVar10 & 0xffffffff;
    uVar3 = PackedFloatingMUL(extraout_MM0,uVar6 & 0xffffffff);
    uVar1 = (undefined4)uVar3;
    uVar3 = PackedFloatingMUL((ulonglong)extraout_MM0_Da,uVar6 & 0xffffffff);
    param_4 = (uint)uVar3;
  }
  uVar7 = param_4 ^ (uint)uVar10;
  uVar5 = CONCAT44(uVar7,uVar7);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),*param_2);
  uVar8 = PackedFloatingMUL(uVar5,*param_3);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),param_2[1]);
  uVar5 = PackedFloatingMUL(uVar5,param_3[1]);
  uVar3 = PackedFloatingADD(uVar3,uVar8);
  uVar5 = PackedFloatingADD(uVar9,uVar5);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  FastExitMediaState();
  return;
}


