/* FUN_0070a196 - 0x0070a196 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0070a196(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  uint uVar5;
  undefined1 *puStack_60;
  int iStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x588) == 0) {
    piStack_58 = (int *)0x80004003;
    iStack_5c = 0x70a1bc;
    FUN_00878dfb();
  }
  piStack_58 = (int *)0x70a1c3;
  iVar1 = FUN_0040cf4d();
  piStack_58 = (int *)0x70a1ce;
  FUN_0087a1b0();
  piStack_58 = (int *)0x0;
  iStack_5c = 0;
  puStack_60 = &stack0xffffffac;
  uVar2 = FUN_00412335(iVar1 + -1);
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_60;
  FUN_004033a1(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x34;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_60 = (undefined1 *)0x70a209;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_58 = (int *)(unaff_EBP + -0x18);
    iStack_5c = 0x70a21f;
    piStack_58 = (int *)FUN_00404b30();
    if (((int)piStack_58 < 0) && (piStack_58 != (int *)0x80004002)) {
      iStack_5c = 0x70a230;
      FUN_00878dfb();
    }
  }
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x70a23d;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x70a248;
    FUN_00878dfb();
  }
  iVar1 = 0;
  uVar5 = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_58 = (int *)0x80004003;
      iStack_5c = 0x70a25b;
      FUN_00878dfb();
    }
    piStack_58 = (int *)0x70a263;
    uVar3 = FUN_0040cf4d();
    if (uVar3 <= uVar5) break;
    piStack_58 = (int *)0x70a273;
    FUN_0087a1b0();
    piStack_58 = (int *)0x0;
    iStack_5c = 0;
    puStack_60 = &stack0xffffffac;
    uVar2 = FUN_00412335(uVar5);
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_60;
    FUN_004033a1(uVar2);
    iVar4 = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_60 = (undefined1 *)0x70a2ac;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar4 != 0) {
      piStack_58 = (int *)(unaff_EBP + -0x1c);
      iStack_5c = 0x70a2c2;
      piStack_58 = (int *)FUN_0041a581();
      if (((int)piStack_58 < 0) && (piStack_58 != (int *)0x80004002)) {
        iStack_5c = 0x70a2d3;
        FUN_00878dfb();
      }
    }
    piStack_58 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_5c = 0x70a2e0;
    iVar4 = FUN_00402bc3();
    iStack_5c = (int)piStack_58;
    if (iVar4 < 0) {
      iStack_5c = 0x70a2eb;
      piStack_58 = (int *)iVar4;
      FUN_00878dfb();
      iStack_5c = extraout_ECX_00;
    }
    piStack_58 = (int *)0x78;
    *(int **)(unaff_EBP + -0x24) = &iStack_5c;
    puStack_60 = (undefined1 *)0x474;
    FUN_00679e4e(&iStack_5c);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004115d9();
    FUN_00404e7f();
    puStack_60 = (undefined1 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0040263d();
    iStack_5c = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_60 = (undefined1 *)0x70a33a;
    iVar4 = FUN_00412550();
    iVar1 = iVar1 + iVar4;
    puStack_60 = (undefined1 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_58 = (int *)FUN_00402bc3();
    if ((int)piStack_58 < 0) {
      iStack_5c = 0x70a356;
      FUN_00878dfb();
    }
    piStack_58 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piStack_58 != (int *)0x0) {
      iStack_5c = 0x70a367;
      (**(code **)(*piStack_58 + 8))();
    }
    piStack_58 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_58 != (int *)0x0) {
      iStack_5c = 0x70a378;
      (**(code **)(*piStack_58 + 8))();
    }
    uVar5 = uVar5 + 1;
  }
  piStack_58 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x70a38f;
    (**(code **)(*piStack_58 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


