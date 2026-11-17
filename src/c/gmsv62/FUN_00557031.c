/* FUN_00557031 - 0x00557031 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00557031(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  piStack_c0 = (int *)0x557055;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_c0 = (int *)0x557066;
  FUN_00403191();
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x68;
  iStack_c8 = unaff_EBP + -0x88;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(u_Etc_ScanBlock_img_0096563c);
  iVar1 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c4 = 0x5570b0;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar1 != 0) {
    piStack_c0 = (int *)0x5570c6;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_c0 = (int *)0x5570d7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_c0 = (int *)0x5570e7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5570f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_c0 = (int *)0x557102;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55710d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_c0 = (int *)0x55711a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557125;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff44;
    piStack_c0 = (int *)0x557139;
    FUN_004125cc();
    piStack_c0 = (int *)0x557141;
    FUN_0055779a();
  }
  piStack_c0 = (int *)0x55714a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_c0 = (int *)0x55715a;
  FUN_00403191();
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x78;
  iStack_c8 = unaff_EBP + -0x98;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_cc,0x10d6);
  iVar1 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c4 = 0x5571ac;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_c0 = (int *)0x5571c2;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_c0 = (int *)0x5571d3;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_c0 = (int *)0x5571e3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5571ee;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_c0 = (int *)0x5571fe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557209;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x557216;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557221;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x55723d;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x557245;
    FUN_005578db();
  }
  piStack_c0 = (int *)0x55724e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_c0 = (int *)0x55725b;
  FUN_00403191();
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x2c;
  iStack_c8 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00679e4e(&puStack_cc,0x10d7);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_c4 = 0x5572a2;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  piStack_c0 = (int *)0x5572b1;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_c0 = (int *)0x5572c2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_c0 = (int *)0x5572cf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5572da;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_c0 = (int *)0x5572e7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5572f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x5572ff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55730a;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x557326;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x55732e;
    FUN_005578db();
  }
  piStack_c0 = (int *)0x55733a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_c0 = (int *)(unaff_EBP + -0x2c);
  iStack_c4 = 0x557344;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557350;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_c0 = (int *)0x55735d;
  FUN_00403191();
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x2c;
  iStack_c8 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e(&puStack_cc,0x10d8);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_c4 = 0x5573a7;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  piStack_c0 = (int *)0x5573b6;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_c0 = (int *)0x5573c7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_c0 = (int *)0x5573d4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5573df;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_c0 = (int *)0x5573ec;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5573f7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x557404;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55740f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x55742b;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x557433;
    FUN_005578db();
  }
  piStack_c0 = (int *)0x557439;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_c0 = (int *)(unaff_EBP + -0x3c);
  iStack_c4 = 0x557443;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55744f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_c0 = (int *)0x557459;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_c0 = (int *)(unaff_EBP + -0x2c);
  puStack_cc = &DAT_00980690;
  iStack_c4 = 0x557463;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55746f;
    FUN_00878dfb();
    puStack_cc = extraout_ECX_00;
  }
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x3c;
  iStack_c8 = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00679e4e(&puStack_cc,0x10d9);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_c4 = 0x5574b9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  piStack_c0 = (int *)0x5574c8;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_c0 = (int *)0x5574d9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_c0 = (int *)0x5574e6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x5574f1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_c0 = (int *)0x5574fe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557509;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x557516;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557521;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x55753d;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x557545;
    FUN_005578db();
  }
  piStack_c0 = (int *)0x55754b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_c0 = (int *)(unaff_EBP + -0x2c);
  iStack_c4 = 0x557555;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557561;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_c0 = (int *)0x55756b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_c0 = (int *)(unaff_EBP + -0x3c);
  puVar4 = &DAT_00980690;
  iStack_c4 = 0x557575;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557581;
    FUN_00878dfb();
    puVar4 = extraout_ECX_01;
  }
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x2c;
  iStack_c8 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_cc = puVar4;
  FUN_00679e4e(&puStack_cc,0x10da);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_c4 = 0x5575cb;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  piStack_c0 = (int *)0x5575da;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_c0 = (int *)0x5575eb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  piStack_c0 = (int *)0x5575f8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557603;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_c0 = (int *)0x557610;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55761b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x557628;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557633;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x55764f;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x557657;
    FUN_005578db();
  }
  piStack_c0 = (int *)0x55765d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_c0 = (int *)(unaff_EBP + -0x2c);
  iStack_c4 = 0x557667;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557673;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_c0 = (int *)0x55767d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_c0 = (int *)(unaff_EBP + -0x3c);
  puVar4 = &DAT_00980690;
  iStack_c4 = 0x557687;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557693;
    FUN_00878dfb();
    puVar4 = extraout_ECX_02;
  }
  piStack_c0 = (int *)0x0;
  iStack_c4 = unaff_EBP + -0x2c;
  iStack_c8 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_cc = puVar4;
  FUN_00679e4e(&puStack_cc,0x10db);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_c4 = 0x5576dd;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  piStack_c0 = (int *)0x5576ec;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_c0 = (int *)0x5576fd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_c0 = (int *)0x55770a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557715;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_c0 = (int *)0x557722;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x55772d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_c0 = (int *)0x55773a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c0 = (int *)0x557745;
    FUN_00878dfb();
  }
  piVar3 = (int *)0x0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_c0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff44;
    if (piStack_c0 != (int *)0x0) {
      iStack_c4 = 0x557761;
      (**(code **)(*piStack_c0 + 4))();
    }
    piStack_c0 = (int *)0x557769;
    FUN_005578db();
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar3 != (int *)0x0) {
    piStack_c0 = (int *)0x55777a;
    (**(code **)(*piVar3 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    piStack_c0 = (int *)0x55778b;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


