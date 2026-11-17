/* FUN_00740cdd - 0x00740cdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00740cdd(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int *piStack_60;
  int iVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00448dc6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_64 = (**(code **)(*piVar1 + 0x8c))();
  if (iStack_64 < 0) {
    uStack_68 = 0x740d3d;
    piStack_60 = piVar1;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + 8) < 100) {
    if (*(int *)(unaff_EBP + 8) < 10) {
      iVar2 = 0;
    }
    else {
      iVar2 = 6;
    }
  }
  else {
    iVar2 = 0xc;
  }
  iStack_64 = extraout_ECX + 0xbb0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_60;
  uStack_68 = 0x740d75;
  FUN_00424dbc();
  iStack_64 = *(undefined4 *)(unaff_EBP + 8);
  uStack_68 = 0x22a;
  iStack_6c = 0x32 - iVar2;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_70;
  FUN_0046fc23(unaff_EBP + -0x10);
  FUN_007d3201();
  piStack_60 = (int *)FUN_00482a39(*(undefined4 *)(unaff_EBP + 0xc));
  iStack_64 = 0x740dad;
  FUN_00414edd();
  piStack_60 = (int *)0x740dbb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_60 = (int *)0x740dc8;
  FUN_00403191();
  piStack_60 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_64 = 0x740de1;
  iStack_64 = FUN_00449749();
  uStack_68 = 0x740dea;
  iStack_6c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_68;
  uStack_70 = 0x740df6;
  FUN_00448a17();
  iStack_6c = 0x221;
  uStack_70 = 0x57;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_60 = (int *)0x740e1d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x740e28;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_60 = (int *)0x740e35;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x740e40;
    FUN_00878dfb();
  }
  piStack_60 = (int *)0x740e4a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  piStack_60 = (int *)(unaff_EBP + -0x30);
  iStack_64 = 0x740e54;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x740e60;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_60 = (int *)0x740e6d;
  FUN_00403191();
  piStack_60 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_64 = 0x740e80;
  iStack_64 = FUN_00449749();
  uStack_68 = 0x740e89;
  iStack_6c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_68;
  uStack_70 = 0x740e95;
  FUN_00448a17();
  iStack_6c = 0x230;
  uStack_70 = 0x57;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_60 = (int *)0x740ebc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x740ec7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_60 = (int *)0x740ed4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x740edf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_60 = (int *)0x740f13;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


