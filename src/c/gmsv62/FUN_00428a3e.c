/* FUN_00428a3e - 0x00428a3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00428a3e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iStack_64 = 0x428a5d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_64 = unaff_EBP + -0x3c;
  piStack_68 = (int *)0x428a6c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x428a7a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x428a83;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_64 = unaff_EBP + -0x2c;
  puStack_70 = &DAT_00980690;
  piStack_68 = (int *)0x428a8d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x428a99;
    FUN_00878dfb();
    puStack_70 = extraout_ECX_00;
  }
  iStack_64 = 0;
  piStack_68 = (int *)(unaff_EBP + -0x3c);
  puStack_6c = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_68 = (int *)0x428adb;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_64 = 0x428af1;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_64 = 0x428b02;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_64 = 0x428b0f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x428b1a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_64 = 0x428b27;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x428b32;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x428b3f;
  iVar1 = unaff_EBP + -0x3c;
  iVar2 = FUN_00402bc3();
  iStack_64 = iVar1;
  if (iVar2 < 0) {
    iStack_64 = 0x428b4a;
    FUN_00878dfb();
    iStack_64 = extraout_ECX_01;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_6c = (undefined1 *)&iStack_64;
    *(int **)(unaff_EBP + -0x1c) = &iStack_64;
    piStack_68 = (int *)0xb0d;
    puStack_70 = (undefined4 *)0x428b6a;
    FUN_00679e4e();
    piStack_68 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_6c = (undefined1 *)0x428b7a;
    FUN_0040263d();
    puStack_6c = (undefined1 *)0x428b81;
    iStack_64 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_68 = (int *)0x428b8b;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    piStack_68 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_6c = (undefined1 *)0x428b9b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_64 = 0x428ba8;
      FUN_00878dfb();
    }
    iVar2 = FUN_007d1e08();
    piStack_68 = (int *)FUN_00437048();
    iVar1 = *(int *)(unaff_EBP + 0x14);
    iVar2 = *(int *)(unaff_EBP + 0x10) + iVar2;
    iStack_64 = *(int *)(unaff_EBP + -0x1c);
    *piStack_68 = iVar2;
    piStack_68[1] = iVar2 + iVar1;
    piStack_68[2] = *(int *)(unaff_EBP + 0x18);
    piStack_68[3] = *(int *)(unaff_EBP + 0x1c);
    piStack_68 = piStack_68 + 4;
    puStack_6c = *(undefined1 **)(unaff_EBP + 0xc);
    puStack_70 = *(undefined4 **)(unaff_EBP + 8);
    FUN_0042ded8();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_64 = 0x428c00;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


