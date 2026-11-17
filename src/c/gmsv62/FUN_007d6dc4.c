/* FUN_007d6dc4 - 0x007d6dc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007d6dc4(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 uStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0xffffffff;
  uStack_50 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_54 = 0;
  uStack_58 = 0;
  piStack_5c = (int *)0x7d6df5;
  (*DAT_0097b4c8)();
  piStack_5c = (int *)0x7d6e02;
  FUN_0087a1b0();
  piStack_5c = (int *)0x0;
  puStack_60 = (undefined *)0x0;
  uStack_64 = 0xffffffff;
  uVar1 = FUN_00449713(&uStack_58);
  uVar1 = FUN_00456ad5(uVar1);
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_64;
  FUN_004033a1(uVar1);
  iVar2 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_64 = 0x7d6e46;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_5c = (int *)(unaff_EBP + -0x1c);
    puStack_60 = (undefined *)0x7d6e5c;
    piStack_5c = (int *)FUN_00404b30();
    if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
      puStack_60 = (undefined *)0x7d6e6d;
      FUN_00878dfb();
    }
  }
  piStack_5c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_60 = (undefined *)0x7d6e7a;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    puStack_60 = (undefined *)0x7d6e85;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    piStack_5c = (int *)(unaff_EBP + -0x14);
    *puVar3 = 0;
    puStack_60 = (undefined *)0x7d6e9a;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  else {
    piStack_5c = *(int **)(unaff_EBP + 0x14);
    *(int ***)(unaff_EBP + -0x20) = &piStack_5c;
    puStack_60 = (undefined *)0x7d6eaf;
    FUN_00408b49();
    puStack_60 = (undefined *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_64 = 0x7d6ebf;
    FUN_0040263d();
    uStack_64 = 0x7d6ec6;
    FUN_004048a4();
    puStack_60 = *(undefined **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(short *)(unaff_EBP + -0x30) != 8) {
      puStack_60 = &DAT_0097812c;
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    piStack_5c = (int *)0xffffffff;
    *puVar3 = 0;
    uStack_64 = 0x7d6ee8;
    FUN_00454081();
    piStack_5c = (int *)(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_60 = (undefined *)0x7d6ef8;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      puStack_60 = (undefined *)0x7d6f03;
      FUN_00878dfb();
    }
  }
  piStack_5c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_5c != (int *)0x0) {
    puStack_60 = (undefined *)0x7d6f14;
    (**(code **)(*piStack_5c + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_5c = (int *)0x7d6f20;
  FUN_00414ebb();
  piStack_5c = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_5c != (int *)0x0) {
    puStack_60 = (undefined *)0x7d6f31;
    (**(code **)(*piStack_5c + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_5c = (int *)0x7d6f3c;
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    piStack_5c = (int *)0x7d6f48;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


