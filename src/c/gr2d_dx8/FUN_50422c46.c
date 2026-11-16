/* FUN_50422c46 - 0x50422c46 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50422c46(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = _DAT_5042fa90;
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar6 = PackedFloatingMUL(uVar5,uVar5);
  uVar3 = PackedFloatingMUL(uVar1,uVar1);
  uVar6 = PackedFloatingADD(uVar6,uVar3);
  uVar6 = PackedFloatingAccumulate(uVar6,uVar6);
  uVar7 = PackedFloatingCompareGE(DAT_5042fb10,uVar6);
  uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar6);
  if ((int)uVar7 == 0) {
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    if (param_2 != (undefined8 *)0x0) {
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar6);
      uVar4 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar5,uVar4);
      uVar5 = PackedFloatingMUL(uVar4,uVar1);
      *param_2 = uVar3;
      *(int *)(param_2 + 1) = (int)uVar5;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar2 = FUN_504298c0();
      uVar5 = PackedFloatingMUL(uVar2,_DAT_5042faa8);
      *param_3 = (int)uVar5;
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *(undefined8 *)((int)param_2 + 4) = 0;
      *(int *)param_2 = (int)uVar4;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  FastExitMediaState();
  return;
}


