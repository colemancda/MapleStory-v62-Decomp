/* ptr_00433761 - 0x00433761 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00433761(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iStack_34;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)FUN_004113e5();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)*piVar2;
  *(int **)(unaff_EBP + -0x14) = (int *)*piVar2;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    iStack_34 = *(int *)(unaff_EBP + -0x14);
    FUN_00878e09(iVar3);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_34 = 0x4337ff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x43380c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_34 = 0x433819;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x433824;
    FUN_00878dfb();
  }
  iStack_34 = 0x43382d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_34 = 0x43383a;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_34 = 0x43384d;
    FUN_00878dfb();
  }
  iStack_34 = unaff_EBP + -0x3c;
  FUN_00425139(0);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_34 = 0x43386b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x433876;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_34 = 0x433883;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x43388e;
    FUN_00878dfb();
  }
  iStack_34 = 0x433897;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_34 = 0x4338a4;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_34 = 0x4338b1;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_34 = 0x4338c1;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_34 = 0x4338ce;
  FUN_00424aee();
  iStack_34 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004295f1();
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  iStack_34 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00424e27();
  puVar4 = (undefined4 *)FUN_00425067();
  uVar6 = *puVar4;
  iStack_34 = unaff_EBP + -0x6c;
  iVar3 = unaff_EBP + -0x7c;
  iVar9 = unaff_EBP + -0x8c;
  iVar5 = unaff_EBP + -0x4c;
  iVar8 = unaff_EBP + -0xac;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00424e27(iVar8,uVar6,iVar5,iVar9,iVar3);
  FUN_004250ac(iVar8,uVar6,iVar5,iVar9,iVar3);
  iStack_34 = 0x43393b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x433946;
    FUN_00878dfb();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_34 = 0x43395b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x433966;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_34 = 0x433973;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x43397e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_34 = 0x43398e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x433999;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_34 = 0x4339a6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x4339b1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_34 = 0x4339be;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_34 = 0x4339c9;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_34 = 0x4339d6;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_34 = 0x4339e1;
    FUN_00878dfb();
    iVar3 = extraout_ECX;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    iStack_34 = 0x4339f6;
    FUN_00424e27();
    iStack_34 = 0x4339fd;
    FUN_0042fb5e();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00424df4();
    iVar3 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004125d9();
    iStack_34 = 0x433a29;
    FUN_00424e27();
    iStack_34 = 0x433a30;
    FUN_0042fb5e();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00424df4();
    uVar6 = FUN_00424f08();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004125d9();
    iStack_34 = 0x433a59;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_34 = 0x433a66;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_34 = 0x433a76;
    FUN_00424e27();
    iStack_34 = 0x433a7d;
    uVar7 = FUN_0042fb5e();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
    iStack_34 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00424e27(uVar6);
    iVar5 = FUN_0042fb0a();
    iVar5 = iVar5 + iVar3;
    FUN_00424df4(iVar5);
    FUN_00424f2f(iVar5,uVar6);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_34 = 0x433ac3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_34 = 0x433ace;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_34 = 0x433adb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_34 = 0x433ae6;
      FUN_00878dfb();
    }
    iStack_34 = 0x433aef;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_34 = 0x433afc;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_34 = 0x433b0c;
    FUN_00424e27();
    iStack_34 = 0x433b13;
    FUN_0042bc90();
    iStack_34 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00424e27();
    uVar6 = FUN_0042fb34();
    FUN_00424e27(uVar6);
    iVar3 = FUN_0042fb0a();
    iVar3 = -iVar3;
    FUN_00424df4(iVar3);
    FUN_00424f2f(iVar3,uVar6);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_34 = 0x433b66;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_34 = 0x433b71;
      FUN_00878dfb();
    }
    iVar3 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_34 = 0x433b7e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_34 = 0x433b89;
      FUN_00878dfb();
      iVar3 = extraout_ECX_00;
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x14) = &iStack_34;
  iStack_34 = iVar3;
  FUN_0041160e(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00424e82();
  FUN_00427b38();
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(unaff_EBP + 8);
  FUN_004125d9();
  FUN_004125d9();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


