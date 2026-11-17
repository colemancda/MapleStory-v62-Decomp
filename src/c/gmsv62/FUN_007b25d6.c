/* FUN_007b25d6 - 0x007b25d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b25d6(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  int iVar9;
  bool bVar10;
  undefined4 *puStack_130;
  int iStack_12c;
  int iStack_128;
  int *piStack_124;
  undefined4 uStack_e8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x60) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00450550();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = 0;
  do {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_e8 = 0x7b2630;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00403384();
    }
    iVar9 = iVar9 + 4;
  } while (iVar9 < 0x30);
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_0044f5f6();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_e8 = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00450708();
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puVar1 = (undefined4 *)FUN_004029b9();
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_008e84a0;
    uStack_e8 = 0x7b2b75;
    _memset(puVar1,0,0xc);
    *puVar1 = &PTR_FUN_008e8ea8;
    uVar2 = __ftol();
    puVar1[3] = 0;
    puVar1[4] = uVar2;
  }
  *(undefined4 **)(unaff_EBP + -0x58) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00450368();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004503f5();
  FUN_007e3c88();
  iVar9 = *(int *)(unaff_EBP + -0x20);
  if (iVar9 == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar9 + -4);
  }
  if (*(int *)(iVar9 + 0xc) == 0) {
    FUN_00878dfb();
  }
  iVar9 = FUN_004a2734();
  *(int *)(unaff_EBP + -0x40) =
       iVar9 * (*(int *)(*(int *)(unaff_EBP + 8) * 0x3c + -0x34 + *(int *)(unaff_EBP + -0x20)) + 1)
       + 0x14;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  bVar10 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (bVar10) {
    FUN_00878dfb();
  }
  FUN_0042a39f();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    FUN_0040ee87();
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x18);
    }
    iVar9 = *piVar3;
    *(int **)(unaff_EBP + 8) = piVar3;
    iVar9 = (**(code **)(iVar9 + 100))();
    if (iVar9 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iVar9 = FUN_00402bc3();
    if (iVar9 < 0) {
      FUN_00878dfb();
    }
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x18);
  }
  iVar9 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar9 = (**(code **)(iVar9 + 0x90))();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b2ded;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  iVar9 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar9 < 0) {
    iStack_12c = 0x7b2e4e;
    iStack_128 = iVar9;
    piStack_124 = piVar3;
    FUN_00878e09();
  }
  if (DAT_00978358 != 0) {
    piStack_124 = (int *)0x7b2e67;
    puVar1 = (undefined4 *)FUN_0043f93c();
    piVar3 = (int *)*puVar1;
    *(undefined2 *)(unaff_EBP + -0x54) = 0xd;
    *(int **)(unaff_EBP + -0x4c) = piVar3;
    iVar9 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_124 = (int *)0x7b2e7c;
    (**(code **)(iVar9 + 4))();
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (piVar3 == (int *)0x0) {
      piStack_124 = (int *)0x80004003;
      iStack_128 = 0x7b2e91;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x18);
    }
    iVar9 = *piVar3;
    puStack_130 = *(undefined4 **)(unaff_EBP + -0x54);
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_128 = *(int *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + 8) = piVar3;
    piStack_124 = *(int **)(unaff_EBP + -0x48);
    iVar9 = (**(code **)(iVar9 + 0xfc))();
    if (iVar9 < 0) {
      piStack_124 = *(int **)(unaff_EBP + 8);
      iStack_12c = 0x7b2ebe;
      iStack_128 = iVar9;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_124 = (int *)0x7b2ecb;
    iVar9 = FUN_00402bc3();
    if (iVar9 < 0) {
      piStack_124 = (int *)0x7b2ed6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_124 = (int *)0x7b2ee7;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  piStack_124 = (int *)0x0;
  iStack_128 = 0x7b2ef7;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    piStack_124 = (int *)0x7b2f0a;
    FUN_00878dfb();
  }
  piStack_124 = (int *)(unaff_EBP + -0x34);
  iStack_128 = 0x7b2f1d;
  FUN_00425067();
  puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  piStack_124 = (int *)0x7b2f2d;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b2f38;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  piStack_124 = *(int **)(unaff_EBP + 0xc);
  iStack_128 = 0;
  iStack_12c = 0;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_130;
  puStack_130 = puVar1;
  FUN_0046fc23();
  FUN_007d6f5c();
  piStack_124 = (int *)0x7b2f66;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
  piStack_124 = (int *)(unaff_EBP + -0x84);
  iStack_128 = 0x7b2f77;
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b2f83;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  piStack_124 = (int *)0x7b2f8d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  piStack_124 = (int *)(unaff_EBP + -0x54);
  puVar1 = &DAT_00980690;
  iStack_128 = 0x7b2f9b;
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b2fa7;
    FUN_00878dfb();
    puVar1 = extraout_ECX_02;
  }
  piStack_124 = (int *)0x0;
  iStack_128 = unaff_EBP + -0x84;
  iStack_12c = unaff_EBP + -0x54;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_130;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  puStack_130 = puVar1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_128 = 0x7b2ff4;
  iVar9 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x74) = iVar9;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (iVar9 != 0) {
    piStack_124 = (int *)0x7b300a;
    iVar9 = FUN_00404b30();
    if ((iVar9 < 0) && (iVar9 != -0x7fffbffe)) {
      piStack_124 = (int *)0x7b301b;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  piStack_124 = (int *)0x7b302b;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b3036;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_124 = (int *)0x7b3043;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b304e;
    FUN_00878dfb();
  }
  iVar9 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  piStack_124 = (int *)0x7b305e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_124 = (int *)0x7b3069;
    FUN_00878dfb();
    iVar9 = extraout_ECX_03;
  }
  piStack_124 = (int *)0x0;
  puStack_130 = &iStack_128;
  *(int **)(unaff_EBP + 8) = &iStack_128;
  iStack_12c = 0x57e;
  iStack_128 = iVar9;
  FUN_00679e4e();
  iStack_12c = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  puStack_130 = (undefined4 *)0x7b3091;
  FUN_0040263d();
  puStack_130 = (undefined4 *)0x7b3098;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iStack_128 = 0x7b30a3;
  iVar9 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar9;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar9 != 0) {
    piStack_124 = (int *)0x7b30b9;
    iVar9 = FUN_0041a581();
    if ((iVar9 < 0) && (iVar9 != -0x7fffbffe)) {
      piStack_124 = (int *)0x7b30ca;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  piStack_124 = (int *)0x7b30da;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b30e5;
    FUN_00878dfb();
  }
  piStack_124 = (int *)0x7b30eb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  piStack_124 = (int *)(unaff_EBP + -0x70);
  iStack_128 = 0x7b30f9;
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    piStack_124 = (int *)0x7b3105;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    piStack_124 = (int *)0x7b3118;
    FUN_00878dfb();
  }
  uVar2 = **(undefined4 **)(unaff_EBP + -0x34);
  puStack_130 = *(undefined4 **)(unaff_EBP + -0x38);
  iStack_12c = *(undefined4 *)(unaff_EBP + -0x70);
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 0xc) + 0x14;
  iStack_128 = *(int *)(unaff_EBP + -0x6c);
  piStack_124 = *(int **)(unaff_EBP + -0x68);
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  __ftol();
  iVar9 = (**(code **)(*(int *)(unaff_EBP + 8) + 0x80))();
  if (iVar9 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x20);
  iVar9 = 0;
  iVar4 = 0;
  uVar8 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while ((iVar7 = 0, iVar5 != 0 && (uVar8 < *(uint *)(iVar5 + -4)))) {
    if (*(int *)(*(int *)(unaff_EBP + 8) + 0x30 + iVar5) != 0) {
      if (iVar4 <= (int)uVar8) {
        piVar3 = (int *)(iVar9 + 0x20 + iVar5);
        iVar9 = (uVar8 - iVar4) + 1;
        do {
          iVar7 = iVar7 + *piVar3;
          piVar3 = piVar3 + 0xf;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = *(int *)(unaff_EBP + 0xc);
      for (; iVar4 <= (int)uVar8; iVar4 = iVar4 + 1) {
        VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        FUN_007b4c3c();
        FUN_00449749();
        FUN_007b4c3c();
        uVar2 = FUN_00449713();
        *(undefined1 **)(unaff_EBP + -0xa8) = &stack0xfffffeb4;
        FUN_00448a17(uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        FUN_007b4c3c(iVar4);
        FUN_0044974c();
        iVar5 = FUN_004a2734();
        iVar6 = FUN_007b4c3c(iVar4);
        iVar6 = iVar5 * *(int *)(iVar6 + 8) + 10;
        iVar5 = FUN_007b4c3c(iVar4);
        iVar5 = *(int *)(iVar5 + 0x18) + (iVar9 - iVar7) / 2;
        FUN_004115d9(iVar5,iVar6);
        FUN_00448e3a(iVar5,iVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        uVar8 = *(uint *)(unaff_EBP + -0x10);
      }
      iVar9 = *(int *)(unaff_EBP + 8) + 0x3c;
      iVar5 = *(int *)(unaff_EBP + -0x20);
      iVar4 = uVar8 + 1;
    }
    uVar8 = uVar8 + 1;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x3c;
    *(uint *)(unaff_EBP + -0x10) = uVar8;
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  iVar9 = *piVar3;
  __ftol();
  iVar9 = (**(code **)(iVar9 + 0x44))();
  if (iVar9 < 0) {
    FUN_00878e09(iVar9,piVar3);
  }
  this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x60);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,*(IBinding **)(unaff_EBP + -0x18))
  ;
  iVar9 = FUN_007d1e08();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  *(int *)(this + 4) = iVar9 + *(int *)(unaff_EBP + 0x10);
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    FUN_004504e6();
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004505d7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450514();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


