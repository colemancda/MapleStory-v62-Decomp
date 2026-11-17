/* FUN_0080a35a - 0x0080a35a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0080a35a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  undefined8 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(unaff_EBP + 0x10) == 0) && (*(int *)(unaff_EBP + 0x14) == 0)) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_00434bee();
    FUN_004125d9();
  }
  else {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      puVar1 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x20);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),
                 (IBinding *)*puVar1);
      FUN_004125d9();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puVar1 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x20);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)*puVar1);
    FUN_004125d9();
    puVar1 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x20);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar1);
    FUN_004125d9();
    puVar1 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x20);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
               (IBinding *)*puVar1);
    FUN_004125d9();
    puVar1 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x20);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               (IBinding *)*puVar1);
    FUN_004125d9();
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0xc),1);
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar2 = (**(code **)(iVar2 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x18),1);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar2 = (**(code **)(iVar2 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x1c),1);
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x14);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar2 = (**(code **)(iVar2 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00403191(&DAT_00980690);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + 0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (piVar3,0,*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar3 + 0x90))
                        (piVar3,0,*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar3 + 0x98))
                        (piVar3,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0x14)
                         ,1,0,1);
    }
    else {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00403191(&DAT_00980690);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x20) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (piVar3,*(undefined4 *)(unaff_EBP + 0x10),0,
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar3 + 0x90))
                        (piVar3,*(undefined4 *)(unaff_EBP + 0x10),0,
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar3 + 0x98))
                        (piVar3,*(undefined4 *)(unaff_EBP + -0x14),1,
                         *(undefined4 *)(unaff_EBP + 0x10),1,*(undefined4 *)(unaff_EBP + 0x14));
    }
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
    }
    FUN_004031b7();
    iVar2 = unaff_EBP + -0x40;
    uVar4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00424df4(0,iVar2);
    FUN_0042bc52(uVar4,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00433bdf(unaff_EBP + -0x10);
    FUN_004125d9();
    FUN_004125d9();
    FUN_004125d9();
    FUN_004125d9();
    FUN_004125d9();
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


