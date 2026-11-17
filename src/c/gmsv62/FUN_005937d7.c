/* FUN_005937d7 - 0x005937d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005937d7(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  IBinding *pIVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int unaff_EBP;
  bool bVar8;
  int iStack_18c;
  int iStack_188;
  int iStack_16c;
  int iStack_168;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 *puStack_144;
  int *piStack_140;
  int iStack_13c;
  int iStack_138;
  undefined1 *puStack_134;
  int iStack_130;
  int iStack_12c;
  int *piStack_128;
  undefined4 *puStack_124;
  int *piStack_120;
  undefined1 *puStack_11c;
  int iStack_118;
  undefined1 *puStack_114;
  int iStack_110;
  int iStack_10c;
  int *piStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  undefined *puStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  
  FUN_00879bb8();
  iStack_c0 = 0x5937fa;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_c0 = 0x593808;
  FUN_00403191();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar8) {
    iStack_c0 = 0x59381e;
    FUN_00878dfb();
  }
  iStack_c0 = unaff_EBP + -0x70;
  uStack_c4 = 0xa0;
  uStack_c8 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_d8 = unaff_EBP + -0x14;
  piStack_cc = *(int **)(unaff_EBP + 8);
  puStack_d0 = (undefined4 *)0x0;
  piStack_d4 = (int *)0x0;
  uStack_dc = 0x593842;
  puVar3 = (undefined4 *)FUN_0042a39f();
  pIVar1 = (IBinding *)*puVar3;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf4);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x34) = this;
  iStack_c0 = 0x593854;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_c0 = 0x593869;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_c0 = 0x593874;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c0 = 0x593881;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_c0 = 0x59388c;
    FUN_00878dfb();
  }
  iStack_c0 = 0x593897;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_c0 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uStack_c4 = 0x5938ab;
  FUN_0040ee87();
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    iStack_c0 = 0x5938bd;
    FUN_00878dfb();
  }
  piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x34);
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_d0 = (undefined4 *)0x5938d4;
  piStack_cc = piVar7;
  iVar4 = (**(code **)(*piVar7 + 100))();
  if (iVar4 < 0) {
    puStack_d0 = (undefined4 *)&DAT_00963de8;
    uStack_dc = 0x5938e4;
    iStack_d8 = iVar4;
    piStack_d4 = piVar7;
    FUN_00878e09();
  }
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_d4 = (int *)0x5938f1;
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    piStack_d4 = (int *)0x5938fc;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d0 = (undefined4 *)0x593908;
  FUN_00412600();
  puStack_d0 = &DAT_00980690;
  piStack_d4 = (int *)0x593916;
  FUN_00403191();
  puStack_d0 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  piStack_d4 = (int *)0x593926;
  FUN_00403191();
  iVar4 = **(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    puStack_d0 = (undefined4 *)0x80004003;
    piStack_d4 = (int *)0x59393c;
    FUN_00878dfb();
  }
  piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x34);
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x70);
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x6c);
  piStack_d4 = *(int **)(unaff_EBP + -0x68);
  puStack_d0 = *(undefined4 **)(unaff_EBP + -100);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_f0 = 0;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x58);
  uStack_f4 = 0;
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x54);
  puStack_fc = (undefined *)0x593966;
  piStack_f8 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x90))();
  if (iVar4 < 0) {
    puStack_fc = &DAT_00963de8;
    piStack_108 = (int *)0x593976;
    puStack_104 = (undefined4 *)iVar4;
    piStack_100 = piVar7;
    FUN_00878e09();
  }
  puStack_fc = (undefined *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_100 = (int *)0x593983;
  puStack_fc = (undefined *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    piStack_100 = (int *)0x593990;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined *)(unaff_EBP + -0x70);
  piStack_100 = (int *)0x59399d;
  puStack_fc = (undefined *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    piStack_100 = (int *)0x5939a8;
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + -0x34);
  if (*piVar7 == 0) {
    puStack_fc = (undefined *)0x80004003;
    piStack_100 = (int *)0x5939b9;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar7;
  puStack_fc = (undefined *)0xffffffff;
  puStack_104 = (undefined4 *)0x5939c6;
  piStack_100 = piVar2;
  iStack_10c = (**(code **)(*piVar2 + 0xe0))();
  if (iStack_10c < 0) {
    puStack_104 = (undefined4 *)&DAT_00963df8;
    iStack_110 = 0x5939d6;
    piStack_108 = piVar2;
    FUN_00878e09();
  }
  puStack_104 = (undefined4 *)0x3;
  piStack_108 = (int *)0x0;
  iStack_10c = 0x5939e1;
  FUN_004031b7();
  iVar4 = *piVar7;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar4 == 0) {
    puStack_104 = (undefined4 *)0x80004003;
    piStack_108 = (int *)0x5939f6;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x60);
  piStack_108 = (int *)(unaff_EBP + -0x10);
  iStack_10c = 0x593a05;
  FUN_00425067();
  puStack_104 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_108 = (int *)0x593a12;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x593a1d;
    FUN_00878dfb();
  }
  puStack_104 = &DAT_00980690;
  piStack_108 = (int *)0x593a2e;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_108 = (int *)0x593a3b;
  FUN_00403191();
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  iStack_10c = unaff_EBP + -0x88;
  iStack_110 = unaff_EBP + -0x70;
  puStack_11c = (undefined1 *)&puStack_114;
  *(undefined1 ***)(unaff_EBP + -0x50) = &puStack_114;
  iStack_118 = 0xc24;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_120 = (int *)0x593a64;
  FUN_00679e4e();
  iStack_118 = unaff_EBP + -0x98;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_11c = (undefined1 *)0x593a74;
  FUN_00405a1d();
  puStack_11c = (undefined1 *)0x593a7b;
  FUN_00402660();
  puStack_11c = (undefined1 *)0x593a82;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_10c = 0x593a8d;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x78) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar4 != 0) {
    puStack_104 = (undefined4 *)(unaff_EBP + -0x78);
    piStack_108 = (int *)0x593aa8;
    puStack_104 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
      piStack_108 = (int *)0x593ab6;
      FUN_00878dfb();
    }
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_108 = (int *)0x593ac6;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x593ad1;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_108 = (int *)0x593ade;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x593ae9;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_108 = (int *)0x593af9;
  iVar4 = FUN_00402bc3();
  puVar3 = puStack_104;
  if (iVar4 < 0) {
    piStack_108 = (int *)0x593b04;
    puStack_104 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_00;
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x50) = &iStack_10c;
  iStack_110 = 0x575;
  iStack_118 = 0x593b19;
  iStack_10c = (int)puVar3;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_114 = (undefined1 *)0x593b2c;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x593b33;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_10c = 0x593b3e;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x74) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    puStack_104 = (undefined4 *)(unaff_EBP + -0x74);
    piStack_108 = (int *)0x593b54;
    puStack_104 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
      piStack_108 = (int *)0x593b62;
      FUN_00878dfb();
    }
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_108 = (int *)0x593b72;
  iVar4 = FUN_00402bc3();
  puVar3 = puStack_104;
  if (iVar4 < 0) {
    piStack_108 = (int *)0x593b7d;
    puStack_104 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_01;
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x14) = &iStack_10c;
  iStack_110 = 0x57b;
  iStack_118 = 0x593b92;
  iStack_10c = (int)puVar3;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_114 = (undefined1 *)0x593ba5;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x593bac;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_10c = 0x593bba;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar4 != 0) {
    puStack_104 = (undefined4 *)(unaff_EBP + -0x50);
    piStack_108 = (int *)0x593bd0;
    puStack_104 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
      piStack_108 = (int *)0x593bde;
      FUN_00878dfb();
    }
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_108 = (int *)0x593bee;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_108 = (int *)0x593bf9;
    puStack_104 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puStack_104 = (undefined4 *)extraout_ECX_02;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x16;
  iVar4 = (int)puStack_104;
  if (0x16 < *(int *)(unaff_EBP + 8) + -0x15) {
    do {
      puStack_104 = &DAT_00980690;
      piStack_108 = (int *)0x593c1b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_104 = (undefined4 *)0x80004003;
        piStack_108 = (int *)0x593c2e;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x10);
      puStack_114 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_110 = *(int *)(unaff_EBP + -0x30);
      iStack_10c = *(int *)(unaff_EBP + -0x2c);
      iStack_118 = 0;
      puStack_11c = *(undefined1 **)(unaff_EBP + -0x1c);
      piStack_108 = *(int **)(unaff_EBP + -0x28);
      puStack_104 = *(undefined4 **)(unaff_EBP + -0x24);
      puStack_124 = (undefined4 *)0x593c4e;
      piStack_120 = piVar7;
      iVar4 = (**(code **)(*piVar7 + 0x80))();
      if (iVar4 < 0) {
        puStack_124 = (undefined4 *)&DAT_00963cc8;
        iStack_130 = 0x593c5e;
        iStack_12c = iVar4;
        piStack_128 = piVar7;
        FUN_00878e09();
      }
      puStack_124 = (undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_128 = (int *)0x593c6b;
      puStack_124 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_124 < 0) {
        piStack_128 = (int *)0x593c76;
        FUN_00878dfb();
      }
      puStack_124 = &DAT_00980690;
      piStack_128 = (int *)0x593c83;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_124 = (undefined4 *)0x80004003;
        piStack_128 = (int *)0x593c97;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x10);
      puStack_134 = *(undefined1 **)(unaff_EBP + -0x3c);
      iStack_130 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_12c = *(int *)(unaff_EBP + -0x48);
      iStack_138 = *(int *)(unaff_EBP + 0xc) + -0x17;
      iStack_13c = *(int *)(unaff_EBP + -0x1c);
      piStack_128 = *(int **)(unaff_EBP + -0x44);
      puStack_124 = *(undefined4 **)(unaff_EBP + -0x40);
      puStack_144 = (undefined4 *)0x593cbc;
      piStack_140 = piVar7;
      iVar4 = (**(code **)(*piVar7 + 0x80))();
      if (iVar4 < 0) {
        puStack_104 = (undefined4 *)&DAT_00963cc8;
        iStack_110 = 0x593ccc;
        iStack_10c = iVar4;
        piStack_108 = piVar7;
        FUN_00878e09();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_108 = (int *)0x593cd9;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_108 = (int *)0x593ce4;
        puStack_104 = (undefined4 *)iVar4;
        FUN_00878dfb();
        puStack_104 = (undefined4 *)extraout_ECX_03;
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      iVar4 = (int)puStack_104;
    } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + 8) + -0x15);
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x38) = &iStack_10c;
  iStack_110 = 0x578;
  iStack_118 = 0x593d12;
  iStack_10c = iVar4;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_114 = (undefined1 *)0x593d22;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x593d29;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_10c = 0x593d34;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  puStack_104 = (undefined4 *)(unaff_EBP + -0x14);
  piStack_108 = (int *)0x593d43;
  puStack_104 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
    piStack_108 = (int *)0x593d54;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_108 = (int *)0x593d61;
  iVar4 = FUN_00402bc3();
  puVar3 = puStack_104;
  if (iVar4 < 0) {
    piStack_108 = (int *)0x593d6c;
    puStack_104 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_04;
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x38) = &iStack_10c;
  iStack_110 = 0x577;
  iStack_118 = 0x593d81;
  iStack_10c = (int)puVar3;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_114 = (undefined1 *)0x593d91;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x593d98;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_10c = 0x593da3;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  puStack_104 = (undefined4 *)(unaff_EBP + -0x14);
  piStack_108 = (int *)0x593db2;
  puStack_104 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
    piStack_108 = (int *)0x593dc3;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_108 = (int *)0x593dd0;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x593ddb;
    FUN_00878dfb();
  }
  iVar6 = *(int *)(unaff_EBP + 0xc) + -0x17;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x28;
  *(int *)(unaff_EBP + -0x38) = iVar6;
  iVar4 = 0x28;
  if (0x28 < iVar6) {
    do {
      puStack_104 = &DAT_00980690;
      piStack_108 = (int *)0x593e03;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_104 = (undefined4 *)0x80004003;
        piStack_108 = (int *)0x593e16;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x10);
      puStack_114 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_118 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_110 = *(int *)(unaff_EBP + -0x30);
      iStack_10c = *(int *)(unaff_EBP + -0x2c);
      piStack_108 = *(int **)(unaff_EBP + -0x28);
      puStack_11c = (undefined1 *)0x3;
      puStack_104 = *(undefined4 **)(unaff_EBP + -0x24);
      puStack_124 = (undefined4 *)0x593e36;
      piStack_120 = piVar7;
      iVar4 = (**(code **)(*piVar7 + 0x80))();
      if (iVar4 < 0) {
        puStack_124 = (undefined4 *)&DAT_00963cc8;
        iStack_130 = 0x593e46;
        iStack_12c = iVar4;
        piStack_128 = piVar7;
        FUN_00878e09();
      }
      puStack_124 = (undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_128 = (int *)0x593e53;
      puStack_124 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_124 < 0) {
        piStack_128 = (int *)0x593e5e;
        FUN_00878dfb();
      }
      puStack_124 = &DAT_00980690;
      piStack_128 = (int *)0x593e6b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_124 = (undefined4 *)0x80004003;
        piStack_128 = (int *)0x593e7f;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x10);
      puStack_134 = *(undefined1 **)(unaff_EBP + -0x3c);
      iStack_138 = *(int *)(unaff_EBP + -0x1c);
      iStack_130 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_12c = *(int *)(unaff_EBP + -0x48);
      piStack_128 = *(int **)(unaff_EBP + -0x44);
      iStack_13c = *(int *)(unaff_EBP + 8) + -0x15;
      puStack_124 = *(undefined4 **)(unaff_EBP + -0x40);
      puStack_144 = (undefined4 *)0x593ea4;
      piStack_140 = piVar7;
      iVar4 = (**(code **)(*piVar7 + 0x80))();
      if (iVar4 < 0) {
        puStack_104 = (undefined4 *)&DAT_00963cc8;
        iStack_110 = 0x593eb4;
        iStack_10c = iVar4;
        piStack_108 = piVar7;
        FUN_00878e09();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_108 = (int *)0x593ec1;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_108 = (int *)0x593ecc;
        puStack_104 = (undefined4 *)iVar4;
        FUN_00878dfb();
        puStack_104 = (undefined4 *)extraout_ECX_05;
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      iVar4 = (int)puStack_104;
    } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + -0x38));
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x1c) = &iStack_10c;
  iStack_110 = 0x579;
  iStack_118 = 0x593ef5;
  iStack_10c = iVar4;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_114 = (undefined1 *)0x593f05;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x593f0c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_10c = 0x593f17;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  puStack_104 = (undefined4 *)(unaff_EBP + -0x14);
  piStack_108 = (int *)0x593f26;
  puStack_104 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
    piStack_108 = (int *)0x593f37;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_108 = (int *)0x593f44;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x593f4f;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)0x16;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x16;
  iVar4 = (int)puStack_104;
  if (0x16 < *(int *)(unaff_EBP + 8) + -0x20) {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc) + -0x1f;
    do {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x28;
      if (0x28 < *(int *)(unaff_EBP + -0x14)) {
        do {
          puStack_104 = &DAT_00980690;
          piStack_108 = (int *)0x593f88;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_104 = (undefined4 *)0x80004003;
            piStack_108 = (int *)0x593f9b;
            FUN_00878dfb();
          }
          piVar7 = *(int **)(unaff_EBP + -0x10);
          puStack_114 = *(undefined1 **)(unaff_EBP + -0x18);
          iStack_110 = *(int *)(unaff_EBP + -0x30);
          iStack_10c = *(int *)(unaff_EBP + -0x2c);
          piStack_108 = *(int **)(unaff_EBP + -0x28);
          puStack_104 = *(undefined4 **)(unaff_EBP + -0x24);
          iVar4 = *(int *)(unaff_EBP + 0xc);
          puStack_11c = *(undefined1 **)(unaff_EBP + -0x1c);
          puStack_124 = (undefined4 *)0x593fbd;
          piStack_120 = piVar7;
          iStack_118 = iVar4;
          iVar6 = (**(code **)(*piVar7 + 0x80))();
          if (iVar6 < 0) {
            puStack_104 = (undefined4 *)&DAT_00963cc8;
            iStack_110 = 0x593fcd;
            iStack_10c = iVar6;
            piStack_108 = piVar7;
            FUN_00878e09();
          }
          puStack_104 = (undefined4 *)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_108 = (int *)0x593fda;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_108 = (int *)0x593fe5;
            puStack_104 = (undefined4 *)iVar6;
            FUN_00878dfb();
            puStack_104 = (undefined4 *)extraout_ECX_06;
          }
          iVar4 = iVar4 + 1;
          *(int *)(unaff_EBP + 0xc) = iVar4;
        } while (iVar4 < *(int *)(unaff_EBP + -0x14));
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      iVar4 = (int)puStack_104;
    } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + 8) + -0x20);
  }
  puStack_104 = (undefined4 *)0x0;
  piStack_108 = (int *)0x0;
  puStack_114 = (undefined1 *)&iStack_10c;
  *(int **)(unaff_EBP + -0x14) = &iStack_10c;
  iStack_110 = 0x574;
  iStack_118 = 0x59401a;
  iStack_10c = iVar4;
  FUN_00679e4e();
  iStack_110 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_114 = (undefined1 *)0x59402a;
  FUN_0040263d();
  puStack_114 = (undefined1 *)0x594031;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_10c = 0x59403c;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  puStack_104 = (undefined4 *)(unaff_EBP + 0xc);
  piStack_108 = (int *)0x59404b;
  puStack_104 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
    piStack_108 = (int *)0x59405c;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_108 = (int *)0x594069;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x594074;
    FUN_00878dfb();
  }
  puStack_104 = &DAT_00980690;
  piStack_108 = (int *)0x594081;
  FUN_00403191();
  piVar7 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (piVar7 == (int *)0x0) {
    puStack_104 = (undefined4 *)0x80004003;
    piStack_108 = (int *)0x594096;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar7;
  puStack_114 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_110 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_10c = *(int *)(unaff_EBP + -0x2c);
  iStack_118 = 0;
  piStack_108 = *(int **)(unaff_EBP + -0x28);
  puStack_11c = (undefined1 *)0x0;
  *(int **)(unaff_EBP + 0xc) = piVar7;
  puStack_104 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_124 = (undefined4 *)0x5940b8;
  piStack_120 = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_124 = (undefined4 *)&DAT_00963cc8;
    piStack_128 = *(int **)(unaff_EBP + 0xc);
    iStack_130 = 0x5940ca;
    iStack_12c = iVar4;
    FUN_00878e09();
  }
  puStack_124 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_128 = (int *)0x5940d7;
  iVar4 = FUN_00402bc3();
  puVar3 = puStack_124;
  if (iVar4 < 0) {
    piStack_128 = (int *)0x5940e2;
    puStack_124 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_07;
  }
  puStack_124 = (undefined4 *)0x0;
  piStack_128 = (int *)0x0;
  puStack_134 = (undefined1 *)&iStack_12c;
  *(int **)(unaff_EBP + -0x14) = &iStack_12c;
  iStack_130 = 0x576;
  iStack_138 = 0x5940fa;
  iStack_12c = (int)puVar3;
  FUN_00679e4e();
  iStack_130 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_134 = (undefined1 *)0x59410a;
  FUN_0040263d();
  puStack_134 = (undefined1 *)0x594111;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_12c = 0x59411c;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  puStack_124 = (undefined4 *)(unaff_EBP + 0xc);
  piStack_128 = (int *)0x59412b;
  puStack_124 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_124 < 0) && (puStack_124 != (undefined4 *)0x80004002)) {
    piStack_128 = (int *)0x59413c;
    FUN_00878dfb();
  }
  puStack_124 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_128 = (int *)0x594149;
  puStack_124 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_124 < 0) {
    piStack_128 = (int *)0x594154;
    FUN_00878dfb();
  }
  puStack_124 = &DAT_00980690;
  piStack_128 = (int *)0x594161;
  FUN_00403191();
  piVar7 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (piVar7 == (int *)0x0) {
    puStack_124 = (undefined4 *)0x80004003;
    piStack_128 = (int *)0x594176;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar7;
  puStack_134 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_130 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_12c = *(int *)(unaff_EBP + -0x2c);
  iStack_138 = 0;
  piStack_128 = *(int **)(unaff_EBP + -0x28);
  iStack_13c = *(int *)(unaff_EBP + 8) + -0x15;
  *(int **)(unaff_EBP + 0xc) = piVar7;
  puStack_124 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_144 = (undefined4 *)0x59419c;
  piStack_140 = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_144 = (undefined4 *)&DAT_00963cc8;
    uStack_148 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_14c = iVar4;
    FUN_00878e09();
  }
  puStack_144 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_148 = 0x5941bb;
  iVar4 = FUN_00402bc3();
  puVar3 = puStack_144;
  if (iVar4 < 0) {
    uStack_148 = 0x5941c6;
    puStack_144 = (undefined4 *)iVar4;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_08;
  }
  puStack_144 = (undefined4 *)0x0;
  uStack_148 = 0;
  *(int **)(unaff_EBP + -0x14) = &iStack_14c;
  iStack_14c = (int)puVar3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_14c = 0x594200;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  puStack_144 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_148 = 0x59420f;
  puStack_144 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_144 < 0) && (puStack_144 != (undefined4 *)0x80004002)) {
    uStack_148 = 0x594220;
    FUN_00878dfb();
  }
  puStack_144 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_148 = 0x59422d;
  puStack_144 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_144 < 0) {
    uStack_148 = 0x594238;
    FUN_00878dfb();
  }
  puStack_144 = &DAT_00980690;
  uStack_148 = 0x594245;
  FUN_00403191();
  piVar7 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (piVar7 == (int *)0x0) {
    puStack_144 = (undefined4 *)0x80004003;
    uStack_148 = 0x59425a;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar7;
  iStack_14c = *(int *)(unaff_EBP + -0x2c);
  uStack_148 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + 0xc) = piVar7;
  puStack_144 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    iStack_168 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_16c = iVar4;
    FUN_00878e09();
  }
  iVar4 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_168 = 0x59429b;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_168 = 0x5942a6;
    FUN_00878dfb();
    iVar4 = extraout_ECX_09;
  }
  iStack_168 = 0;
  *(int **)(unaff_EBP + -0x14) = &iStack_16c;
  iStack_16c = iVar4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_16c = 0x5942e0;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  iStack_168 = 0x5942ef;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    iStack_168 = 0x594300;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_168 = 0x59430d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_168 = 0x594318;
    FUN_00878dfb();
  }
  iStack_168 = 0x594324;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_168 = unaff_EBP + -0x4c;
  iStack_16c = 0x594332;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_168 = 0x59433e;
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  if (piVar7 == (int *)0x0) {
    iStack_168 = 0x594353;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar7;
  iStack_16c = *(int *)(unaff_EBP + -0x48);
  iStack_168 = *(undefined4 *)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + 0xc) = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    iStack_188 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_18c = iVar4;
    FUN_00878e09();
  }
  iVar4 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_188 = 0x59439a;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_188 = 0x5943a5;
    FUN_00878dfb();
    iVar4 = extraout_ECX_10;
  }
  iStack_188 = 0;
  *(int **)(unaff_EBP + -0x14) = &iStack_18c;
  iStack_18c = iVar4;
  FUN_00679e4e(&iStack_18c,0x5a9);
  iVar4 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar4);
  FUN_004048a4(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_18c = 0x5943e1;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  iStack_188 = 0x5943f0;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    iStack_188 = 0x594401;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_188 = 0x59440e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x594419;
    FUN_00878dfb();
  }
  iStack_188 = 0x59441f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_188 = unaff_EBP + -0x4c;
  iStack_18c = 0x59442d;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_188 = 0x594439;
    FUN_00878dfb();
  }
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  if (puVar3 == (undefined4 *)0x0) {
    iStack_188 = 0x59444e;
    FUN_00878dfb();
    puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
  iStack_18c = *(int *)(unaff_EBP + -0x48);
  iStack_188 = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  iVar4 = (**(code **)(*(int *)(unaff_EBP + 0xc) + 0x80))
                    (puVar3,(*(int *)(unaff_EBP + 8) + -0xaa) / 2 + 3,0x11,
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar4 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar4 = FUN_00402e32(unaff_EBP + -0x4c,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = **(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x34);
  iVar4 = (**(code **)(*piVar7 + 0x90))
                    (piVar7,0x23 - *(int *)(unaff_EBP + 8),
                     (-(uint)(*(int *)(unaff_EBP + 0x10) != 1) & 0xfffffffa) + 0x10,
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar7,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar7 = *(int **)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  piVar7 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  piVar7 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  piVar7 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


