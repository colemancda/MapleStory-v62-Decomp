/* FUN_004b388f - 0x004b388f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b388f(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  extraout_ECX[5] = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[9] = iVar5;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x3b1);
  uVar1 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = extraout_ECX + 6;
  FUN_00437222(uVar1,piVar3,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  piVar2 = *(int **)(iVar5 + 0x18);
  *(undefined2 *)(unaff_EBP + -0x1c) = 0xd;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar5 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar5 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar5 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)extraout_ECX[6];
  iVar5 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  iVar5 = (**(code **)(iVar5 + 0x90))
                    (piVar3,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  uVar1 = *(undefined4 *)(unaff_EBP + 0x20);
  extraout_ECX[7] = *(int *)(unaff_EBP + 0x18);
  extraout_ECX[8] = *(int *)(unaff_EBP + 0x1c);
  (**(code **)(*extraout_ECX + 0x10))(uVar1);
  FUN_004b3a49(extraout_ECX,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


