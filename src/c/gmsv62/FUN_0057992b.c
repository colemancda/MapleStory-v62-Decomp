/* FUN_0057992b - 0x0057992b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057992b(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x51e);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00419192(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x520);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xf4c);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00419192(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar2 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iVar2 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
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
  iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


