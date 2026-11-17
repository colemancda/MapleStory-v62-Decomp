/* FUN_0050c7c8 - 0x0050c7c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050c7c8(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00432a57();
  if (iVar2 == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iVar2 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iVar2 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    iVar2 = *(int *)(extraout_ECX + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x20);
    iVar2 = (**(code **)(*piVar1 + 0x110))
                      (piVar1,0x10,*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  FUN_0050c8d7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


