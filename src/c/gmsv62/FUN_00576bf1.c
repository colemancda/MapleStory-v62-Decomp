/* FUN_00576bf1 - 0x00576bf1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00576bf1(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar1 = FUN_00576395(iVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_00576edb();
    iVar4 = iVar2 + iVar1 * -3;
    *(int *)(unaff_EBP + -0x1c) = (iVar4 / 3) * 0x75 + 0x96;
    FUN_004031b7(0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = *(int *)(extraout_ECX + 0x35b8 + iVar2 * 4);
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x35b8 + iVar2 * 4;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + 8) =
         *(undefined4 *)
          (extraout_ECX + 0x36c8 +
          *(int *)(*(int *)(*(int *)(extraout_ECX + 100) + 0x11c) + *(int *)(unaff_EBP + 8) * 4) * 4
          );
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar3,0,0,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar3 = (int *)**(int **)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + 8) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piVar5 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar2 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00403191(&DAT_00980690);
      iVar2 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (*(undefined4 *)(unaff_EBP + 8),(iVar4 % 3) * 0x75 + 0x1a,
                         *(int *)(unaff_EBP + -0x1c) + 5,*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


