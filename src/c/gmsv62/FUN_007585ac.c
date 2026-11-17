/* FUN_007585ac - 0x007585ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007585ac(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_50 = (undefined4 *)0x7585ce;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  local_50 = (undefined4 *)(unaff_EBP + -0x28);
  uStack_54 = 0x7585dd;
  puVar1 = &DAT_00980690;
  iVar2 = FUN_00402e32();
  local_50 = puVar1;
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x7585e9;
    FUN_00878dfb();
    local_50 = extraout_ECX_00;
  }
  *(undefined4 ***)(unaff_EBP + -0x14) = &local_50;
  uStack_54 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_58 = 0x7585ff;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_54 = 0x75860b;
  FUN_0044974c();
  uStack_54 = 0x758612;
  uVar3 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  local_50 = (undefined4 *)0x758622;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x75862d;
    FUN_00878dfb();
  }
  local_50 = (undefined4 *)0x758633;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  local_50 = (undefined4 *)(unaff_EBP + -0x38);
  uStack_54 = 0x75863d;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x758649;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_50 = (undefined4 *)0x758653;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  local_50 = (undefined4 *)(unaff_EBP + -0x28);
  uStack_54 = 0x75865d;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x758669;
    FUN_00878dfb();
  }
  local_50 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_54 = 0x758679;
  FUN_004031b7();
  local_50 = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_54 = 0x75868d;
  uStack_54 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_58;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
  iVar2 = unaff_EBP + -0x48;
  iVar4 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00424e27(iVar4,iVar2);
  FUN_00425067(iVar4,iVar2);
  iVar4 = *(int *)(unaff_EBP + 8) + -2;
  iVar2 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = (iVar2 - *(int *)(unaff_EBP + -0x10)) / 2;
  FUN_004115d9(iVar2,iVar4);
  FUN_00448e3a(iVar2,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    local_50 = (undefined4 *)0x7586ed;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_50 = (undefined4 *)0x7586fa;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x758705;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_50 = (undefined4 *)0x758712;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x75871d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_50 = (undefined4 *)0x75872a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_50 = (undefined4 *)0x758735;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    local_50 = (undefined4 *)0x758746;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


