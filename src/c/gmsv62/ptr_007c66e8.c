/* ptr_007c66e8 - 0x007c66e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007c66e8(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  int *piStack_8;
  
  while( true ) {
    piStack_8 = unaff_EDI;
    iVar2 = (**(code **)(*unaff_EDI + 0x44))();
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,unaff_EDI,&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    uVar3 = FUN_0040e53d();
    iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,uVar3);
    if (iVar2 < 0) {
      piStack_8 = piVar4;
      FUN_00878e09(iVar2);
    }
    *(int ***)(unaff_EBP + -0x28) = &piStack_8;
    FUN_00679e4e(&piStack_8,0x474);
    iVar2 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004115d9(iVar2);
    FUN_00404e7f(iVar2);
    iVar2 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_0040263d(iVar2);
    piStack_8 = (int *)FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piVar4 = (int *)FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x9c);
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c67b2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_004027eb();
    piStack_8 = (int *)0x7c67c7;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_8 = (int *)0x7c67d4;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_8 = (int *)0x7c67e4;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_8 = (int *)0x7c67f1;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_8 = piVar4;
    FUN_004031b7();
    iVar2 = *unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar2 == 0) {
      piStack_8 = (int *)0x7c6813;
      FUN_00878dfb();
    }
    piStack_8 = (int *)(unaff_EBP + -0x7c);
    FUN_004250ac(unaff_EBP + -0xac,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x38,
                 unaff_EBP + -0x4c,unaff_EBP + -0x8c);
    piStack_8 = (int *)0x7c6847;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c6852;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_8 = (int *)0x7c685f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c686a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_8 = (int *)0x7c6877;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c6882;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_8 = (int *)0x7c6892;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c689d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_8 = (int *)0x7c68aa;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c68b5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_8 = (int *)0x7c68c2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c68cd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_8 = (int *)0x7c68da;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_8 = (int *)0x7c68e5;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_8 = (int *)0x7c663f;
      FUN_00878dfb();
    }
    uVar1 = FUN_0040cf4d();
    if (uVar1 <= *(uint *)(unaff_EBP + 8)) break;
    FUN_0087a1b0();
    piStack_8 = *(int **)(unaff_EBP + 8);
    piStack_8 = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffffc;
    FUN_00402e8e();
    piStack_8 = (int *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0040263d();
    FUN_004048a4();
    piStack_8 = (int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_8 = (int *)0x7c66a8;
    iVar2 = FUN_0041a485();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_8 = (int *)0x7c66b9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_004027b3();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_8 = (int *)0x7c66d1;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_8 = (int *)0x7c66dd;
      FUN_00878dfb();
    }
    unaff_EDI = *(int **)(unaff_EBP + -0x14);
    FUN_0040e48b();
  }
  piStack_8 = (int *)0x7c68fb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_8 = (int *)0x7c6908;
  FUN_00403191();
  iVar2 = *unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar2 == 0) {
    piStack_8 = (int *)0x7c6917;
    FUN_00878dfb();
  }
  piVar4 = (int *)*unaff_EBX;
  piStack_8 = *(int **)(unaff_EBP + -0x54);
  iVar2 = (**(code **)(*piVar4 + 0x110))
                    (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x6c),
                     *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125e6();
  FUN_004125e6();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


