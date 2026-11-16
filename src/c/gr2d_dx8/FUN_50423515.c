/* FUN_50423515 - 0x50423515 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50423515(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong extraout_MM0;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 in_MM4;
  undefined8 uVar6;
  
  FastExitMediaState();
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar5 = (undefined4)(uVar3 >> 0x20);
  uVar4 = PackedFloatingCompareGE(CONCAT44(uVar5,uVar5),_DAT_5042fb28);
  if ((int)uVar4 == 0) {
    uVar1 = FUN_504298c0();
    FUN_50429fa0();
    uVar4 = PackedFloatingCompareGE(extraout_MM0 & _DAT_5042fae0,DAT_5042fae8);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    if ((int)uVar4 != 0) {
      uVar6 = FloatingReciprocalAprox(in_MM4,extraout_MM0);
      uVar4 = PackedFloatingReciprocalIter1(extraout_MM0,uVar6);
      uVar4 = PackedFloatingReciprocalIter2(uVar4,uVar6);
      uVar4 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),uVar4);
      uVar2 = PackedFloatingMUL(uVar2,uVar4);
      uVar3 = PackedFloatingMUL(uVar3,uVar4);
    }
  }
  uVar3 = uVar3 & _DAT_5042faf0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  FastExitMediaState();
  return;
}


