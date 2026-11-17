/* ptr_00429cbf - 0x00429cbf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00429cbf(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_EDI;
  bool bVar4;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  
  while( true ) {
    FUN_0040e53d();
    FUN_0040eea9();
    iVar2 = (**(code **)(*unaff_EDI + 0x80))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
    }
    if (iVar2 <= *(int *)(unaff_EBP + 0x10)) break;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_0087a1b0();
      FUN_004342bb();
      FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffff4;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x90) = uVar1;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x18) != 0) {
        *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffff4;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x8c) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        if (iVar2 != 0) {
          iVar2 = FUN_0041a581();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x80))();
        if (iVar2 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004125e6();
      }
    }
    else {
      FUN_0087a1b0();
      FUN_004342bb();
      FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffff4;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x88) = uVar1;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
    }
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb();
    }
    unaff_EDI = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x2c) = unaff_EDI;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x10);
    _rand();
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x24) / 2;
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0xc) + -0x2f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_004031b7();
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (bVar4) {
    FUN_00878dfb();
  }
  FUN_0042a39f();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 0x14);
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 0x14);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0xb4))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  piVar3 = *(int **)(unaff_EBP + 0x14);
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 0x14);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0xe0))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 0x14);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_0042a378();
  FUN_004031b7();
  piVar3 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 0x14);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    iStack_70 = *(undefined4 *)(unaff_EBP + 8);
    uStack_78 = 0x42a1fd;
    iStack_74 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_70 = 0x42a20a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_70 = 0x42a215;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_70 = 0x42a222;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_70 = 0x42a22d;
    FUN_00878dfb();
  }
  iStack_70 = 0x42a237;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_70 = unaff_EBP + -0x40;
  iStack_74 = 0x42a241;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_70 = 0x42a24d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_70 = 0x42a25a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    iStack_70 = 0x42a26e;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 0x14);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_70 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_8c = 0;
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_94 = (int *)0x42a294;
  piStack_90 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x110))();
  if (iVar2 < 0) {
    piStack_94 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar2,piVar3);
  }
  piStack_94 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_94 = (int *)FUN_00402bc3();
  if ((int)piStack_94 < 0) {
    FUN_00878dfb();
  }
  piStack_94 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_94 = (int *)FUN_00402bc3();
  if ((int)piStack_94 < 0) {
    FUN_00878dfb();
  }
  piStack_94 = *(int **)(unaff_EBP + 0x14);
  piVar3 = *(int **)(unaff_EBP + 0x14);
  *(int ***)(unaff_EBP + 0x18) = &piStack_94;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_00427af9();
  piStack_94 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  piStack_94 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    piStack_94 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    FUN_00434e38();
  }
  piStack_94 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  piStack_94 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  piStack_94 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


