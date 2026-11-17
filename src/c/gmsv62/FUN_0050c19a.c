/* FUN_0050c19a - 0x0050c19a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050c19a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = DAT_00964f94 * *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  (*DAT_0097b54c)(extraout_ECX + 0x20,iVar3,0);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar3 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar3 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(extraout_ECX + 0x30);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x30);
  iVar3 = (**(code **)(*piVar1 + 0x94))
                    (piVar1,DAT_00964f94 * *(int *)(unaff_EBP + 8),0,
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iVar3 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    iVar3 = *(int *)(unaff_EBP + -0x10);
    iVar2 = *(int *)(iVar3 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(iVar3 + 0x30);
    iVar3 = *piVar1;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) << 2;
    iVar3 = (**(code **)(iVar3 + 0xa0))
                      (piVar1,(double)*(int *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


