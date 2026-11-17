/* FUN_00433270 - 0x00433270 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00433270(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  bool bVar10;
  float10 fVar11;
  int iVar12;
  int iVar13;
  int iStack_160;
  undefined4 *puStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  int *piStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  undefined *puStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int *piStack_ec;
  undefined *puStack_e8;
  int *piStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 *puStack_b0;
  
  FUN_00879bb8();
  piVar7 = (int *)(extraout_ECX + 4);
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  puStack_b0 = (undefined4 *)0x0;
  iStack_b4 = 0x433293;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') {
    puStack_b0 = &DAT_00980690;
    iStack_b4 = 0x4332a9;
    FUN_00403191();
    puStack_b0 = (undefined4 *)0x3;
    iStack_b4 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_b8 = 0x4332b7;
    FUN_004031b7();
    iVar4 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x4332c9;
      FUN_00878dfb();
    }
    bVar10 = DAT_0097c1ac == 0;
    *(int *)(unaff_EBP + -0x24) = *piVar7;
    if (bVar10) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x4332e0;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x28) = DAT_0097c1ac;
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_b4 = unaff_EBP + -0x4c;
    iStack_b8 = 0x4332f8;
    iStack_b8 = FUN_004320e3();
    iStack_b8 = iStack_b8 + -10;
    uStack_bc = 0;
    piStack_c0 = (int *)0x0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    iStack_cc = unaff_EBP + -0x10;
    uStack_d0 = 0x43330c;
    FUN_0042a39f();
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_b4 = 0x433319;
    puStack_b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b0 < 0) {
      iStack_b4 = 0x433324;
      FUN_00878dfb();
    }
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b4 = 0x433331;
    puStack_b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b0 < 0) {
      iStack_b4 = 0x43333c;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    puStack_b0 = (undefined4 *)0x3b1;
    iStack_b4 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b8 = 0x433356;
    piVar3 = (int *)FUN_00679e4e();
    puVar5 = (undefined4 *)*piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (puVar5 == (undefined4 *)0x0) {
      iStack_b8 = 0;
    }
    else {
      iStack_b8 = *puVar5;
    }
    puStack_b0 = (undefined4 *)0x0;
    iStack_b4 = unaff_EBP + -0x20;
    uStack_bc = 0x433371;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_b0 = (undefined4 *)0x433380;
    FUN_00402fa6();
    if (*piVar7 == 0) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x43338e;
      FUN_00878dfb();
    }
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x9c);
    iStack_b4 = 0x43339c;
    FUN_004308ad();
    puStack_b0 = (undefined4 *)0x0;
    iStack_b4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_b8 = 0x4333a9;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      puStack_b0 = (undefined4 *)(unaff_EBP + -0x28);
      iStack_b4 = 0x4333bf;
      puStack_b0 = (undefined4 *)FUN_0041a4e5();
      if (((int)puStack_b0 < 0) && (puStack_b0 != (undefined4 *)0x80004002)) {
        iStack_b4 = 0x4333d0;
        FUN_00878dfb();
      }
    }
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b4 = 0x4333e0;
    puStack_b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b0 < 0) {
      iStack_b4 = 0x4333eb;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x4333fa;
      FUN_00878dfb();
    }
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x5c);
    iStack_b4 = 0x433406;
    FUN_004308ad();
    puStack_b0 = (undefined4 *)0x0;
    iStack_b4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_b8 = 0x433413;
    iVar4 = FUN_004032b4();
    puStack_b0 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b4 = 0x433422;
    puStack_b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b0 < 0) {
      iStack_b4 = 0x43342d;
      FUN_00878dfb();
    }
    if (iVar4 != 0) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_b0 = (undefined4 *)0x80004003;
        iStack_b4 = 0x433441;
        FUN_00878dfb();
      }
      puStack_b0 = (undefined4 *)(unaff_EBP + -0x5c);
      iStack_b4 = 0x43344d;
      puVar5 = (undefined4 *)FUN_004308ad();
      piVar7 = *(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (piVar7 == (int *)0x0) {
        puStack_b0 = (undefined4 *)0x80004003;
        iStack_b4 = 0x433464;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + -0x20);
      }
      iVar4 = *piVar7;
      uStack_bc = *puVar5;
      iStack_b8 = puVar5[1];
      iStack_b4 = puVar5[2];
      *(int **)(unaff_EBP + -0x24) = piVar7;
      puStack_b0 = (undefined4 *)puVar5[3];
      uStack_c4 = 0x433479;
      piStack_c0 = piVar7;
      iVar4 = (**(code **)(iVar4 + 100))();
      if (iVar4 < 0) {
        puStack_b0 = (undefined4 *)&DAT_00963de8;
        iStack_b4 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_bc = 0x43348b;
        iStack_b8 = iVar4;
        FUN_00878e09();
      }
      puStack_b0 = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_b4 = 0x433498;
      puStack_b0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_b0 < 0) {
        iStack_b4 = 0x4334a3;
        FUN_00878dfb();
      }
    }
    puStack_b0 = &DAT_00980690;
    iStack_b4 = 0x4334ac;
    FUN_00403191();
    puStack_b0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_b4 = 0x4334b9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x4334ce;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_b0 = (undefined4 *)0x80004003;
        iStack_b4 = 0x4334da;
        FUN_00878dfb();
      }
    }
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_b0 = (undefined4 *)0x80004003;
      iStack_b4 = 0x4334e9;
      FUN_00878dfb();
    }
    piVar7 = *(int **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x24) = piVar7;
    puStack_b0 = (undefined4 *)0x4334f7;
    uVar6 = FUN_00424f08();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    puStack_b0 = (undefined4 *)0x433501;
    uStack_d4 = FUN_00424ee1();
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x44);
    puStack_b0 = *(undefined4 **)(unaff_EBP + -0x40);
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_cc = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_c4 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x24);
    piStack_c0 = *(int **)(unaff_EBP + -0x30);
    uStack_e0 = (double)CONCAT44(0x433528,(undefined4)uStack_e0);
    iVar4 = (**(code **)(*piVar7 + 0x90))();
    if (iVar4 < 0) {
      uStack_e0 = (double)CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x24));
      puStack_e8 = (undefined *)0x43353a;
      piStack_e4 = (int *)iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_e0 = (double)CONCAT44(unaff_EBP + -0x3c,0x433547);
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      uStack_e0 = (double)CONCAT44(iVar4,0x433552);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_e0 = (double)CONCAT44(unaff_EBP + -0x4c,0x43355f);
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      uStack_e0 = (double)CONCAT44(iVar4,0x43356a);
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      uStack_e0 = -3.47731472027109e-310;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      uStack_e0 = -3.47731472027169e-310;
      FUN_00878dfb();
    }
    piVar7 = *(int **)(unaff_EBP + -0x20);
    uStack_e0 = (double)CONCAT44(0x433592,(undefined4)uStack_e0);
    fVar11 = (float10)FUN_0042fae2();
    uStack_e0 = (double)fVar11;
    puStack_e8 = (undefined *)0x4335a0;
    piStack_e4 = piVar7;
    iStack_f0 = (**(code **)(*piVar7 + 0x80))();
    if (iStack_f0 < 0) {
      puStack_e8 = &DAT_00963de8;
      uStack_f4 = 0x4335b0;
      piStack_ec = piVar7;
      FUN_00878e09();
    }
    puStack_e8 = (undefined *)0x1;
    piStack_ec = *(int **)(unaff_EBP + -0x20);
    iStack_f0 = 0x4335bd;
    FUN_0040ee87();
    piStack_f8 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piStack_f8 == (int *)0x0) {
      puStack_e8 = (undefined *)0x80004003;
      piStack_ec = (int *)0x4335ce;
      FUN_00878dfb();
      piStack_f8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piStack_f8;
    uStack_f4 = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_f0 = *(undefined4 *)(unaff_EBP + -0x38);
    piStack_ec = *(int **)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x1c) = piStack_f8;
    puStack_e8 = *(undefined **)(unaff_EBP + -0x30);
    puStack_fc = (undefined *)0x4335e6;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      puStack_fc = &DAT_00963de8;
      piStack_100 = *(int **)(unaff_EBP + -0x1c);
      piStack_108 = (int *)0x4335f8;
      puStack_104 = (undefined4 *)iVar4;
      FUN_00878e09();
    }
    puStack_fc = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_100 = (int *)0x433605;
    puStack_fc = (undefined *)FUN_00402bc3();
    if ((int)puStack_fc < 0) {
      piStack_100 = (int *)0x433610;
      FUN_00878dfb();
    }
    piVar7 = (int *)(*(int *)(unaff_EBP + -0x2c) + 4);
    if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 4) == 0) {
      puStack_fc = (undefined *)0x80004003;
      piStack_100 = (int *)0x433626;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x1c) = *piVar7;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_fc = (undefined *)0x80004003;
      piStack_100 = (int *)0x43363b;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    puStack_fc = (undefined *)0x433646;
    puStack_fc = (undefined *)FUN_0043210d();
    puStack_104 = (undefined4 *)0x433650;
    piStack_100 = piVar3;
    iVar4 = (**(code **)(*piVar3 + 0xd8))();
    if (iVar4 < 0) {
      puStack_104 = (undefined4 *)&DAT_00963df8;
      uStack_110 = 0x433660;
      iStack_10c = iVar4;
      piStack_108 = piVar3;
      FUN_00878e09();
    }
    puStack_104 = &DAT_00980690;
    piStack_108 = (int *)0x433669;
    FUN_00403191();
    puStack_104 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_108 = (int *)0x433676;
    FUN_00403191();
    iVar4 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (iVar4 == 0) {
      puStack_104 = (undefined4 *)0x80004003;
      piStack_108 = (int *)0x433689;
      FUN_00878dfb();
    }
    puStack_104 = (undefined4 *)(unaff_EBP + -0x14);
    piStack_108 = (int *)0x433696;
    piVar7 = (int *)FUN_004113e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_104 = (undefined4 *)0x80004003;
      piStack_108 = (int *)0x4336ac;
      FUN_00878dfb();
    }
    puStack_104 = (undefined4 *)(unaff_EBP + -0x24);
    piStack_108 = (int *)0x4336b8;
    piStack_12c = (int *)FUN_004113e5();
    iVar4 = *piStack_12c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar4 == 0) {
      puStack_104 = (undefined4 *)0x80004003;
      piStack_108 = (int *)0x4336cd;
      FUN_00878dfb();
    }
    piStack_12c = (int *)*piStack_12c;
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_10c = *(undefined4 *)(unaff_EBP + -0x48);
    piStack_108 = *(int **)(unaff_EBP + -0x44);
    puStack_104 = *(undefined4 **)(unaff_EBP + -0x40);
    iStack_128 = (uint)(*piVar7 != 0) * *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x14);
    iVar4 = *piStack_12c;
    uStack_120 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_11c = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_124 = 0;
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x1c) = piStack_12c;
    uStack_114 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_130 = (undefined4 *)0x433706;
    iVar4 = (**(code **)(iVar4 + 0x90))();
    if (iVar4 < 0) {
      puStack_130 = (undefined4 *)&DAT_00963de8;
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_13c = 0x433718;
      iStack_138 = iVar4;
      FUN_00878e09();
    }
    puStack_130 = (undefined4 *)0x433720;
    FUN_004125d9();
    puStack_130 = (undefined4 *)0x433728;
    FUN_004125d9();
    puStack_130 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_134 = 0x433735;
    puStack_130 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_130 < 0) {
      iStack_134 = 0x433740;
      FUN_00878dfb();
    }
    puStack_130 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_134 = 0x43374d;
    puStack_130 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_130 < 0) {
      iStack_134 = 0x433758;
      FUN_00878dfb();
    }
    puStack_130 = &DAT_00980690;
    iStack_134 = 0x433761;
    FUN_00403191();
    iStack_134 = *(int *)(unaff_EBP + 8) + *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x10);
    puStack_130 = (undefined4 *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_138 = 0x433779;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_130 = (undefined4 *)0x80004003;
      iStack_134 = 0x43378d;
      FUN_00878dfb();
    }
    puStack_130 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_134 = 0x433799;
    piStack_158 = (int *)FUN_004113e5();
    iVar4 = *piStack_158;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar4 == 0) {
      puStack_130 = (undefined4 *)0x80004003;
      iStack_134 = 0x4337ae;
      FUN_00878dfb();
    }
    piStack_158 = (int *)*piStack_158;
    uStack_13c = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_138 = *(undefined4 *)(unaff_EBP + -0x48);
    iVar4 = *piStack_158;
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x44);
    puStack_130 = *(undefined4 **)(unaff_EBP + -0x40);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_148 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_150 = 0;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_154 = 0;
    *(int **)(unaff_EBP + -0x14) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_15c = (undefined4 *)0x4337d8;
    iVar4 = (**(code **)(iVar4 + 0x90))();
    if (iVar4 < 0) {
      puStack_15c = (undefined4 *)&DAT_00963de8;
      iStack_160 = *(int *)(unaff_EBP + -0x14);
      FUN_00878e09(iVar4);
    }
    puStack_15c = (undefined4 *)0x4337f2;
    FUN_004125d9();
    puStack_15c = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_160 = 0x4337ff;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x43380c;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_160 = 0x433819;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x433824;
      FUN_00878dfb();
    }
    puStack_15c = &DAT_00980690;
    iStack_160 = 0x43382d;
    FUN_00403191();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_160 = 0x43383a;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_15c = (undefined4 *)0x80004003;
      iStack_160 = 0x43384d;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x4c);
    iStack_160 = unaff_EBP + -0x3c;
    FUN_00425139(0);
    puStack_15c = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_160 = 0x43386b;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x433876;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_160 = 0x433883;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x43388e;
      FUN_00878dfb();
    }
    puStack_15c = &DAT_00980690;
    iStack_160 = 0x433897;
    FUN_00424aee();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_160 = 0x4338a4;
    FUN_00424aee();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_160 = 0x4338b1;
    FUN_00424aee();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_160 = 0x4338c1;
    FUN_00424aee();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_160 = 0x4338ce;
    FUN_00424aee();
    puStack_15c = (undefined4 *)0x3;
    iStack_160 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004295f1();
    iVar1 = *(int *)(unaff_EBP + -0x2c);
    puStack_15c = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_160 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00424e27();
    puVar5 = (undefined4 *)FUN_00425067();
    uVar6 = *puVar5;
    puStack_15c = (undefined4 *)(unaff_EBP + -0x5c);
    iStack_160 = unaff_EBP + -0x6c;
    iVar4 = unaff_EBP + -0x7c;
    iVar13 = unaff_EBP + -0x8c;
    iVar9 = unaff_EBP + -0x4c;
    iVar12 = unaff_EBP + -0xac;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00424e27(iVar12,uVar6,iVar9,iVar13,iVar4);
    FUN_004250ac(iVar12,uVar6,iVar9,iVar13,iVar4);
    puStack_15c = (undefined4 *)(unaff_EBP + -0xac);
    iStack_160 = 0x43393b;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x433946;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)0x43394e;
    FUN_004125e6();
    puStack_15c = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_160 = 0x43395b;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x433966;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_160 = 0x433973;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x43397e;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_160 = 0x43398e;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x433999;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_160 = 0x4339a6;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x4339b1;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_160 = 0x4339be;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      iStack_160 = 0x4339c9;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_160 = 0x4339d6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_160 = 0x4339e1;
      puStack_15c = (undefined4 *)iVar4;
      FUN_00878dfb();
      puStack_15c = (undefined4 *)extraout_ECX_00;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      puStack_15c = (undefined4 *)(unaff_EBP + -0x14);
      iStack_160 = 0x4339f6;
      FUN_00424e27();
      iStack_160 = 0x4339fd;
      FUN_0042fb5e();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_15c = (undefined4 *)0x433a08;
      FUN_00424df4();
      puStack_15c = (undefined4 *)0x433a0f;
      iVar4 = FUN_00424ee1();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_15c = (undefined4 *)0x433a1d;
      FUN_004125d9();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x14);
      iStack_160 = 0x433a29;
      FUN_00424e27();
      iStack_160 = 0x433a30;
      FUN_0042fb5e();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      puStack_15c = (undefined4 *)0x433a3b;
      FUN_00424df4();
      puStack_15c = (undefined4 *)0x433a42;
      uVar6 = FUN_00424f08();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_15c = (undefined4 *)0x433a50;
      FUN_004125d9();
      puStack_15c = &DAT_00980690;
      iStack_160 = 0x433a59;
      FUN_00424aee();
      puStack_15c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_160 = 0x433a66;
      FUN_00424aee();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_160 = 0x433a76;
      FUN_00424e27();
      iStack_160 = 0x433a7d;
      uVar8 = FUN_0042fb5e();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
      puStack_15c = (undefined4 *)(unaff_EBP + -0x6c);
      iStack_160 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00424e27(uVar6);
      iVar9 = FUN_0042fb0a();
      iVar9 = iVar9 + iVar4;
      FUN_00424df4(iVar9);
      FUN_00424f2f(iVar9,uVar6);
      puStack_15c = (undefined4 *)0x433ab6;
      FUN_004125d9();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_160 = 0x433ac3;
      puStack_15c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_15c < 0) {
        iStack_160 = 0x433ace;
        FUN_00878dfb();
      }
      puStack_15c = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_160 = 0x433adb;
      puStack_15c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_15c < 0) {
        iStack_160 = 0x433ae6;
        FUN_00878dfb();
      }
      puStack_15c = &DAT_00980690;
      iStack_160 = 0x433aef;
      FUN_00424aee();
      puStack_15c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_160 = 0x433afc;
      FUN_00424aee();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_160 = 0x433b0c;
      FUN_00424e27();
      iStack_160 = 0x433b13;
      FUN_0042bc90();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x6c);
      iStack_160 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00424e27();
      uVar6 = FUN_0042fb34();
      FUN_00424e27(uVar6);
      iVar4 = FUN_0042fb0a();
      iVar4 = -iVar4;
      FUN_00424df4(iVar4);
      FUN_00424f2f(iVar4,uVar6);
      puStack_15c = (undefined4 *)0x433b59;
      FUN_004125d9();
      puStack_15c = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_160 = 0x433b66;
      puStack_15c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_15c < 0) {
        iStack_160 = 0x433b71;
        FUN_00878dfb();
      }
      puStack_15c = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_160 = 0x433b7e;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_160 = 0x433b89;
        puStack_15c = (undefined4 *)iVar4;
        FUN_00878dfb();
        puStack_15c = (undefined4 *)extraout_ECX_01;
      }
    }
    iVar4 = *(int *)(unaff_EBP + -0x2c);
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
    *(int **)(unaff_EBP + -0x14) = &iStack_160;
    iStack_160 = (int)puStack_15c;
    puStack_15c = (undefined4 *)uVar6;
    FUN_0041160e(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e82();
    FUN_00427b38();
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(unaff_EBP + 8);
    puStack_15c = (undefined4 *)0x433bbc;
    FUN_004125d9();
    puStack_15c = (undefined4 *)0x433bc4;
    FUN_004125d9();
    puStack_15c = (undefined4 *)0x433bcc;
    FUN_00412600();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


