/* FUN_0048fdd6 - 0x0048fdd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048fdd6(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x210) = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_004ae046();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00495c26();
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))();
  iStack_a0 = 0xffffffff;
  iStack_a4 = 0xff3a67aa;
  iStack_a8 = 0x48fe51;
  FUN_004ae221();
  *(undefined4 *)(extraout_ECX + 0x168) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x16c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x728) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x72c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x164) = 0;
  *(undefined4 *)(extraout_ECX + 0x724) = 0;
  *(undefined4 *)(extraout_ECX + 0x734) = 0;
  iStack_a0 = 0x48fe89;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_a0 = 0x48fe99;
  FUN_00403191();
  iStack_a0 = 0;
  iStack_a4 = unaff_EBP + -0x30;
  iStack_a8 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_ac;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_ac,0x4c5);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a4 = 0x48fee3;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_a0 = 0x48fef5;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_a0 = 0x48ff06;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a0 = 0x48ff13;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x48ff1e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a0 = 0x48ff2b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x48ff36;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_a0 = 0x48ff43;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x48ff4e;
    FUN_00878dfb();
  }
  iStack_a0 = 0x48ff58;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_a0 = unaff_EBP + -0x40;
  iStack_a4 = 0x48ff62;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a0 = 0x48ff6e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iStack_a0 = 0x48ff7f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_a0 = unaff_EBP + -0x30;
  puStack_ac = &DAT_00980690;
  iStack_a4 = 0x48ff89;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a0 = 0x48ff95;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_00;
  }
  iStack_a0 = 0;
  iStack_a4 = unaff_EBP + -0x40;
  iStack_a8 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_ac;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&puStack_ac,0x4c6);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_a4 = 0x48ffdf;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_a0 = 0x48fff1;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_a0 = 0x490002;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a0 = 0x49000f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x49001a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a0 = 0x490027;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x490032;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_a0 = 0x49003f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x49004a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x218;
  do {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_a0 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    iStack_a4 = 0x490073;
    piVar4 = (int *)FUN_00679e4e();
    puVar1 = (undefined4 *)*piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (puVar1 == (undefined4 *)0x0) {
      iStack_a0 = 0;
    }
    else {
      iStack_a0 = *puVar1;
    }
    iStack_a4 = unaff_EBP + -0x10;
    iStack_a8 = 0x490090;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    iStack_a0 = 0x4900b0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_a0 = unaff_EBP + -0x60;
    iStack_a4 = 0x4900ba;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_a0 = 0x4900c6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_a0 = 0x4900d4;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_a0 = unaff_EBP + -0x50;
    iStack_a4 = 0x4900de;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_a0 = 0x4900ea;
      FUN_00878dfb();
    }
    iStack_a0 = 0;
    iStack_a4 = unaff_EBP + -0x60;
    iStack_a8 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_ac = (undefined4 *)0x490100;
    uVar3 = FUN_00411641();
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_ac;
    puStack_ac = extraout_ECX_01;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_a4 = 0x490132;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    iStack_a0 = 0x490141;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_a0 = 0x490152;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_a0 = 0x49015f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x49016a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_a0 = 0x490177;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x490182;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_a0 = 0x49018f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x49019a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + 8) < 4);
  iStack_a0 = 0x4901c9;
  FUN_0055853a();
  FUN_00492841();
  FUN_00492a12();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


