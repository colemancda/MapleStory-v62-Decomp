/* FUN_0051fe12 - 0x0051fe12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051fe12(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iStack_4c = 0xff;
  uStack_50 = 0xffffffff;
  puStack_58 = (undefined1 *)&uStack_54;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_54;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  uStack_5c = 0x51fe3d;
  FUN_004489f5();
  puStack_58 = (undefined1 *)0x0;
  uStack_5c = 0;
  iStack_60 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004489f5();
  piVar3 = &iStack_60;
  *(int **)(unaff_EBP + -0x24) = &iStack_60;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00424e27(&iStack_60);
  FUN_0042fb5e(piVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679d86(unaff_EBP + -0x14,0x828);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar2 = FUN_00411641(0);
  piVar3 = (int *)FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
  piVar3 = (int *)*piVar3;
  piVar1 = *(int **)(extraout_ECX + 0x90);
  piVar5 = (int *)(extraout_ECX + 0x90);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != piVar3) {
    *piVar5 = (int)piVar3;
    FUN_00424ed4();
    if (piVar1 != (int *)0x0) {
      iStack_4c = 0x51febf;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_4c = 0x51fed0;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_4c = 0x51feed;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  iStack_4c = 0x51fef9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_4c = unaff_EBP + -0x44;
  uStack_50 = 0x51ff07;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_4c = 0x51ff13;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 7;
  iStack_4c = 0x51ff20;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4c = unaff_EBP + -0x34;
  uStack_50 = 0x51ff2e;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_4c = 0x51ff3a;
    FUN_00878dfb();
  }
  iVar4 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar4 == 0) {
    iStack_4c = 0x51ff4c;
    FUN_00878dfb();
  }
  piVar5 = (int *)*piVar5;
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
  iVar4 = *piVar5;
  iStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_60 = *(int *)(unaff_EBP + -0x30);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x18) = piVar5;
  puStack_58 = *(undefined1 **)(unaff_EBP + -0x28);
  iVar4 = (**(code **)(iVar4 + 0x110))(piVar5,0,*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x98) = 1;
  return;
}


