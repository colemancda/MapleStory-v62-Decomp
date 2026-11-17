/* FUN_005c549f - 0x005c549f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c549f(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x3d8) = uVar1;
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
  iVar2 = *(int *)(extraout_ECX + 0x440);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x10);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
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
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


