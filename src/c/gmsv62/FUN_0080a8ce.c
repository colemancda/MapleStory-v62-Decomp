/* FUN_0080a8ce - 0x0080a8ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080a8ce(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x1c);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),
               (IBinding *)*puVar2);
    FUN_004125d9();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x1c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar2);
  FUN_004125d9();
  puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x1c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar2);
  FUN_004125d9();
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0xc),1);
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + 0x18);
  if ((*(int *)(unaff_EBP + 0x14) == 0) && (iVar4 == 0)) {
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar4 = (**(code **)(*piVar3 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(*(undefined4 *)(unaff_EBP + 0x10),3);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar4 = (**(code **)(*piVar3 + 0xa0))
                      (piVar3,0,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = unaff_EBP + -0x30;
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x14);
    }
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + 0x18) = piVar3;
    iVar4 = (**(code **)(iVar1 + 0x90))
                      (piVar3,-*(int *)(unaff_EBP + 0x14),-iVar4,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + 0x14);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)*puVar2);
    FUN_004125d9();
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x18);
    iVar4 = (**(code **)(*piVar3 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x18),1);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar4 = (**(code **)(*piVar3 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(*(undefined4 *)(unaff_EBP + 0x10),3);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar4 = (**(code **)(*piVar3 + 0xa0))
                      (piVar3,0,*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = unaff_EBP + -0x40;
  }
  iVar4 = FUN_00402bc3(iVar4);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00433bdf(unaff_EBP + -0x10);
  FUN_004125d9();
  FUN_004125d9();
  FUN_004125d9();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


