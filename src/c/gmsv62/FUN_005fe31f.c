/* FUN_005fe31f - 0x005fe31f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fe31f(void)

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
    *(undefined4 *)(extraout_ECX + 0xab0) = 2;
    piStack_104 = (int *)0x5fe71f;
    iVar1 = FUN_007d1e08();
    *(int *)(extraout_ECX + 0xacc) = iVar1 + 6000;
    piStack_104 = (int *)0x3bc;
    piStack_108 = (int *)(unaff_EBP + -0x1c);
    iStack_10c = 0x5fe73f;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_104 = *(int **)(extraout_ECX + 0xadc);
    piStack_108 = (int *)*puVar3;
    iStack_10c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_110 = 0x5fe755;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_104 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      piStack_108 = (int *)0x5fe76c;
      FUN_00434e38();
    }
    piStack_104 = &DAT_00980690;
    piStack_108 = (int *)0x5fe77a;
    FUN_00403191();
    piStack_104 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_108 = (int *)0x5fe78b;
    FUN_00403191();
    piStack_104 = (int *)0x0;
    piStack_108 = (int *)0x0;
    iStack_10c = unaff_EBP + -0x80;
    iStack_110 = unaff_EBP + -0x70;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_114;
    iStack_118 = 0x99b;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_120 = 0x5fe7ac;
    FUN_00679e4e();
    iStack_118 = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_10c = 0x5fe7d5;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    piStack_104 = (int *)(unaff_EBP + -0x24);
    piStack_108 = (int *)0x5fe7e4;
    piStack_104 = (int *)FUN_00404b30();
    if (((int)piStack_104 < 0) && (piStack_104 != (int *)0x80004002)) {
      piStack_108 = (int *)0x5fe7f7;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_108 = (int *)0x5fe807;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5fe812;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_108 = (int *)0x5fe81f;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5fe82a;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5fe837;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5fe842;
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
    piStack_12c = (int *)0x5fe86d;
    puStack_128 = (undefined1 *)&iStack_118;
    piStack_12c = (int *)FUN_00449713();
    puStack_130 = (undefined4 *)0x5fe873;
    puStack_128 = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_124;
    piStack_12c = (int *)0x5fe880;
    FUN_004033a1();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_12c = (int *)0x5fe893;
    FUN_0040263d();
    piStack_12c = (int *)0x5fe89a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_124 = 0x5fe8a5;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    uStack_120 = 0x5fe8b4;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      uStack_120 = 0x5fe8c2;
      FUN_00878dfb();
    }
    puVar5 = (undefined1 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_120 = 0x5fe8d2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      uStack_120 = 0x5fe8dd;
      FUN_00878dfb();
      puVar5 = extraout_ECX_00;
    }
    uStack_120 = 0xff;
    uStack_124 = 3;
    piStack_12c = (int *)&puStack_128;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_128;
    puStack_130 = (undefined4 *)0x5fe8f3;
    puStack_128 = puVar5;
    FUN_004489f5();
    piStack_12c = (int *)0xc8;
    puStack_130 = (undefined4 *)0xc8;
    iStack_134 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_138 = 0x5fe909;
    iStack_138 = FUN_004489f5();
    *(int **)(unaff_EBP + -0x40) = &iStack_134;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_13c = 0x5fe919;
    FUN_0048bccf();
    iStack_138 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_13c;
    FUN_00424dbc(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x34);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 500);
    uStack_120 = 0x5fe948;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      uStack_120 = 0x5fe955;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
      uStack_120 = 0x5fe966;
      (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
    }
    uStack_120 = 0x5fe977;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_120 = 0x5fe987;
    FUN_00403191();
    iVar1 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar1 == 0) {
      uStack_120 = 0x5fe999;
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
      iStack_110 = 0x5fe9d9;
      iStack_10c = iVar1;
      FUN_00878e09();
    }
    piStack_104 = (int *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_108 = (int *)0x5fe9e9;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5fe9f4;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5fea04;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      piStack_108 = (int *)0x5fea0f;
      FUN_00878dfb();
    }
    piStack_108 = *(int **)this;
    *(int ***)(unaff_EBP + 8) = &piStack_104;
    piStack_104 = piStack_108;
    if (piStack_108 != (int *)0x0) {
      iStack_10c = 0x5fea23;
      (**(code **)(*piStack_108 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_108 = (int *)0x5fea2c;
    FUN_00424e82();
    piStack_108 = (int *)0x5fea33;
    FUN_00427af9();
    goto LAB_005fea35;
  }
  if (*(int *)(unaff_EBP + 8) != 1) goto LAB_005fea35;
  piStack_104 = &DAT_00980690;
  *(undefined4 *)(extraout_ECX + 0xab0) = 0;
  piStack_108 = (int *)0x5fe36b;
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 500);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 == 0) {
    piStack_104 = (int *)0x80004003;
    piStack_108 = (int *)0x5fe381;
    FUN_00878dfb();
  }
  piStack_104 = (int *)0x5fe38c;
  iVar1 = FUN_0042a378();
  piStack_108 = (int *)(iVar1 + 500);
  piStack_104 = (int *)0x3;
  iStack_10c = 0x5fe39f;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 500);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 == 0) {
    piStack_104 = (int *)0x80004003;
    piStack_108 = (int *)0x5fe3b5;
    FUN_00878dfb();
  }
  piStack_12c = *(int **)(extraout_ECX + 500);
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
  puStack_130 = (undefined4 *)0x5fe3ec;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    puStack_130 = (undefined4 *)&DAT_00963de8;
    iStack_134 = *(int *)(unaff_EBP + 8);
    uStack_13c = 0x5fe3fe;
    iStack_138 = iVar1;
    FUN_00878e09();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_134 = 0x5fe40e;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x5fe419;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_134 = 0x5fe429;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x5fe434;
    FUN_00878dfb();
  }
  puStack_130 = &DAT_00980690;
  iStack_134 = 0x5fe444;
  FUN_00403191();
  iVar1 = *(int *)(extraout_ECX + 500);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5fe45c;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)0x5fe467;
  iStack_134 = FUN_0042a378();
  iStack_134 = iStack_134 + 400;
  puStack_130 = (undefined4 *)0x3;
  iStack_138 = 0x5fe47a;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 500);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5fe48d;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0x28);
  iStack_134 = 0x5fe49c;
  piVar2 = (int *)FUN_004113e5();
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar1 == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x5fe4ad;
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
  iVar1 = *(int *)(extraout_ECX + 500);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + 500,3);
  iVar1 = *(int *)(extraout_ECX + 500);
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
    iStack_110 = 0x5fe600;
    iStack_10c = iVar1;
    FUN_00878e09();
  }
  piStack_104 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piStack_104 != (int *)0x0) {
    piStack_108 = (int *)0x5fe611;
    (**(code **)(*piStack_104 + 8))();
  }
  piStack_104 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_108 = (int *)0x5fe61e;
  piStack_104 = (int *)FUN_00402bc3();
  if ((int)piStack_104 < 0) {
    piStack_108 = (int *)0x5fe629;
    FUN_00878dfb();
  }
  piStack_104 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_108 = (int *)0x5fe636;
  piStack_104 = (int *)FUN_00402bc3();
  if ((int)piStack_104 < 0) {
    piStack_108 = (int *)0x5fe641;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(extraout_ECX + 0xadc);
  if (iVar1 == 2) {
    piStack_104 = (int *)0x99e;
    piStack_108 = (int *)(unaff_EBP + -0x38);
    iStack_10c = 0x5fe6e6;
    piStack_104 = (int *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_108 = (int *)0x5fe6f6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_005fe6fd:
    piStack_104 = (int *)0x5fe702;
    FUN_00414ebb();
  }
  else {
    if (iVar1 == 4) {
      piStack_104 = (int *)0x99d;
      piStack_108 = (int *)(unaff_EBP + -0x18);
      iStack_10c = 0x5fe6ba;
      piStack_104 = (int *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_108 = (int *)0x5fe6ca;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005fe6fd;
    }
    if (((iVar1 == 8) || (iVar1 == 0x10)) || (iVar1 == 0x20)) {
      piStack_104 = (int *)0x99c;
      piStack_108 = (int *)(unaff_EBP + -0x30);
      iStack_10c = 0x5fe679;
      puVar3 = (undefined4 *)FUN_00679d22();
      piStack_104 = *(int **)(extraout_ECX + 0xadc);
      piStack_108 = (int *)*puVar3;
      iStack_10c = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_110 = 0x5fe68f;
      piStack_104 = (int *)FUN_00434e21();
      piStack_108 = (int *)0x5fe69e;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005fe6fd;
    }
  }
  piStack_104 = (int *)0x0;
  piStack_108 = (int *)0x5fe70b;
  FUN_008161f1();
LAB_005fea35:
  piStack_104 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_104 != (int *)0x0) {
    piStack_108 = (int *)0x5fea46;
    (**(code **)(*piStack_104 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_104 = (int *)0x5fea52;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


