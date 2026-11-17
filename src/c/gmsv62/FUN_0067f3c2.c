/* FUN_0067f3c2 - 0x0067f3c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067f3c2(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  int *piStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  iVar2 = **(int **)(extraout_ECX + 0xc0);
  *(int **)(unaff_EBP + -0x10) = *(int **)(extraout_ECX + 0xc0);
  iVar2 = (**(code **)(iVar2 + 0x110))();
  if (iVar2 < 0) {
    iStack_70 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_78 = 0x67f470;
    iStack_74 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_70 = 0x67f47d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_70 = 0x67f488;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_70 = 0x67f495;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_70 = 0x67f4a0;
    FUN_00878dfb();
  }
  iStack_70 = 0x67f4aa;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_70 = unaff_EBP + -0x40;
  iStack_74 = 0x67f4b8;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_70 = 0x67f4c4;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0x134);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_70 = 0x67f4de;
    FUN_00878dfb();
  }
  piStack_9c = *(int **)(extraout_ECX + 0x134);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar2 = *piStack_9c;
  iStack_70 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  iStack_94 = extraout_ECX + 0x144;
  iStack_98 = extraout_ECX + 0x140;
  *(int **)(unaff_EBP + -0x10) = piStack_9c;
  puStack_a0 = (undefined *)0x67f512;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    puStack_a0 = &DAT_00963de8;
    uStack_a4 = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_ac = (undefined *)0x67f524;
    piStack_a8 = (int *)iVar2;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a0 = (undefined *)(unaff_EBP + -0x40);
  uStack_a4 = 0x67f531;
  puStack_a0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_a0 < 0) {
    uStack_a4 = 0x67f53c;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x134) == 0) {
    puStack_a0 = (undefined *)0x80004003;
    uStack_a4 = 0x67f54e;
    FUN_00878dfb();
  }
  puStack_a0 = *(undefined **)(extraout_ECX + 0x144);
  uStack_a4 = *(undefined4 *)(extraout_ECX + 0x140);
  piVar1 = *(int **)(extraout_ECX + 0x134);
  puStack_ac = (undefined *)0x67f568;
  piStack_a8 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x40))();
  if (iVar2 < 0) {
    puStack_ac = &DAT_00963d08;
    FUN_00878e09(iVar2,piVar1);
  }
  puStack_ac = *(undefined **)(extraout_ECX + 0xc0);
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  FUN_00424ed4();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00424e82();
  FUN_00427af9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


