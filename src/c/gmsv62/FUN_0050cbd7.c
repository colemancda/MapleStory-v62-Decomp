/* FUN_0050cbd7 - 0x0050cbd7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050cbd7(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  short *psVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  undefined1 *puStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  
  FUN_00879bb8();
  piStack_9c = *(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x40) = extraout_ECX;
  piStack_a0 = (int *)0x50cbf7;
  FUN_004e5f8c();
  piStack_9c = (int *)0x0;
  piStack_a0 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
  FUN_00679e4e(&puStack_a4,0x5bf);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0x88;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_a4 = (undefined1 *)0x50cc3b;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar2;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar2 != 0) {
    piStack_9c = (int *)(unaff_EBP + -0x44);
    piStack_a0 = (int *)0x50cc51;
    piStack_9c = (int *)FUN_00404b30();
    if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
      piStack_a0 = (int *)0x50cc62;
      FUN_00878dfb();
    }
  }
  piStack_9c = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_a0 = (int *)0x50cc72;
  piVar3 = (int *)FUN_00402bc3();
  piStack_a0 = piStack_9c;
  if ((int)piVar3 < 0) {
    piStack_a0 = (int *)0x50cc7d;
    piStack_9c = piVar3;
    FUN_00878dfb();
    piStack_a0 = extraout_ECX_00;
  }
  piStack_9c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_a0;
  puStack_a4 = (undefined1 *)0x5c0;
  FUN_00679e4e(&piStack_a0);
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_a0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_a4 = (undefined1 *)0x50ccb2;
  DAT_00964f94 = FUN_00412550();
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    piStack_a0 = (int *)0x50ccd1;
    FUN_00878dfb();
  }
  piStack_9c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_a0;
  puStack_a4 = (undefined1 *)0x3ca;
  FUN_00679e4e(&piStack_a0);
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_a0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_a4 = (undefined1 *)0x50cd06;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    piStack_a0 = (int *)0x50cd23;
    FUN_00878dfb();
  }
  piStack_9c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_a0;
  puStack_a4 = (undefined1 *)0x5be;
  FUN_00679e4e(&piStack_a0);
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_a0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_a4 = (undefined1 *)0x50cd58;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    piStack_a0 = (int *)0x50cd75;
    FUN_00878dfb();
  }
  piStack_9c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_a0;
  puStack_a4 = (undefined1 *)0x5c4;
  FUN_00679e4e(&piStack_a0);
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_a0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_a4 = (undefined1 *)0x50cdaa;
  DAT_00979278 = FUN_00412550();
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    piStack_a0 = (int *)0x50cdc9;
    FUN_00878dfb();
  }
  piStack_9c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_a0;
  puStack_a4 = (undefined1 *)0x5c5;
  FUN_00679e4e(&piStack_a0);
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  piStack_a0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_a4 = (undefined1 *)0x50cdfe;
  DAT_0097927c = FUN_00412550();
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)FUN_00402bc3();
  if ((int)piStack_9c < 0) {
    piStack_a0 = (int *)0x50ce1d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX + 0x72c;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX + 0x79c;
  do {
    piStack_9c = (int *)0x50ce3a;
    FUN_0087a1b0();
    piStack_9c = (int *)0x0;
    piStack_a0 = (int *)0x0;
    puStack_a4 = &stack0xffffff68;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_a4;
    FUN_004033a1(uVar4);
    iVar2 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_a4 = (undefined1 *)0x50ce75;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_9c = (int *)(unaff_EBP + -0x20);
      piStack_a0 = (int *)0x50ce8b;
      piStack_9c = (int *)FUN_00404b30();
      if (((int)piStack_9c < 0) && (piStack_9c != (int *)0x80004002)) {
        piStack_a0 = (int *)0x50ce9c;
        FUN_00878dfb();
      }
    }
    piStack_9c = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_a0 = (int *)0x50cea9;
    piVar3 = (int *)FUN_00402bc3();
    piStack_a0 = piStack_9c;
    if ((int)piVar3 < 0) {
      piStack_a0 = (int *)0x50ceb4;
      piStack_9c = piVar3;
      FUN_00878dfb();
      piStack_a0 = extraout_ECX_01;
    }
    piStack_9c = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_a0;
    puStack_a4 = (undefined1 *)0x3cb;
    FUN_00679e4e(&piStack_a0);
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0040263d();
    piStack_a0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_a4 = (undefined1 *)0x50cee9;
    piVar3 = (int *)FUN_00412550();
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_9c = (int *)FUN_00402bc3();
    if ((int)piStack_9c < 0) {
      piStack_a0 = (int *)0x50cf05;
      FUN_00878dfb();
    }
    piStack_9c = (int *)&DAT_0097812c;
    *(int ***)(unaff_EBP + -0x18) = &piStack_a0;
    puStack_a4 = (undefined1 *)0x5c6;
    FUN_00679e4e(&piStack_a0);
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0040263d();
    piStack_a0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_a4 = (undefined1 *)0x50cf3e;
    piStack_a0 = (int *)FUN_004343c5();
    piStack_9c = (int *)0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    puStack_a4 = (undefined1 *)0x50cf4e;
    FUN_00454081();
    piStack_9c = (int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_a0 = (int *)0x50cf5b;
    piVar5 = (int *)FUN_00402bc3();
    if ((int)piVar5 < 0) {
      piStack_a0 = (int *)0x50cf66;
      piStack_9c = piVar5;
      FUN_00878dfb();
      piStack_9c = extraout_ECX_02;
    }
    puStack_a4 = (undefined1 *)&piStack_9c;
    *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
    piStack_a0 = (int *)0x5c7;
    FUN_00679e4e();
    piStack_a0 = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_a4 = (undefined1 *)0x50cf89;
    FUN_0040263d();
    puStack_a4 = (undefined1 *)0x50cf90;
    psVar6 = (short *)FUN_004048a4();
    sVar1 = *psVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (sVar1 == 8) {
      piStack_9c = *(int **)(psVar6 + 4);
    }
    else {
      piStack_9c = (int *)&DAT_0097812c;
    }
    puStack_a4 = *(undefined1 **)(unaff_EBP + -0x48);
    piStack_a0 = piVar3;
    FUN_0050c565();
    piStack_9c = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_a0 = (int *)0x50cfbe;
    piVar5 = (int *)FUN_00402bc3();
    if ((int)piVar5 < 0) {
      piStack_a0 = (int *)0x50cfc9;
      piStack_9c = piVar5;
      FUN_00878dfb();
      piStack_9c = extraout_ECX_03;
    }
    puStack_a4 = (undefined1 *)&piStack_9c;
    *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
    piStack_a0 = (int *)0x5bf;
    FUN_00679e4e();
    piStack_a0 = (int *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_a4 = (undefined1 *)0x50cfef;
    FUN_0040263d();
    puStack_a4 = (undefined1 *)0x50cff6;
    psVar6 = (short *)FUN_004048a4();
    sVar1 = *psVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (sVar1 == 8) {
      piStack_9c = *(int **)(psVar6 + 4);
    }
    else {
      piStack_9c = (int *)&DAT_0097812c;
    }
    piStack_a0 = (int *)(unaff_EBP + -0x28);
    puStack_a4 = (undefined1 *)piVar3;
    FUN_0050c088(*(undefined4 *)(unaff_EBP + -0x14));
    piStack_9c = (int *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_a0 = (int *)0x50d02b;
    piStack_9c = (int *)FUN_00402bc3();
    if ((int)piStack_9c < 0) {
      piStack_a0 = (int *)0x50d036;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_9c = (int *)0x50d042;
    FUN_00414ebb();
    piStack_9c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_9c != (int *)0x0) {
      piStack_a0 = (int *)0x50d053;
      (**(code **)(*piStack_9c + 8))();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x28;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 0x38;
  } while (*(int *)(unaff_EBP + -0x1c) < 2);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0x728) = 0xffffffff;
  piStack_9c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_9c != (int *)0x0) {
    piStack_a0 = (int *)0x50d083;
    (**(code **)(*piStack_9c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


