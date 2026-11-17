/* FUN_005c4b14 - 0x005c4b14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c4b14(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x448) != 0) {
    FUN_004031b7(0xfffffffe,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x448) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x30);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iVar3 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(extraout_ECX + 0x448);
    uVar2 = *(undefined4 *)(extraout_ECX + 0x45c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x80,uVar2,unaff_EBP + -0x40,unaff_EBP + -0x50,unaff_EBP + -0x60,
                 unaff_EBP + -0x70,unaff_EBP + -0x20);
    iVar3 = FUN_00402bc3(unaff_EBP + -0x80);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


