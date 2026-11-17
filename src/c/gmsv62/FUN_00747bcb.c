/* FUN_00747bcb - 0x00747bcb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00747bcb(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_110;
  int iStack_10c;
  undefined1 *puStack_108;
  int iStack_104;
  undefined4 *puStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  if ((iVar3 < 0) || (3 < iVar3)) goto LAB_00748154;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iStack_f4 = 0x747c09;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc44 + iVar3 * 4)
               ,(IBinding *)0x0);
    goto LAB_00748154;
  }
  *(int *)(unaff_EBP + -0x28) = extraout_ECX + 0xc44 + iVar3 * 4;
  iStack_f4 = 0x747c1e;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') goto LAB_00748154;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iStack_f4 = 0x747f00;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_f4 = 0x747f10;
    FUN_00403191();
    iStack_f4 = 0;
    iStack_f8 = unaff_EBP + -0x7c;
    iStack_fc = unaff_EBP + -0x8c;
    puStack_108 = (undefined1 *)&puStack_100;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_100;
    iStack_104 = 0x7ae;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_10c = 0x747f37;
    puStack_100 = extraout_ECX_03;
    FUN_00679e4e();
    iStack_104 = unaff_EBP + -0xec;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_108 = (undefined1 *)0x747f47;
    FUN_00405a1d();
    puStack_108 = (undefined1 *)0x747f4e;
    FUN_00402660();
    puStack_108 = (undefined1 *)0x747f55;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_f8 = 0x747f60;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    iStack_f4 = 0x747f6f;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_f4 = 0x747f80;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_f4 = 0x747f90;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_f4 = 0x747f9b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_f4 = 0x747fab;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_f4 = 0x747fb6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00747fbc:
    iStack_f4 = 0x747fc2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_f4 = 0x747fcd;
      FUN_00878dfb();
    }
  }
  else {
    if (iVar3 == 1) {
      iStack_f4 = 0x747e30;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_f4 = 0x747e40;
      FUN_00403191();
      iStack_f4 = 0;
      iStack_f8 = unaff_EBP + -0x9c;
      iStack_fc = unaff_EBP + -0xac;
      puStack_108 = (undefined1 *)&puStack_100;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_100;
      iStack_104 = 0x7af;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_10c = 0x747e6a;
      puStack_100 = extraout_ECX_02;
      FUN_00679e4e();
      iStack_104 = unaff_EBP + -0xcc;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_108 = (undefined1 *)0x747e7a;
      FUN_00405a1d();
      puStack_108 = (undefined1 *)0x747e81;
      FUN_00402660();
      puStack_108 = (undefined1 *)0x747e88;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_f8 = 0x747e93;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      iStack_f4 = 0x747ea2;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_f4 = 0x747eb3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_f4 = 0x747ec3;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747ece;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_f4 = 0x747ede;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747ee9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00747fbc;
    }
    if (iVar3 == 2) {
      iStack_f4 = 0x747d43;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iStack_f4 = unaff_EBP + -0x3c;
      iStack_f8 = 0x747d4d;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_f4 = 0x747d59;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_f4 = 0x747d63;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_f4 = unaff_EBP + -0x4c;
      puStack_100 = &DAT_00980690;
      iStack_f8 = 0x747d6d;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_f4 = 0x747d79;
        FUN_00878dfb();
        puStack_100 = extraout_ECX_01;
      }
      iStack_f4 = 0;
      iStack_f8 = unaff_EBP + -0x3c;
      iStack_fc = unaff_EBP + -0x4c;
      puStack_108 = (undefined1 *)&puStack_100;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_100;
      iStack_104 = 0x7b0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_10c = 0x747d9d;
      FUN_00679e4e();
      iStack_104 = unaff_EBP + -0xdc;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_108 = (undefined1 *)0x747dad;
      FUN_00405a1d();
      puStack_108 = (undefined1 *)0x747db4;
      FUN_00402660();
      puStack_108 = (undefined1 *)0x747dbb;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_f8 = 0x747dc6;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      iStack_f4 = 0x747dd5;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_f4 = 0x747de6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_f4 = 0x747df6;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747e01;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_f4 = 0x747e0e;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747e19;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00747fbc;
    }
    if (iVar3 == 3) {
      iStack_f4 = 0x747c5c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      iStack_f4 = unaff_EBP + -0x5c;
      iStack_f8 = 0x747c66;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_f4 = 0x747c72;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_f4 = 0x747c7c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
      iStack_f4 = unaff_EBP + -0x6c;
      puStack_100 = &DAT_00980690;
      iStack_f8 = 0x747c86;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_f4 = 0x747c92;
        FUN_00878dfb();
        puStack_100 = extraout_ECX_00;
      }
      iStack_f4 = 0;
      iStack_f8 = unaff_EBP + -0x5c;
      iStack_fc = unaff_EBP + -0x6c;
      puStack_108 = (undefined1 *)&puStack_100;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_100;
      iStack_104 = 0x7b1;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_10c = 0x747cb6;
      FUN_00679e4e();
      iStack_104 = unaff_EBP + -0xbc;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_108 = (undefined1 *)0x747cc6;
      FUN_00405a1d();
      puStack_108 = (undefined1 *)0x747ccd;
      FUN_00402660();
      puStack_108 = (undefined1 *)0x747cd4;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_f8 = 0x747cdf;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
      iStack_f4 = 0x747cee;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_f4 = 0x747cff;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_f4 = 0x747d0f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747d1a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_f4 = 0x747d27;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_f4 = 0x747d32;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00747fbc;
    }
  }
  iStack_f4 = 0x747fd9;
  puVar5 = (undefined4 *)FUN_004489f5();
  uVar4 = *puVar5;
  iStack_f4 = 0xff;
  iStack_f8 = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_fc;
  puStack_100 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iStack_104 = 0x747ff5;
  FUN_00424e0a();
  puStack_100 = (undefined4 *)0x203;
  iStack_104 = *(int *)(unaff_EBP + 8) * 0x1e + 0x26a;
  iStack_10c = unaff_EBP + -0x14;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_108;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_110 = 0x748019;
  FUN_00523572();
  iStack_10c = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_110;
  FUN_00424dbc(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x24);
  iStack_f4 = 0x748043;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x28),
             (IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_f4 = 0x748050;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_f4 = 0x748060;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  iStack_f4 = 0x748066;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_f4 = unaff_EBP + -0x4c;
  iStack_f8 = 0x748070;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_f4 = 0x74807c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_f4 = 0x748086;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_f4 = unaff_EBP + -0x3c;
  iStack_f8 = 0x748090;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_f4 = 0x74809c;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x28);
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 == 0) {
    iStack_f4 = 0x7480b1;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  iStack_fc = *(int *)(unaff_EBP + -0x4c);
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x48);
  iVar3 = *piVar1;
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_10c = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_108 = *(undefined1 **)(unaff_EBP + -0x38);
  iStack_104 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_110 = 0x20;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  puStack_100 = *(undefined4 **)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x110))(piVar1);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + 0xc) == 1) {
    DVar6 = timeGetTime();
    *(DWORD *)(*(int *)(unaff_EBP + -0x20) + 0xc54 + *(int *)(unaff_EBP + 8) * 4) = DVar6;
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xc54 + *(int *)(unaff_EBP + 8) * 4) = 0xffffffff;
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
LAB_00748154:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


