/* FUN_006aa448 - 0x006aa448 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006aa448(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x58c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x594) + 0x20))();
  FUN_0045621e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0x96;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  FUN_00414edd();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e1ff();
  (**(code **)(**(int **)(extraout_ECX + 0x59c) + 0x20))();
  iStack_d0 = 0x6aa5fe;
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_d0 = 0x6aa60f;
    FUN_0045e7c2();
  }
  iStack_d0 = 2;
  iStack_d4 = 0x6aa61d;
  FUN_004b8476();
  iStack_d0 = 0x6aa62b;
  FUN_006ab5f5();
  iStack_d0 = 0x6aa639;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_d0 = 0x6aa646;
  FUN_00403191();
  iStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x38;
  iStack_d8 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a7a0);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_d4 = 0x6aa68a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_d0 = 0x6aa69c;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d0 = 0x6aa6ad;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_d0 = 0x6aa6ba;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa6c5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_d0 = 0x6aa6d2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa6dd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d0 = 0x6aa6ea;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa6f5;
    FUN_00878dfb();
  }
  iStack_d0 = 0x6aa6ff;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_d0 = unaff_EBP + -0x48;
  iStack_d4 = 0x6aa709;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa715;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_d0 = 0x6aa723;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_d0 = unaff_EBP + -0x38;
  puStack_dc = &DAT_00980690;
  iStack_d4 = 0x6aa72d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa739;
    FUN_00878dfb();
    puStack_dc = extraout_ECX_00;
  }
  iStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x48;
  iStack_d8 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a75c);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_d4 = 0x6aa77d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_d0 = 0x6aa78f;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d0 = 0x6aa7a0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_d0 = 0x6aa7ad;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa7b8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_d0 = 0x6aa7c5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa7d0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d0 = 0x6aa7dd;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa7e8;
    FUN_00878dfb();
  }
  iStack_d0 = 0x6aa7f2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_d0 = unaff_EBP + -0x38;
  iStack_d4 = 0x6aa7fc;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa808;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_d0 = 0x6aa816;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_d0 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_d4 = 0x6aa820;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa82c;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x38;
  iStack_d8 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_dc = puVar3;
  FUN_004033a1(u_UI_UIWindow_img_EnchantSkill_say_0096a718);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_d4 = 0x6aa870;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_d0 = 0x6aa882;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d0 = 0x6aa893;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_d0 = 0x6aa8a0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa8ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_d0 = 0x6aa8b8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa8c3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d0 = 0x6aa8d0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d0 = 0x6aa8db;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


