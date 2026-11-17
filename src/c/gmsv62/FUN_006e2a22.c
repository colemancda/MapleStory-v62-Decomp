/* FUN_006e2a22 - 0x006e2a22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e2a22(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *piVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  iVar5 = *(int *)(extraout_ECX + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = extraout_ECX;
  while( true ) {
    if (*(int *)(iVar5 + 0x44) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar5 + 0x44) + -4);
    }
    if (iVar6 <= *(int *)(unaff_EBP + -0x10)) break;
    iVar6 = *(int *)(*(int *)(iVar5 + 0x44) + *(int *)(unaff_EBP + -0x10) * 8 + 4);
    *(int *)(unaff_EBP + -0x24) = iVar6;
    if (iVar6 != 0) {
      InterlockedIncrement((LONG *)(iVar6 + 4));
    }
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar6 != 0) {
      iVar5 = FUN_006e3164(*(undefined4 *)(unaff_EBP + -0x10));
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0x54 + iVar5 * 4);
      *(int **)(unaff_EBP + -0x20) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      puVar1 = (undefined4 *)(iVar5 * 0x10 + 0x14 + *(int *)(unaff_EBP + -0x24));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iVar5 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      uVar3 = puVar1[1];
      uVar4 = *puVar1;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iVar5 = (**(code **)(*piVar7 + 0x80))
                        (*(undefined4 *)(unaff_EBP + -0x14),uVar4,uVar3,piVar2,
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar5 = *(int *)(unaff_EBP + -0x18);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_006eadbe(0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


