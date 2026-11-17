/* FUN_0057032e - 0x0057032e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057032e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  int unaff_EBP;
  int *piVar7;
  undefined4 uVar8;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  int *piStack_148;
  int iStack_144;
  int iStack_140;
  undefined *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 *puStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_a0 = 0x570354;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_a0 = 0x570365;
  FUN_00403191();
  iStack_a0 = 0;
  puStack_a4 = (undefined1 *)(unaff_EBP + -0x78);
  iStack_a8 = unaff_EBP + -0x88;
  puStack_b4 = (undefined1 *)&uStack_ac;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_ac;
  puStack_b0 = (undefined1 *)0x52b;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_ac = extraout_ECX_00;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_b4 = (undefined1 *)0x57039e;
  FUN_00405a1d();
  puStack_b4 = (undefined1 *)0x5703a5;
  FUN_00402660();
  puStack_b4 = (undefined1 *)0x5703ac;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_a4 = (undefined1 *)0x5703b7;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar2 != 0) {
    iStack_a0 = 0x5703cd;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_a0 = 0x5703de;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_a0 = 0x5703ee;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x5703f9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a0 = 0x570409;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x570414;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a0 = 0x570421;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x57042c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0xdc;
  do {
    FUN_0087a1b0();
    iStack_a0 = 0;
    iStack_a8 = *(int *)(unaff_EBP + -0x4c);
    uStack_ac = 0x57044d;
    puStack_a4 = &stack0xffffff68;
    iStack_a8 = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_a4;
    uStack_ac = 0x570459;
    FUN_004033a1();
    iStack_a8 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_ac = 0x570469;
    FUN_0040263d();
    uStack_ac = 0x570470;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_a4 = (undefined1 *)0x57047b;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      iStack_a0 = 0x570491;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_a0 = 0x5704a2;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_a0 = 0x5704af;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x5704ba;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    do {
      FUN_0087a1b0();
      iStack_a0 = 0;
      iStack_a8 = *(int *)(unaff_EBP + -0x38);
      uStack_ac = 0x5704d8;
      puStack_a4 = &stack0xffffff68;
      iStack_a8 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_a4;
      uStack_ac = 0x5704e4;
      FUN_004033a1();
      iStack_a8 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_ac = 0x5704f4;
      FUN_0040263d();
      uStack_ac = 0x5704fb;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_a4 = (undefined1 *)0x570506;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
      iStack_a0 = 0x570515;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_a0 = 0x570526;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_a0 = 0x570533;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_a0 = 0x57053e;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
    } while (*(int *)(unaff_EBP + -0x38) < 3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_a0 = 0x570560;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
  } while (*(int *)(unaff_EBP + -0x4c) < 2);
  iStack_a0 = unaff_EBP + -0x14;
  puStack_a4 = (undefined1 *)0x570583;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_a4 = (undefined1 *)*puVar4;
  iStack_a0 = extraout_ECX + 0xd4;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_a8 = 0x570597;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iStack_a0 = 0x5705b3;
  FUN_00403191();
  iStack_a0 = 0xff999999;
  puStack_a4 = (undefined1 *)0xc;
  puStack_b0 = (undefined1 *)&iStack_a8;
  *(int **)(unaff_EBP + -0x20) = &iStack_a8;
  uStack_ac = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x5705d2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_ac = 0x5705e1;
  FUN_0044974c();
  uStack_ac = 0x5705e8;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a0 = 0x5705f5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x570600;
    FUN_00878dfb();
  }
  iStack_a0 = unaff_EBP + -0x14;
  puStack_a4 = (undefined1 *)0x570610;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_a4 = (undefined1 *)*puVar4;
  iStack_a0 = extraout_ECX + 0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_a8 = 0x570624;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iStack_a0 = 0x570640;
  FUN_00403191();
  iStack_a0 = 0xffffffff;
  puStack_a4 = (undefined1 *)0xc;
  puStack_b0 = (undefined1 *)&iStack_a8;
  *(int **)(unaff_EBP + -0x20) = &iStack_a8;
  uStack_ac = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_b4 = (undefined1 *)0x57065c;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_ac = 0x57066b;
  FUN_0044974c();
  uStack_ac = 0x570672;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a0 = 0x57067f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x57068a;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  piVar5 = (int *)(extraout_ECX + 0x68);
  iVar6 = 6;
  do {
    *piVar5 = iVar2;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + 0x280;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_005719cc();
  iStack_a0 = 0x5706b8;
  FUN_005719f2();
  iStack_a0 = 0xff;
  puStack_a4 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_a8;
  uStack_ac = 0;
  puStack_b0 = (undefined1 *)0x5706cb;
  FUN_00424e0a();
  uStack_ac = 0;
  puStack_b0 = (undefined1 *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_b4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00424dd7();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0046fc3e();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00411641();
  puVar4 = (undefined4 *)FUN_0042e3f0();
  iStack_a0 = 0x57072b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xbc),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_a0 = 0x570738;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xbc);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    iStack_a0 = 0x57077e;
    FUN_00878dfb();
  }
  iStack_a8 = *(int *)(unaff_EBP + -0x48);
  puStack_a4 = *(undefined1 **)(unaff_EBP + -0x44);
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_b4 = *(undefined1 **)(unaff_EBP + -0x30);
  puStack_b0 = *(undefined1 **)(unaff_EBP + -0x2c);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x28);
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x10) + 0xbc) + 0x90))();
  uVar3 = 3;
  if ((*(int *)(*(int *)(unaff_EBP + -0x10) + 0xf4) + -1) / 3 + 1 < 2) {
    *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
    *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
    *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
    *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
    *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xbc);
    *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
    if (iVar2 == 0) {
      uStack_cc = 0x5707fa;
      FUN_00878dfb();
    }
    uStack_cc = 0x57080f;
    piVar5 = (int *)FUN_004113e5();
    iVar2 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar2 == 0) {
      uStack_cc = 0x570823;
      FUN_00878dfb();
    }
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_cc = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x28);
    (**(code **)(*(int *)*piVar5 + 0x90))();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar3 = extraout_ECX_01;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      uStack_cc = 0x570859;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      uVar3 = extraout_ECX_02;
    }
  }
  uStack_cc = 0xff;
  uStack_d0 = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_d4;
  uStack_d8 = 0;
  uStack_dc = 0x57086c;
  uStack_d4 = uVar3;
  FUN_00424e0a();
  uStack_d8 = 0;
  uStack_dc = 0;
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00424dd7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0046fc3e();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00411641();
  puVar4 = (undefined4 *)FUN_0042e3f0();
  uStack_cc = 0x5708d2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc4)
             ,(IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_cc = 0x5708df;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc4);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    uStack_cc = 0x570925;
    FUN_00878dfb();
  }
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x28);
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x10) + 0xc4) + 0x90))();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc4);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)FUN_004113e5();
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  (**(code **)(*(int *)*piVar5 + 0x90))();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_124 = 0x5709e6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  uStack_124 = 0xff;
  uStack_128 = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_12c;
  uStack_130 = 0;
  uStack_134 = 0x5709f9;
  FUN_00424e0a();
  uStack_130 = 0;
  uStack_134 = 0;
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_138;
  puStack_13c = (undefined *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_140 = 0x570a0b;
  FUN_00424dd7();
  puStack_13c = (undefined *)0x524;
  iStack_140 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_144 = 0x570a22;
  FUN_00679d86();
  puStack_13c = &DAT_00964310;
  iStack_140 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_144 = 0x570a36;
  FUN_0046fc3e();
  puStack_13c = (undefined *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_140 = 0x570a42;
  iStack_140 = FUN_00411641();
  iStack_144 = unaff_EBP + 8;
  piStack_148 = (int *)0x570a4c;
  puVar4 = (undefined4 *)FUN_0042e3f0();
  uStack_124 = 0x570a5f;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc0)
             ,(IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_124 = 0x570a6c;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc0);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    uStack_124 = 0x570ab2;
    FUN_00878dfb();
  }
  uStack_12c = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_128 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_124 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_13c = *(undefined **)(unaff_EBP + -0x34);
  uStack_138 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_140 = 0xfffffb43;
  piStack_148 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc0);
  uStack_134 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_144 = 0xbc;
  uStack_130 = *(undefined4 *)(unaff_EBP + -0x28);
  piStack_14c = (int *)0x570ae7;
  (**(code **)(*piStack_148 + 0x90))();
  uVar3 = 3;
  if ((*(int *)(*(int *)(unaff_EBP + -0x10) + 0xf4) + -1) / 3 + 1 < 2) {
    *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
    *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
    *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
    *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
    *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc0);
    *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
    if (iVar2 == 0) {
      piStack_14c = (int *)0x80004003;
      uStack_150 = 0x570b2e;
      FUN_00878dfb();
    }
    piStack_14c = (int *)(unaff_EBP + 8);
    uStack_150 = 0x570b43;
    piVar5 = (int *)FUN_004113e5();
    iVar2 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    if (iVar2 == 0) {
      piStack_14c = (int *)0x80004003;
      uStack_150 = 0x570b57;
      FUN_00878dfb();
    }
    uStack_158 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_154 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_150 = *(undefined4 *)(unaff_EBP + -0x40);
    piStack_14c = *(int **)(unaff_EBP + -0x3c);
    uStack_164 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_160 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
    (**(code **)(*(int *)*piVar5 + 0x90))();
    piStack_14c = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar3 = extraout_ECX_03;
    if (piStack_14c != (int *)0x0) {
      uStack_150 = 0x570b8d;
      (**(code **)(*piStack_14c + 8))();
      uVar3 = extraout_ECX_04;
    }
  }
  piStack_14c = (int *)0x0;
  uStack_150 = 0xff;
  uStack_154 = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_158;
  uStack_15c = 0;
  uStack_160 = 0x570ba0;
  uStack_158 = uVar3;
  FUN_00424e0a();
  uStack_15c = 0;
  uStack_160 = 0;
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_164;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00424dd7();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_0046fc3e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_00411641();
  piVar5 = (int *)FUN_0042e3f0();
  piVar5 = (int *)*piVar5;
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 200);
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  if (piVar1 != piVar5) {
    *(int **)(*(int *)(unaff_EBP + -0x10) + 200) = piVar5;
    piStack_14c = (int *)0x570c16;
    FUN_00424ed4();
    if (piVar1 != (int *)0x0) {
      uStack_150 = 0x570c20;
      piStack_14c = piVar1;
      (**(code **)(*piVar1 + 8))();
    }
  }
  piStack_14c = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (piStack_14c != (int *)0x0) {
    uStack_150 = 0x570c31;
    (**(code **)(*piStack_14c + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  piStack_14c = (int *)0x570c3d;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_14c = (int *)0x570c49;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 200);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    piStack_14c = (int *)0x80004003;
    uStack_150 = 0x570c77;
    FUN_00878dfb();
  }
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_150 = *(undefined4 *)(unaff_EBP + -0x40);
  piStack_14c = *(int **)(unaff_EBP + -0x3c);
  uStack_164 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_160 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x10) + 200) + 0x90))();
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_00980698;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0098069c;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980694;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00980698;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 200);
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0098069c;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)FUN_004113e5();
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  (**(code **)(*(int *)*piVar5 + 0x90))();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)FUN_00571f72();
  piVar5 = (int *)*piVar5;
  piVar1 = *(int **)(iVar2 + 0xcc);
  piVar7 = (int *)(iVar2 + 0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  *(int **)(unaff_EBP + 8) = piVar7;
  if (piVar1 != piVar5) {
    *piVar7 = (int)piVar5;
    FUN_00424ed4();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)**(undefined4 **)(unaff_EBP + 8);
  *(int **)(unaff_EBP + -0x14) = (int *)**(undefined4 **)(unaff_EBP + 8);
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    iStack_1d4 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_1dc = 0x570e2b;
    iStack_1d8 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_1d4 = 0x570e38;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570e43;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_1d4 = 0x570e50;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570e5b;
    FUN_00878dfb();
  }
  iStack_1d4 = 0;
  iStack_1d8 = 0x570e66;
  FUN_004031b7();
  iVar2 = **(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (iVar2 == 0) {
    iStack_1d4 = 0x570e7b;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x54;
  iStack_1d8 = 0x570e8a;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_1d4 = 0x570e97;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570ea2;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x570eae;
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  iStack_1d4 = unaff_EBP + -100;
  iStack_1d8 = 0x570ebd;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570ec9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_1d4 = 0x570ed3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x570edd;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570ee9;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1dc = unaff_EBP + 8;
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_1d8 = 0x570f0d;
  iStack_1d8 = FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_1dc;
  FUN_00679e4e(&iStack_1dc,0x1101);
  uVar8 = 0xf;
  uVar3 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_004115d9(10,0xf);
  FUN_00448e3a(uVar3,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_1d4 = 0x570f4c;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_1d4 = 0x570f59;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570f64;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_1d4 = 0x570f71;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1d4 = 0x570f7c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    iStack_1d4 = 0x570f8d;
    (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    iStack_1d4 = 0x570f9e;
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


