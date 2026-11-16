/* ptr_50422f15 - 0x50422f15 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50422f15(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  uVar2 = *param_2;
  uVar8 = (ulonglong)*(uint *)((int)param_2 + 0x14);
  uVar1 = PackedFloatingADD(uVar2,uVar8);
  uVar10 = (ulonglong)*(uint *)(param_2 + 5);
  uVar3 = PackedFloatingSUB(uVar2,uVar8);
  uVar5 = PackedFloatingSUBR(uVar2,uVar8);
  uVar7 = PackedFloatingSUBR(uVar2,uVar10);
  uVar2 = PackedFloatingADD(uVar1,uVar10);
  lVar4 = PackedFloatingSUB(uVar3,uVar10);
  uVar1 = PackedFloatingSUB(uVar5,uVar10);
  uVar3 = PackedFloatingSUB(uVar7,uVar8);
  uVar2 = CONCAT44((int)uVar1,(int)uVar2);
  uVar3 = CONCAT44((int)uVar3,(int)uVar3);
  uVar5 = PackedFloatingCompareGE(lVar4 << 0x20,uVar2);
  uVar7 = PackedFloatingCompareGE(CONCAT44((int)lVar4,(int)uVar1),uVar3);
  uVar10 = packssdw(uVar5,uVar7);
  uVar9 = (undefined4)param_2[4];
  uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
  uVar11 = (undefined4)((ulonglong)param_2[4] >> 0x20);
  if ((uVar10 >> 7 & 1) == 0) {
    uVar2 = PackedFloatingADD(uVar2,_DAT_5042fa90);
    uVar1 = PackedFloatingReciprocalSQRAprox(uVar8,uVar2);
    uVar2 = CONCAT44((int)uVar2,(int)uVar2);
    uVar3 = PackedFloatingMUL(uVar1,uVar1);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar3,uVar2);
    uVar3 = PackedFloatingSUB(CONCAT44(uVar9,*(undefined4 *)(param_2 + 3)),
                              CONCAT44(*(undefined4 *)(param_2 + 1),uVar11));
    uVar5 = PackedFloatingReciprocalIter2(uVar5,uVar1);
    uVar1 = PackedFloatingSUB(CONCAT44(uVar6,uVar6),(ulonglong)*(uint *)(param_2 + 2));
    uVar5 = PackedFloatingMUL(uVar5,DAT_5042fb08);
    uVar2 = PackedFloatingMUL(uVar2,uVar5);
    uVar1 = PackedFloatingMUL(uVar1,uVar5);
    uVar3 = PackedFloatingMUL(uVar3,uVar5);
    *param_1 = uVar3;
    param_1[1] = CONCAT44((int)uVar2,(int)uVar1);
    FastExitMediaState();
    return;
  }
  if ((byte)(((byte)(uVar10 >> 0x17) & 1) << 2 | ((byte)(uVar10 >> 0x1f) & 1) << 3 |
             ((byte)(uVar10 >> 0x37) & 1) << 6 | (byte)(uVar10 >> 0x38) & 0x80) == 0xcc) {
    uVar2 = PackedFloatingADD(lVar4,_DAT_5042fa90);
    uVar6 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar8,uVar2);
    uVar5 = PackedFloatingMUL(uVar3,uVar3);
    uVar2 = CONCAT44((int)uVar2,(int)uVar2);
    uVar1 = PackedFloatingSUB((ulonglong)*(uint *)(param_2 + 2),CONCAT44(uVar6,uVar6));
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar5,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,DAT_5042fb08);
    uVar2 = PackedFloatingMUL(uVar2,uVar3);
    uVar5 = PackedFloatingADD(CONCAT44(*(undefined4 *)(param_2 + 3),uVar9),
                              CONCAT44(uVar11,*(undefined4 *)(param_2 + 1)) ^ DAT_5042fac0);
    uVar1 = PackedFloatingMUL(uVar1,uVar3);
    uVar3 = PackedFloatingMUL(uVar5,uVar3);
    param_1[1] = uVar3;
    *param_1 = CONCAT44((int)uVar1,(int)uVar2);
    FastExitMediaState();
    return;
  }
  if ((uVar10 >> 0x27 & 1) != 0) {
    uVar2 = PackedFloatingADD(uVar1,_DAT_5042fa90);
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar8,uVar2);
    uVar5 = PackedFloatingMUL(uVar3,uVar3);
    uVar1 = CONCAT44((int)uVar2,(int)uVar2);
    uVar2 = PackedFloatingReciprocalSQRIter1(uVar5,uVar1);
    uVar3 = PackedFloatingReciprocalIter2(uVar2,uVar3);
    uVar2 = PackedFloatingADD(CONCAT44(uVar6,uVar6),(ulonglong)*(uint *)(param_2 + 2));
    uVar5 = PackedFloatingMUL(uVar3,DAT_5042fb08);
    uVar3 = PackedFloatingADD(CONCAT44(uVar9,*(undefined4 *)(param_2 + 3)),
                              CONCAT44(*(undefined4 *)(param_2 + 1),uVar11) ^ DAT_5042fac0);
    uVar2 = PackedFloatingMUL(uVar2,uVar5);
    uVar1 = PackedFloatingMUL(uVar1,uVar5);
    uVar3 = PackedFloatingMUL(uVar3,uVar5);
    param_1[1] = uVar3;
    *param_1 = CONCAT44((int)uVar1,(int)uVar2);
    FastExitMediaState();
    return;
  }
  uVar3 = PackedFloatingADD(uVar3,_DAT_5042fa90);
  uVar2 = PackedFloatingReciprocalSQRAprox(uVar1,uVar3);
  uVar1 = PackedFloatingMUL(uVar2,uVar2);
  uVar3 = CONCAT44((int)uVar3,(int)uVar3);
  uVar1 = PackedFloatingReciprocalSQRIter1(uVar1,uVar3);
  uVar1 = PackedFloatingReciprocalIter2(uVar1,uVar2);
  uVar2 = PackedFloatingSUB(CONCAT44(uVar6,uVar6),(ulonglong)*(uint *)(param_2 + 2));
  uVar5 = PackedFloatingADD(CONCAT44(*(undefined4 *)(param_2 + 3),uVar9),
                            CONCAT44(uVar11,*(undefined4 *)(param_2 + 1)));
  uVar1 = PackedFloatingMUL(uVar1,DAT_5042fb08);
  uVar3 = PackedFloatingMUL(uVar3,uVar1);
  uVar2 = PackedFloatingMUL(uVar2,uVar1);
  uVar1 = PackedFloatingMUL(uVar5,uVar1);
  *param_1 = uVar1;
  param_1[1] = CONCAT44((int)uVar2,(int)uVar3);
  FastExitMediaState();
  return;
}


