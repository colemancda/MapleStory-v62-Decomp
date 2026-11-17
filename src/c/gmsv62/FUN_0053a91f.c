/* FUN_0053a91f - 0x0053a91f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053a91f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  piStack_58 = *(int **)(unaff_EBP + 8);
  iStack_5c = 0x53a939;
  FUN_0081622a();
  piStack_58 = (int *)(unaff_EBP + -0x10);
  iStack_5c = 0x53a944;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_5c = unaff_EBP + 8;
  piStack_58 = (int *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_60 = 0x53a95b;
  FUN_007d4a9a();
  iStack_64 = unaff_EBP + -0x14;
  uStack_60 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_68 = 0x53a96a;
  FUN_007d4a9a();
  piStack_58 = (int *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x53a982;
  FUN_00455c59();
  piStack_58 = (int *)0x53a98a;
  FUN_0045e4a2();
  piStack_58 = &DAT_00980690;
  iStack_5c = 0x53a998;
  FUN_00403191();
  piStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_5c = 0x53a9a5;
  FUN_00403191();
  piStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_5c = 0x53a9b2;
  FUN_00403191();
  piStack_58 = (int *)(unaff_EBP + -0x54);
  iStack_5c = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_60 = 0x53a9c6;
  uStack_60 = FUN_00449749();
  iStack_64 = 0x53a9d5;
  uStack_68 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_64;
  iStack_6c = 0x53a9e1;
  FUN_00448a17();
  uStack_68 = 0x97;
  iStack_6c = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_70 = 0x53a9fc;
  uVar1 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_70;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0044974c();
  iStack_6c = FUN_00448ebb();
  iStack_6c = 0xe1 - iStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_70 = 0x53aa31;
  FUN_004115d9();
  uStack_70 = 0x53aa38;
  FUN_00448e3a();
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_5c = 0x53aa45;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53aa50;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_5c = 0x53aa5d;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53aa68;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x53aa75;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53aa80;
    FUN_00878dfb();
  }
  piStack_58 = &DAT_00980690;
  iStack_5c = 0x53aa89;
  FUN_00403191();
  piStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_5c = 0x53aa96;
  FUN_00403191();
  piStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_5c = 0x53aaa3;
  FUN_00403191();
  piStack_58 = (int *)(unaff_EBP + -0x34);
  iStack_5c = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_60 = 0x53aab7;
  uStack_60 = FUN_00449749();
  iStack_64 = 0x53aabf;
  uStack_68 = FUN_00485c13();
  *(int **)(unaff_EBP + -0x20) = &iStack_64;
  iStack_6c = 0x53aacb;
  FUN_00448a17();
  uStack_68 = 0xaa;
  iStack_6c = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_70 = 0x53aadf;
  uVar1 = FUN_00485c13();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_70;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0044974c();
  iStack_6c = FUN_00448ebb();
  iStack_6c = 0xe1 - iStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_70 = 0x53ab0d;
  FUN_004115d9();
  uStack_70 = 0x53ab14;
  FUN_00448e3a();
  piStack_58 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_5c = 0x53ab21;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53ab2c;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_5c = 0x53ab39;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53ab44;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x53ab51;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x53ab5c;
    FUN_00878dfb();
  }
  piStack_58 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x53ab6d;
    (**(code **)(*piStack_58 + 8))();
  }
  piStack_58 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x53ab7e;
    (**(code **)(*piStack_58 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_58 = (int *)0x53ab8a;
  FUN_00414ebb();
  piStack_58 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x53ab9b;
    (**(code **)(*piStack_58 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


