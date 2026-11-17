/* ptr_007c6683 - 0x007c6683 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007c6683(undefined1 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  while( true ) {
    FUN_004048a4();
    param_1 = (undefined1 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    param_1 = (undefined1 *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (undefined1 *)FUN_0041a485();
    if (((int)param_1 < 0) && (param_1 != (undefined1 *)0x80004002)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    param_1 = (undefined1 *)0x7c66c5;
    FUN_004027b3();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      param_1 = (undefined1 *)unaff_EDI;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      param_1 = (undefined1 *)unaff_EDI;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    param_1 = (undefined1 *)0x7c66e8;
    param_1 = (undefined1 *)FUN_0040e48b();
    iVar3 = (**(code **)(*piVar1 + 0x44))();
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    uVar4 = FUN_0040e53d();
    iVar3 = (**(code **)(*piVar1 + 0x4c))(piVar1,uVar4);
    if (iVar3 < 0) {
      param_1 = &DAT_00963cc8;
      FUN_00878e09(iVar3);
    }
    param_1 = (undefined1 *)0x78;
    *(BADSPACEBASE **)(unaff_EBP + -0x28) = register0x00000010;
    FUN_00679e4e(&stack0x00000000,0x474);
    iVar3 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004115d9(iVar3);
    FUN_00404e7f(iVar3);
    iVar3 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    param_1 = (undefined1 *)FUN_00402bc3(unaff_EBP + -0x9c);
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    param_1 = (undefined1 *)0x7c67be;
    FUN_004027eb();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00403191();
    param_1 = (undefined1 *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_004031b7();
    iVar3 = *unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar3 == 0) {
      param_1 = (undefined1 *)0x80004003;
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x5c);
    FUN_004250ac(unaff_EBP + -0xac,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x38,
                 unaff_EBP + -0x4c,unaff_EBP + -0x8c);
    param_1 = (undefined1 *)(unaff_EBP + -0xac);
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    param_1 = (undefined1 *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    unaff_EDI = 0x80004003;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      param_1 = (undefined1 *)0x80004003;
      FUN_00878dfb();
    }
    param_1 = (undefined1 *)0x7c6647;
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + 8)) break;
    param_1 = (undefined1 *)0x7c6658;
    FUN_0087a1b0();
    param_1 = &stack0x00000008;
    FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
    FUN_00402e8e();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0040263d();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00403191();
  iVar3 = *unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    param_1 = (undefined1 *)0x80004003;
    FUN_00878dfb();
  }
  piVar1 = (int *)*unaff_EBX;
  param_1 = *(undefined1 **)(unaff_EBP + -0x50);
  iVar3 = (**(code **)(*piVar1 + 0x110))
                    (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x6c),
                     *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_004125e6();
  FUN_004125e6();
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


