/* FUN_0070cfc3 - 0x0070cfc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070cfc3(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  wchar_t *pwStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  FUN_00879bb8();
  iStack_84 = 0x70cfe1;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x70cfef;
  FUN_00403191();
  iStack_84 = 0;
  iStack_88 = unaff_EBP + -0x4c;
  iStack_8c = unaff_EBP + -0x3c;
  pwStack_90 = u__left_0096b4c8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_004ef663(unaff_EBP + -0x18);
  *(wchar_t ***)(unaff_EBP + -0x1c) = &pwStack_90;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_88 = 0x70d040;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  iStack_84 = 0x70d051;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_84 = 0x70d062;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_84 = 0x70d06f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d07a;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x70d08e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d099;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_84 = 0x70d0a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d0b1;
    FUN_00878dfb();
  }
  iStack_84 = 0x70d0ba;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x70d0ca;
  FUN_00403191();
  iStack_84 = 0;
  iStack_88 = unaff_EBP + -0x3c;
  iStack_8c = unaff_EBP + -0x4c;
  pwStack_90 = u__center_0096b4b8;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar1 = FUN_004ef663(unaff_EBP + 8);
  *(wchar_t ***)(unaff_EBP + -0x1c) = &pwStack_90;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_88 = 0x70d11b;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iStack_84 = 0x70d12a;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_84 = 0x70d13b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_84 = 0x70d148;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d153;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x70d16f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d17a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_84 = 0x70d187;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d192;
    FUN_00878dfb();
  }
  iStack_84 = 0x70d19c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_84 = unaff_EBP + -0x2c;
  iStack_88 = 0x70d1a6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_84 = 0x70d1b2;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x70d1c2;
  FUN_00403191();
  iStack_84 = 0;
  iStack_88 = unaff_EBP + -0x2c;
  iStack_8c = unaff_EBP + -0x5c;
  pwStack_90 = u__right_0096b4a8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar1 = FUN_004ef663(unaff_EBP + -0x10);
  *(wchar_t ***)(unaff_EBP + 0xc) = &pwStack_90;
  FUN_0046fd15(uVar1);
  iVar2 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_88 = 0x70d213;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  iStack_84 = 0x70d222;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_84 = 0x70d233;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_84 = 0x70d240;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d24b;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x70d267;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d272;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_84 = 0x70d27f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_84 = 0x70d28a;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


