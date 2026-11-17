/* FUN_005cd280 - 0x005cd280 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cd280(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x348) = uVar2;
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
    iVar3 = *(int *)(extraout_ECX + 0x440);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)FUN_004113e5(unaff_EBP + -0x10);
    iVar3 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + 8) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x90))
                      (piVar4,0xff,0,*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
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
    FUN_005c6499();
    FUN_005c5f49();
    uVar2 = FUN_0055a766();
    *(undefined4 *)(extraout_ECX + 0x3d8) = uVar2;
    *(undefined4 *)(extraout_ECX + 0x148) = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


