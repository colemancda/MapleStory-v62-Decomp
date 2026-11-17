/* FUN_00500882 - 0x00500882 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00500882(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short *psVar5;
  int *piVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  piStack_54 = *(int **)(unaff_EBP + 8);
  piStack_58 = (int *)0x50089c;
  FUN_004e5f8c();
  piStack_54 = (int *)0x0;
  piStack_58 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_5c;
  FUN_00448a17(s_healer_00964f2c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0x30;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_5c = (int *)0x5008d5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_54 = (int *)(unaff_EBP + -0x18);
    piStack_58 = (int *)0x5008eb;
    piStack_54 = (int *)FUN_00404b30();
    if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
      piStack_58 = (int *)0x5008fc;
      FUN_00878dfb();
    }
  }
  piStack_54 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_58 = (int *)0x500909;
  piVar3 = (int *)FUN_00402bc3();
  piStack_58 = piStack_54;
  if ((int)piVar3 < 0) {
    piStack_58 = (int *)0x500914;
    piStack_54 = piVar3;
    FUN_00878dfb();
    piStack_58 = extraout_ECX_00;
  }
  piStack_54 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_58;
  piStack_5c = (int *)0x3ca;
  FUN_00679e4e(&piStack_58);
  piStack_5c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_58 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_5c = (int *)0x50094e;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  piStack_5c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    piStack_58 = (int *)0x50096b;
    FUN_00878dfb();
  }
  piStack_54 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_58;
  piStack_5c = (int *)&DAT_00964f24;
  FUN_00448a17();
  piStack_5c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_58 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_5c = (int *)0x50099d;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x728) = uVar4;
  piStack_5c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    piStack_58 = (int *)0x5009c0;
    FUN_00878dfb();
  }
  *(int ***)(unaff_EBP + -0x20) = &piStack_54;
  piStack_58 = (int *)s_healer_00964f2c;
  piStack_5c = (int *)0x5009d0;
  FUN_00448a17();
  piStack_58 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_5c = (int *)0x5009e0;
  FUN_0040263d();
  piStack_5c = (int *)0x5009e7;
  psVar5 = (short *)FUN_004048a4();
  sVar1 = *psVar5;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (sVar1 == 8) {
    piStack_54 = *(int **)(psVar5 + 4);
  }
  else {
    piStack_54 = (int *)&DAT_0097812c;
  }
  piStack_58 = *(int **)(unaff_EBP + -0x1c);
  piStack_5c = *(int **)(unaff_EBP + -0x14);
  FUN_00500526();
  piStack_54 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_58 = (int *)0x500a1a;
  piVar6 = (int *)FUN_00402bc3();
  piVar3 = piStack_54;
  if ((int)piVar6 < 0) {
    piStack_58 = (int *)0x500a25;
    piStack_54 = piVar6;
    FUN_00878dfb();
    piVar3 = extraout_ECX_01;
  }
  piStack_54 = (int *)0x0;
  piStack_58 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_5c;
  piStack_5c = piVar3;
  FUN_00448a17(s_pulley_00964f1c);
  iVar2 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_5c = (int *)0x500a59;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar2 != 0) {
    piStack_54 = (int *)(unaff_EBP + -0x1c);
    piStack_58 = (int *)0x500a6f;
    piStack_54 = (int *)FUN_00404b30();
    if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
      piStack_58 = (int *)0x500a80;
      FUN_00878dfb();
    }
  }
  piStack_54 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_58 = (int *)0x500a8d;
  piVar3 = (int *)FUN_00402bc3();
  piStack_58 = piStack_54;
  if ((int)piVar3 < 0) {
    piStack_58 = (int *)0x500a98;
    piStack_54 = piVar3;
    FUN_00878dfb();
    piStack_58 = extraout_ECX_02;
  }
  piStack_54 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_58;
  piStack_5c = (int *)0x3ca;
  FUN_00679e4e(&piStack_58);
  piStack_5c = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0040263d();
  piStack_58 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_5c = (int *)0x500acd;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  piStack_5c = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    piStack_58 = (int *)0x500aea;
    FUN_00878dfb();
  }
  piStack_54 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_58;
  piStack_5c = (int *)0x3cb;
  FUN_00679e4e(&piStack_58);
  piStack_5c = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0040263d();
  piStack_58 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_5c = (int *)0x500b1f;
  piVar3 = (int *)FUN_00412550();
  piStack_5c = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    piStack_58 = (int *)0x500b3b;
    FUN_00878dfb();
  }
  *(int ***)(unaff_EBP + -0x20) = &piStack_54;
  piStack_58 = (int *)s_pulley_00964f1c;
  piStack_5c = (int *)0x500b4b;
  FUN_00448a17();
  piStack_58 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_5c = (int *)0x500b5b;
  FUN_0040263d();
  piStack_5c = (int *)0x500b62;
  psVar5 = (short *)FUN_004048a4();
  sVar1 = *psVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (sVar1 == 8) {
    piStack_54 = *(int **)(psVar5 + 4);
  }
  else {
    piStack_54 = (int *)&DAT_0097812c;
  }
  piStack_5c = *(int **)(unaff_EBP + -0x14);
  piStack_58 = piVar3;
  FUN_005006e1();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_58 = (int *)0x500b93;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    piStack_58 = (int *)0x500b9e;
    FUN_00878dfb();
  }
  piStack_54 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x72c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_54 != (int *)0x0) {
    piStack_58 = (int *)0x500bb5;
    (**(code **)(*piStack_54 + 8))();
  }
  piStack_54 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    piStack_58 = (int *)0x500bc6;
    (**(code **)(*piStack_54 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


