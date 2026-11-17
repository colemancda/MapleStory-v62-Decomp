/* FUN_007deff7 - 0x007deff7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007deff7(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  undefined1 *puStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  int *piStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  
  FUN_00879bb8();
  puStack_a8 = (undefined4 *)0x3af;
  piStack_ac = (int *)(unaff_EBP + -0x14);
  uStack_b0 = 0x7df01f;
  puVar4 = (undefined4 *)FUN_00679d86();
  uStack_b0 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_a8 = (undefined4 *)0x0;
  piVar1 = (int *)(extraout_ECX + 0x60);
  uStack_b4 = 0x7df031;
  piStack_ac = piVar1;
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_a8 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    piStack_ac = (int *)0x7df048;
    FUN_00403384();
  }
  puStack_a8 = &DAT_00980690;
  piStack_ac = (int *)0x7df057;
  FUN_00403191();
  puStack_a8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_ac = (int *)0x7df067;
  FUN_00403191();
  iVar5 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar5 == 0) {
    puStack_a8 = (undefined4 *)0x80004003;
    piStack_ac = (int *)0x7df07a;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)*piVar1;
  uStack_c8 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar5 = *piStack_d0;
  piStack_ac = *(int **)(unaff_EBP + -0x4c);
  puStack_a8 = *(undefined4 **)(unaff_EBP + -0x48);
  uStack_c4 = *(undefined4 *)(unaff_EBP + -100);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_cc = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + -0x14) = piStack_d0;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_d4 = (undefined *)0x7df0a4;
  iVar5 = (**(code **)(iVar5 + 0x2c))();
  if (iVar5 < 0) {
    puStack_d4 = &DAT_00963cc8;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_e0 = 0x7df0b6;
    iStack_dc = iVar5;
    FUN_00878e09();
  }
  puStack_d4 = (undefined *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_d8 = 0x7df0c3;
  puStack_d4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x7df0ce;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d4 = (undefined *)(unaff_EBP + -0x54);
  uStack_d8 = 0x7df0db;
  puStack_d4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x7df0e6;
    FUN_00878dfb();
  }
  piVar1 = (int *)(extraout_ECX + 0x60);
  if (*(int *)(extraout_ECX + 0x60) == 0) {
    puStack_d4 = (undefined *)0x80004003;
    uStack_d8 = 0x7df0f9;
    FUN_00878dfb();
  }
  uStack_d8 = *(undefined4 *)(extraout_ECX + 0x20);
  iStack_dc = *(undefined4 *)(extraout_ECX + 0x1c);
  piVar2 = (int *)*piVar1;
  puStack_d4 = (undefined *)0xffffff;
  uStack_e0 = 0;
  uStack_e4 = 0;
  puStack_ec = (undefined4 *)0x7df115;
  piStack_e8 = piVar2;
  iVar5 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar5 < 0) {
    puStack_ec = (undefined4 *)&DAT_00963cc8;
    iStack_f8 = 0x7df125;
    iStack_f4 = iVar5;
    piStack_f0 = piVar2;
    FUN_00878e09();
  }
  puStack_ec = &DAT_00980690;
  piStack_f0 = (int *)0x7df133;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_f0 = (int *)0x7df143;
  FUN_00403191();
  puStack_ec = (undefined4 *)0x0;
  piStack_f0 = (int *)0x0;
  iStack_f4 = unaff_EBP + -100;
  iStack_f8 = unaff_EBP + -0x54;
  puStack_104 = (undefined1 *)&uStack_fc;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_fc;
  iStack_100 = 0x9fd;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_108 = (int *)0x7df169;
  FUN_00679e4e();
  iStack_100 = unaff_EBP + -0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_104 = (undefined1 *)0x7df179;
  FUN_00405a1d();
  puStack_104 = (undefined1 *)0x7df180;
  FUN_00402660();
  puStack_104 = (undefined1 *)0x7df187;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_f4 = 0x7df192;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar5 != 0) {
    puStack_ec = (undefined4 *)(unaff_EBP + -0x44);
    piStack_f0 = (int *)0x7df1a8;
    puStack_ec = (undefined4 *)FUN_0041a581();
    if (((int)puStack_ec < 0) && (puStack_ec != (undefined4 *)0x80004002)) {
      piStack_f0 = (int *)0x7df1b9;
      FUN_00878dfb();
    }
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_f0 = (int *)0x7df1c9;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    piStack_f0 = (int *)0x7df1d4;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_f0 = (int *)0x7df1e1;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    piStack_f0 = (int *)0x7df1ec;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_f0 = (int *)0x7df1f9;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    piStack_f0 = (int *)0x7df204;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)0x3;
  piStack_f0 = (int *)0xff;
  iStack_f4 = 0x7df213;
  FUN_004031b7();
  iVar5 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar5 == 0) {
    puStack_ec = (undefined4 *)0x80004003;
    piStack_f0 = (int *)0x7df225;
    FUN_00878dfb();
  }
  piStack_108 = (int *)*piVar1;
  iVar5 = *piStack_108;
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x74);
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x70);
  piStack_f0 = *(int **)(unaff_EBP + -0x6c);
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x68);
  iStack_100 = 0;
  puStack_104 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x14) = piStack_108;
  puStack_10c = (undefined4 *)0x7df246;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    puStack_10c = (undefined4 *)&DAT_00963cc8;
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_118 = 0x7df258;
    iStack_114 = iVar5;
    FUN_00878e09();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_110 = 0x7df265;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x7df270;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < iVar5) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0x17;
    do {
      puStack_10c = &DAT_00980690;
      uStack_110 = 0x7df29b;
      FUN_00403191();
      puStack_10c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_110 = 0x7df2a8;
      FUN_00403191();
      puStack_10c = (undefined4 *)0x0;
      uStack_110 = 0;
      iStack_114 = unaff_EBP + -0x84;
      iStack_118 = unaff_EBP + -0x74;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_11c;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00679e4e(&uStack_11c,0x9fe);
      iVar5 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00405a1d(iVar5);
      FUN_00402660();
      FUN_00404a02(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_114 = 0x7df2f8;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
      puStack_10c = (undefined4 *)(unaff_EBP + -0x30);
      uStack_110 = 0x7df307;
      puStack_10c = (undefined4 *)FUN_0041a581();
      if (((int)puStack_10c < 0) && (puStack_10c != (undefined4 *)0x80004002)) {
        uStack_110 = 0x7df318;
        FUN_00878dfb();
      }
      puStack_10c = (undefined4 *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_110 = 0x7df328;
      puStack_10c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x7df333;
        FUN_00878dfb();
      }
      puStack_10c = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_110 = 0x7df340;
      puStack_10c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x7df34b;
        FUN_00878dfb();
      }
      puStack_10c = (undefined4 *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_110 = 0x7df35b;
      puStack_10c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x7df366;
        FUN_00878dfb();
      }
      puStack_10c = (undefined4 *)0x3;
      uStack_110 = 0xff;
      iStack_114 = 0x7df375;
      FUN_004031b7();
      iVar5 = *(int *)(extraout_ECX + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (iVar5 == 0) {
        puStack_10c = (undefined4 *)0x80004003;
        uStack_110 = 0x7df388;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(extraout_ECX + 0x60);
      iVar5 = *piVar1;
      uStack_11c = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_118 = *(undefined4 *)(unaff_EBP + -0x40);
      iStack_114 = *(int *)(unaff_EBP + -0x3c);
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      puStack_10c = *(undefined4 **)(unaff_EBP + -0x34);
      iVar5 = (**(code **)(iVar5 + 0x80))(piVar1,3,*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar5 < 0) {
        puStack_10c = (undefined4 *)&DAT_00963cc8;
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_118 = 0x7df3bd;
        iStack_114 = iVar5;
        FUN_00878e09();
      }
      puStack_10c = (undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_110 = 0x7df3ca;
      puStack_10c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x7df3d5;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 0xf;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(extraout_ECX + 0xb4));
  }
  puStack_10c = &DAT_00980690;
  uStack_110 = 0x7df3fe;
  FUN_00403191();
  puStack_10c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_110 = 0x7df40b;
  FUN_00403191();
  puStack_10c = (undefined4 *)0x0;
  uStack_110 = 0;
  iStack_114 = unaff_EBP + -0x84;
  iStack_118 = unaff_EBP + -0x40;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_11c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&uStack_11c,0x9ff);
  iVar5 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_114 = 0x7df45b;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
  puStack_10c = (undefined4 *)(unaff_EBP + -0x10);
  uStack_110 = 0x7df46a;
  puStack_10c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_10c < 0) && (puStack_10c != (undefined4 *)0x80004002)) {
    uStack_110 = 0x7df47b;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_110 = 0x7df48b;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x7df496;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_110 = 0x7df4a3;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x7df4ae;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_110 = 0x7df4be;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x7df4c9;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)0x3;
  uStack_110 = 0xff;
  iStack_114 = 0x7df4d8;
  FUN_004031b7();
  iVar5 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar5 == 0) {
    puStack_10c = (undefined4 *)0x80004003;
    uStack_110 = 0x7df4eb;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(extraout_ECX + 0xb4);
  piVar1 = *(int **)(extraout_ECX + 0x60);
  iVar3 = *piVar1;
  uStack_11c = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_118 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_114 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_10c = *(undefined4 **)(unaff_EBP + -0x34);
  iVar5 = (**(code **)(iVar3 + 0x80))(piVar1,3,iVar5 * 0xf + 0x17);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  FUN_008180db(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uVar6 = FUN_00679d86(unaff_EBP + -0x10,0x9f9);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00419192(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar5 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00450382(uVar6);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,2000,9,0x18,1,unaff_EBP + -0x28);
  uVar6 = FUN_00679d86(unaff_EBP + -0x10,0x9fa);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00419192(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar5 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00450382(uVar6);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x7d1,9,0x27,1,unaff_EBP + -0x28);
  uVar6 = FUN_00679d86(unaff_EBP + -0x10,0xa02);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00419192(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar5 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00450382(uVar6);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x7d2,9,0x36,1,unaff_EBP + -0x28);
  uVar6 = FUN_00679d86(unaff_EBP + -0x10,0x9fb);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00419192(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar5 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00450382(uVar6);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x7d3,9,0x45,1,unaff_EBP + -0x28);
  uVar6 = FUN_00679d86(unaff_EBP + -0x10,0xb7f);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00419192(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar5 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00450382(uVar6);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x7d6,9,0x54,1,unaff_EBP + -0x28);
  iVar5 = *(int *)(extraout_ECX + 0xb8);
  *(undefined4 *)(unaff_EBP + -0x14) = 99;
  if (iVar5 != 0) {
    uVar6 = FUN_00679d86(unaff_EBP + -0x10,0xa00);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00419192(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00402676();
    iVar5 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar5 = FUN_00450382(uVar6);
    (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x7d4,9,99,1,unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -0x14) = 0x72;
  }
  if (*(int *)(extraout_ECX + 0xbc) != 0) {
    uVar6 = FUN_00679d86(unaff_EBP + -0x10,0xa01);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00419192(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00402676();
    iVar5 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x30) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar5 = FUN_00450382(uVar6);
    (**(code **)(**(int **)(iVar5 + 4) + 0x20))
              (extraout_ECX,0x7d5,9,*(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x28);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


