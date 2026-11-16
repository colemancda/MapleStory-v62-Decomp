/* ptr_5042911a - 0x5042911a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined8 *
ptr_5042911a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *param_3;
  uVar2 = PackedFloatingMUL(uVar3,*param_4);
  uVar4 = PackedFloatingMUL(uVar5,(ulonglong)*(uint *)(param_4 + 1));
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar4 = PackedFloatingMUL(uVar3,uVar1);
  uVar6 = PackedFloatingMUL(uVar5,(ulonglong)*(uint *)(param_3 + 1));
  uVar4 = PackedFloatingADD(uVar4,uVar6);
  uVar2 = PackedFloatingSUB(uVar4,uVar2);
  uVar7 = CONCAT44(DAT_5042fa90,*(uint *)(param_3 + 1));
  uVar4 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar2 = PackedFloatingCompareEQ(0,uVar4);
  uVar6 = FloatingReciprocalAprox(uVar6,uVar4);
  uVar3 = PackedFloatingMUL(uVar3,uVar1);
  if ((int)uVar2 != 0) {
    FastExitMediaState();
    return (undefined8 *)0x0;
  }
  uVar5 = PackedFloatingMUL(uVar5,uVar7);
  uVar2 = PackedFloatingReciprocalIter1(uVar4,uVar6);
  uVar3 = PackedFloatingADD(uVar3,uVar5);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar6);
  uVar3 = PackedFloatingAccumulate(uVar3,uVar3);
  uVar5 = PackedFloatingSUB(*param_4,uVar1);
  uVar3 = PackedFloatingMUL(uVar3,uVar2);
  uVar2 = PackedFloatingSUB((ulonglong)*(uint *)(param_4 + 1),uVar7);
  uVar5 = PackedFloatingMUL(uVar5,uVar3);
  uVar2 = PackedFloatingMUL(uVar2,uVar3);
  uVar3 = PackedFloatingADD(uVar5,uVar1);
  uVar5 = PackedFloatingADD(uVar2,uVar7);
  *param_1 = uVar3;
  *(int *)(param_1 + 1) = (int)uVar5;
  FastExitMediaState();
  return param_1;
}


