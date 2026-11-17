/* FUN_0070a5d6 - 0x0070a5d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070a5d6(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar4;
  undefined1 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_9c = 0x70a607;
  iVar1 = FUN_0062d62d();
  if (iVar1 != 0) {
    iVar1 = *(int *)(extraout_ECX + 0x5a0);
    iStack_9c = 0x70a61e;
    uVar2 = FUN_0062e793();
    *(undefined4 *)(iVar1 + 4) = uVar2;
    iStack_9c = 0x70a62d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_9c = unaff_EBP + -0x40;
    puStack_a0 = (undefined1 *)0x70a63c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_9c = 0x70a64a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_9c = 0x70a653;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    iStack_9c = unaff_EBP + -100;
    puStack_a8 = &DAT_00980690;
    puStack_a0 = (undefined1 *)0x70a65d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_9c = 0x70a669;
      FUN_00878dfb();
      puStack_a8 = extraout_ECX_00;
    }
    iStack_9c = 0;
    puStack_a0 = (undefined1 *)(unaff_EBP + -0x40);
    puStack_a4 = (undefined1 *)(unaff_EBP + -100);
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_a8;
    puStack_ac = (undefined4 *)0xf9e;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679e4e(&puStack_a8);
    puStack_ac = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_a0 = (undefined1 *)0x70a6b5;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x30) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar1 != 0) {
      iStack_9c = 0x70a6cb;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_9c = 0x70a6dc;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_9c = 0x70a6e9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x70a6f4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_9c = 0x70a701;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x70a70c;
      FUN_00878dfb();
    }
    puVar4 = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_9c = 0x70a719;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x70a724;
      FUN_00878dfb();
      puVar4 = extraout_ECX_01;
    }
    iStack_9c = 0;
    puStack_a8 = &puStack_a0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a0;
    puStack_a4 = (undefined1 *)0xf9f;
    puStack_ac = (undefined4 *)0x70a739;
    puStack_a0 = puVar4;
    FUN_00679e4e();
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_a8 = (undefined4 *)0x70a74c;
    FUN_0040263d();
    puStack_a8 = (undefined4 *)0x70a753;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_a0 = (undefined1 *)0x70a75e;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x2c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar1 != 0) {
      iStack_9c = 0x70a774;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_9c = 0x70a785;
        FUN_00878dfb();
      }
    }
    puVar4 = (undefined1 *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_9c = 0x70a795;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x70a7a0;
      FUN_00878dfb();
      puVar4 = extraout_ECX_02;
    }
    iStack_9c = 0;
    puStack_a8 = &puStack_a0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a0;
    puStack_a4 = (undefined1 *)0x55d;
    puStack_ac = (undefined4 *)0x70a7b5;
    puStack_a0 = puVar4;
    FUN_00679e4e();
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_a8 = (undefined4 *)0x70a7c5;
    FUN_0040263d();
    puStack_a8 = (undefined4 *)0x70a7cc;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_a0 = (undefined1 *)0x70a7d7;
    uVar2 = FUN_004032b4();
    iVar1 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    iStack_9c = 0x70a7ec;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_9c = 0x70a7fd;
      FUN_00878dfb();
    }
    puVar4 = (undefined1 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_9c = 0x70a80a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_9c = 0x70a815;
      FUN_00878dfb();
      puVar4 = extraout_ECX_03;
    }
    iStack_9c = 0;
    puStack_a8 = &puStack_a0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a0;
    puStack_a4 = (undefined1 *)0xfa0;
    puStack_ac = (undefined4 *)0x70a82a;
    puStack_a0 = puVar4;
    FUN_00679e4e();
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_a8 = (undefined4 *)0x70a83a;
    FUN_0040263d();
    puStack_a8 = (undefined4 *)0x70a841;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_a0 = (undefined1 *)0x70a84c;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar3 != 0) {
      iStack_9c = 0x70a862;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_9c = 0x70a873;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_9c = 0x70a880;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_9c = 0x70a88b;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      FUN_0087a1b0();
      iStack_9c = 0;
      puStack_a4 = *(undefined1 **)(unaff_EBP + -0x10);
      puStack_a8 = (undefined4 *)0x70a8a9;
      puStack_a0 = &stack0xffffff6c;
      puStack_a4 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_a0;
      puStack_a8 = (undefined4 *)0x70a8b5;
      FUN_004033a1();
      puStack_a4 = (undefined1 *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_a8 = (undefined4 *)0x70a8c8;
      FUN_0040263d();
      puStack_a8 = (undefined4 *)0x70a8cf;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_a0 = (undefined1 *)0x70a8da;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      iStack_9c = 0x70a8e8;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_9c = 0x70a8f9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_9c = 0x70a909;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x70a914;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 3);
    iStack_9c = 0x70a933;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x30))();
      iStack_9c = 0x70a954;
      iStack_9c = (**(code **)(*(int *)(iVar1 + 4) + 0x2c))();
      iStack_9c = iStack_9c + 0x34;
      puStack_a8 = (undefined4 *)(iVar1 + 0x59c);
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_a4;
      puStack_ac = (undefined4 *)0x70a96b;
      puStack_a4 = extraout_ECX_04;
      puStack_a0 = extraout_ECX_04;
      FUN_0070b19f();
      *(undefined4 ***)(unaff_EBP + -0x44) = &puStack_ac;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_ac = extraout_ECX_05;
      puStack_a8 = extraout_ECX_05;
      FUN_0070b157(iVar1,1);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_007093c1();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_9c = 0x70a99e;
    FUN_0070b1ef();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_9c = 0x70a9af;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_9c = 0x70a9c0;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_9c = 0x70a9d1;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


