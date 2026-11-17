/* FUN_007779e8 - 0x007779e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007779e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *piVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_158;
  int iStack_154;
  int *piStack_150;
  IBinding *pIVar6;
  int *piStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined *puStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined *puStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  
  FUN_00879bb8();
  uStack_a4 = *(undefined4 *)(unaff_EBP + 8);
  uStack_a8 = 0x777a05;
  FUN_0081622a();
  uStack_a4 = unaff_EBP + 8;
  uStack_a8 = 0x777a10;
  FUN_00448dc6();
  iVar3 = DAT_00978368;
  uVar2 = *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x838);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  uStack_a4 = 0x777a36;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x834);
  uStack_a4 = 0x777a4e;
  FUN_0045e787();
  iVar1 = *(int *)(iVar3 + 0x2cac);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    piVar4 = (int *)(extraout_ECX + 0x68);
    iVar1 = 2;
    do {
      uStack_a4 = 0;
      uStack_a8 = 0x7781ff;
      (**(code **)(*(int *)(*piVar4 + 4) + 0x1c))();
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uStack_a4 = 0x77820d;
    FUN_004497b5();
    uStack_a4 = 0x778215;
    FUN_004497b5();
    uStack_a4 = 0x77821d;
    FUN_004125e6();
  }
  else {
    uStack_a4 = (uint)(**(int **)(iVar3 + 0x2cb8) == *(int *)(iVar3 + 0x2088));
    uStack_a8 = 0x777a83;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x1c))();
    if ((*(int *)(iVar3 + 0x2cac) == 0) || (**(int **)(iVar3 + 0x2cb8) != *(int *)(iVar3 + 0x2088)))
    {
      uStack_a8 = 0;
    }
    else {
      uStack_a8 = 1;
    }
    uStack_ac = 0x777aae;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x70) + 4) + 0x1c))();
    uStack_ac = 3;
    uStack_b0 = 0xff;
    uStack_b4 = 0x777abd;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x84);
    piStack_c8 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_c8 == (int *)0x0) {
      uStack_ac = 0x80004003;
      uStack_b0 = 0x777adb;
      FUN_00878dfb();
      piStack_c8 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_c8;
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x50);
    uStack_b4 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_c0 = 8;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_c4 = 6;
    *(int **)(unaff_EBP + -0x14) = piStack_c8;
    uStack_ac = *(undefined4 *)(unaff_EBP + -0x44);
    puStack_cc = (undefined *)0x777afd;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_cc = &DAT_00963cc8;
      uStack_d0 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_d8 = 0x777b0f;
      iStack_d4 = iVar1;
      FUN_00878e09();
    }
    puStack_cc = (undefined *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_d0 = 0x777b1c;
    puStack_cc = (undefined *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      uStack_d0 = 0x777b27;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x84) == 0) {
      puStack_cc = (undefined *)0x80004003;
      uStack_d0 = 0x777b3a;
      FUN_00878dfb();
    }
    puStack_cc = (undefined *)0x777b45;
    iVar1 = FUN_0040e53d();
    puStack_cc = (undefined *)0x3;
    uStack_d0 = 0xff;
    *(int *)(unaff_EBP + -0x18) = iVar1 + 0x12;
    iStack_d4 = 0x777b5a;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x88);
    piStack_e8 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piStack_e8 == (int *)0x0) {
      puStack_cc = (undefined *)0x80004003;
      uStack_d0 = 0x777b78;
      FUN_00878dfb();
      piStack_e8 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_e8;
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_d4 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_e4 = 6;
    *(int **)(unaff_EBP + -0x14) = piStack_e8;
    puStack_cc = *(undefined **)(unaff_EBP + -0x44);
    puStack_ec = (undefined4 *)0x777b9b;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_ec = (undefined4 *)&DAT_00963cc8;
      puStack_f0 = *(undefined **)(unaff_EBP + -0x14);
      uStack_f8 = 0x777bad;
      iStack_f4 = iVar1;
      FUN_00878e09();
    }
    puStack_ec = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_f0 = (undefined *)0x777bba;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      puStack_f0 = (undefined *)0x777bc5;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x88) == 0) {
      puStack_ec = (undefined4 *)0x80004003;
      puStack_f0 = (undefined *)0x777bd8;
      FUN_00878dfb();
    }
    puStack_ec = (undefined4 *)0x777be3;
    iVar1 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
    puStack_ec = (undefined4 *)0x777bf4;
    FUN_0045e787();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    puStack_ec = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x2cce);
    iStack_f4 = unaff_EBP + -0x2c;
    puStack_f0 = &DAT_0096477c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_f8 = 0x777c13;
    FUN_00434e21();
    puStack_ec = &DAT_00980690;
    puStack_f0 = (undefined *)0x777c24;
    FUN_00403191();
    puStack_ec = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_f0 = (undefined *)0x777c31;
    FUN_00403191();
    puStack_ec = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_f0 = (undefined *)0x777c3e;
    FUN_00403191();
    puStack_ec = (undefined4 *)(unaff_EBP + -0x40);
    puStack_f0 = (undefined *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_f4 = 0x777c52;
    iStack_f4 = FUN_00449749();
    uStack_f8 = 0x777c5b;
    iStack_fc = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_f8;
    iStack_100 = 0x777c67;
    FUN_00448a17();
    iStack_fc = *(int *)(unaff_EBP + -0x18) + -0xe;
    iStack_100 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_104 = 0x777c7e;
    piStack_108 = (int *)FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_104;
    puStack_10c = (undefined *)0x777c8a;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_108 = (int *)0x777c96;
    FUN_0044974c();
    piStack_108 = (int *)0x777c9d;
    iStack_100 = FUN_00448ebb();
    iStack_100 = 0xdd - iStack_100;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_104 = 0x777cb1;
    FUN_004115d9();
    uStack_104 = 0x777cb8;
    FUN_00448e3a();
    puStack_ec = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_f0 = (undefined *)0x777cc5;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      puStack_f0 = (undefined *)0x777cd0;
      FUN_00878dfb();
    }
    puStack_ec = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_f0 = (undefined *)0x777cdd;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      puStack_f0 = (undefined *)0x777ce8;
      FUN_00878dfb();
    }
    puStack_ec = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_f0 = (undefined *)0x777cf5;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      puStack_f0 = (undefined *)0x777d00;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 10;
    puStack_ec = (undefined4 *)0x3;
    puStack_f0 = (undefined *)0xff;
    iStack_f4 = 0x777d13;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x78);
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piVar4 == (int *)0x0) {
      puStack_ec = (undefined4 *)0x80004003;
      puStack_f0 = (undefined *)0x777d2e;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    iStack_fc = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_f0 = *(undefined **)(unaff_EBP + -0x38);
    puStack_ec = *(undefined4 **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x18);
    uStack_104 = 6;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    puStack_10c = (undefined *)0x777d52;
    piStack_108 = piVar4;
    iStack_100 = iVar3;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_10c = &DAT_00963cc8;
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_118 = 0x777d64;
      iStack_114 = iVar1;
      FUN_00878e09();
    }
    puStack_10c = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_110 = 0x777d71;
    puStack_10c = (undefined *)FUN_00402bc3();
    if ((int)puStack_10c < 0) {
      uStack_110 = 0x777d7c;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x777d8c;
      FUN_00878dfb();
    }
    puStack_10c = (undefined *)0x777d94;
    iVar1 = FUN_0040e53d();
    puStack_10c = (undefined *)0x3;
    uStack_110 = 0xff;
    *(int *)(unaff_EBP + -0x18) = iVar3 + 10 + iVar1;
    iStack_114 = 0x777daa;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x7c);
    piStack_128 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piStack_128 == (int *)0x0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x777dc5;
      FUN_00878dfb();
      piStack_128 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_128;
    uStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_120 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_114 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_124 = 6;
    *(int **)(unaff_EBP + -0x14) = piStack_128;
    puStack_10c = *(undefined **)(unaff_EBP + -0x34);
    puStack_12c = (undefined *)0x777de8;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_12c = &DAT_00963cc8;
      uStack_130 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_138 = 0x777dfa;
      iStack_134 = iVar1;
      FUN_00878e09();
    }
    puStack_12c = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_130 = 0x777e07;
    puStack_12c = (undefined *)FUN_00402bc3();
    if ((int)puStack_12c < 0) {
      uStack_130 = 0x777e12;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x7c) == 0) {
      puStack_12c = (undefined *)0x80004003;
      uStack_130 = 0x777e22;
      FUN_00878dfb();
    }
    puStack_12c = (undefined *)0x777e2a;
    iVar1 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + iVar1;
    puStack_12c = (undefined *)0x3;
    uStack_130 = 0xff;
    iStack_134 = 0x777e3c;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x80);
    piStack_148 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piStack_148 == (int *)0x0) {
      puStack_12c = (undefined *)0x80004003;
      uStack_130 = 0x777e5a;
      FUN_00878dfb();
      piStack_148 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_148;
    uStack_13c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_138 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_130 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_12c = *(undefined **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x18);
    uStack_144 = 6;
    *(int **)(unaff_EBP + -0x14) = piStack_148;
    iStack_140 = iVar3;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      piStack_150 = *(int **)(unaff_EBP + -0x14);
      puStack_158 = (undefined1 *)0x777e90;
      iStack_154 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_150 = (int *)0x777e9d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_150 = (int *)0x777ea8;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = iVar3 + 4;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x90;
    do {
      if (*(int *)(extraout_ECX + 0x74) == *(int *)(unaff_EBP + -0x10)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_150 = (int *)0x777ed6;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        piStack_150 = (int *)0x12;
        iStack_154 = 0xdd;
        puStack_158 = *(undefined1 **)(unaff_EBP + -0x18);
        iVar1 = (**(code **)(*piVar4 + 0x8c))(piVar4,6);
        if (iVar1 < 0) {
          puStack_158 = (undefined1 *)0x777f03;
          iStack_154 = iVar1;
          piStack_150 = piVar4;
          FUN_00878e09();
        }
        pIVar6 = *(IBinding **)(unaff_EBP + -0x28);
      }
      else {
        pIVar6 = *(IBinding **)(unaff_EBP + -0x24);
      }
      piStack_150 = (int *)0x777f13;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),pIVar6);
      piStack_150 = (int *)0x777f21;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_150 = (int *)0x777f2e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0087a1b0();
      piStack_150 = (int *)(unaff_EBP + -0x40);
      iStack_154 = 0x777f4c;
      iStack_154 = FUN_00449749();
      puStack_158 = (undefined1 *)&piStack_148;
      uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_158;
      FUN_004033a1(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar5 = 0x1a;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004115d9(0x1a,uVar2);
      FUN_00448e3a(uVar5,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_150 = (int *)0x777f87;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x777f92;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_150 = (int *)0x777f9f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x777faa;
        FUN_00878dfb();
      }
      piStack_150 = (int *)0x777fb3;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_150 = (int *)0x777fc3;
      FUN_00403191();
      piStack_150 = (int *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_154 = 0x777fda;
      iStack_154 = FUN_00449749();
      puStack_158 = (undefined1 *)0x777fe5;
      uVar2 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_158;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar5 = 0x42;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_004115d9(0x42,uVar2);
      FUN_00448e3a(uVar5,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_150 = (int *)0x778019;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x778024;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_150 = (int *)0x778031;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x77803c;
        FUN_00878dfb();
      }
      piStack_150 = (int *)0x778048;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_150 = (int *)0x77805b;
      iStack_154 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x30) = &piStack_150;
      puStack_158 = (undefined1 *)0x778067;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_154 = 0x778073;
      FUN_0044974c();
      iStack_154 = 0x77807a;
      iVar1 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_150 = (int *)0x778091;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_150 = (int *)0x77809c;
        FUN_00878dfb();
      }
      if (((char *)**(undefined4 **)(unaff_EBP + -0x14) == (char *)0x0) ||
         (*(char *)**(undefined4 **)(unaff_EBP + -0x14) == '\0')) {
        piStack_150 = (int *)0x7780c3;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
                   *(IBinding **)(*(int *)(extraout_ECX + 0x8c) + 0x83c));
      }
      piStack_150 = (int *)0x7780cd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      piStack_150 = (int *)(unaff_EBP + -0x50);
      iStack_154 = 0x7780d7;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_150 = (int *)0x7780e3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_150 = (int *)0x7780f1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      piStack_150 = (int *)(unaff_EBP + -0x60);
      iStack_154 = 0x7780fb;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_150 = (int *)0x778107;
        FUN_00878dfb();
      }
      piStack_150 = (int *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_154 = 0x77811b;
      iStack_154 = FUN_00449749();
      puStack_158 = (undefined1 *)0x778127;
      uVar2 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_158;
      puStack_158 = extraout_ECX_00;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      iVar1 = (0x56U - iVar1 >> 1) + 0x92;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_004115d9(iVar1,uVar2);
      FUN_00448e3a(iVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_150 = (int *)0x77815d;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x778168;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_150 = (int *)0x778175;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_150 = (int *)0x778180;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x12;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) + -1 < 5);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_150 = (int *)0x7781b9;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      piStack_150 = (int *)0x7781ca;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_150 = (int *)0x7781db;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      piStack_150 = (int *)0x7781ec;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


