/* FUN_50423661 - 0x50423661 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50423661(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
                 ulonglong *param_5,ulonglong *param_6,ulonglong *param_7)

{
  undefined4 unaff_ESI;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong extraout_MM0;
  ulonglong extraout_MM0_00;
  ulonglong extraout_MM0_01;
  ulonglong extraout_MM0_02;
  ulonglong extraout_MM0_03;
  ulonglong extraout_MM0_04;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_20;
  
  local_a8 = *param_4;
  local_a0 = param_4[1];
  uVar7 = *param_5;
  uVar13 = param_5[1];
  uVar1 = PackedFloatingADD(local_a8,uVar7);
  uVar3 = PackedFloatingADD(local_a0,uVar13);
  uVar5 = PackedFloatingSUB(local_a8,uVar7);
  uVar1 = PackedFloatingMUL(uVar1,uVar1);
  uVar8 = PackedFloatingSUB(local_a0,uVar13);
  uVar3 = PackedFloatingMUL(uVar3,uVar3);
  uVar5 = PackedFloatingMUL(uVar5,uVar5);
  uVar8 = PackedFloatingMUL(uVar8,uVar8);
  uVar1 = PackedFloatingADD(uVar1,uVar3);
  uVar5 = PackedFloatingADD(uVar5,uVar8);
  local_88 = *param_6;
  local_80 = param_6[1];
  uVar10 = PackedFloatingADD(uVar7,local_88);
  uVar11 = PackedFloatingADD(uVar13,local_80);
  uVar3 = PackedFloatingSUB(uVar7,local_88);
  uVar8 = PackedFloatingSUB(uVar13,local_80);
  uVar10 = PackedFloatingMUL(uVar10,uVar10);
  uVar11 = PackedFloatingMUL(uVar11,uVar11);
  uVar3 = PackedFloatingMUL(uVar3,uVar3);
  uVar8 = PackedFloatingMUL(uVar8,uVar8);
  uVar10 = PackedFloatingADD(uVar10,uVar11);
  uVar3 = PackedFloatingADD(uVar3,uVar8);
  uVar1 = PackedFloatingAccumulate(uVar1,uVar10);
  uVar3 = PackedFloatingAccumulate(uVar5,uVar3);
  uVar1 = PackedFloatingCompareGT(uVar3,uVar1);
  uVar6 = packsswb(uVar1,uVar1);
  if ((uVar6 & 1) != 0) {
    local_a8 = DAT_5042fac8 ^ *param_4;
    local_a0 = DAT_5042fac8 ^ param_4[1];
  }
  if ((uVar6 & 0x10000) != 0) {
    local_88 = DAT_5042fac8 ^ *param_6;
    local_80 = DAT_5042fac8 ^ param_6[1];
  }
  local_78 = *param_7;
  uVar6 = param_7[1];
  uVar5 = PackedFloatingADD(local_88,local_78);
  uVar8 = PackedFloatingADD(local_80,uVar6);
  uVar1 = PackedFloatingSUB(local_88,local_78);
  uVar3 = PackedFloatingSUB(local_80,uVar6);
  uVar5 = PackedFloatingMUL(uVar5,uVar5);
  uVar8 = PackedFloatingMUL(uVar8,uVar8);
  uVar1 = PackedFloatingMUL(uVar1,uVar1);
  uVar3 = PackedFloatingMUL(uVar3,uVar3);
  uVar5 = PackedFloatingADD(uVar5,uVar8);
  uVar1 = PackedFloatingADD(uVar1,uVar3);
  uVar3 = PackedFloatingAccumulate(uVar5,uVar5);
  uVar1 = PackedFloatingAccumulate(uVar1,uVar1);
  uVar9 = PackedFloatingCompareGT(uVar1,uVar3);
  local_70 = uVar6;
  if ((uVar9 & 1) != 0) {
    local_78 = DAT_5042fac8 ^ *param_7;
    local_70 = DAT_5042fac8 ^ param_7[1];
  }
  uVar1 = PackedFloatingMUL(uVar7,uVar7);
  uVar3 = PackedFloatingMUL(uVar13,uVar13);
  uVar1 = PackedFloatingADD(uVar1,uVar3);
  uVar1 = PackedFloatingAccumulate(uVar1,uVar1);
  uVar3 = FloatingReciprocalAprox(uVar6,uVar1);
  uVar6 = PackedFloatingCompareGT(uVar1,DAT_5042fb10);
  uVar1 = PackedFloatingReciprocalIter1(uVar1,uVar3);
  uVar1 = PackedFloatingReciprocalIter2(uVar1,uVar3);
  uVar3 = PackedFloatingMUL((uVar7 ^ _DAT_5042fb70) & uVar6,uVar1);
  uVar10 = PackedFloatingMUL((uVar13 ^ _DAT_5042fab8) & uVar6,uVar1);
  uVar9 = CONCAT44((int)local_a8,(int)(local_a8 >> 0x20));
  uVar2 = CONCAT44((int)local_a0,(int)(local_a0 >> 0x20));
  uVar6 = PackedFloatingMUL(local_a8,uVar10);
  uVar1 = PackedFloatingMUL(local_a0,uVar3);
  uVar8 = PackedFloatingMUL(uVar2 ^ _DAT_5042fab8,uVar3);
  uVar5 = PackedFloatingMUL(uVar9,uVar10);
  uVar1 = PackedFloatingADD(uVar6 ^ _DAT_5042fab8,uVar1);
  uVar5 = PackedFloatingSUB(uVar5,uVar8);
  uVar14 = PackedFloatingMUL(uVar2,uVar10);
  uVar5 = PackedFloatingAccumulate(uVar5,uVar1);
  uVar11 = PackedFloatingMUL(uVar9 ^ _DAT_5042fab8,uVar3);
  uVar1 = PackedFloatingMUL(local_a8,uVar3);
  uVar8 = PackedFloatingMUL(local_a0 ^ _DAT_5042fab8,uVar10);
  uVar11 = PackedFloatingADD(uVar11,uVar14);
  uVar1 = PackedFloatingSUB(uVar8,uVar1);
  uVar9 = PackedFloatingAccumulate(uVar11,uVar1);
  uVar2 = CONCAT44((int)local_88,(int)(local_88 >> 0x20));
  uVar12 = CONCAT44((int)local_80,(int)(local_80 >> 0x20));
  uVar6 = PackedFloatingMUL(local_88,uVar10);
  uVar1 = PackedFloatingMUL(local_80,uVar3);
  uVar11 = PackedFloatingMUL(uVar12 ^ _DAT_5042fab8,uVar3);
  uVar8 = PackedFloatingMUL(uVar2,uVar10);
  uVar1 = PackedFloatingADD(uVar6 ^ _DAT_5042fab8,uVar1);
  uVar8 = PackedFloatingSUB(uVar8,uVar11);
  uVar14 = PackedFloatingMUL(uVar12,uVar10);
  uVar8 = PackedFloatingAccumulate(uVar8,uVar1);
  uVar11 = PackedFloatingMUL(uVar2 ^ _DAT_5042fab8,uVar3);
  uVar1 = PackedFloatingMUL(local_88,uVar3);
  uVar3 = PackedFloatingMUL(local_80 ^ _DAT_5042fab8,uVar10);
  uVar10 = PackedFloatingADD(uVar11,uVar14);
  uVar1 = PackedFloatingSUB(uVar3,uVar1);
  uVar6 = PackedFloatingAccumulate(uVar10,uVar1);
  uVar4 = (undefined4)(uVar9 >> 0x20);
  uVar3 = PackedFloatingCompareGE(CONCAT44(uVar4,uVar4),_DAT_5042fb28);
  uVar1 = uVar8;
  if ((int)uVar3 == 0) {
    uVar2 = FUN_504298c0();
    FUN_50429fa0();
    uVar3 = PackedFloatingCompareGE(extraout_MM0 & _DAT_5042fae0,DAT_5042fae8);
    if ((int)uVar3 != 0) {
      uVar1 = FloatingReciprocalAprox(uVar1,extraout_MM0);
      uVar3 = PackedFloatingReciprocalIter1(extraout_MM0,uVar1);
      uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar1);
      uVar3 = PackedFloatingMUL(CONCAT44((int)uVar2,(int)uVar2),uVar3);
      uVar5 = PackedFloatingMUL(uVar5,uVar3);
      uVar9 = PackedFloatingMUL(uVar9,uVar3);
    }
  }
  uVar9 = uVar9 & _DAT_5042faf0;
  uVar4 = (undefined4)(uVar6 >> 0x20);
  uVar3 = PackedFloatingCompareGE(CONCAT44(uVar4,uVar4),_DAT_5042fb28);
  if ((int)uVar3 == 0) {
    uVar2 = FUN_504298c0();
    FUN_50429fa0();
    uVar3 = PackedFloatingCompareGE(extraout_MM0_00 & _DAT_5042fae0,DAT_5042fae8);
    if ((int)uVar3 != 0) {
      uVar3 = FloatingReciprocalAprox(uVar1,extraout_MM0_00);
      uVar1 = PackedFloatingReciprocalIter1(extraout_MM0_00,uVar3);
      uVar1 = PackedFloatingReciprocalIter2(uVar1,uVar3);
      uVar1 = PackedFloatingMUL(CONCAT44((int)uVar2,(int)uVar2),uVar1);
      uVar8 = PackedFloatingMUL(uVar8,uVar1);
      uVar6 = PackedFloatingMUL(uVar6,uVar1);
    }
  }
  uVar1 = PackedFloatingADD(uVar5,uVar8);
  uVar3 = PackedFloatingADD(uVar9,uVar6 & _DAT_5042faf0);
  uVar1 = PackedFloatingMUL(uVar1,_DAT_504302a0);
  uVar9 = PackedFloatingMUL(uVar3,_DAT_504302a0);
  uVar3 = PackedFloatingMUL(uVar1,uVar1);
  uVar5 = PackedFloatingMUL(uVar9 & 0xffffffff,uVar9 & 0xffffffff);
  uVar3 = PackedFloatingADD(uVar3,uVar5);
  uVar3 = PackedFloatingAccumulate(uVar3,uVar3);
  uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar3);
  uVar8 = PackedFloatingMUL(uVar5,uVar5);
  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
  uVar5 = PackedFloatingReciprocalIter2(uVar8,uVar5);
  PackedFloatingMUL(uVar3,uVar5);
  FUN_50429ea0();
  uVar6 = PackedFloatingCompareGE(extraout_MM0_01 & _DAT_5042fad8,DAT_5042fae8);
  uVar4 = (undefined4)(extraout_MM0_01 >> 0x20);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),CONCAT44(unaff_ESI,(int)uVar5));
  local_20 = (undefined4)uVar9;
  if ((uVar6 & 0x100000000) != 0) {
    uVar3 = CONCAT44((int)uVar3,(int)uVar3);
    uVar5 = PackedFloatingMUL(uVar9 & 0xffffffff,uVar3);
    local_20 = (undefined4)uVar5;
    uVar1 = PackedFloatingMUL(uVar1,uVar3);
  }
  uVar9 = CONCAT44((int)extraout_MM0_01,local_20);
  uVar2 = CONCAT44((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  uVar12 = CONCAT44(local_20,(int)extraout_MM0_01);
  uVar6 = PackedFloatingMUL(uVar1,uVar13);
  uVar3 = PackedFloatingMUL(uVar9,uVar7);
  uVar8 = PackedFloatingMUL(uVar12 ^ _DAT_5042fab8,uVar7);
  uVar5 = PackedFloatingMUL(uVar2,uVar13);
  uVar3 = PackedFloatingADD(uVar6 ^ _DAT_5042fab8,uVar3);
  uVar5 = PackedFloatingSUB(uVar5,uVar8);
  uVar10 = PackedFloatingMUL(uVar12,uVar13);
  uVar5 = PackedFloatingAccumulate(uVar5,uVar3);
  uVar8 = PackedFloatingMUL(uVar2 ^ _DAT_5042fab8,uVar7);
  uVar9 = uVar9 ^ _DAT_5042fab8;
  uVar1 = PackedFloatingMUL(uVar1,uVar7);
  *param_1 = uVar5;
  uVar3 = PackedFloatingMUL(uVar9,uVar13);
  uVar8 = PackedFloatingADD(uVar8,uVar10);
  uVar1 = PackedFloatingSUB(uVar3,uVar1);
  uVar1 = PackedFloatingAccumulate(uVar8,uVar1);
  param_1[1] = uVar1;
  uVar1 = PackedFloatingMUL(local_88,local_88);
  uVar3 = PackedFloatingMUL(local_80,local_80);
  uVar1 = PackedFloatingADD(uVar1,uVar3);
  uVar1 = PackedFloatingAccumulate(uVar1,uVar1);
  uVar3 = FloatingReciprocalAprox(uVar5,uVar1);
  uVar6 = PackedFloatingCompareGT(uVar1,DAT_5042fb10);
  uVar1 = PackedFloatingReciprocalIter1(uVar1,uVar3);
  uVar1 = PackedFloatingReciprocalIter2(uVar1,uVar3);
  uVar3 = PackedFloatingMUL((local_88 ^ _DAT_5042fb70) & uVar6,uVar1);
  uVar10 = PackedFloatingMUL((local_80 ^ _DAT_5042fab8) & uVar6,uVar1);
  uVar9 = CONCAT44((int)uVar7,(int)(uVar7 >> 0x20));
  uVar2 = CONCAT44((int)uVar13,(int)(uVar13 >> 0x20));
  uVar6 = PackedFloatingMUL(uVar7,uVar10);
  uVar1 = PackedFloatingMUL(uVar13,uVar3);
  uVar8 = PackedFloatingMUL(uVar2 ^ _DAT_5042fab8,uVar3);
  uVar5 = PackedFloatingMUL(uVar9,uVar10);
  uVar1 = PackedFloatingADD(uVar6 ^ _DAT_5042fab8,uVar1);
  uVar5 = PackedFloatingSUB(uVar5,uVar8);
  uVar14 = PackedFloatingMUL(uVar2,uVar10);
  uVar5 = PackedFloatingAccumulate(uVar5,uVar1);
  uVar11 = PackedFloatingMUL(uVar9 ^ _DAT_5042fab8,uVar3);
  uVar1 = PackedFloatingMUL(uVar7,uVar3);
  uVar8 = PackedFloatingMUL(uVar13 ^ _DAT_5042fab8,uVar10);
  uVar11 = PackedFloatingADD(uVar11,uVar14);
  uVar1 = PackedFloatingSUB(uVar8,uVar1);
  uVar13 = PackedFloatingAccumulate(uVar11,uVar1);
  uVar6 = CONCAT44((int)local_78,(int)(local_78 >> 0x20));
  uVar9 = CONCAT44((int)local_70,(int)(local_70 >> 0x20));
  uVar7 = PackedFloatingMUL(local_78,uVar10);
  uVar1 = PackedFloatingMUL(local_70,uVar3);
  uVar11 = PackedFloatingMUL(uVar9 ^ _DAT_5042fab8,uVar3);
  uVar8 = PackedFloatingMUL(uVar6,uVar10);
  uVar1 = PackedFloatingADD(uVar7 ^ _DAT_5042fab8,uVar1);
  uVar8 = PackedFloatingSUB(uVar8,uVar11);
  uVar14 = PackedFloatingMUL(uVar9,uVar10);
  uVar8 = PackedFloatingAccumulate(uVar8,uVar1);
  uVar11 = PackedFloatingMUL(uVar6 ^ _DAT_5042fab8,uVar3);
  uVar1 = PackedFloatingMUL(local_78,uVar3);
  uVar3 = PackedFloatingMUL(local_70 ^ _DAT_5042fab8,uVar10);
  uVar10 = PackedFloatingADD(uVar11,uVar14);
  uVar1 = PackedFloatingSUB(uVar3,uVar1);
  uVar7 = PackedFloatingAccumulate(uVar10,uVar1);
  uVar4 = (undefined4)(uVar13 >> 0x20);
  uVar3 = PackedFloatingCompareGE(CONCAT44(uVar4,uVar4),_DAT_5042fb28);
  uVar1 = uVar8;
  if ((int)uVar3 == 0) {
    uVar6 = FUN_504298c0();
    FUN_50429fa0();
    uVar3 = PackedFloatingCompareGE(extraout_MM0_02 & _DAT_5042fae0,DAT_5042fae8);
    if ((int)uVar3 != 0) {
      uVar1 = FloatingReciprocalAprox(uVar1,extraout_MM0_02);
      uVar3 = PackedFloatingReciprocalIter1(extraout_MM0_02,uVar1);
      uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar1);
      uVar3 = PackedFloatingMUL(CONCAT44((int)uVar6,(int)uVar6),uVar3);
      uVar5 = PackedFloatingMUL(uVar5,uVar3);
      uVar13 = PackedFloatingMUL(uVar13,uVar3);
    }
  }
  uVar13 = uVar13 & _DAT_5042faf0;
  uVar4 = (undefined4)(uVar7 >> 0x20);
  uVar3 = PackedFloatingCompareGE(CONCAT44(uVar4,uVar4),_DAT_5042fb28);
  if ((int)uVar3 == 0) {
    uVar6 = FUN_504298c0();
    FUN_50429fa0();
    uVar3 = PackedFloatingCompareGE(extraout_MM0_03 & _DAT_5042fae0,DAT_5042fae8);
    if ((int)uVar3 != 0) {
      uVar3 = FloatingReciprocalAprox(uVar1,extraout_MM0_03);
      uVar1 = PackedFloatingReciprocalIter1(extraout_MM0_03,uVar3);
      uVar1 = PackedFloatingReciprocalIter2(uVar1,uVar3);
      uVar1 = PackedFloatingMUL(CONCAT44((int)uVar6,(int)uVar6),uVar1);
      uVar8 = PackedFloatingMUL(uVar8,uVar1);
      uVar7 = PackedFloatingMUL(uVar7,uVar1);
    }
  }
  uVar1 = PackedFloatingADD(uVar5,uVar8);
  uVar3 = PackedFloatingADD(uVar13,uVar7 & _DAT_5042faf0);
  uVar1 = PackedFloatingMUL(uVar1,_DAT_504302a0);
  uVar13 = PackedFloatingMUL(uVar3,_DAT_504302a0);
  uVar3 = PackedFloatingMUL(uVar1,uVar1);
  uVar5 = PackedFloatingMUL(uVar13 & 0xffffffff,uVar13 & 0xffffffff);
  uVar3 = PackedFloatingADD(uVar3,uVar5);
  uVar3 = PackedFloatingAccumulate(uVar3,uVar3);
  uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar3);
  uVar8 = PackedFloatingMUL(uVar5,uVar5);
  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
  uVar5 = PackedFloatingReciprocalIter2(uVar8,uVar5);
  PackedFloatingMUL(uVar3,uVar5);
  FUN_50429ea0();
  uVar7 = PackedFloatingCompareGE(extraout_MM0_04 & _DAT_5042fad8,DAT_5042fae8);
  uVar4 = (undefined4)(extraout_MM0_04 >> 0x20);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),CONCAT44(unaff_ESI,(int)uVar5));
  local_20 = (undefined4)uVar13;
  if ((uVar7 & 0x100000000) != 0) {
    uVar3 = CONCAT44((int)uVar3,(int)uVar3);
    uVar5 = PackedFloatingMUL(uVar13 & 0xffffffff,uVar3);
    local_20 = (undefined4)uVar5;
    uVar1 = PackedFloatingMUL(uVar1,uVar3);
  }
  uVar13 = CONCAT44((int)extraout_MM0_04,local_20);
  uVar6 = CONCAT44((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  uVar9 = CONCAT44(local_20,(int)extraout_MM0_04);
  uVar7 = PackedFloatingMUL(uVar1,local_80);
  uVar3 = PackedFloatingMUL(uVar13,local_88);
  uVar8 = PackedFloatingMUL(uVar9 ^ _DAT_5042fab8,local_88);
  uVar5 = PackedFloatingMUL(uVar6,local_80);
  uVar3 = PackedFloatingADD(uVar7 ^ _DAT_5042fab8,uVar3);
  uVar5 = PackedFloatingSUB(uVar5,uVar8);
  uVar8 = PackedFloatingMUL(uVar9,local_80);
  uVar3 = PackedFloatingAccumulate(uVar5,uVar3);
  uVar5 = PackedFloatingMUL(uVar6 ^ _DAT_5042fab8,local_88);
  uVar13 = uVar13 ^ _DAT_5042fab8;
  uVar1 = PackedFloatingMUL(uVar1,local_88);
  *param_2 = uVar3;
  uVar3 = PackedFloatingMUL(uVar13,local_80);
  uVar5 = PackedFloatingADD(uVar5,uVar8);
  uVar1 = PackedFloatingSUB(uVar3,uVar1);
  uVar1 = PackedFloatingAccumulate(uVar5,uVar1);
  param_2[1] = uVar1;
  *param_3 = local_88;
  param_3[1] = local_80;
  FastExitMediaState();
  return;
}


