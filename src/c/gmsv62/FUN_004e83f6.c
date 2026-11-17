/* FUN_004e83f6 - 0x004e83f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e83f6(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_6c;
  int iStack_68;
  int *piStack_64;
  
  FUN_00879bb8();
  piStack_64 = (int *)0x0;
  iStack_68 = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  FUN_00679e4e(&iStack_6c,0x6da);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x38;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_6c = 0x4e8449;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_64 = (int *)(unaff_EBP + -0x24);
    iStack_68 = 0x4e845f;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      iStack_68 = 0x4e8470;
      FUN_00878dfb();
    }
  }
  piStack_64 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x4e847d;
  iVar1 = FUN_00402bc3();
  iStack_68 = (int)piStack_64;
  if (iVar1 < 0) {
    iStack_68 = 0x4e8488;
    piStack_64 = (int *)iVar1;
    FUN_00878dfb();
    iStack_68 = extraout_ECX;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_64 = (int *)0x0;
    *(int **)(unaff_EBP + -0x20) = &iStack_68;
    iStack_6c = 0x3ca;
    FUN_00679e4e(&iStack_68);
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    iStack_68 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_6c = 0x4e84c6;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      iStack_68 = 0x4e84e3;
      FUN_00878dfb();
    }
    piStack_64 = (int *)0x0;
    *(int **)(unaff_EBP + -0x1c) = &iStack_68;
    iStack_6c = 0x3cb;
    FUN_00679e4e(&iStack_68);
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    iStack_68 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_6c = 0x4e8518;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      iStack_68 = 0x4e8535;
      FUN_00878dfb();
    }
    piStack_64 = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_68;
    iStack_6c = 0x6de;
    FUN_00679e4e(&iStack_68);
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    iStack_68 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_6c = 0x4e856a;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      iStack_68 = 0x4e8587;
      FUN_00878dfb();
    }
    piStack_64 = (int *)0x0;
    *(int **)(unaff_EBP + -0x14) = &iStack_68;
    iStack_6c = 0x6df;
    FUN_00679e4e(&iStack_68);
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    iStack_68 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_6c = 0x4e85bc;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    iStack_6c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      iStack_68 = 0x4e85d9;
      FUN_00878dfb();
    }
    if ((((*(int *)(unaff_EBP + -0x20) == 0) || (*(int *)(unaff_EBP + -0x1c) == 0)) ||
        (*(int *)(unaff_EBP + -0x18) == 0)) || (*(int *)(unaff_EBP + -0x14) == 0))
    goto LAB_004e8681;
    piStack_64 = (int *)0xa8;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffff;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xe;
    *(undefined4 *)(unaff_EBP + -0x50) = 1;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 1;
    *(undefined4 *)(unaff_EBP + -0x58) = 0xffffe500;
    iStack_68 = 0x4e862d;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x28) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar1 == 0) {
      piStack_64 = (int *)0x0;
    }
    else {
      piStack_64 = (int *)0x4e863f;
      piStack_64 = (int *)FUN_004e86a1();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_68 = 0x4e8653;
    FUN_004f13ee();
    piStack_64 = (int *)0x1;
    iStack_68 = unaff_EBP + -0x60;
    iStack_6c = 0;
    FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                 *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),0xc0041ee2);
  }
  piStack_64 = (int *)0x0;
  iStack_68 = 0x4e8681;
  FUN_00817f6e();
LAB_004e8681:
  piStack_64 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_64 != (int *)0x0) {
    iStack_68 = 0x4e8692;
    (**(code **)(*piStack_64 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


