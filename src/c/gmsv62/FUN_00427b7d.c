/* FUN_00427b7d - 0x00427b7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427b7d(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar3 = (undefined4 *)FUN_00435dd0();
  piVar1 = *(int **)(unaff_EBP + 0x20);
  *puVar3 = *(undefined4 *)(unaff_EBP + 8);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[2] = *(undefined4 *)(unaff_EBP + 0x10);
  puVar3[3] = *(undefined4 *)(unaff_EBP + 0x14);
  puVar3[4] = *(undefined4 *)(unaff_EBP + 0x18);
  puVar3[5] = *(undefined4 *)(unaff_EBP + 0x1c);
  piVar5 = (int *)puVar3[6];
  if (piVar5 != piVar1) {
    puVar3[6] = piVar1;
    FUN_00434bee();
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  puVar3[7] = *(undefined4 *)(unaff_EBP + 0x24);
  if (*(int *)(unaff_EBP + 0x28) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 0x28) + 8));
  }
  FUN_00402fa6();
  puVar3[8] = *(undefined4 *)(unaff_EBP + 0x28);
  puVar3[9] = *(undefined4 *)(unaff_EBP + 0x2c);
  puVar3[10] = *(undefined4 *)(unaff_EBP + 0x30);
  piVar5 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
    iVar4 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = (**(code **)(iVar4 + 0x8c))
                      (*(undefined4 *)(unaff_EBP + 0x20),unaff_EBP + 0x10,unaff_EBP + 0x14,0,0,0,0,0
                       ,0,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(unaff_EBP + 0x10);
    iVar2 = *(int *)(unaff_EBP + 0x14);
    puVar3[2] = puVar3[2] - iVar4;
    puVar3[3] = puVar3[3] - iVar2;
    puVar3[4] = puVar3[4] - iVar4;
    puVar3[5] = puVar3[5] - iVar2;
    piVar5 = *(int **)(unaff_EBP + 0x20);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (*(int *)(unaff_EBP + 0x28) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


