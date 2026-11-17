/* ptr_0046de77 - 0x0046de77 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046de77(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_44;
  
  iVar3 = *in_EAX;
  *(int **)(unaff_EBP + 0x28) = in_EAX;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  uStack_44 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 0x18) = &uStack_44;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  uStack_44 = 0x46df67;
  piVar4 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + 0x24) = piVar4;
  *(int **)(unaff_EBP + 0x20) = unaff_EBX;
  if (((piVar4 != unaff_EBX) && (iVar3 = FUN_0041a581(), iVar3 < (int)unaff_EBX)) &&
     (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar4;
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + 0x28) = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
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
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  piVar4 = *(int **)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + 0x20) = piVar4;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
  if (*(int **)(*(int *)(unaff_EBP + -0x18) + 4) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*puVar5 + 0xe0))();
  if (iVar3 < (int)unaff_EBX) {
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
  piVar4 = (int *)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 5) {
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff80;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x74) = piVar4;
    *(int **)(unaff_EBP + -0x38) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar3 = FUN_0041a581(), iVar3 < (int)unaff_EBX)) &&
       (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff80;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x7c) = piVar4;
    *(int **)(unaff_EBP + 0x28) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar3 = FUN_0041a581(), iVar3 < (int)unaff_EBX)) &&
       (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
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
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar4 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar3 = (**(code **)(iVar3 + 100))();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    if (*(int **)(*(int *)(unaff_EBP + -0x18) + 0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar3 = (**(code **)(*(int *)*puVar5 + 0xe0))();
    if (iVar3 < (int)unaff_EBX) {
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
    piVar4 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004250ac(unaff_EBP + -0x120,*(undefined4 *)(unaff_EBP + -0x38));
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
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
    puVar5 = (undefined4 *)FUN_0042a39f(unaff_EBP + 0x20,unaff_EBX,unaff_EBX);
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x14)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar4 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar3 = (**(code **)(iVar3 + 100))();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x68);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    *(undefined4 **)(unaff_EBP + 0x18) = puVar5;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*puVar5;
    iVar3 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    iVar3 = FUN_00402e32(unaff_EBP + -0x90,&DAT_00980690);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    FUN_00403191(&DAT_00980690);
    piVar4 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x120,*(undefined4 *)(unaff_EBP + 0x28),unaff_EBP + -0x68,
                 unaff_EBP + -0x2c,unaff_EBP + -0x58,unaff_EBP + -0xe0,unaff_EBP + -0x90);
    iVar3 = FUN_00402bc3(unaff_EBP + -0x120);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x68);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    iVar3 = FUN_00402bc3(unaff_EBP + -0xe0);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x90);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb(iVar3);
    }
    uVar9 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & *(int *)(unaff_EBP + 0x14) - 0xcU;
    iVar3 = *(int *)(uVar9 + 0x128);
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(uVar9 + 300);
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    piVar4 = (int *)*puVar5;
    *(undefined4 **)(unaff_EBP + 0x20) = puVar5;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)**(undefined4 **)(unaff_EBP + 0x20);
    iVar7 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar3 = (**(code **)(iVar7 + 0xb4))
                      (piVar4,(iVar3 * 3000 - *(int *)(unaff_EBP + 0x24)) * 10 + -0x3fff8ad4);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x20),&DAT_00963df8);
    }
    puVar5 = *(undefined4 **)(unaff_EBP + 0x18);
    piVar4 = (int *)*puVar5;
    iVar3 = *(int *)(uVar9 + 0x128);
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(uVar9 + 300);
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*puVar5;
    iVar3 = (**(code **)(*piVar4 + 0xb4))
                      (piVar4,((iVar3 * 3000 - *(int *)(unaff_EBP + 0x20)) + -0x6665aaf) * 10);
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      iVar3 = FUN_00402e32();
      if (iVar3 < (int)unaff_EBX) {
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
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
      *(int **)(unaff_EBP + -0x88) = *(int **)(unaff_EBP + 0x14);
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))();
      piVar4 = *(int **)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar3 = *piVar4;
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar3 = (**(code **)(iVar3 + 100))();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      *(undefined4 **)(unaff_EBP + 0x18) = puVar5;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar3 = (**(code **)(*(int *)*puVar5 + 0xe0))();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      iVar3 = *(int *)(unaff_EBP + -0x18);
      if (*(int **)(iVar3 + 0x10) == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)*puVar5;
      *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar3 + 0x10);
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)*puVar5;
      FUN_004320e3();
      iVar3 = (**(code **)(*piVar4 + 0xb4))();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878e09(iVar3);
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
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff60;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        iVar3 = FUN_0041a485();
        if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xb8) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff5c;
        FUN_00679e4e(&stack0xffffff5c,0x474);
        iVar3 = unaff_EBP + -0xc0;
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        FUN_004115d9(iVar3);
        FUN_00404e7f(iVar3);
        iVar3 = unaff_EBP + -0x120;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        FUN_0040263d(iVar3);
        FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        uVar6 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xcc) = uVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x120);
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xc0) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        iVar3 = FUN_00402e32();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iVar3 = FUN_00402e32();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
        iVar3 = FUN_00402e32();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
        iVar3 = FUN_00402e32();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        FUN_004031b7();
        piVar4 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        if (piVar4 == unaff_EBX) {
          FUN_00878dfb();
        }
        FUN_004250ac(unaff_EBP + -0x134,*(undefined4 *)(unaff_EBP + 0x24),unaff_EBP + -0x68,
                     unaff_EBP + -0x90,unaff_EBP + -0xe0);
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iVar3 = FUN_00402e32();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar3 = FUN_00402e32();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x81;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar3 = *piVar4;
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar3 = (**(code **)(iVar3 + 0x110))
                        (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54));
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
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
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff80;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_0044974c();
  uVar6 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0046fcad();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_00449749();
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x18) = &stack0xffffff7c;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x44) + 8;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
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
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff84;
    FUN_0046fcc9();
    uVar6 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_00449749();
    FUN_00411641();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff7c;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar7 = FUN_0040e48b();
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar3 + 0x48) = iVar7 / -2;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar8 = FUN_0040e53d();
  iVar7 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar3 + 0x4c) = -iVar8;
  if (((iVar2 == 4) && ((int)unaff_EBX < *(int *)(unaff_EBP + 0x1c))) ||
     (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar3 + 0x4c) = -iVar8 + 7 + iVar7;
  }
  FUN_0046f8b1();
  *(undefined4 *)(iVar3 + 0x54) = 1;
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


