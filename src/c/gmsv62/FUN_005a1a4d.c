/* FUN_005a1a4d - 0x005a1a4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_005a1a4d(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar9;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int unaff_EBP;
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_48 = (int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_4c = (undefined1 *)0x5a1a88;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_4c = (undefined1 *)*puVar2;
  piStack_48 = (int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_50 = (undefined1 *)0x5a1a99;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  puStack_50 = *(undefined1 **)(unaff_EBP + 0x1c);
  piStack_48 = (int *)0xff;
  puStack_4c = puStack_50 + *(int *)(unaff_EBP + 0x10) * 30000 + -0x3ffff830;
  *(undefined1 ***)(unaff_EBP + 0x30) = &puStack_50;
  FUN_00424e0a();
  iStack_60 = unaff_EBP + -0x10;
  *(int ***)(unaff_EBP + 0x30) = &piStack_5c;
  uStack_64 = 0x5a1ae1;
  piStack_5c = extraout_ECX_00;
  FUN_00433bdf();
  iStack_60 = *(int *)(unaff_EBP + 0x20);
  *(undefined4 **)(unaff_EBP + 0x30) = &uStack_64;
  uStack_64 = extraout_ECX_01;
  FUN_00424dbc(unaff_EBP + 0xc);
  FUN_0042e5bf(unaff_EBP + -0x14);
  puStack_50 = (undefined1 *)&piStack_48;
  *(int ***)(unaff_EBP + 0x30) = &piStack_48;
  puStack_4c = (undefined1 *)0x9a0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e();
  puStack_4c = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_50 = (undefined1 *)0x5a1b27;
  FUN_0040263d();
  puStack_50 = (undefined1 *)0x5a1b2e;
  piStack_48 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_4c = (undefined1 *)0x5a1b38;
  uVar3 = FUN_00412550();
  **(undefined4 **)(unaff_EBP + 0x34) = uVar3;
  puStack_4c = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_50 = (undefined1 *)0x5a1b4a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_48 = (int *)0x5a1b57;
    FUN_00878dfb();
  }
  puStack_50 = (undefined1 *)&piStack_48;
  *(int ***)(unaff_EBP + 0x30) = &piStack_48;
  puStack_4c = (undefined1 *)0x5de;
  FUN_00679e4e();
  puStack_4c = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_50 = (undefined1 *)0x5a1b7b;
  FUN_0040263d();
  puStack_50 = (undefined1 *)0x5a1b82;
  piStack_48 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_4c = (undefined1 *)0x5a1b8c;
  iVar4 = FUN_00412550();
  puStack_4c = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_50 = (undefined1 *)0x5a1ba2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_48 = (int *)0x5a1baf;
    FUN_00878dfb();
  }
  if (iVar4 == 1) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_48 = (int *)0x5a1bc2;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x14);
    puStack_4c = (undefined1 *)0x5a1bd0;
    piStack_48 = piVar9;
    puStack_4c = (undefined1 *)(**(code **)(*piVar9 + 0xf4))();
    if ((int)puStack_4c < 0) {
      puStack_50 = (undefined1 *)0x5a1be0;
      piStack_48 = piVar9;
      FUN_00878e09();
    }
  }
  piVar9 = *(int **)(unaff_EBP + -0x10);
  piStack_48 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + 0x30) = &stack0xffffffbc;
  if (piStack_48 != (int *)0x0) {
    puStack_4c = (undefined1 *)0x5a1bf8;
    (**(code **)(*piStack_48 + 4))();
    piVar9 = extraout_ECX_02;
  }
  puStack_4c = (undefined1 *)(unaff_EBP + -0x14);
  *(int ***)(unaff_EBP + 0x30) = &piStack_48;
  puStack_50 = (undefined1 *)0x5a1c07;
  piStack_48 = piVar9;
  FUN_0041160e();
  puStack_4c = (undefined1 *)0x5a1c0f;
  FUN_005a46cf();
  piStack_48 = extraout_ECX_03;
  if (*(int *)(unaff_EBP + 0x2c) != 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_48 = (int *)0x5a1c27;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb34;
    iVar4 = *piVar9;
    *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x34) = DAT_0097bb3c;
    puStack_50 = *(undefined1 **)(unaff_EBP + -0x40);
    puStack_4c = *(undefined1 **)(unaff_EBP + -0x3c);
    piStack_48 = *(int **)(unaff_EBP + -0x38);
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      uStack_64 = 0x5a1c58;
      iStack_60 = iVar4;
      piStack_5c = piVar9;
      FUN_00878e09();
    }
    iVar4 = *(int *)(unaff_EBP + 0x2c);
    if ((iVar4 == 1) || (iVar5 = *(int *)(unaff_EBP + 0x28), iVar4 == 3)) {
      iVar5 = *(int *)(unaff_EBP + 0x24);
    }
    if ((iVar4 == 1) || (iVar4 == 3)) {
      *(undefined4 *)(unaff_EBP + 0x30) = 100;
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x30) = 0;
    }
    if ((iVar4 == 2) || (iVar4 == 3)) {
      *(undefined4 *)(unaff_EBP + 0x2c) = 100;
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    }
    iVar4 = iVar5;
    if (iVar5 < 1) {
      iVar4 = -iVar5;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_5c = (int *)0x5a1cad;
      FUN_00878dfb();
    }
    iVar6 = FUN_0042a378();
    *(int *)(unaff_EBP + 0x10) = iVar6 + (int)(20000 / (longlong)iVar4);
    if (iVar5 < 1) {
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_EBP + 0x30) = 0;
        *(undefined4 *)(unaff_EBP + 0x2c) = 0;
      }
    }
    else {
      *(int *)(unaff_EBP + 0x30) = -*(int *)(unaff_EBP + 0x30);
      *(int *)(unaff_EBP + 0x2c) = -*(int *)(unaff_EBP + 0x2c);
    }
    piStack_5c = (int *)0x5a1cec;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    piStack_5c = (int *)(unaff_EBP + -0x30);
    iStack_60 = 0x5a1cfb;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_5c = (int *)0x5a1d07;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_5c = (int *)0x5a1d14;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_5c = (int *)0x5a1d27;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x10);
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_60 = *(int *)(unaff_EBP + -0x2c);
    piStack_5c = *(int **)(unaff_EBP + -0x28);
    iVar4 = (**(code **)(*piVar9 + 0x90))
                      (piVar9,*(int *)(unaff_EBP + 0x30) + *(int *)(unaff_EBP + 0x14),
                       *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0x18),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar9,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(0x10000000,3);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004031b7(*(undefined4 *)(unaff_EBP + 0x10),3);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = *(int **)(unaff_EBP + -0x10);
    puVar7 = (undefined1 *)
             (**(code **)(*piVar9 + 0x90))
                       (piVar9,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                        *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                        *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                        *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                        *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if ((int)puVar7 < 0) {
      puStack_50 = (undefined1 *)0x5a1e0b;
      puStack_4c = puVar7;
      piStack_48 = piVar9;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_48 = (int *)0x5a1e18;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_48 = (int *)0x5a1e23;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_48 = (int *)0x5a1e30;
    piVar9 = (int *)(unaff_EBP + -0x30);
    iVar4 = FUN_00402bc3();
    piStack_48 = piVar9;
    if (iVar4 < 0) {
      piStack_48 = (int *)0x5a1e3b;
      FUN_00878dfb();
      piStack_48 = extraout_ECX_04;
    }
  }
  puStack_4c = (undefined1 *)(unaff_EBP + -0x14);
  *(int ***)(unaff_EBP + 0x2c) = &piStack_48;
  puStack_50 = (undefined1 *)0x5a1e4f;
  FUN_0041160e();
  puStack_50 = (undefined1 *)(unaff_EBP + 0xc);
  *(undefined1 ***)(unaff_EBP + 0x2c) = &puStack_4c;
  FUN_00424dbc();
  puStack_50 = (undefined1 *)0x5a1e66;
  FUN_005a1f89();
  piStack_48 = (int *)0x5a1e72;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  piStack_48 = (int *)(unaff_EBP + -0x40);
  puStack_4c = (undefined1 *)0x5a1e81;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_48 = (int *)0x5a1e8d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_48 = (int *)0x5a1e97;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  piStack_48 = (int *)(unaff_EBP + -0x30);
  puStack_4c = (undefined1 *)0x5a1ea1;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_48 = (int *)0x5a1ead;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_48 = (int *)0x5a1ec0;
    FUN_00878dfb();
  }
  piVar9 = *(int **)(unaff_EBP + -0x10);
  puStack_50 = *(undefined1 **)(unaff_EBP + -0x40);
  puStack_4c = *(undefined1 **)(unaff_EBP + -0x3c);
  piStack_48 = *(int **)(unaff_EBP + -0x38);
  uStack_64 = *(undefined4 *)(unaff_EBP + 0x18);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_5c = *(int **)(unaff_EBP + -0x2c);
  iVar4 = (**(code **)(*piVar9 + 0x90))(piVar9,*(undefined4 *)(unaff_EBP + 0x14));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar9,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar9 = *(int **)(unaff_EBP + -0x14);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = (int)piVar9;
  piVar8 = (int *)0x0;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 4))(piVar9);
    piVar8 = *(int **)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  piVar9 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  piVar9 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}


