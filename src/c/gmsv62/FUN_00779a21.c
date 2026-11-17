/* FUN_00779a21 - 0x00779a21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00779a21(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  iStack_64 = 0x779a3d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_64 = unaff_EBP + -0x2c;
  iStack_68 = 0x779a4c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x779a5a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x779a66;
  FUN_00403191();
  iStack_64 = 0;
  iStack_68 = unaff_EBP + -0x2c;
  iStack_6c = unaff_EBP + -0x3c;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70,0x854);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x779ab2;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_64 = 0x779ac8;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_64 = 0x779ad9;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_64 = 0x779ae6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x779af1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_64 = 0x779afe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x779b09;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x779b16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x779b21;
    FUN_00878dfb();
    iVar1 = extraout_ECX;
  }
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x851;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x779b46;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x779b4d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x779b58;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x779b67;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x779b78;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x779b85;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x779b90;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x852;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x779bb5;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x779bbc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_68 = 0x779bc7;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x779bd6;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x779be7;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x779bf4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x779bff;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x853;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x779c24;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x779c2b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x779c36;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x779c45;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x779c56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x779c63;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x779c6e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_64 = 0x779c7f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


