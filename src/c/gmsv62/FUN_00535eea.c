/* FUN_00535eea - 0x00535eea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00535eea(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  
  FUN_00879bb8();
  puStack_88 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_8c = 0x535f05;
  FUN_0081622a();
  puStack_88 = (undefined4 *)(unaff_EBP + 8);
  uStack_8c = 0x535f11;
  FUN_00448dc6();
  puStack_88 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_8c = 0x535f24;
  FUN_00403191();
  puStack_88 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_8c = 0x535f31;
  FUN_00403191();
  puStack_88 = (undefined4 *)0x0;
  uStack_8c = 0;
  iStack_90 = unaff_EBP + -0x44;
  iStack_94 = unaff_EBP + -0x34;
  puStack_a0 = (undefined1 *)&uStack_98;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_98;
  iStack_9c = 0x1155;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_a4 = (int *)0x535f55;
  FUN_00679e4e();
  iStack_9c = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_a0 = (undefined1 *)0x535f65;
  FUN_00405a1d();
  puStack_a0 = (undefined1 *)0x535f6c;
  FUN_00402660();
  puStack_a0 = (undefined1 *)0x535f73;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x535f7e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    puStack_88 = (undefined4 *)(unaff_EBP + -0x20);
    uStack_8c = 0x535f94;
    puStack_88 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_88 < 0) && (puStack_88 != (undefined4 *)0x80004002)) {
      uStack_8c = 0x535fa5;
      FUN_00878dfb();
    }
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_8c = 0x535fb5;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    uStack_8c = 0x535fc0;
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_8c = 0x535fcd;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    uStack_8c = 0x535fd8;
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_8c = 0x535fe5;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    uStack_8c = 0x535ff0;
    FUN_00878dfb();
  }
  puStack_88 = &DAT_00980690;
  uStack_8c = 0x535ff9;
  FUN_00403191();
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 == (int *)0x0) {
    puStack_88 = (undefined4 *)0x80004003;
    uStack_8c = 0x53600e;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar2;
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_88 = *(undefined4 **)(unaff_EBP + -0x48);
  iStack_9c = 0;
  puStack_a0 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  piStack_a8 = (int *)0x536030;
  piStack_a4 = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    piStack_a8 = (int *)&DAT_00963cc8;
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_b4 = 0x536042;
    iStack_b0 = iVar1;
    FUN_00878e09();
  }
  piStack_a8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_ac = 0x53604f;
  iVar1 = FUN_00402bc3();
  iStack_cc = (int)piStack_a8;
  if (iVar1 < 0) {
    iStack_ac = 0x53605a;
    piStack_a8 = (int *)iVar1;
    FUN_00878dfb();
    iStack_cc = extraout_ECX_00;
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piStack_a8 = (int *)0x0;
  iStack_ac = 0;
  iStack_b0 = 1;
  iStack_b4 = 0;
  uStack_b8 = 1;
  iStack_bc = 0;
  puStack_c0 = (undefined1 *)0x55;
  uStack_c4 = 0x14;
  uStack_c8 = *(undefined4 *)(iVar1 + 0xb0);
  *(int **)(unaff_EBP + -0x14) = &iStack_cc;
  FUN_0046fc23(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048b97b();
  FUN_005558b0();
  piStack_a8 = *(int **)(iVar1 + 0xb0);
  iStack_ac = unaff_EBP + -0x1c;
  iStack_b0 = 0x5360a3;
  FUN_0045a1d8();
  piStack_a8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_ac = 0x5360b0;
  FUN_00403191();
  piStack_a8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_ac = 0x5360bd;
  FUN_00403191();
  piStack_a8 = (int *)(unaff_EBP + -100);
  iStack_ac = unaff_EBP + -0x54;
  iStack_b4 = unaff_EBP + -0x14;
  iStack_b0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_b8 = 0x5360d3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b0 = 0x5360e0;
  iStack_b0 = FUN_00449749();
  iStack_b4 = 0x5360e9;
  uStack_b8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x10) = &iStack_b4;
  iStack_bc = 0x5360f5;
  iStack_b4 = extraout_ECX_01;
  FUN_00448a17();
  uStack_b8 = 0x1a;
  iStack_bc = 0x5d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_c0 = (undefined1 *)0x536105;
  FUN_004115d9();
  puStack_c0 = (undefined1 *)0x53610c;
  FUN_00448e3a();
  piStack_a8 = (int *)0x536114;
  FUN_004497b5();
  piStack_a8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_ac = 0x536121;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    iStack_ac = 0x53612c;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_ac = 0x536139;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    iStack_ac = 0x536144;
    FUN_00878dfb();
  }
  if (0 < *(int *)(iVar1 + 0x78)) {
    iStack_ac = unaff_EBP + -0x14;
    piStack_a8 = (int *)0x21;
    iStack_b0 = 0x536158;
    FUN_007d4a9a();
    piStack_a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_ac = 0x536167;
    FUN_00403191();
    piStack_a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_ac = 0x536174;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_a8 = (int *)0x536180;
    FUN_0087a1b0();
    *(int ***)(unaff_EBP + -0x10) = &piStack_a4;
    piStack_a8 = &DAT_00980690;
    iStack_ac = 0x53618c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_a8 = (int *)0x536198;
    FUN_0087a1b0();
    piStack_a8 = (int *)(unaff_EBP + -0x74);
    iStack_ac = unaff_EBP + -0x54;
    iStack_b0 = 0x5361aa;
    iStack_b0 = FUN_00449749();
    iStack_b4 = *(int *)(unaff_EBP + -0x10);
    uStack_b8 = *(undefined4 *)(iVar1 + 0x78);
    iStack_bc = 0x5361b6;
    uStack_b8 = FUN_0048b981();
    *(int **)(unaff_EBP + -0x10) = &iStack_b4;
    iStack_bc = 0x5361c2;
    FUN_00448a17();
    uStack_b8 = 0x4e;
    iStack_bc = unaff_EBP + -100;
    uStack_c4 = *(undefined4 *)(iVar1 + 0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_c8 = 0x5361d5;
    puStack_c0 = (undefined1 *)&piStack_a4;
    uStack_c4 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_c0;
    uStack_c8 = 0x5361e1;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_c4 = 0x5361ed;
    FUN_0044974c();
    uStack_c4 = 0x5361f4;
    iStack_bc = FUN_00448ebb();
    iStack_bc = 0xf3 - iStack_bc;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_c0 = (undefined1 *)0x536208;
    FUN_004115d9();
    puStack_c0 = (undefined1 *)0x53620f;
    FUN_00448e3a();
    piStack_a8 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_ac = 0x53621c;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x536227;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_ac = 0x536234;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x53623f;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_ac = 0x53624c;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x536257;
      FUN_00878dfb();
    }
    piStack_a8 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piStack_a8 != (int *)0x0) {
      iStack_ac = 0x536268;
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_a8 = (int *)0x536274;
  FUN_00414ebb();
  piStack_a8 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_a8 != (int *)0x0) {
    iStack_ac = 0x536285;
    (**(code **)(*piStack_a8 + 8))();
  }
  piStack_a8 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_a8 != (int *)0x0) {
    iStack_ac = 0x536296;
    (**(code **)(*piStack_a8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


