/* FUN_0042e5bf - 0x0042e5bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0042e5bf(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  bool bVar7;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int *piStack_78;
  undefined4 *puStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piStack_5c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_60 = (int *)0x42e5e7;
  FUN_00403191();
  piStack_5c = (int *)0x3;
  piStack_60 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_64 = (int *)0x42e5f5;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (bVar7) {
    piStack_5c = (int *)0x80004003;
    piStack_60 = (int *)0x42e60b;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x48);
  piStack_60 = (int *)(unaff_EBP + -0x38);
  piStack_64 = (int *)0x0;
  piStack_68 = (int *)0x0;
  piStack_6c = (int *)0x0;
  piStack_70 = (int *)0x0;
  puStack_74 = (undefined4 *)0x0;
  piStack_78 = (int *)(unaff_EBP + -0x10);
  iStack_7c = 0x42e627;
  FUN_0042a39f();
  piStack_5c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_60 = (int *)0x42e634;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    piStack_60 = (int *)0x42e63f;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_60 = (int *)0x42e64c;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    piStack_60 = (int *)0x42e657;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x42e660;
  cVar3 = FUN_004115ad();
  if (cVar3 == '\0') {
    piStack_5c = (int *)0x1;
    piStack_60 = *(int **)(unaff_EBP + 0x14);
    piStack_64 = (int *)0x42e671;
    FUN_0040ee87();
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar6 == (int *)0x0) {
      piStack_5c = (int *)0x80004003;
      piStack_60 = (int *)0x42e686;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar6;
    piStack_68 = *(int **)(unaff_EBP + -0x28);
    piStack_64 = *(int **)(unaff_EBP + -0x24);
    piStack_60 = *(int **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x14) = piVar6;
    piStack_5c = *(int **)(unaff_EBP + -0x1c);
    piStack_70 = (int *)0x42e69e;
    piStack_6c = piVar6;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      piStack_5c = (int *)&DAT_00963de8;
      piStack_60 = *(int **)(unaff_EBP + -0x14);
      piStack_68 = (int *)0x42e6b0;
      piStack_64 = (int *)iVar4;
      FUN_00878e09();
    }
    piStack_5c = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_60 = (int *)0x42e6bd;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      piStack_60 = (int *)0x42e6c8;
      FUN_00878dfb();
    }
  }
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x42e6d1;
  cVar3 = FUN_00433bfa();
  piStack_60 = extraout_ECX;
  if (cVar3 == '\0') {
    piStack_5c = (int *)0x1;
    piStack_60 = *(int **)(unaff_EBP + 0x20);
    piStack_64 = (int *)0x42e6e2;
    FUN_0040ee87();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_5c = (int *)0x80004003;
      piStack_60 = (int *)0x42e6f5;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    piStack_68 = *(int **)(unaff_EBP + -0x28);
    piStack_64 = *(int **)(unaff_EBP + -0x24);
    piStack_60 = *(int **)(unaff_EBP + -0x20);
    piStack_5c = *(int **)(unaff_EBP + -0x1c);
    piStack_70 = (int *)0x42e70d;
    piStack_6c = piVar6;
    iVar4 = (**(code **)(*piVar6 + 0xfc))();
    if (iVar4 < 0) {
      piStack_5c = (int *)&DAT_00963df8;
      piStack_68 = (int *)0x42e71d;
      piStack_64 = (int *)iVar4;
      piStack_60 = piVar6;
      FUN_00878e09();
    }
    piStack_5c = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_60 = (int *)0x42e72a;
    iVar4 = FUN_00402bc3();
    piStack_60 = piStack_5c;
    if (iVar4 < 0) {
      piStack_60 = (int *)0x42e735;
      piStack_5c = (int *)iVar4;
      FUN_00878dfb();
      piStack_60 = extraout_ECX_00;
    }
  }
  piStack_5c = (int *)0x0;
  piStack_68 = (int *)&piStack_60;
  *(int ***)(unaff_EBP + -0x14) = &piStack_60;
  piStack_64 = (int *)0x3d2;
  piStack_6c = (int *)0x42e750;
  FUN_00679e4e();
  piStack_64 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_68 = (int *)0x42e760;
  FUN_0040263d();
  piStack_68 = (int *)0x42e767;
  piStack_60 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_64 = (int *)0x42e771;
  iVar4 = FUN_00412550();
  if ((iVar4 != 0) ||
     (iVar4 = *(int *)(unaff_EBP + 0x10), *(undefined4 *)(unaff_EBP + 0x10) = 1, iVar4 == 0)) {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_5c = (int *)0x80004003;
    piStack_60 = (int *)0x42e795;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  piStack_5c = *(int **)(unaff_EBP + 0x10);
  piStack_64 = (int *)0x42e7a4;
  piStack_60 = piVar6;
  iVar4 = (**(code **)(*piVar6 + 0xd8))();
  if (iVar4 < 0) {
    piStack_64 = (int *)&DAT_00963df8;
    piStack_70 = (int *)0x42e7b5;
    piStack_6c = (int *)iVar4;
    piStack_68 = piVar6;
    FUN_00878e09();
  }
  piStack_64 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_68 = (int *)0x42e7c2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_68 = (int *)0x42e7cd;
    piStack_64 = (int *)iVar4;
    FUN_00878dfb();
    piStack_64 = extraout_ECX_01;
  }
  piStack_70 = (int *)&piStack_68;
  *(int ***)(unaff_EBP + 0x10) = &piStack_68;
  piStack_6c = (int *)0x3cc;
  puStack_74 = (undefined4 *)0x42e7e3;
  piStack_68 = piStack_64;
  piStack_64 = (int *)*(undefined4 *)(unaff_EBP + 0x24);
  FUN_00679e4e();
  piStack_6c = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_70 = (int *)0x42e7f3;
  FUN_0040263d();
  piStack_70 = (int *)0x42e7fa;
  piStack_68 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_6c = (int *)0x42e804;
  uVar5 = FUN_00412550();
  piStack_64 = (int *)0x42e810;
  piVar6 = (int *)FUN_00424e27();
  piStack_6c = (int *)0x42e81c;
  piStack_68 = piVar6;
  piStack_64 = (int *)uVar5;
  iVar4 = (**(code **)(*piVar6 + 0xb4))();
  if (iVar4 < 0) {
    piStack_6c = (int *)&DAT_00963df8;
    piStack_78 = (int *)0x42e828;
    puStack_74 = (undefined4 *)iVar4;
    piStack_70 = piVar6;
    FUN_00878e09();
  }
  piStack_6c = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_70 = (int *)0x42e835;
  piStack_6c = (int *)FUN_00402bc3();
  if ((int)piStack_6c < 0) {
    piStack_70 = (int *)0x42e840;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_6c = (int *)0x80004003;
    piStack_70 = (int *)0x42e850;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  piStack_6c = (int *)(*(int *)(unaff_EBP + 0x28) << 0x18 | 0xffffff);
  puStack_74 = (undefined4 *)0x42e869;
  piStack_70 = piVar6;
  iVar4 = (**(code **)(*piVar6 + 0xe0))();
  if (iVar4 < 0) {
    puStack_74 = (undefined4 *)&DAT_00963df8;
    uStack_80 = 0x42e875;
    iStack_7c = iVar4;
    piStack_78 = piVar6;
    FUN_00878e09();
  }
  puStack_74 = &DAT_00980690;
  piStack_78 = (int *)0x42e883;
  FUN_00403191();
  puStack_74 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_78 = (int *)0x42e890;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_74 = (undefined4 *)0x80004003;
    piStack_78 = (int *)0x42e8a4;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_7c = *(undefined4 *)(unaff_EBP + -0x54);
  piStack_78 = *(int **)(unaff_EBP + -0x50);
  puStack_74 = *(undefined4 **)(unaff_EBP + -0x4c);
  uStack_94 = *(undefined4 *)(unaff_EBP + 0x1c);
  uStack_98 = *(undefined4 *)(unaff_EBP + 0x18);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x1c);
  piStack_a0 = (int *)0x42e8ce;
  piStack_9c = piVar6;
  iVar4 = (**(code **)(*piVar6 + 0x90))();
  if (iVar4 < 0) {
    piStack_a0 = (int *)&DAT_00963de8;
    piStack_a4 = piVar6;
    FUN_00878e09(iVar4);
  }
  piStack_a0 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_a4 = (int *)0x42e8eb;
  piStack_a0 = (int *)FUN_00402bc3();
  if ((int)piStack_a0 < 0) {
    piStack_a4 = (int *)0x42e8f6;
    FUN_00878dfb();
  }
  piStack_a0 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_a4 = (int *)0x42e903;
  piStack_a0 = (int *)FUN_00402bc3();
  if ((int)piStack_a0 < 0) {
    piStack_a4 = (int *)0x42e90e;
    FUN_00878dfb();
  }
  piVar6 = (int *)0x0;
  do {
    piStack_a0 = (int *)0x42e918;
    FUN_0087a1b0();
    piStack_a4 = piVar6;
    piStack_a0 = (int *)&piStack_9c;
    piStack_a4 = (int *)FUN_00412335();
    *(int ***)(unaff_EBP + 0x28) = &piStack_a0;
    FUN_00402e8e();
    piStack_a4 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x28) == 0) {
LAB_0042e9f7:
      piStack_a0 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_a4 = (int *)0x42ea04;
      piStack_a0 = (int *)FUN_00402bc3();
      if ((int)piStack_a0 < 0) {
        piStack_a4 = (int *)0x42ea0f;
        FUN_00878dfb();
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = *(undefined4 *)(unaff_EBP + -0x10);
      piStack_a0 = (int *)0x42ea1e;
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      piStack_a0 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piStack_a0 != (int *)0x0) {
        piStack_a4 = (int *)0x42ea36;
        (**(code **)(*piStack_a0 + 8))();
      }
      piStack_a0 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_a0 != (int *)0x0) {
        piStack_a4 = (int *)0x42ea47;
        (**(code **)(*piStack_a0 + 8))();
      }
      piStack_a0 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_a0 != (int *)0x0) {
        piStack_a4 = (int *)0x42ea58;
        (**(code **)(*piStack_a0 + 8))();
      }
      piStack_a0 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_a0 != (int *)0x0) {
        piStack_a4 = (int *)0x42ea69;
        (**(code **)(*piStack_a0 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar2;
    }
    piStack_a0 = (int *)(unaff_EBP + -0x28);
    piStack_a4 = (int *)(unaff_EBP + 0x24);
    piStack_a0 = (int *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_a4 = (int *)0x42e971;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_a0 = (int *)0x42e97d;
    FUN_004027b3();
    piVar1 = *(int **)(unaff_EBP + 0x10);
    if (piVar1 == (int *)0x0) {
      piStack_a0 = (int *)0x42e9f7;
      FUN_004125e6();
      goto LAB_0042e9f7;
    }
    if (0 < *(int *)(unaff_EBP + 0x2c)) {
      piStack_a0 = *(int **)(unaff_EBP + 0x2c);
      piStack_a4 = piVar1;
      iVar4 = (**(code **)(*piVar1 + 0x5c))();
      if (iVar4 < 0) {
        piStack_a0 = (int *)&DAT_00963cc8;
        piStack_a4 = piVar1;
        FUN_00878e09(iVar4);
      }
    }
    piStack_a0 = *(int **)(unaff_EBP + 0x10);
    *(int ***)(unaff_EBP + 0x28) = &piStack_a0;
    piStack_a4 = (int *)0x42e9b3;
    FUN_004125f3();
    *(int ***)(unaff_EBP + 0x28) = &piStack_a4;
    FUN_0041160e(unaff_EBP + -0x10);
    FUN_0042ea7d();
    piStack_a0 = (int *)0x42e9d1;
    FUN_004125e6();
    piStack_a0 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_a4 = (int *)0x42e9de;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      piStack_a4 = (int *)0x42e9e9;
      FUN_00878dfb();
    }
    piVar6 = (int *)((int)piVar6 + 1);
  } while( true );
}


