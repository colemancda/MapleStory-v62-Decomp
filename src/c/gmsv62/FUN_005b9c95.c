/* FUN_005b9c95 - 0x005b9c95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b9c95(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  int *piStack_108;
  int *piStack_104;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(extraout_ECX + 0x7e8) = 2;
    piStack_104 = (int *)0x5ba095;
    iVar1 = FUN_007d1e08();
    *(int *)(extraout_ECX + 0x7ec) = iVar1 + 6000;
    piStack_104 = (int *)0x3bc;
    piStack_108 = (int *)(unaff_EBP + -0x1c);
    iStack_10c = 0x5ba0b5;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_104 = *(int **)(extraout_ECX + 0x7f0);
    piStack_108 = (int *)*puVar3;
    iStack_10c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_110 = 0x5ba0cb;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_104 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      piStack_108 = (int *)0x5ba0e2;
      FUN_00434e38();
    }
    piStack_104 = &DAT_00980690;
    piStack_108 = (int *)0x5ba0f0;
    FUN_00403191();
    piStack_104 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_108 = (int *)0x5ba101;
    FUN_00403191();
    piStack_104 = (int *)0x0;
    piStack_108 = (int *)0x0;
    iStack_10c = unaff_EBP + -0x80;
    iStack_110 = unaff_EBP + -0x70;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_114;
    iStack_118 = 0x99b;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_120 = 0x5ba122;
    FUN_00679e4e();
    iStack_118 = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_10c = 0x5ba14b;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    piStack_104 = (int *)(unaff_EBP + -0x24);
    piStack_108 = (int *)0x5ba15a;
    piStack_104 = (int *)FUN_00404b30();
    if (((int)piStack_104 < 0) && (piStack_104 != (int *)0x80004002)) {
      piStack_108 = (int *)0x5ba16d;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_108 = (int *)0x5ba17d;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5ba188;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_108 = (int *)0x5ba195;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5ba1a0;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5ba1ad;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5ba1b8;
      FUN_00878dfb();
    }
    piStack_104 = (int *)0x0;
    piStack_108 = (int *)0x0;
    iStack_10c = -1;
    iStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_114 = 0;
    iStack_118 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    uStack_120 = 0;
    uStack_124 = 0xffffffff;
    piStack_12c = (int *)0x5ba1e3;
    puStack_128 = (undefined1 *)&iStack_118;
    piStack_12c = (int *)FUN_00449713();
    puStack_130 = (undefined4 *)0x5ba1e9;
    puStack_128 = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_124;
    piStack_12c = (int *)0x5ba1f6;
    FUN_004033a1();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_12c = (int *)0x5ba209;
    FUN_0040263d();
    piStack_12c = (int *)0x5ba210;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_124 = 0x5ba21b;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    uStack_120 = 0x5ba22a;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      uStack_120 = 0x5ba238;
      FUN_00878dfb();
    }
    puVar5 = (undefined1 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_120 = 0x5ba248;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      uStack_120 = 0x5ba253;
      FUN_00878dfb();
      puVar5 = extraout_ECX_00;
    }
    uStack_120 = 0xff;
    uStack_124 = 3;
    piStack_12c = (int *)&puStack_128;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_128;
    puStack_130 = (undefined4 *)0x5ba269;
    puStack_128 = puVar5;
    FUN_004489f5();
    piStack_12c = (int *)0xc8;
    puStack_130 = (undefined4 *)0xc8;
    iStack_134 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_138 = 0x5ba27f;
    iStack_138 = FUN_004489f5();
    *(int **)(unaff_EBP + -0x40) = &iStack_134;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_13c = 0x5ba28f;
    FUN_0048bccf();
    iStack_138 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_13c;
    FUN_00424dbc(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x34);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1fc);
    uStack_120 = 0x5ba2be;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      uStack_120 = 0x5ba2cb;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
      uStack_120 = 0x5ba2dc;
      (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
    }
    uStack_120 = 0x5ba2ed;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_120 = 0x5ba2fd;
    FUN_00403191();
    iVar1 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar1 == 0) {
      uStack_120 = 0x5ba30f;
      FUN_00878dfb();
    }
    piVar2 = *(int **)this;
    puStack_128 = *(undefined1 **)(unaff_EBP + -0xc0);
    uStack_124 = *(undefined4 *)(unaff_EBP + -0xbc);
    iVar1 = *piVar2;
    uStack_120 = *(undefined4 *)(unaff_EBP + -0xb8);
    iStack_138 = *(int *)(unaff_EBP + -0xa0);
    iStack_134 = *(int *)(unaff_EBP + -0x9c);
    puStack_130 = *(undefined4 **)(unaff_EBP + -0x98);
    uStack_13c = 0;
    *(int **)(unaff_EBP + 8) = piVar2;
    piStack_12c = *(int **)(unaff_EBP + -0x94);
    iVar1 = (**(code **)(iVar1 + 0x110))(piVar2);
    if (iVar1 < 0) {
      piStack_104 = (int *)&DAT_00963df8;
      piStack_108 = *(int **)(unaff_EBP + 8);
      iStack_110 = 0x5ba34f;
      iStack_10c = iVar1;
      FUN_00878e09();
    }
    piStack_104 = (int *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_108 = (int *)0x5ba35f;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5ba36a;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5ba37a;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5ba385;
      FUN_00878dfb();
    }
    piStack_108 = *(int **)this;
    *(int ***)(unaff_EBP + 8) = &piStack_104;
    piStack_104 = piStack_108;
    if (piStack_108 != (int *)0x0) {
      iStack_10c = 0x5ba399;
      (**(code **)(*piStack_108 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5ba3a2;
    FUN_00424e82();
    piStack_108 = (int *)0x5ba3a9;
    FUN_00427af9();
    goto LAB_005ba3ab;
  }
  if (*(int *)(unaff_EBP + 8) != 1) goto LAB_005ba3ab;
  piStack_104 = &DAT_00980690;
  *(undefined4 *)(extraout_ECX + 0x7e8) = 0;
  piStack_108 = (int *)0x5b9ce1;
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 == 0) {
    piStack_104 = (int *)0x80004003;
    piStack_108 = (int *)0x5b9cf7;
    FUN_00878dfb();
  }
  piStack_104 = (int *)0x5b9d02;
  iVar1 = FUN_0042a378();
  piStack_108 = (int *)(iVar1 + 500);
  piStack_104 = (int *)0x3;
  iStack_10c = 0x5b9d15;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 == 0) {
    piStack_104 = (int *)0x80004003;
    piStack_108 = (int *)0x5b9d2b;
    FUN_00878dfb();
  }
  piStack_12c = *(int **)(extraout_ECX + 0x1fc);
  iStack_110 = *(undefined4 *)(unaff_EBP + -0xe0);
  iStack_10c = *(int *)(unaff_EBP + -0xdc);
  iVar1 = *piStack_12c;
  piStack_108 = *(int **)(unaff_EBP + -0xd8);
  piStack_104 = *(int **)(unaff_EBP + -0xd4);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0xb0);
  uStack_124 = 0x14;
  iStack_118 = *(int *)(unaff_EBP + -0xa8);
  puStack_128 = (undefined1 *)0x1f4;
  *(int **)(unaff_EBP + 8) = piStack_12c;
  uStack_114 = *(undefined4 *)(unaff_EBP + -0xa4);
  puStack_130 = (undefined4 *)0x5b9d62;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    puStack_130 = (undefined4 *)&DAT_00963de8;
    iStack_134 = *(int *)(unaff_EBP + 8);
    uStack_13c = 0x5b9d74;
    iStack_138 = iVar1;
    FUN_00878e09();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_134 = 0x5b9d84;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x5b9d8f;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_134 = 0x5b9d9f;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x5b9daa;
    FUN_00878dfb();
  }
  puStack_130 = &DAT_00980690;
  iStack_134 = 0x5b9dba;
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5b9dd2;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)0x5b9ddd;
  iStack_134 = FUN_0042a378();
  iStack_134 = iStack_134 + 400;
  puStack_130 = (undefined4 *)0x3;
  iStack_138 = 0x5b9df0;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5b9e03;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0x28);
  iStack_134 = 0x5b9e12;
  piVar2 = (int *)FUN_004113e5();
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5b9e23;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar2;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0xd0);
  iStack_138 = *(int *)(unaff_EBP + -0xcc);
  iStack_134 = *(int *)(unaff_EBP + -200);
  iVar1 = *piVar2;
  puStack_130 = *(undefined4 **)(unaff_EBP + -0xc4);
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x90),
                     *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                     *(undefined4 *)(unaff_EBP + -0x84));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x90);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_00402bc3(unaff_EBP + -0xd0);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iVar1 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + 500,3);
  iVar1 = *(int *)(extraout_ECX + 0x1fc);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042bc90(unaff_EBP + -0x20);
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar2,0x32,0x1e,*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44));
  if (iVar1 < 0) {
    piStack_104 = (int *)&DAT_00963de8;
    piStack_108 = *(int **)(unaff_EBP + 8);
    iStack_110 = 0x5b9f76;
    iStack_10c = iVar1;
    FUN_00878e09();
  }
  piStack_104 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piStack_104 != (int *)0x0) {
    piStack_108 = (int *)0x5b9f87;
    (**(code **)(*piStack_104 + 8))();
  }
  piStack_104 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_108 = (int *)0x5b9f94;
  piStack_104 = (int *)FUN_00402bc3();
  if ((int)piStack_104 < 0) {
    piStack_108 = (int *)0x5b9f9f;
    FUN_00878dfb();
  }
  piStack_104 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_108 = (int *)0x5b9fac;
  piStack_104 = (int *)FUN_00402bc3();
  if ((int)piStack_104 < 0) {
    piStack_108 = (int *)0x5b9fb7;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(extraout_ECX + 0x7f0);
  if (iVar1 == 2) {
    piStack_104 = (int *)0x99e;
    piStack_108 = (int *)(unaff_EBP + -0x38);
    iStack_10c = 0x5ba05c;
    piStack_104 = (int *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_108 = (int *)0x5ba06c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_005ba073:
    piStack_104 = (int *)0x5ba078;
    FUN_00414ebb();
  }
  else {
    if (iVar1 == 4) {
      piStack_104 = (int *)0x99d;
      piStack_108 = (int *)(unaff_EBP + -0x18);
      iStack_10c = 0x5ba030;
      piStack_104 = (int *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_108 = (int *)0x5ba040;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005ba073;
    }
    if (((iVar1 == 8) || (iVar1 == 0x10)) || (iVar1 == 0x20)) {
      piStack_104 = (int *)0x99c;
      piStack_108 = (int *)(unaff_EBP + -0x30);
      iStack_10c = 0x5b9fef;
      puVar3 = (undefined4 *)FUN_00679d22();
      piStack_104 = *(int **)(extraout_ECX + 0x7f0);
      piStack_108 = (int *)*puVar3;
      iStack_10c = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_110 = 0x5ba005;
      piStack_104 = (int *)FUN_00434e21();
      piStack_108 = (int *)0x5ba014;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005ba073;
    }
  }
  piStack_104 = (int *)0x0;
  piStack_108 = (int *)0x5ba081;
  FUN_008161f1();
LAB_005ba3ab:
  piStack_104 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_104 != (int *)0x0) {
    piStack_108 = (int *)0x5ba3bc;
    (**(code **)(*piStack_104 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_104 = (int *)0x5ba3c8;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


