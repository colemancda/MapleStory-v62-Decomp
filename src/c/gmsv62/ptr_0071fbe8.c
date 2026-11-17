/* ptr_0071fbe8 - 0x0071fbe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0071fbe8(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00878dfb(in_EAX);
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar4 = FUN_00402e32(unaff_EBP + -0x3c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar4 = FUN_00402e32(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = FUN_0040eed0();
  *(int *)(unaff_EBP + 0x14) = (*(int *)(unaff_EBP + 0x14) - iVar4) + 0x10;
  iVar4 = FUN_0040eea9();
  iVar4 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,(*(int *)(unaff_EBP + 0x10) - iVar4) + -0x10,
                     *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar5 = (undefined4 *)FUN_004029b9(0x24);
  *(undefined4 **)(unaff_EBP + 0x14) = puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (puVar5 == (undefined4 *)0x0) {
    uVar6 = *(uint *)(unaff_EBP + -0x2c);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
    puVar5[4] = *(undefined4 *)(unaff_EBP + -0x20);
    puVar5[5] = *(undefined4 *)(unaff_EBP + -0x18);
    puVar5[7] = uVar2;
    uVar6 = *(uint *)(unaff_EBP + -0x2c);
    puVar5[6] = uVar3;
    puVar5[8] = -(uint)(uVar6 != 4) & uVar6;
    *puVar5 = &PTR_FUN_008efcdc;
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar5);
  puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
  uVar2 = *puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_007d3cdd(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  FUN_0074d6fb();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


