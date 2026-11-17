/* FUN_0042aa0a - 0x0042aa0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042aa0a(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int unaff_EBP;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  wchar_t *pwStack_84;
  int iStack_80;
  int *piStack_7c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  piStack_7c = (int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_80 = 0x42aa3a;
  piVar2 = (int *)FUN_00679e4e();
  puVar1 = (undefined4 *)*piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piStack_7c = (int *)0x0;
  }
  else {
    piStack_7c = (int *)*puVar1;
  }
  iStack_80 = unaff_EBP + -0x1c;
  pwStack_84 = (wchar_t *)0x42aa57;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402fa6();
  piStack_7c = (int *)0x42aa73;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_7c = (int *)0x42aa80;
  FUN_00403191();
  piStack_7c = (int *)0x0;
  iStack_80 = unaff_EBP + -100;
  pwStack_84 = (wchar_t *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_88 = 0x42aa96;
  iStack_8c = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_88;
  uStack_90 = 0x42aaa2;
  uStack_88 = extraout_ECX_00;
  FUN_004033a1();
  iStack_8c = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_90 = 0x42aaaf;
  FUN_00405a1d();
  uStack_90 = 0x42aab6;
  FUN_00402660();
  uStack_90 = 0x42aabd;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_80 = 0x42aac8;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + 0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    piStack_7c = (int *)0x42aade;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      piStack_7c = (int *)0x42aaef;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_7c = (int *)0x42aafc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_7c = (int *)0x42ab07;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_7c = (int *)0x42ab14;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_7c = (int *)0x42ab1f;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_7c = (int *)0x42ab2c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_7c = (int *)0x42ab37;
    FUN_00878dfb();
    iVar3 = extraout_ECX_01;
  }
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    piStack_7c = (int *)0x0;
    *(int **)(unaff_EBP + -0x20) = &iStack_80;
    pwStack_84 = u_fail_00964028;
    uStack_88 = 0x42ab4e;
    iStack_80 = iVar3;
    FUN_004033a1();
    pwStack_84 = (wchar_t *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_88 = 0x42ab5e;
    FUN_0040263d();
    uStack_88 = 0x42ab65;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_80 = 0x42ab70;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x14) = uVar5;
    piStack_7c = (int *)0x42ab7f;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      piStack_7c = (int *)0x42ab90;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_7c = (int *)0x42ab9d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42aba8;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piStack_7c = (int *)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_80 = 0x42abbf;
  piVar2 = (int *)FUN_00679d86();
  iStack_80 = *piVar2;
  piStack_7c = (int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pwStack_84 = L"쒃贌ᑍ䗆೼韨ﵺ叿ｨ";
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00402676();
  piStack_7c = (int *)0xff;
  iStack_80 = -0x3ff9eb5c;
  *(wchar_t ***)(unaff_EBP + 0x14) = &pwStack_84;
  uStack_88 = 0;
  iStack_8c = 0x42abf6;
  pwStack_84 = extraout_ECX_02;
  FUN_00424e0a();
  uStack_88 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_94 = unaff_EBP + -0x18;
  iStack_8c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_90;
  uStack_98 = 0x42ac0b;
  uStack_90 = extraout_ECX_03;
  FUN_00433bdf();
  iStack_94 = 0;
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_98;
  uStack_98 = extraout_ECX_04;
  FUN_00424dbc(unaff_EBP + -0x14);
  FUN_0042e5bf(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_7c = (int *)0x42ac40;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    piStack_7c = (int *)(unaff_EBP + -0x44);
    iStack_80 = 0x42ac4a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42ac56;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_7c = (int *)0x42ac60;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    piStack_7c = (int *)(unaff_EBP + -0x34);
    iStack_80 = 0x42ac6a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42ac76;
      FUN_00878dfb();
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piVar2 == (int *)0x0) {
      piStack_7c = (int *)0x42ac8b;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    pwStack_84 = *(wchar_t **)(unaff_EBP + -0x44);
    iStack_80 = *(int *)(unaff_EBP + -0x40);
    iVar3 = *piVar2;
    piStack_7c = *(int **)(unaff_EBP + -0x3c);
    iStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_98 = 0;
    *(int **)(unaff_EBP + 0x14) = piVar2;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar2);
    if (iVar3 < 0) {
      piStack_7c = *(int **)(unaff_EBP + 0x14);
      pwStack_84 = (wchar_t *)0x42acc5;
      iStack_80 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_7c = (int *)0x42acd2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42acdd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_7c = (int *)0x42acea;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42acf5;
      FUN_00878dfb();
    }
    piStack_7c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + 0x14) = &stack0xffffff88;
    if (piStack_7c != (int *)0x0) {
      iStack_80 = 0x42ad0d;
      (**(code **)(*piStack_7c + 4))();
    }
    piStack_7c = (int *)0x42ad15;
    FUN_00427af9();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_7c = (int *)0x42ad26;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    piStack_7c = (int *)0x42ad37;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_7c = (int *)0x42ad47;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


