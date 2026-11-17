/* ptr_006aa5a5 - 0x006aa5a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006aa5a5(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puVar3;
  
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != unaff_EBX) {
    FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e1ff();
  (**(code **)(**(int **)(unaff_ESI + 0x59c) + 0x20))();
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_0045e7c2();
  }
  iStack_1c = 0x6aa61d;
  FUN_004b8476();
  FUN_006ab5f5();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191();
  iStack_1c = unaff_EBP + -0x38;
  iStack_20 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a7a0);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_1c = 0x6aa68a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_1c = 0x6aa709;
  iVar1 = FUN_00402e32();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  puStack_24 = &DAT_00980690;
  iStack_1c = 0x6aa72d;
  iVar1 = FUN_00402e32();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
    puStack_24 = extraout_ECX;
  }
  iStack_1c = unaff_EBP + -0x48;
  iStack_20 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a75c);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_1c = 0x6aa77d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_1c = 0x6aa7fc;
  iVar1 = FUN_00402e32();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  puVar3 = &DAT_00980690;
  iStack_1c = 0x6aa820;
  iVar1 = FUN_00402e32();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
    puVar3 = extraout_ECX_00;
  }
  iStack_1c = unaff_EBP + -0x38;
  iStack_20 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_24 = puVar3;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a718);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_1c = 0x6aa870;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


