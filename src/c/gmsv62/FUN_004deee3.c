/* FUN_004deee3 - 0x004deee3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004deee3(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar1 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar1 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x10);
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar1 = (**(code **)(*piVar2 + 0x90))
                    (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963de8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


