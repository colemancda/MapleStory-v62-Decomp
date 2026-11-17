/* FUN_00766048 - 0x00766048 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00766048(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  IBinding *pIVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined ***)(unaff_EBP + -0x70) = &PTR_FUN_008e8648;
  uVar8 = *(undefined4 *)(extraout_ECX + 0x668 + *(int *)(unaff_EBP + 8) * 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0040c030(*(undefined4 *)(extraout_ECX + 0x640 + *(int *)(unaff_EBP + 8) * 4),1,uVar8,
               unaff_EBP + -0x70);
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004031b7(0,3);
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar9) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x10,0,0,0,0,0,unaff_EBP + -0x5c,unaff_EBP + -0x2c);
  pIVar1 = (IBinding *)*puVar5;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
         (extraout_ECX + 0x6a0 + *(int *)(unaff_EBP + 8) * 4);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = this;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar5,1);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar6 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar6 = (**(code **)(iVar6 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191(&DAT_00980690);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar6 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar6 = (**(code **)(iVar6 + 0x90))
                    (piVar2,0x35,299,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  if ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x618) == 1) &&
     (*(int *)(unaff_EBP + 8) == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x63c))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0xffffff;
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (*piVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar2;
  iVar6 = (**(code **)(*piVar3 + 0xe0))(piVar3,*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
  FUN_0040ee87(*puVar5,1);
  iVar6 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar6 = (**(code **)(iVar6 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (*piVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar2;
  iVar6 = (**(code **)(*piVar3 + 0xb4))(piVar3,1);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
  }
  if (*piVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar2;
  iVar6 = (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
  }
  iVar6 = *(int *)(unaff_EBP + -100);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar6 != 0) {
    while( true ) {
      iVar11 = *(int *)(iVar6 + 4);
      iVar6 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00403191(&DAT_00980690);
      uVar8 = *(undefined4 *)(iVar11 + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004031b7(uVar8,3);
      iVar6 = *piVar2;
      uVar8 = *(undefined4 *)(iVar11 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x90,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x2c,
                   unaff_EBP + -0x5c,unaff_EBP + -0x80,unaff_EBP + -0x3c,unaff_EBP + -0x4c);
      iVar6 = FUN_00402bc3(unaff_EBP + -0x90);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x80);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      if (*(int *)(iVar11 + 0xc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar7 = FUN_0040e53d();
      if (*(uint *)(unaff_EBP + -0x10) < uVar7) {
        if (*(int *)(iVar11 + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
        uVar8 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      iVar6 = *(int *)(unaff_EBP + -0x18);
    }
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00403191(&DAT_00980690);
  iVar6 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar6 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar6 = (**(code **)(iVar6 + 0x110))
                    (piVar2,0x20,*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00424aee(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    iVar6 = unaff_EBP + -0x3c;
    iVar11 = unaff_EBP + -0x4c;
    uVar10 = 0xd1;
    uVar8 = 0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00424e27(0x2c,0xd1,iVar11,iVar6);
    FUN_00424f2f(uVar8,uVar10,iVar11,iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    if ((*(int *)(iVar4 + 0x618) == 1) && (*(int *)(iVar4 + 0x63c) == 0)) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = 0xffffff;
    }
    FUN_00424e27(uVar8);
    FUN_00444e05(uVar8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x70) = &PTR_FUN_008e8648;
  FUN_0041398d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


