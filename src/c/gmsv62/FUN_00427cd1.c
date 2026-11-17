/* FUN_00427cd1 - 0x00427cd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427cd1(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  int *piVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(int **)(unaff_EBP + 0x28) == (int *)0x0) ||
     (iVar4 = **(int **)(unaff_EBP + 0x28), iVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar4 + -4) >> 1;
  }
  if (uVar3 == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piVar1 = *(int **)(unaff_EBP + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  else {
    iVar4 = FUN_0043626e();
    piVar1 = *(int **)(unaff_EBP + 0x20);
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(unaff_EBP + 0x1c);
    piVar6 = *(int **)(iVar4 + 0x30);
    if (piVar6 != piVar1) {
      *(int **)(iVar4 + 0x30) = piVar1;
      FUN_00434bee();
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
    }
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(unaff_EBP + 0x24);
    FUN_00408b49();
    FUN_00402fa6();
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(unaff_EBP + 0x28);
    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(unaff_EBP + 0x2c);
    piVar6 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
      iVar5 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      iVar5 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar5 = (**(code **)(iVar5 + 0x8c))
                        (*(undefined4 *)(unaff_EBP + 0x20),unaff_EBP + 0x10,unaff_EBP + 0x14,0,0,0,0
                         ,0,0,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      iVar5 = *(int *)(unaff_EBP + 0x10);
      iVar2 = *(int *)(unaff_EBP + 0x14);
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) - iVar5;
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) - iVar2;
      *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) - iVar5;
      *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) - iVar2;
      piVar6 = *(int **)(unaff_EBP + 0x20);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
  }
  if (*(int *)(unaff_EBP + 0x28) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


