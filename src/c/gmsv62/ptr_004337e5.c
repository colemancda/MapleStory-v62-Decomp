/* ptr_004337e5 - 0x004337e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_004337e5(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iVar6;
  
  FUN_00878e09();
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  param_1 = 0x4337ff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x43380c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  param_1 = 0x433819;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x433824;
    FUN_00878dfb();
  }
  param_1 = 0x43382d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  param_1 = 0x43383a;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    param_1 = 0x43384d;
    FUN_00878dfb();
  }
  param_1 = unaff_EBP + -0x3c;
  FUN_00425139();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  param_1 = 0x43386b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x433876;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  param_1 = 0x433883;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x43388e;
    FUN_00878dfb();
  }
  param_1 = 0x433897;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  param_1 = 0x4338a4;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  param_1 = 0x4338b1;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_1 = 0x4338c1;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  param_1 = 0x4338ce;
  FUN_00424aee();
  param_1 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004295f1();
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  param_1 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00424e27();
  puVar3 = (undefined4 *)FUN_00425067();
  uVar5 = *puVar3;
  param_1 = unaff_EBP + -0x6c;
  iVar4 = unaff_EBP + -0x8c;
  iVar2 = unaff_EBP + -0x4c;
  iVar6 = unaff_EBP + -0xac;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00424e27(iVar6,uVar5,iVar2,iVar4);
  FUN_004250ac(iVar6,uVar5,iVar2,iVar4);
  param_1 = 0x43393b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x433946;
    FUN_00878dfb();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  param_1 = 0x43395b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x433966;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  param_1 = 0x433973;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x43397e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_1 = 0x43398e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x433999;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  param_1 = 0x4339a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x4339b1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  param_1 = 0x4339be;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_1 = 0x4339c9;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  param_1 = 0x4339d6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    param_1 = 0x4339e1;
    FUN_00878dfb();
    iVar2 = extraout_ECX;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    param_1 = 0x4339f6;
    FUN_00424e27();
    param_1 = 0x4339fd;
    FUN_0042fb5e();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00424df4();
    iVar2 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004125d9();
    param_1 = 0x433a29;
    FUN_00424e27();
    param_1 = 0x433a30;
    FUN_0042fb5e();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00424df4();
    FUN_00424f08();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004125d9();
    param_1 = 0x433a59;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    param_1 = 0x433a66;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    param_1 = 0x433a76;
    FUN_00424e27();
    param_1 = 0x433a7d;
    uVar5 = FUN_0042fb5e();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    param_1 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00424e27();
    iVar4 = FUN_0042fb0a();
    iVar4 = iVar4 + iVar2;
    FUN_00424df4(iVar4);
    FUN_00424f2f(iVar4);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    param_1 = 0x433ac3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_1 = 0x433ace;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    param_1 = 0x433adb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_1 = 0x433ae6;
      FUN_00878dfb();
    }
    param_1 = 0x433aef;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    param_1 = 0x433afc;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    param_1 = 0x433b0c;
    FUN_00424e27();
    param_1 = 0x433b13;
    FUN_0042bc90();
    param_1 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00424e27();
    FUN_0042fb34();
    FUN_00424e27();
    iVar2 = FUN_0042fb0a();
    iVar2 = -iVar2;
    FUN_00424df4(iVar2);
    FUN_00424f2f(iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    param_1 = 0x433b66;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_1 = 0x433b71;
      FUN_00878dfb();
    }
    iVar2 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    param_1 = 0x433b7e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      param_1 = 0x433b89;
      FUN_00878dfb();
      iVar2 = extraout_ECX_00;
    }
  }
  iVar4 = *(int *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x14) = &param_1;
  param_1 = iVar2;
  FUN_0041160e();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00424e82();
  FUN_00427b38();
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(unaff_EBP + 8);
  FUN_004125d9();
  FUN_004125d9();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


