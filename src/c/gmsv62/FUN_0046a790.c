/* FUN_0046a790 - 0x0046a790 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0046a790(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *puStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 *puStack_5c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x20) = extraout_ECX;
  extraout_ECX[1] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  puStack_5c = &LAB_00450362;
  iStack_60 = 4;
  puStack_68 = extraout_ECX + 7;
  iStack_64 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0();
  puStack_5c = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x15] = 0;
  *extraout_ECX = &PTR_FUN_008e9698;
  iStack_60 = 0x46a7f7;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined1 *)0x46a809;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_5c = (undefined1 *)0x46a816;
  FUN_00403191();
  puStack_5c = (undefined1 *)0x0;
  iStack_60 = unaff_EBP + -0x34;
  iStack_64 = unaff_EBP + -0x44;
  puStack_68 = (undefined4 *)0x59e;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_68 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uVar1 = FUN_00432f57(unaff_EBP + -0x14);
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_68;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_60 = 0x46a87a;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  puStack_5c = (undefined1 *)0x46a889;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    puStack_5c = (undefined1 *)0x46a89a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_5c = (undefined1 *)0x46a8a7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a8b2;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_5c = (undefined1 *)0x46a8dd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a8e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined1 *)0x46a8f5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a900;
    FUN_00878dfb();
  }
  puStack_5c = (undefined1 *)0x46a90a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined1 *)(unaff_EBP + -0x44);
  iStack_60 = 0x46a914;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a920;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_5c = (undefined1 *)0x46a92e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  puStack_5c = (undefined1 *)(unaff_EBP + -0x34);
  iStack_60 = 0x46a938;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a944;
    FUN_00878dfb();
  }
  puStack_5c = (undefined1 *)0x0;
  iStack_60 = unaff_EBP + -0x44;
  iStack_64 = unaff_EBP + -0x34;
  puStack_68 = (undefined4 *)0x5a0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_68 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uVar1 = FUN_00432f57(unaff_EBP + -0x18);
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_68;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_60 = 0x46a9a8;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  puStack_5c = (undefined1 *)0x46a9b7;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    puStack_5c = (undefined1 *)0x46a9c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_5c = (undefined1 *)0x46a9d5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46a9e0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_5c = (undefined1 *)0x46aa0b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46aa16;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined1 *)0x46aa23;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46aa2e;
    FUN_00878dfb();
  }
  puStack_5c = (undefined1 *)0x46aa38;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  puStack_5c = (undefined1 *)(unaff_EBP + -0x34);
  iStack_60 = 0x46aa42;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46aa4e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_5c = (undefined1 *)0x46aa5c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined1 *)(unaff_EBP + -0x44);
  iStack_60 = 0x46aa66;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46aa72;
    FUN_00878dfb();
  }
  puStack_5c = (undefined1 *)0x0;
  iStack_60 = unaff_EBP + -0x34;
  iStack_64 = unaff_EBP + -0x44;
  puStack_68 = (undefined4 *)0x5a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_68 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uVar1 = FUN_00432f57(unaff_EBP + -0x18);
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_68;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_60 = 0x46aad6;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  puStack_5c = (undefined1 *)0x46aae5;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    puStack_5c = (undefined1 *)0x46aaf6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_5c = (undefined1 *)0x46ab03;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46ab0e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_5c = (undefined1 *)0x46ab39;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46ab44;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined1 *)0x46ab51;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_5c = (undefined1 *)0x46ab5c;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x10);
  extraout_ECX[0xf] = 0;
  if (iVar2 != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


