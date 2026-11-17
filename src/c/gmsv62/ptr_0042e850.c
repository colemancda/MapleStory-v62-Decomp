/* ptr_0042e850 - 0x0042e850 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * ptr_0042e850(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  int *piVar4;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_10;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar4 + 0xe0))();
  if (iVar3 < 0) {
    uStack_18 = 0x42e875;
    iStack_14 = iVar3;
    piStack_10 = piVar4;
    FUN_00878e09();
  }
  piStack_10 = (int *)0x42e883;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_10 = (int *)0x42e890;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_10 = (int *)0x42e8a4;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_14 = *(undefined4 *)(unaff_EBP + -0x54);
  piStack_10 = *(int **)(unaff_EBP + -0x50);
  uStack_2c = *(undefined4 *)(unaff_EBP + 0x1c);
  uStack_30 = *(undefined4 *)(unaff_EBP + 0x18);
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_20 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_1c = *(undefined4 *)(unaff_EBP + -0x1c);
  piStack_38 = (int *)0x42e8ce;
  piStack_34 = piVar4;
  iVar3 = (**(code **)(*piVar4 + 0x90))();
  if (iVar3 < 0) {
    piStack_38 = (int *)&DAT_00963de8;
    piStack_3c = piVar4;
    FUN_00878e09(iVar3);
  }
  piStack_38 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_3c = (int *)0x42e8eb;
  piStack_38 = (int *)FUN_00402bc3();
  if ((int)piStack_38 < 0) {
    piStack_3c = (int *)0x42e8f6;
    FUN_00878dfb();
  }
  piStack_38 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_3c = (int *)0x42e903;
  piStack_38 = (int *)FUN_00402bc3();
  if ((int)piStack_38 < 0) {
    piStack_3c = (int *)0x42e90e;
    FUN_00878dfb();
  }
  piVar4 = (int *)0x0;
  do {
    piStack_38 = (int *)0x42e918;
    FUN_0087a1b0();
    piStack_3c = piVar4;
    piStack_38 = (int *)&piStack_34;
    piStack_3c = (int *)FUN_00412335();
    *(int ***)(unaff_EBP + 0x28) = &piStack_38;
    FUN_00402e8e();
    piStack_3c = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x28) == 0) {
LAB_0042e9f7:
      piStack_38 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_3c = (int *)0x42ea04;
      piStack_38 = (int *)FUN_00402bc3();
      if ((int)piStack_38 < 0) {
        piStack_3c = (int *)0x42ea0f;
        FUN_00878dfb();
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = *(undefined4 *)(unaff_EBP + -0x10);
      piStack_38 = (int *)0x42ea1e;
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      piStack_38 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piStack_38 != (int *)0x0) {
        piStack_3c = (int *)0x42ea36;
        (**(code **)(*piStack_38 + 8))();
      }
      piStack_38 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_38 != (int *)0x0) {
        piStack_3c = (int *)0x42ea47;
        (**(code **)(*piStack_38 + 8))();
      }
      piStack_38 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_38 != (int *)0x0) {
        piStack_3c = (int *)0x42ea58;
        (**(code **)(*piStack_38 + 8))();
      }
      piStack_38 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_38 != (int *)0x0) {
        piStack_3c = (int *)0x42ea69;
        (**(code **)(*piStack_38 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar2;
    }
    piStack_38 = (int *)(unaff_EBP + -0x28);
    piStack_3c = (int *)(unaff_EBP + 0x24);
    piStack_38 = (int *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_3c = (int *)0x42e971;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_38 = (int *)0x42e97d;
    FUN_004027b3();
    piVar1 = *(int **)(unaff_EBP + 0x10);
    if (piVar1 == (int *)0x0) {
      piStack_38 = (int *)0x42e9f7;
      FUN_004125e6();
      goto LAB_0042e9f7;
    }
    if (0 < *(int *)(unaff_EBP + 0x2c)) {
      piStack_38 = *(int **)(unaff_EBP + 0x2c);
      piStack_3c = piVar1;
      iVar3 = (**(code **)(*piVar1 + 0x5c))();
      if (iVar3 < 0) {
        piStack_38 = (int *)&DAT_00963cc8;
        piStack_3c = piVar1;
        FUN_00878e09(iVar3);
      }
    }
    piStack_38 = *(int **)(unaff_EBP + 0x10);
    *(int ***)(unaff_EBP + 0x28) = &piStack_38;
    piStack_3c = (int *)0x42e9b3;
    FUN_004125f3();
    *(int ***)(unaff_EBP + 0x28) = &piStack_3c;
    FUN_0041160e(unaff_EBP + -0x10);
    FUN_0042ea7d();
    piStack_38 = (int *)0x42e9d1;
    FUN_004125e6();
    piStack_38 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_3c = (int *)0x42e9de;
    piStack_38 = (int *)FUN_00402bc3();
    if ((int)piStack_38 < 0) {
      piStack_3c = (int *)0x42e9e9;
      FUN_00878dfb();
    }
    piVar4 = (int *)((int)piVar4 + 1);
  } while( true );
}


