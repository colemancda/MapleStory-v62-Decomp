/* FUN_005cdea3 - 0x005cdea3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cdea3(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int *piVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  FUN_0064d61f(uVar1);
  FUN_0040f150(unaff_EBP + 8);
  piVar6 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*piVar6 + -4) >> 1;
  }
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)FUN_005d1aeb();
    uVar4 = FUN_007d1e08();
    *puVar3 = uVar4;
    puVar3[1] = uVar1;
    uVar1 = FUN_005c5474();
    puVar3[3] = 0;
    puVar3[2] = uVar1;
    FUN_00402f41(unaff_EBP + 8);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    puVar3[5] = *puVar5;
    puVar3[6] = puVar5[1];
    piVar6 = *(int **)(unaff_EBP + 8);
  }
  if (piVar6 != (int *)0x0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


