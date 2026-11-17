/* FUN_00757a6e - 0x00757a6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00757a6e(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puVar3;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = 3;
  iStack_38 = 0;
  uStack_3c = 0x757a8d;
  FUN_004031b7();
  iVar2 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iStack_34 = 0x80004003;
    iStack_38 = 0x757aa2;
    FUN_00878dfb();
  }
  iStack_34 = unaff_EBP + -0x20;
  iStack_38 = unaff_EBP + -0x10;
  uStack_3c = 0x757ab1;
  piVar1 = (int *)FUN_00425067();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iStack_34 = 0x80004003;
    iStack_38 = 0x757ac5;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  iStack_34 = 0xa0ffffff;
  iStack_38 = 0x44;
  uStack_3c = 0x44;
  uStack_40 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_44 = *(undefined4 *)(unaff_EBP + 8);
  piStack_4c = (int *)0x757adf;
  piStack_48 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar2 < 0) {
    piStack_4c = (int *)&DAT_00963cc8;
    uStack_58 = 0x757aef;
    iStack_54 = iVar2;
    piStack_50 = piVar1;
    FUN_00878e09();
  }
  piStack_4c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_4c != (int *)0x0) {
    piStack_50 = (int *)0x757aff;
    (**(code **)(*piStack_4c + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_4c = (int *)(unaff_EBP + -0x20);
  piStack_50 = (int *)0x757b0c;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    piStack_50 = (int *)0x757b17;
    FUN_00878dfb();
  }
  piStack_4c = (int *)0x3;
  piStack_50 = (int *)0x0;
  iStack_54 = 0x757b22;
  FUN_004031b7();
  piStack_4c = (int *)0x0;
  piStack_50 = (int *)0x0;
  iStack_54 = *(undefined4 *)(unaff_EBP + 0x18);
  iStack_64 = *(int *)(unaff_EBP + 0xc) + 0x42;
  uStack_58 = 0;
  uStack_5c = 1;
  uStack_60 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_68 = *(int *)(unaff_EBP + 8) + 2;
  uStack_6c = *(undefined4 *)(unaff_EBP + 0x10);
  puVar3 = auStack_70;
  *(undefined1 **)(unaff_EBP + 0xc) = auStack_70;
  iVar2 = unaff_EBP + -0x30;
  FUN_00424e27(auStack_70,iVar2);
  FUN_00425067(puVar3,iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0048b97b();
  FUN_005558b0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_4c = (int *)(unaff_EBP + -0x30);
  piStack_50 = (int *)0x757b7b;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    piStack_50 = (int *)0x757b86;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


