/* FUN_0048592f - 0x0048592f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048592f(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puVar3;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0x485949;
  FUN_0081622a();
  iStack_60 = 0x485954;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_60 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_64 = 0x48596b;
  FUN_007d4a9a();
  iStack_68 = unaff_EBP + -0x1c;
  uStack_64 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_6c = 0x48597a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x485992;
  FUN_00455c59();
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(extraout_ECX + 0x414) + 0x40);
  iStack_60 = 0x4859b4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_60 = 0x4859c1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_60 = 0x4859ce;
  FUN_00403191();
  iStack_60 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_64 = 0x4859e2;
  uStack_64 = FUN_00449749();
  iStack_68 = 0x4859ea;
  uStack_6c = FUN_00485c13();
  *(int **)(unaff_EBP + -0x18) = &iStack_68;
  iStack_70 = 0x4859f6;
  FUN_00448a17();
  uStack_6c = 0x10c;
  iStack_70 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_74 = 0x485a0a;
  uVar1 = FUN_00485c13();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_74;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0044974c();
  iStack_70 = FUN_00448ebb();
  iStack_70 = 0xe1 - iStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_74 = 0x485a3f;
  FUN_004115d9();
  uStack_74 = 0x485a46;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_60 = 0x485a53;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485a5e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_60 = 0x485a6b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485a76;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x485a83;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485a8e;
    FUN_00878dfb();
  }
  iStack_60 = 0x485a98;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_60 = unaff_EBP + -0x48;
  uStack_64 = 0x485aa2;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_60 = 0x485aae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_60 = 0x485abb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined **)(unaff_EBP + -0x18) = &DAT_009645ac;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(extraout_ECX + 0x414) + 0x498);
  }
  iStack_60 = 0x485ae7;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_60 = unaff_EBP + -0x38;
  uStack_64 = 0x485af1;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_60 = 0x485afd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puVar3 = &DAT_009645ac;
  }
  else {
    puVar3 = *(undefined **)(*(int *)(extraout_ECX + 0x414) + 0x498);
  }
  iStack_60 = unaff_EBP + -0x58;
  uStack_64 = 0x485b2a;
  uStack_64 = FUN_00449749();
  *(int **)(unaff_EBP + -0x24) = &iStack_68;
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_70 = 0x485b39;
  FUN_00448a17();
  uStack_6c = 0x11f;
  iStack_70 = unaff_EBP + -0x38;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00448a17(puVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0044974c();
  iStack_70 = FUN_00448ebb();
  iStack_70 = 0xe1 - iStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_74 = 0x485b74;
  FUN_004115d9();
  uStack_74 = 0x485b7b;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_60 = 0x485b88;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485b93;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_60 = 0x485ba0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485bab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x485bb8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_60 = 0x485bc3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_60 = 0x485bd4;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_60 = 0x485be5;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_60 = 0x485c02;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


