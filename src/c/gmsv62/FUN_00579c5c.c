/* FUN_00579c5c - 0x00579c5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00579c5c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 8) & 1) == 0) {
    if (*(int **)(extraout_ECX + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xac) + 0xc))();
      FUN_00450463();
    }
  }
  else {
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))
              (extraout_ECX,1000,0,0x34,0,extraout_ECX + 0x78);
  }
  if ((*(byte *)(unaff_EBP + 8) & 2) == 0) {
    if (*(int **)(extraout_ECX + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0xc))();
      FUN_00450463();
    }
  }
  else {
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))
              (extraout_ECX,0x3e9,0,0x3c,0,extraout_ECX + 0x88);
  }
  if ((*(byte *)(unaff_EBP + 8) & 0x10) == 0) {
    if ((*(int **)(extraout_ECX + 0xbc) != (int *)0x0) && (*(int *)(unaff_EBP + 8) == 0)) {
      (**(code **)(**(int **)(extraout_ECX + 0xbc) + 0xc))();
      FUN_00450463();
    }
  }
  else {
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xbc) + 0x20))
              (extraout_ECX,0x3ea,0,0,0,extraout_ECX + 0x98);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar1 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iVar1 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar3,-(*(int *)(unaff_EBP + 8) != 0),0,*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


