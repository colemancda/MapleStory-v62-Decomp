/* FUN_0070a9e8 - 0x0070a9e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070a9e8(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  uVar1 = FUN_0070a196();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_44 = 0x70aa15;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_44 = unaff_EBP + -0x2c;
  uStack_48 = 0x70aa23;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_44 = 0x70aa31;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_44 = FUN_007d1e08();
  iStack_44 = iStack_44 + *(int *)(unaff_EBP + -0x10);
  uStack_48 = 0x70aa47;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x70aa56;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_44 = 0x70aa6b;
    FUN_00878dfb();
  }
  iStack_44 = 0x70aa78;
  piVar3 = (int *)FUN_004113e5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    iStack_44 = 0x70aa88;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_44 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_60 = 0;
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_64 = 0;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_6c = (int *)0x70aaaf;
  piStack_68 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x90))();
  if (iVar2 < 0) {
    piStack_6c = (int *)&DAT_00963de8;
    piStack_70 = piVar3;
    FUN_00878e09(iVar2);
  }
  piStack_6c = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_6c != (int *)0x0) {
    piStack_70 = (int *)0x70aad0;
    (**(code **)(*piStack_6c + 8))();
  }
  piStack_6c = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_6c != (int *)0x0) {
    piStack_70 = (int *)0x70aae1;
    (**(code **)(*piStack_6c + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_6c = (int *)(unaff_EBP + -0x3c);
  piStack_70 = (int *)0x70aaee;
  piStack_6c = (int *)FUN_00402bc3();
  if ((int)piStack_6c < 0) {
    piStack_70 = (int *)0x70aaf9;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_6c = (int *)(unaff_EBP + -0x2c);
  piStack_70 = (int *)0x70ab06;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x70ab11;
    piStack_6c = (int *)iVar2;
    FUN_00878dfb();
    piStack_6c = extraout_ECX_00;
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  *(int ***)(unaff_EBP + -0x10) = &piStack_70;
  piStack_70 = piStack_6c;
  piStack_6c = (int *)uVar1;
  FUN_004489f5(&piStack_70);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00424e82();
  FUN_00427b38();
  if (*(int *)(iVar2 + 0x5a8) != 0) {
    piStack_6c = (int *)0x70ab44;
    FUN_00815de9();
    piStack_6c = (int *)0x70ab4f;
    FUN_0070b2a1();
  }
  piStack_6c = (int *)0x70ab56;
  FUN_0078a218();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


