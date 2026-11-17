/* ptr_00686683 - 0x00686683 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00686683(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar3 = *(int *)(unaff_EBX + 0x38);
  *(undefined4 *)(unaff_EBX + 0x38) = in_EAX;
  FUN_00686350();
  iVar2 = 3000;
  if (*(int *)(unaff_EBX + 0x20) == 0x4faa8e) {
    iVar2 = *(int *)(unaff_EBX + 0x3c);
  }
  if ((iVar2 < iVar3) && (*(int *)(unaff_EBX + 0x38) <= iVar2)) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iVar3 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
    iVar3 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    iVar3 = *(int *)(unaff_EBX + 0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBX + 0x28);
    iVar3 = *piVar1;
    *(int **)(unaff_EBP + 8) = piVar1;
    iVar3 = (**(code **)(iVar3 + 0x110))
                      (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iVar3 = FUN_00402e32(unaff_EBP + -0x4c,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iVar3 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    iVar3 = *(int *)(unaff_EBX + 0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBX + 0x2c);
    iVar3 = (**(code **)(*piVar1 + 0x110))
                      (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


