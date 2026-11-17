/* FUN_00551ba7 - 0x00551ba7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00551ba7(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  piStack_60 = (int *)0x0;
  puStack_64 = (undefined4 *)0x0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&iStack_68,0x3b4);
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x551bfa;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x18);
    puStack_64 = (undefined4 *)0x551c15;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      puStack_64 = (undefined4 *)0x551c23;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_64 = (undefined4 *)0x551c30;
  iVar1 = FUN_00402bc3();
  piVar4 = piStack_60;
  if (iVar1 < 0) {
    puStack_64 = (undefined4 *)0x551c3b;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar4 = (int *)extraout_ECX_00;
  }
  piStack_60 = (int *)0x0;
  puStack_64 = (undefined4 *)0x0;
  *(int **)(unaff_EBP + -0x24) = &iStack_68;
  iStack_68 = (int)piVar4;
  FUN_00679e4e(&iStack_68,0x8e8);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_68 = 0x551c72;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x1c);
    puStack_64 = (undefined4 *)0x551c88;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      puStack_64 = (undefined4 *)0x551c96;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_64 = (undefined4 *)0x551ca3;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    puStack_64 = (undefined4 *)0x551cae;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  piStack_60 = (int *)0x551cb9;
  FUN_0055968e();
  puStack_64 = *(undefined4 **)(unaff_EBP + -0x28);
  piStack_60 = (int *)0x0;
  *puStack_64 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_64;
  iStack_68 = 0x6a4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_64);
  iStack_68 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0040263d();
  puStack_64 = (undefined4 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_68 = 0x551cfa;
  uVar2 = FUN_00412550();
  piStack_60 = (int *)0x551d06;
  iVar1 = FUN_0055947a();
  *(undefined4 *)(iVar1 + 4) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_64 = (undefined4 *)0x551d16;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    puStack_64 = (undefined4 *)0x551d21;
    FUN_00878dfb();
  }
  iVar1 = 0;
  while( true ) {
    piStack_60 = (int *)0x551d2b;
    FUN_0087a1b0();
    piStack_60 = (int *)0x0;
    iStack_68 = iVar1;
    puStack_64 = (undefined4 *)&stack0xffffffa4;
    iStack_68 = FUN_00412335();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_64;
    FUN_004033a1();
    iStack_68 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0040263d();
    puStack_64 = (undefined4 *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_68 = 0x551d62;
    iVar3 = FUN_00412550();
    iStack_68 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_60 = (int *)FUN_00402bc3();
    if ((int)piStack_60 < 0) {
      puStack_64 = (undefined4 *)0x551d7e;
      FUN_00878dfb();
    }
    if (iVar3 == 0) break;
    piStack_60 = (int *)0x551d8d;
    piVar4 = (int *)FUN_0055994b();
    *piVar4 = iVar3;
    iVar1 = iVar1 + 1;
  }
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  puStack_64 = *(undefined4 **)(unaff_EBP + -0x28);
  iStack_68 = 0x551da4;
  FUN_0055a1db();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    piStack_60 = (int *)0x0;
    puStack_64 = (undefined4 *)0x551db6;
    FUN_0045e758();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  piStack_60 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_60 != (int *)0x0) {
    puStack_64 = (undefined4 *)0x551dca;
    (**(code **)(*piStack_60 + 8))();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_60 != (int *)0x0) {
    puStack_64 = (undefined4 *)0x551dda;
    (**(code **)(*piStack_60 + 8))();
  }
  piStack_60 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    puStack_64 = (undefined4 *)0x551deb;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


