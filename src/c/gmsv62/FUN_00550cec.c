/* FUN_00550cec - 0x00550cec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00550cec(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  piStack_88 = (int *)0x550d0d;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_88 = (int *)0x550d1b;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x60;
  iStack_90 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_94,0x10d6);
  iVar1 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8c = 0x550d67;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_88 = (int *)0x550d7d;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_88 = (int *)0x550d8e;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_88 = (int *)0x550d9b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550da6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_88 = (int *)0x550db3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550dbe;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x550dcb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550dd6;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x550dee;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x550df6;
  FUN_005512d4();
  piStack_88 = (int *)0x550dff;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_88 = (int *)0x550e0c;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x30;
  iStack_90 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_94,0x10d7);
  iVar1 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_8c = 0x550e53;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  piStack_88 = (int *)0x550e62;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_88 = (int *)0x550e73;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_88 = (int *)0x550e80;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550e8b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_88 = (int *)0x550e98;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550ea3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x550eb0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550ebb;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x550ed3;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x550edb;
  FUN_005512d4();
  piStack_88 = (int *)0x550ee4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_88 = (int *)0x550ef1;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x30;
  iStack_90 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&puStack_94,0x10d8);
  iVar1 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_8c = 0x550f38;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  piStack_88 = (int *)0x550f47;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_88 = (int *)0x550f58;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_88 = (int *)0x550f65;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550f70;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_88 = (int *)0x550f7d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550f88;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x550f95;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550fa0;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x550fb8;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x550fc0;
  FUN_005512d4();
  piStack_88 = (int *)0x550fca;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  piStack_88 = (int *)(unaff_EBP + -0x40);
  iStack_8c = 0x550fd4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x550fe0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_88 = (int *)0x550fee;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  piStack_88 = (int *)(unaff_EBP + -0x30);
  puStack_94 = &DAT_00980690;
  iStack_8c = 0x550ff8;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x551004;
    FUN_00878dfb();
    puStack_94 = extraout_ECX_00;
  }
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x40;
  iStack_90 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00679e4e(&puStack_94,0x10d9);
  iVar1 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_8c = 0x55104b;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  piStack_88 = (int *)0x55105a;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_88 = (int *)0x55106b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_88 = (int *)0x551078;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x551083;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_88 = (int *)0x551090;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x55109b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x5510a8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x5510b3;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x5510cb;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x5510d3;
  FUN_005512d4();
  piStack_88 = (int *)0x5510dd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  piStack_88 = (int *)(unaff_EBP + -0x40);
  iStack_8c = 0x5510e7;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x5510f3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_88 = (int *)0x551100;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x40;
  iStack_90 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e(&puStack_94,0x10da);
  iVar1 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_8c = 0x551147;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  piStack_88 = (int *)0x551156;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_88 = (int *)0x551167;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_88 = (int *)0x551174;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x55117f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_88 = (int *)0x55118c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x551197;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x5511a4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x5511af;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x5511c7;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x5511cf;
  FUN_005512d4();
  piStack_88 = (int *)0x5511d8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_88 = (int *)0x5511e5;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x30;
  iStack_90 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00679e4e(&puStack_94,0x10db);
  iVar1 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_8c = 0x55122c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  piStack_88 = (int *)0x55123b;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    piStack_88 = (int *)0x55124c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_88 = (int *)0x551259;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x551264;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_88 = (int *)0x551271;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x55127c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_88 = (int *)0x551289;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x551294;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff7c;
  if (piStack_88 != (int *)0x0) {
    iStack_8c = 0x5512ac;
    (**(code **)(*piStack_88 + 4))();
  }
  piStack_88 = (int *)0x5512b4;
  FUN_005512d4();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_88 = (int *)0x5512c5;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


