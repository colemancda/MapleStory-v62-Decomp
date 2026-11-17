/* ptr_007208e8 - 0x007208e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007208e8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *puStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = 0x7208ed;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_4 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_8 = 0x720903;
  FUN_0049967b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_4 = 0x720927;
  iVar2 = FUN_00402e32();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_4 = 0x72094f;
  iVar2 = FUN_00402e32();
  puStack_c = &DAT_00980690;
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
    puStack_c = extraout_ECX;
  }
  iStack_4 = unaff_EBP + -0x48;
  iStack_8 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_c,0x780);
  iVar2 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_4 = 0x7209a2;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar2 = FUN_0041a581();
  if ((iVar2 < unaff_EDI) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_4 = 0x720a25;
  iVar2 = FUN_00402e32();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_4 = 0x720a4d;
  iVar2 = FUN_00402e32();
  puVar1 = &DAT_00980690;
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  iStack_4 = unaff_EBP + -0x38;
  iStack_8 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_c = puVar1;
  FUN_00679e4e(&puStack_c,0x781);
  iVar2 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_4 = 0x720aa0;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar2 = FUN_0041a581();
  if ((iVar2 < unaff_EDI) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_4 = 0x720b23;
  iVar2 = FUN_00402e32();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_4 = 0x720b4b;
  iVar2 = FUN_00402e32();
  puVar1 = &DAT_00980690;
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  iStack_4 = unaff_EBP + -0x38;
  iStack_8 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_c = puVar1;
  FUN_00679e4e(&puStack_c,0xa33);
  iVar2 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_4 = 0x720b9e;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar2 = FUN_0041a581();
  if ((iVar2 < unaff_EDI) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_004b2699();
  FUN_007223ee();
  FUN_0072207c();
  if (*(int *)(unaff_EBX + 0x5e0) != unaff_EDI) {
    FUN_00722b22();
  }
  piVar4 = (int *)FUN_006b42c2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar4 = unaff_EBX;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


