/* ptr_0046d91b - 0x0046d91b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046d91b(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar9;
  undefined4 unaff_EDI;
  bool bVar10;
  undefined4 uStack_e4;
  int *piStack_ac;
  undefined4 uStack_8;
  
  uStack_8 = 0x46d923;
  FUN_00679e4e();
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_8;
  FUN_004059fd();
  *(undefined4 *)(unaff_EBP + -4) = unaff_EDI;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 0x3d;
  uStack_8 = 0x46d979;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar3;
  iVar4 = FUN_0041a581();
  if ((iVar4 < (int)unaff_EBX) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    FUN_00402fa6();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    FUN_00402fa6();
  }
  uStack_8 = 0x46da5d;
  puVar5 = (undefined4 *)FUN_00679d86();
  uStack_8 = *puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if ((*(int **)(unaff_EBP + -0x1c) == unaff_EBX) &&
     (FUN_00878dfb(), *(int **)(unaff_EBP + -0x1c) == unaff_EBX)) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + 0x20) = piVar6;
  uVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 0x24) = uVar3;
  FUN_0040e48b();
  uStack_8 = *(undefined4 *)(unaff_EBP + -0x54);
  iVar4 = (**(code **)(*piVar6 + 0x2c))();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00403191();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (piVar6 == unaff_EBX) {
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + 0x20) = piVar6;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)(unaff_EBP + 8);
  if ((iVar4 == 1) || (iVar4 == 2)) {
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EBP + 0x28) == unaff_EBX) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      piStack_ac = (int *)0xffffffff;
      FUN_00449713();
      FUN_00456ad5();
      *(int ***)(unaff_EBP + 0x18) = &piStack_ac;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      piStack_ac = (int *)0x46de2f;
      piVar6 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + 0x24) = piVar6;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      if (((piVar6 != unaff_EBX) && (iVar4 = FUN_0041a581(), iVar4 < (int)unaff_EBX)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar6;
      piStack_ac = *(int **)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + 0x28) = piVar6;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      uStack_e4 = 0xffffffff;
      uVar3 = FUN_00449713(&stack0xffffff28);
      uVar3 = FUN_00456ad5(uVar3);
      *(undefined4 **)(unaff_EBP + 0x18) = &uStack_e4;
      FUN_004033a1(uVar3);
      iVar4 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      uStack_e4 = 0x46df67;
      piVar6 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + 0x24) = piVar6;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      if (((piVar6 != unaff_EBX) && (iVar4 = FUN_0041a581(), iVar4 < (int)unaff_EBX)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar6;
      uStack_e4 = *(undefined4 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + 0x28) = piVar6;
      iVar4 = (**(code **)(iVar4 + 0x80))
                        (piVar6,*(int *)(unaff_EBP + -0x44) + 0x5a,
                         *(int *)(unaff_EBP + -0x40) + 0x2a,*(undefined4 *)(unaff_EBP + 0x18),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
    else {
      FUN_004031b7();
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar6;
      *(int **)(unaff_EBP + 0x20) = piVar6;
      piStack_ac = (int *)0x46dd94;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
  }
  else {
    if ((iVar4 != 4) && (iVar4 != 5)) goto LAB_0046e022;
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
  }
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
LAB_0046e022:
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  FUN_004031b7();
  bVar10 = DAT_0097c1ac == unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (bVar10) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  piVar6 = *(int **)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (piVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + 0x20) = piVar6;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
  if (*(int **)(*(int *)(unaff_EBP + -0x18) + 4) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar4 = (**(code **)(*(int *)*puVar5 + 0xe0))();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  FUN_00403191();
  piVar6 = (int *)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (piVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 5) {
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff90;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piVar6 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x74) = piVar6;
    *(int **)(unaff_EBP + -0x38) = unaff_EBX;
    if (((piVar6 != unaff_EBX) && (iVar4 = FUN_0041a581(), iVar4 < (int)unaff_EBX)) &&
       (iVar4 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff90;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piVar6 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x7c) = piVar6;
    *(int **)(unaff_EBP + 0x28) = unaff_EBX;
    if (((piVar6 != unaff_EBX) && (iVar4 = FUN_0041a581(), iVar4 < (int)unaff_EBX)) &&
       (iVar4 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    FUN_004031b7();
    bVar10 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    if (bVar10) {
      FUN_00878dfb();
    }
    puVar5 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x10)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar6 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    if (*(int **)(*(int *)(unaff_EBP + -0x18) + 0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar4 = (**(code **)(*(int *)*puVar5 + 0xe0))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 100;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    FUN_00403191();
    piVar6 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004250ac();
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    FUN_004031b7();
    bVar10 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x69;
    if (bVar10) {
      FUN_00878dfb();
    }
    puVar5 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x14)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar6 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    *(undefined4 **)(unaff_EBP + 0x18) = puVar5;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar4 = (**(code **)(*(int *)*puVar5 + 0xe0))();
    if (iVar4 < (int)unaff_EBX) {
      piStack_ac = (int *)0x46e6f1;
      FUN_00878e09();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    iVar4 = FUN_00402e32();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    FUN_00403191();
    piVar6 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    piStack_ac = (int *)(unaff_EBP + -0x2c);
    FUN_004250ac();
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    uVar9 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & *(int *)(unaff_EBP + 0x14) - 0xcU;
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(uVar9 + 300);
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    piVar6 = (int *)*puVar5;
    *(undefined4 **)(unaff_EBP + 0x20) = puVar5;
    if (piVar6 == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar4 = *(int *)**(undefined4 **)(unaff_EBP + 0x20);
    *(int **)(unaff_EBP + 0x20) = (int *)**(undefined4 **)(unaff_EBP + 0x20);
    iVar4 = (**(code **)(iVar4 + 0xb4))();
    if (iVar4 < (int)unaff_EBX) {
      piStack_ac = *(int **)(unaff_EBP + 0x20);
      FUN_00878e09();
    }
    puVar5 = *(undefined4 **)(unaff_EBP + 0x18);
    piVar6 = (int *)*puVar5;
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(uVar9 + 300);
    if (piVar6 == unaff_EBX) {
      piStack_ac = (int *)0x46e8ae;
      FUN_00878dfb();
    }
    piStack_ac = (int *)*puVar5;
    iVar4 = (**(code **)(*piStack_ac + 0xb4))();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      iVar4 = FUN_00402e32();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      FUN_004031b7();
      bVar10 = DAT_0097c1ac == unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      if (bVar10) {
        FUN_00878dfb();
      }
      puVar5 = (undefined4 *)FUN_0042a39f();
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + 0x18);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
      if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
      *(int **)(unaff_EBP + -0x88) = *(int **)(unaff_EBP + 0x14);
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))();
      piVar6 = *(int **)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar4 = *piVar6;
      *(int **)(unaff_EBP + 0x20) = piVar6;
      iVar4 = (**(code **)(iVar4 + 100))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      *(undefined4 **)(unaff_EBP + 0x18) = puVar5;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar4 = (**(code **)(*(int *)*puVar5 + 0xe0))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      if (*(int **)(iVar4 + 0x10) == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar6 = (int *)*puVar5;
      *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar4 + 0x10);
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar6 = (int *)*puVar5;
      FUN_004320e3();
      iVar4 = (**(code **)(*piVar6 + 0xb4))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(int **)(unaff_EBP + 0x24) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x70) == unaff_EBX) {
          FUN_00878dfb();
        }
        uVar9 = FUN_0040cf4d();
        if (uVar9 <= *(uint *)(unaff_EBP + 0x20)) break;
        FUN_0087a1b0();
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff70;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        iVar4 = FUN_0041a485();
        if ((iVar4 < (int)unaff_EBX) && (iVar4 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xb8) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        FUN_004115d9();
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xcc) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xc0) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        iVar4 = FUN_00402e32();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iVar4 = FUN_00402e32();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
        iVar4 = FUN_00402e32();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
        iVar4 = FUN_00402e32();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        FUN_004031b7();
        piVar6 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        if (piVar6 == unaff_EBX) {
          FUN_00878dfb();
        }
        piStack_ac = (int *)0x46ecc2;
        FUN_004250ac();
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iVar4 = FUN_00402e32();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar4 = FUN_00402e32();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar6 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x81;
      if (piVar6 == unaff_EBX) {
        FUN_00878dfb();
      }
      piStack_ac = *(int **)(unaff_EBP + -0x2c);
      piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar4 = *piVar6;
      *(int **)(unaff_EBP + 0x20) = piVar6;
      iVar4 = (**(code **)(iVar4 + 0x110))();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (*(int **)(unaff_EBP + 0x24) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    if (*(int **)(unaff_EBP + 0x28) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
  }
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  *(int **)(unaff_EBP + -0x48) = unaff_EBX;
  FUN_004184ca();
  *(int **)(*(int *)(unaff_EBP + -0x18) + 0x58) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar4 = FUN_00402e32();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff90;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_0044974c();
  uVar3 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0046fcad();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar4 = FUN_00402e32();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_00449749();
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x18) = &stack0xffffff8c;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x44) + 8;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)(*(int **)(unaff_EBP + -0x48))[-1] >> 1;
  }
  if (*(int *)(unaff_EBP + 0x20) < (int)uVar9) {
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    FUN_00402676();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff94;
    FUN_0046fcc9();
    uVar3 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iVar4 = FUN_00402e32();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_00449749();
    FUN_00411641();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff8c;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar7 = FUN_0040e48b();
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  iVar4 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar4 + 0x48) = iVar7 / -2;
  if (piVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar8 = FUN_0040e53d();
  iVar7 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar4 + 0x4c) = -iVar8;
  if (((iVar2 == 4) && ((int)unaff_EBX < *(int *)(unaff_EBP + 0x1c))) ||
     (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar4 + 0x4c) = -iVar8 + 7 + iVar7;
  }
  FUN_0046f8b1();
  *(undefined4 *)(iVar4 + 0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x80) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0xbc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xbc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0xc4) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xc4) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x6c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -200) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -200) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0xb0) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x78) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0xa8) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    FUN_004030b1();
  }
  FUN_004115a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


