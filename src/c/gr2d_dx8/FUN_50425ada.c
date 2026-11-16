/* FUN_50425ada - 0x50425ada in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50425ada(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 extraout_MM0;
  undefined8 extraout_MM0_00;
  undefined8 extraout_MM0_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  PackedFloatingMUL(DAT_5042fb30,param_3);
  PackedFloatingMUL(DAT_5042fb30,param_2);
  FUN_50429ea0();
  FUN_50429ea0();
  FUN_50429ea0();
  uVar1 = (undefined4)extraout_MM0_01;
  uVar8 = (undefined4)((ulonglong)extraout_MM0_01 >> 0x20);
  uVar4 = CONCAT44((int)extraout_MM0_00,(int)extraout_MM0_00);
  uVar11 = (undefined4)((ulonglong)extraout_MM0_00 >> 0x20);
  uVar9 = CONCAT44(uVar11,uVar11);
  uVar2 = PackedFloatingMUL(CONCAT44(uVar1,uVar1) ^ DAT_5042fac0,uVar9);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar4);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar8,uVar8),uVar4);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar8,uVar8) ^ DAT_5042fac0 >> 0x20,uVar9);
  uVar12 = CONCAT44((int)extraout_MM0,(int)((ulonglong)extraout_MM0 >> 0x20));
  uVar2 = PackedFloatingMUL(uVar2,extraout_MM0);
  uVar4 = PackedFloatingMUL(uVar3,uVar12);
  uVar3 = PackedFloatingMUL(uVar6,uVar12);
  uVar6 = PackedFloatingMUL(uVar9,extraout_MM0);
  uVar2 = PackedFloatingADD(uVar2,uVar3);
  uVar6 = PackedFloatingADD(uVar4,uVar6);
  uVar4 = PackedFloatingADD(uVar2,uVar2);
  uVar3 = PackedFloatingADD(uVar6,uVar6);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar12 = CONCAT44(uVar8,uVar8);
  uVar9 = PackedFloatingMUL(uVar2,uVar4);
  uVar2 = CONCAT44((int)uVar4,(int)uVar3);
  uVar10 = PackedFloatingMUL(uVar4,uVar12);
  uVar6 = PackedFloatingMUL(CONCAT44((int)uVar6,(int)uVar6),uVar2);
  uVar4 = PackedFloatingMUL(uVar2,CONCAT44(uVar1,uVar1));
  uVar2 = PackedFloatingMUL(uVar2,uVar12);
  uVar3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)((ulonglong)uVar4 >> 0x20));
  param_1[6] = 0;
  uVar12 = PackedFloatingADD(CONCAT44((int)uVar6,(int)uVar6),uVar9);
  uVar6 = PackedFloatingAccumulate(uVar9,uVar9);
  uVar2 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),(int)uVar2);
  uVar5 = PackedFloatingSUBR(uVar6,CONCAT44(DAT_5042faa4,DAT_5042faa0));
  uVar9 = PackedFloatingSUBR(uVar12,CONCAT44(DAT_5042faa4,DAT_5042faa0));
  uVar6 = PackedFloatingADD(uVar3,uVar2);
  param_1[5] = uVar5 & 0xffffffff;
  uVar7 = PackedFloatingSUB(uVar3,uVar2);
  uVar5 = PackedFloatingADD(uVar4,uVar10);
  uVar2 = PackedFloatingSUB(uVar4,uVar10);
  param_1[3] = uVar5 & 0xffffffff;
  uVar5 = (ulonglong)DAT_5042faa0;
  param_1[1] = uVar7 >> 0x20;
  param_1[2] = CONCAT44((int)uVar9,(int)uVar7);
  *param_1 = CONCAT44((int)uVar6,(int)((ulonglong)uVar9 >> 0x20));
  param_1[4] = CONCAT44((int)uVar2,(int)((ulonglong)uVar6 >> 0x20));
  param_1[7] = uVar5 << 0x20;
  FastExitMediaState();
  return;
}


