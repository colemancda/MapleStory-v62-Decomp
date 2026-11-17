/* FUN_005f841d - 0x005f841d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005f841d(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_005c0182();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x5f] = 0;
  extraout_ECX[0x61] = 0;
  extraout_ECX[99] = 0;
  extraout_ECX[0x65] = 0;
  extraout_ECX[0x67] = 0;
  extraout_ECX[0x69] = 0;
  extraout_ECX[0x6b] = 0;
  extraout_ECX[0x6d] = 0;
  extraout_ECX[0x6f] = 0;
  extraout_ECX[0x70] = 0;
  extraout_ECX[0x71] = 0;
  extraout_ECX[0x72] = 0;
  extraout_ECX[0x73] = 0;
  extraout_ECX[0x74] = 0;
  extraout_ECX[0x75] = 0;
  extraout_ECX[0x76] = 0;
  extraout_ECX[0x77] = 0;
  extraout_ECX[0x78] = 0;
  extraout_ECX[0x79] = 0;
  extraout_ECX[0x7a] = 0;
  extraout_ECX[0x7b] = 0;
  extraout_ECX[0x7c] = 0;
  extraout_ECX[0x7d] = 0;
  extraout_ECX[0x80] = 0;
  extraout_ECX[0x81] = 0;
  extraout_ECX[0x82] = 0;
  extraout_ECX[0x7e] = &PTR_FUN_008ecde0;
  extraout_ECX[0x83] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0074b9b2();
  extraout_ECX[0x2a8] = 0;
  extraout_ECX[0x2ac] = 0;
  extraout_ECX[0x2ad] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uVar1 = FUN_007d1e08();
  extraout_ECX[0x2b3] = uVar1;
  iStack_50 = unaff_EBP + -0x10;
  *extraout_ECX = &PTR_FUN_008ecd78;
  extraout_ECX[1] = &PTR_FUN_008ecd2c;
  extraout_ECX[2] = &PTR_FUN_008ecd28;
  iStack_54 = 0x5f853a;
  piVar2 = (int *)FUN_00679d86();
  iStack_54 = *piVar2;
  iStack_50 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_58 = 0x5f854b;
  FUN_004bc5f0();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00402676();
  iStack_50 = 0x5f8561;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x5f856f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5f857b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5f8589;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  puStack_5c = &DAT_00980690;
  iStack_54 = 0x5f8597;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5f85a3;
    FUN_00878dfb();
    puStack_5c = extraout_ECX_00;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00679e4e(&puStack_5c,0x608);
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_54 = 0x5f85ea;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5f85fc;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5f860d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_50 = 0x5f861a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5f8625;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5f8632;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5f863d;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_50 = 0x5f864a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5f8655;
    FUN_00878dfb();
    iVar3 = extraout_ECX_01;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x616;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined4 *)0x5f867d;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5f8684;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_54 = 0x5f868f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5f86a1;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5f86b2;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_50 = 0x5f86bf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5f86ca;
    FUN_00878dfb();
    iVar3 = extraout_ECX_02;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x617;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined4 *)0x5f86f2;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5f86f9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_54 = 0x5f8704;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5f8716;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5f8727;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_50 = 0x5f8734;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5f873f;
    FUN_00878dfb();
    iVar3 = extraout_ECX_03;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x618;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined4 *)0x5f8767;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5f876e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_54 = 0x5f8779;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5f878b;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5f879c;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_50 = 0x5f87a9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5f87b4;
    FUN_00878dfb();
    iVar3 = extraout_ECX_04;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x619;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined4 *)0x5f87dc;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5f87e3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_54 = 0x5f87ee;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5f8800;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5f8811;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_50 = 0x5f881e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5f8829;
    FUN_00878dfb();
  }
  FUN_005fef07();
  FUN_005fe2a8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


