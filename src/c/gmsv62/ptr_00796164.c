/* ptr_00796164 - 0x00796164 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00796164(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EBX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  bool bVar7;
  
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_3 = 0x796176;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x54) = piVar2;
  *(int **)(unaff_EBP + -0x30) = unaff_EBX;
  if (piVar2 != unaff_EBX) {
    iVar3 = FUN_0041a581();
    if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191();
  param_3 = unaff_EBP + -200;
  param_2 = unaff_EBP + -0x198;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  param_1 = (int *)0x796226;
  FUN_00411641();
  *(int ***)(unaff_EBP + -0x44) = &param_1;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  param_3 = 0x79625b;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x5c) = piVar2;
  *(int **)(unaff_EBP + -0x3c) = unaff_EBX;
  if (piVar2 != unaff_EBX) {
    iVar3 = FUN_0041a581();
    if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar6 = *(int *)(unaff_EBP + 8) % 10;
  *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
  iVar3 = *(int *)(unaff_EBP + 8) / 10;
  *(int *)(unaff_EBP + -0x28) = iVar6;
  *(int *)(unaff_EBP + -0x58) = iVar3;
  *(int *)(unaff_EBP + -0x24) = iVar3 + iVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  param_3 = 0x796309;
  puVar4 = (undefined4 *)FUN_00679d86();
  param_3 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  param_2 = 0x79631a;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
    FUN_00403384();
  }
  param_3 = 0x796346;
  FUN_0040ee87();
  param_1 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (param_1 == unaff_EBX) {
    FUN_00878dfb();
    param_1 = *(int **)(unaff_EBP + -0x2c);
  }
  iVar3 = *param_1;
  param_2 = *(undefined4 *)(unaff_EBP + -0x78);
  param_3 = *(undefined4 *)(unaff_EBP + -0x74);
  *(int **)(unaff_EBP + 8) = param_1;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + 8) = unaff_EBX;
  if (unaff_EBX < *(int **)(unaff_EBP + -0x24)) {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x20) + 0x14;
    do {
      *(int **)(unaff_EBP + -0x14) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -100);
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00437222(uVar1,unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (*(int **)(unaff_EBP + -100) != unaff_EBX) {
        FUN_00403384();
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x2c));
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (piVar2 == unaff_EBX) {
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x20) = piVar2;
      iVar3 = (**(code **)(iVar3 + 100))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x148),
                         *(undefined4 *)(unaff_EBP + -0x144),*(undefined4 *)(unaff_EBP + -0x140));
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x148);
      if (iVar3 < (int)unaff_EBX) {
        FUN_00878dfb(iVar3);
      }
      *(int **)(unaff_EBP + -0x18) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x60,0x3b1);
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00437222(uVar1,unaff_EBP + -0x18,unaff_EBX);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int **)(unaff_EBP + -0x60) != unaff_EBX) {
        FUN_00403384(*(int **)(unaff_EBP + -0x60) + -3);
      }
      if (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x28)) {
        if ((int)*(uint *)(unaff_EBP + -0x28) % 10 < 6) {
          iVar3 = (*(uint *)(unaff_EBP + 8) % 5) * 2 - *(int *)(unaff_EBP + -0x28);
LAB_00796501:
          iVar3 = (iVar3 + 1) * 5;
        }
        else {
          if (4 < *(uint *)(unaff_EBP + 8) % 10) {
            iVar3 = (*(uint *)(unaff_EBP + 8) % 5) * 2 - *(int *)(unaff_EBP + -0x28) % 5;
            goto LAB_00796501;
          }
          iVar3 = (*(uint *)(unaff_EBP + 8) % 5 - 2) * 10;
        }
        iVar6 = (-2 - *(uint *)(unaff_EBP + 8) / 5) * 10;
      }
      else {
        uVar5 = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x28);
        iVar3 = (uVar5 % 5) * 0xf + (*(int *)(unaff_EBP + -0x58) % 5) * -7 + 7;
        iVar6 = ((*(int *)(unaff_EBP + -0x28) + -1) / 5) * -10 + (uVar5 / 5) * -0xf + -0x23;
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(int *)(unaff_EBP + -0x20) = iVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x68,0x3b1);
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_00437222(uVar1,unaff_EBP + -0x1c,0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + -0x68) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x68) + -0xc);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      uVar5 = FUN_004133f0();
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      *(uint *)(unaff_EBP + -0x50) = uVar5 % 0x168;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + -0x1c);
      }
      iVar6 = *piVar2;
      *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar6 = (**(code **)(iVar6 + 0xa0))
                        (piVar2,(double)*(longlong *)(unaff_EBP + -0x70),
                         *(undefined4 *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x84),
                         *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x88);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x1c),1);
      piVar2 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + -0x18);
      }
      iVar6 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar6 = (**(code **)(iVar6 + 100))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x188),
                         *(undefined4 *)(unaff_EBP + -0x184),*(undefined4 *)(unaff_EBP + -0x180),
                         *(undefined4 *)(unaff_EBP + -0x17c));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x188);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00403191(&DAT_00980690);
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + -0x14);
      }
      iVar6 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar6 + 0x90))
                        (piVar2,iVar3,*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x108),*(undefined4 *)(unaff_EBP + -0x104),
                         *(undefined4 *)(unaff_EBP + -0x100),*(undefined4 *)(unaff_EBP + -0xfc),
                         *(undefined4 *)(unaff_EBP + -0x168),*(undefined4 *)(unaff_EBP + -0x164),
                         *(undefined4 *)(unaff_EBP + -0x160),*(undefined4 *)(unaff_EBP + -0x15c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x108);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x168);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      iVar3 = (**(code **)(*piVar2 + 0x98))(piVar2,*(undefined4 *)(unaff_EBP + -0x18),5,5,0,5);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963de8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      FUN_00403191(&DAT_00980690);
      piVar2 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + -0x18);
      }
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar3 + 0x90))
                        (piVar2,0,0xfffffffb,*(undefined4 *)(unaff_EBP + -0x128),
                         *(undefined4 *)(unaff_EBP + -0x124),*(undefined4 *)(unaff_EBP + -0x120),
                         *(undefined4 *)(unaff_EBP + -0x11c),*(undefined4 *)(unaff_EBP + -0x98),
                         *(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90),
                         *(undefined4 *)(unaff_EBP + -0x8c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x128);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x98);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004031b7(2000,3);
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + -0x1c);
      }
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar3 + 0xa0))
                        (piVar2,0,*(undefined4 *)(unaff_EBP + -0xb8),
                         *(undefined4 *)(unaff_EBP + -0xb4),*(undefined4 *)(unaff_EBP + -0xb0),
                         *(undefined4 *)(unaff_EBP + -0xac));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x28)) {
        FUN_00403191(&DAT_00980690);
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x30),1);
        bVar7 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (bVar7) {
          FUN_00878dfb(0x80004003);
        }
        puVar4 = (undefined4 *)
                 FUN_0042a39f(unaff_EBP + -0x4c,0,0,0,0,0,unaff_EBP + -0xd8,unaff_EBP + -0xf8);
        this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        iVar3 = FUN_00402bc3(unaff_EBP + -0xd8);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar3 = unaff_EBP + -0xf8;
      }
      else {
        FUN_00403191(&DAT_00980690);
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x3c),1);
        bVar7 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        if (bVar7) {
          FUN_00878dfb(0x80004003);
        }
        puVar4 = (undefined4 *)
                 FUN_0042a39f(unaff_EBP + -0x44,0,0,0,0,0,unaff_EBP + -0x118,unaff_EBP + -0x138);
        this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x118);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar3 = unaff_EBP + -0x138;
      }
      iVar3 = FUN_00402bc3(iVar3);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 0xd3c),1);
      iVar3 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)this;
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar3 + 0xfc))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x158),
                         *(undefined4 *)(unaff_EBP + -0x154),*(undefined4 *)(unaff_EBP + -0x150),
                         *(undefined4 *)(unaff_EBP + -0x14c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x158);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)this == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)this;
      iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,5);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
      iVar3 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)this;
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar3 + 100))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x178),
                         *(undefined4 *)(unaff_EBP + -0x174),*(undefined4 *)(unaff_EBP + -0x170),
                         *(undefined4 *)(unaff_EBP + -0x16c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x178);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)this == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)this;
      iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40) = this + 0x18;
      if (*(uint *)(unaff_EBP + -0x24) <= *(uint *)(unaff_EBP + 8)) goto code_r0x00796b6d;
      unaff_EBX = (int *)0x0;
    } while( true );
  }
LAB_00796b6f:
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x2c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x30) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
    FUN_00403384();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
    FUN_00403384();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
code_r0x00796b6d:
  unaff_EBX = (int *)0x0;
  goto LAB_00796b6f;
}


