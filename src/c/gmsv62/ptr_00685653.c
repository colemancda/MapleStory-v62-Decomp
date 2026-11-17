/* ptr_00685653 - 0x00685653 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00685653(undefined4 param_1)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  undefined4 in_EAX;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_EBX;
  int unaff_EBP;
  bool bVar7;
  
  *(BADSPACEBASE **)(unaff_EBP + 0xc) = register0x00000010;
  FUN_004033a1(in_EAX);
  iVar3 = unaff_EBP + -0x1c0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x7c) = uVar2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e53d();
    iVar3 = (0x20 - iVar3) / 2;
    *(int **)(unaff_EBP + 0xc) = unaff_EBX;
    if (-1 < iVar3) {
      *(int *)(unaff_EBP + 0xc) = iVar3;
    }
    if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e48b();
    iVar3 = (0x20 - iVar3) / 2;
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    if (-1 < iVar3) {
      *(int *)(unaff_EBP + -0x18) = iVar3;
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar4;
    param_1 = *(undefined4 *)(unaff_EBP + -0x150);
    *(int **)(unaff_EBP + -0x10) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0xc));
    if (iVar3 < (int)unaff_EBX) {
      param_1 = 0x6857b0;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)FUN_0042a39f(unaff_EBP + 0xc,unaff_EBX,unaff_EBX);
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00429328();
  FUN_0040ee87();
  piVar4 = *(int **)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  param_1 = *(undefined4 *)(unaff_EBP + -0x44);
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x28);
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + 0xc) = piVar4;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar4 != unaff_EBX) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x28);
  if (*(int **)(*(int *)(unaff_EBP + -0x20) + 0x28) == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*puVar5;
  iVar3 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xd2ffffff);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar3 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  iVar3 = FUN_00402e32(unaff_EBP + -0x90,&DAT_00980690);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  FUN_004031b7(0x40,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_004031b7(0xd2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_004031b7(500,3);
  piVar4 = (int *)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x44,
               unaff_EBP + -0x68,unaff_EBP + -0xa0,unaff_EBP + -0x90,unaff_EBP + -0x54);
  iVar3 = FUN_00402bc3(unaff_EBP + -0xb0);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iVar3 = FUN_00402bc3(unaff_EBP + -0xa0);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x90);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar3 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_004031b7(unaff_EBX,3);
  bVar7 = DAT_0097c1ac == unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0xc,unaff_EBX,unaff_EBX,unaff_EBX,unaff_EBX,0xc006156c,
                        unaff_EBP + -0x44,unaff_EBP + -0x54);
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x2c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  piVar4 = *(int **)(unaff_EBP + 0xc);
  if (piVar4 != unaff_EBX) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  if (DAT_0097c1ac == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)FUN_00429328(unaff_EBP + 8);
  piVar4 = (int *)*puVar5;
  *(undefined2 *)(unaff_EBP + -0x54) = 0xd;
  *(int **)(unaff_EBP + -0x4c) = piVar4;
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  (**(code **)(iVar3 + 4))(piVar4);
  piVar4 = *(int **)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x2c);
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + 0xc) = piVar4;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar4 != unaff_EBX) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar3 = *(int *)(unaff_EBP + -0x20);
  if (*(int **)(iVar3 + 0x2c) == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(iVar3 + 0x2c);
  iVar6 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xd2ffffff);
  if (iVar6 < (int)unaff_EBX) {
    FUN_00878e09(iVar6,piVar4,&DAT_00963df8);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(iVar3 + 0x3c) = *(int *)(unaff_EBP + -0x30) / 0x10;
  FUN_0068666f(uVar2);
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar4 != unaff_EBX) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


