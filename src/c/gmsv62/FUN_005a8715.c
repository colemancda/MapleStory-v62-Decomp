/* FUN_005a8715 - 0x005a8715 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a8715(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = *(int **)(unaff_EBP + 8);
  if (iVar2 < 0) {
    if (iVar2 == -1) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = (**(code **)(*piVar1 + 0x110))
                        (piVar1,0,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x10));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = unaff_EBP + -0x1c;
    }
    else {
      if (iVar2 != -2) goto LAB_005a8913;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_00432a57();
      if (iVar2 != 0) goto LAB_005a8913;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
      iVar2 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = (**(code **)(*piVar1 + 0x110))
                        (piVar1,0x10,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x10));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = unaff_EBP + -0x1c;
    }
  }
  else {
    FUN_004031b7(iVar2,3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar1 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = (**(code **)(*piVar1 + 0x110))
                      (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = unaff_EBP + -0x2c;
  }
  iVar2 = FUN_00402bc3(iVar2);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
LAB_005a8913:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


