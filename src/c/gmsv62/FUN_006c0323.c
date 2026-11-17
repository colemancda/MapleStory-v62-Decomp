/* FUN_006c0323 - 0x006c0323 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c0323(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_2c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_0074d6fb();
  }
  else {
    puStack_2c = (undefined4 *)0x6c0356;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
    puVar1 = &DAT_00980690;
    iVar2 = FUN_00402e32();
    puStack_2c = puVar1;
    if (iVar2 < 0) {
      puStack_2c = (undefined4 *)0x6c0370;
      FUN_00878dfb();
      puStack_2c = extraout_ECX_00;
    }
    iVar2 = *(int *)(extraout_ECX + 0x24);
    iVar4 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      puStack_2c = (undefined4 *)0x6c0388;
      FUN_00878dfb();
      puStack_2c = extraout_ECX_01;
    }
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_2c;
    FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_007d4a9a(unaff_EBP + -0x14,0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0044974c();
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    iVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0x2c))();
    iVar5 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x10);
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      puStack_2c = (undefined4 *)0x6c03ee;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_2c = (undefined4 *)0x6c03fb;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2c = (undefined4 *)0x6c0406;
      FUN_00878dfb();
    }
    iVar6 = *(int *)(extraout_ECX + 0x24);
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      puStack_2c = (undefined4 *)0x6c041c;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x18);
    iVar6 = (**(code **)(*(int *)(iVar6 + 4) + 0x30))();
    iVar7 = FUN_00424f08();
    puStack_2c = (undefined4 *)(iVar6 + iVar7);
    FUN_0074d755(iVar4 + iVar5 + (-10 - iVar2));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


