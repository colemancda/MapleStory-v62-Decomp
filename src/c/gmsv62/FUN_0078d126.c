/* FUN_0078d126 - 0x0078d126 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078d126(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  int iStack_128;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 0xd74);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xd74);
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x8c))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  iVar1 = FUN_00861327();
  if (iVar1 != 0) {
    if (*(int *)(unaff_EBP + -0x14) + 0x50 < *(int *)(unaff_EBP + -0x1c)) {
      iVar1 = FUN_00861327();
      if (iVar1 != 0) {
        if (*(int *)(unaff_EBP + -0x14) + 0x50 < *(int *)(unaff_EBP + -0x1c)) {
          iVar1 = FUN_00861327();
          if (iVar1 != 0) {
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -0xf;
            *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
            goto LAB_0078d254;
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xf;
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
        goto LAB_0078d254;
      }
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
  }
LAB_0078d254:
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + 0x17fc) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x1800) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    FUN_00403384();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x24);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  piVar3 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x24);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0xa0))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x20);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iVar1 = (**(code **)(iVar1 + 100))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x20);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    iStack_128 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_130 = 0x78d4d1;
    iStack_12c = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_128 = 0x78d4de;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_128 = 0x78d4e9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_128 = 0x78d4f6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_128 = 0x78d501;
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffedc;
  iStack_128 = 0x78d511;
  FUN_00434bee();
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_128 = 0x78d523;
  iStack_128 = FUN_005ee6c0();
  iStack_12c = 0x78d529;
  FUN_005ea2cf();
  iStack_128 = 0x78d531;
  FUN_005ea2b3();
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iStack_128 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_12c = 0x78dc13;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_12c = *puVar4;
    iStack_128 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    uStack_130 = 0x78dc24;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00402676();
    iStack_128 = 0xff;
    iStack_12c = 0xffffffff;
    iStack_134 = iVar1 + 0xd3c;
    *(undefined4 **)(unaff_EBP + -0x34) = &uStack_130;
    uStack_138 = 0x78dc4d;
    FUN_0041160e();
    iStack_134 = 0;
    uStack_138 = 0;
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_13c;
    uStack_13c = extraout_ECX_01;
    FUN_00433bdf();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00411641();
    puVar4 = (undefined4 *)FUN_0042e3f0();
    iStack_128 = 0x78dc9a;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0x17f4),
               (IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00402676();
    iStack_128 = 0x78dcbc;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_128 = 0x78dcc9;
    FUN_00424aee();
    iStack_128 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_12c = 0;
    uStack_130 = 0x78dcdd;
    FUN_00424e27();
    uStack_130 = 0x78dce4;
    FUN_00425139();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_128 = 0x78dcf1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78dcfc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_128 = 0x78dd09;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78dd14;
      FUN_00878dfb();
    }
    iStack_128 = 0x78dd1d;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_128 = 0x78dd2a;
    FUN_00424aee();
    iStack_128 = unaff_EBP + -0x54;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_130 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_134 = 0x78dd44;
    FUN_00424df4();
    iStack_134 = 0x78dd4b;
    FUN_00424f2f();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_128 = 0x78dd58;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78dd63;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_128 = 0x78dd70;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78dd7b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004125d9();
    iVar1 = *(int *)(unaff_EBP + -0x18);
  }
  else {
    if (DAT_0097c1ac == 0) {
      iStack_128 = 0x78d54c;
      FUN_00878dfb();
    }
    iVar2 = FUN_0065c8fd();
    *(int *)(unaff_EBP + -0x28) = iVar2 + 0x9c4;
    iStack_128 = 0x78d56d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_128 = 0x78d57a;
    FUN_00403191();
    iVar1 = *(int *)(iVar1 + 0xd38);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar1 == 0) {
      iStack_128 = 0x78d590;
      FUN_00878dfb();
    }
    iStack_128 = 0x78d5a1;
    piVar3 = (int *)FUN_004113e5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (iVar1 == 0) {
      iStack_128 = 0x78d5b5;
      FUN_00878dfb();
    }
    uStack_130 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_12c = *(int *)(unaff_EBP + -0x40);
    iVar1 = *(int *)*piVar3;
    iStack_128 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_13c = *(undefined4 *)(unaff_EBP + -0x50);
    uStack_138 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x2c) = (int *)*piVar3;
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x48);
    iVar1 = (**(code **)(iVar1 + 0x90))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_004031b7();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xd38);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    piVar3 = (int *)FUN_004113e5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    iVar1 = *(int *)*piVar3;
    *(int **)(unaff_EBP + -0x30) = (int *)*piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00403191();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    piVar3 = (int *)FUN_004113e5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    iVar1 = *(int *)*piVar3;
    *(int **)(unaff_EBP + -0x30) = (int *)*piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_004031b7();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    piVar3 = (int *)FUN_004113e5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    iVar1 = *(int *)*piVar3;
    *(int **)(unaff_EBP + -0x30) = (int *)*piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))();
    if (iVar1 < 0) {
      iStack_1d8 = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_1e0 = 0x78d85c;
      iStack_1dc = iVar1;
      FUN_00878e09();
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_1d8 = 0x78d871;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_1d8 = 0x78d87c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_1d8 = 0x78d889;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_1d8 = 0x78d894;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iStack_1d8 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_1dc = 0x78d8b0;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_1dc = *puVar4;
    iStack_1d8 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_1e0 = 0x78d8c1;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = extraout_ECX_00;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      iVar1 = *(int *)(unaff_EBP + -0x30) + -0xc;
      iStack_1d8 = 0x78d8d8;
      FUN_00403384();
    }
    iVar2 = *(int *)(unaff_EBP + -0x18);
    iStack_1d8 = 0xff;
    iStack_1dc = 0xffffffff;
    iStack_1e4 = iVar2 + 0xd3c;
    *(int **)(unaff_EBP + -0x28) = &iStack_1e0;
    uStack_1e8 = 0x78d8f6;
    iStack_1e0 = iVar1;
    FUN_0041160e();
    iStack_1e4 = 0;
    uStack_1e8 = 0;
    *(undefined4 **)(unaff_EBP + -0x34) = &uStack_1ec;
    FUN_00433bdf(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00679d86(unaff_EBP + -0x2c,0x867);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    uVar5 = FUN_00411641(0);
    puVar4 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x30,uVar5);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0x17f4);
    iStack_1d8 = 0x78d943;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      iStack_1d8 = 0x78d95f;
      FUN_00403384();
    }
    iStack_1d8 = 0x78d96e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_1d8 = 0x78d97b;
    FUN_00403191();
    iVar1 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (iVar1 == 0) {
      iStack_1d8 = 0x78d98d;
      FUN_00878dfb();
    }
    iStack_1e0 = *(int *)(unaff_EBP + -0x44);
    iStack_1dc = *(int *)(unaff_EBP + -0x40);
    iStack_1d8 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_1ec = *(undefined4 *)(unaff_EBP + -0x50);
    piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x17f4);
    iVar1 = *piVar3;
    uStack_1e8 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x30) = piVar3;
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x48);
    iVar1 = (**(code **)(iVar1 + 0x110))(piVar3,0,*(undefined4 *)(unaff_EBP + -0x54));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x30),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + -0x30) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x14) + -600,
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x30),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x17f4);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042a378();
    FUN_004031b7(iVar1 + 0x370,3);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + -0x30) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar1 < 0) {
      iStack_128 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_130 = 0x78db3b;
      iStack_12c = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_128 = 0x78db48;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78db53;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_128 = 0x78db60;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_128 = 0x78db6b;
      FUN_00878dfb();
    }
    iStack_128 = unaff_EBP + -0x30;
    iStack_12c = 0x78db7e;
    puVar4 = (undefined4 *)FUN_00679d86();
    uVar5 = *puVar4;
    iStack_128 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_12c = 0x78db8f;
    iStack_12c = FUN_007d3c48();
    iStack_134 = 0x78db96;
    uStack_130 = uVar5;
    FUN_007d4073();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      iStack_128 = 0x78dbad;
      FUN_00403384();
    }
    iVar1 = *(int *)(unaff_EBP + -0x18);
    iStack_128 = 0x78dbc2;
    FUN_00432942();
    iStack_128 = 0x78dbcb;
    FUN_0079ba1a();
    iStack_128 = 0x78dbd4;
    FUN_0079ba1a();
    iStack_128 = 0x78dbdd;
    FUN_0079ba1a();
    iStack_128 = 0x78dbe6;
    FUN_0079ba1a();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004125d9();
  }
  if (*(int *)(iVar1 + 0x1e4c) != 0) {
    iStack_128 = 0x78dda0;
    FUN_007d4061();
    *(undefined4 *)(iVar1 + 0x1e4c) = 0;
  }
  FUN_004125d9();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


