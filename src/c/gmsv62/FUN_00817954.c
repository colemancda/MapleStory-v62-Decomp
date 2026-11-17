/* FUN_00817954 - 0x00817954 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00817954(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_008140e5();
  DAT_00978364 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x19] = &PTR_FUN_008f2e20;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x24] = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x2a] = 0xffffffff;
  extraout_ECX[0x2b] = 0xffffffff;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = uVar4;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  piVar2 = extraout_ECX + 0x35;
  *piVar2 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008f2dec;
  extraout_ECX[1] = &PTR_LAB_008f2da0;
  extraout_ECX[2] = &PTR_FUN_008f2d9c;
  uVar3 = (*DAT_0097b6d4)();
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x2a] = uVar3;
  uVar4 = (*DAT_0097b6d0)(uVar4,uVar3);
  extraout_ECX[0x2b] = uVar4;
  uVar4 = (*DAT_0097b5dc)(0,4);
  uVar4 = (*DAT_0097b6cc)(uVar4);
  extraout_ECX[0x2c] = uVar4;
  puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x3b1);
  uVar4 = *puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00437222(uVar4,piVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)FUN_00429328(unaff_EBP + -0x10);
  piVar1 = (int *)*puVar5;
  *(undefined2 *)(unaff_EBP + -0x24) = 0xd;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  (**(code **)(iVar6 + 4))(piVar1);
  iVar6 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar6 = (**(code **)(iVar6 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iVar6 = FUN_00402e32(unaff_EBP + -0x34,&DAT_00980690);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iVar6 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  iVar6 = extraout_ECX[0x35];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)extraout_ECX[0x35];
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar6 = (**(code **)(iVar6 + 0x90))
                    (piVar2,0xfffffe70,0xfffffed4,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x25] = 0;
  FUN_00818724();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


