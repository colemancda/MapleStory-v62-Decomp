/* FUN_00499c7a - 0x00499c7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00499c7a(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  
  FUN_00879bb8();
  FUN_00498b1f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    *(int *)(unaff_EBP + -0x14) = iVar3 + 2;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(extraout_ECX + 0x1c) + -0xc + iVar3;
  }
  *(undefined4 *)(unaff_EBP + -0x18) =
       *(undefined4 *)(extraout_ECX + 0x5c + *(int *)(extraout_ECX + 0x34) * 4);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_7c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_84 = 0x499d59;
    iStack_80 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_7c = 0x499d66;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_7c = 0x499d71;
    FUN_00878dfb();
  }
  iStack_7c = 0x499d7b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_7c = unaff_EBP + -0x2c;
  iStack_80 = 0x499d8a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_7c = 0x499d96;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_7c = 0x499da3;
  FUN_00403191();
  iVar3 = *(int *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  (**(code **)(iVar3 + 0x20))();
  iVar3 = *(int *)(unaff_EBP + 8) + 0x12;
  if (*(int *)(extraout_ECX + 0x38) != 0) {
    iVar3 = *(int *)(unaff_EBP + 8) + 2;
  }
  iStack_7c = unaff_EBP + -0x3c;
  iStack_80 = 0x499dd6;
  iStack_80 = FUN_00449749();
  uStack_84 = 0x499ddf;
  uVar4 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_84;
  FUN_00448a17(uVar4);
  iVar1 = iVar1 + 2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004115d9(iVar3,iVar1);
  FUN_00448e3a(iVar3,iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_7c = 0x499e10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_7c = 0x499e1b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_7c = 0x499e28;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_7c = 0x499e33;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_7c = 0x499e44;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


