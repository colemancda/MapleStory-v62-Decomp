/* FUN_005e93b5 - 0x005e93b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e93b5(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar9;
  int iStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int *piStack_118;
  undefined4 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  undefined *puStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int *piStack_ac;
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(extraout_ECX + 0x94) = *(undefined4 *)(unaff_EBP + 8);
  iStack_54 = 0x5e93da;
  FUN_005ea71a();
  iStack_54 = 0x5e93e4;
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x138) = (int)sVar3;
  iStack_54 = 0x5e93f4;
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x13c) = (int)sVar3;
  *(undefined4 *)(extraout_ECX + 0x130) = *(undefined4 *)(extraout_ECX + 0x138);
  *(undefined4 *)(extraout_ECX + 0x134) = *(undefined4 *)(extraout_ECX + 0x13c);
  iStack_54 = 0x5e941c;
  uVar4 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x9c) = uVar4 & 0xff;
  *(undefined4 *)(unaff_EBP + 8) = DAT_00978138;
  iStack_54 = 0x5e9434;
  sVar3 = FUN_00424561();
  iStack_54 = (int)sVar3;
  uStack_58 = 0x5e9440;
  uVar5 = FUN_004d19c1();
  *(undefined4 *)(unaff_EBP + 8) = uVar5;
  iStack_54 = 0x5e944a;
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x8c) = (int)sVar3;
  iStack_54 = 0x5e945a;
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x90) = (int)sVar3;
  iStack_54 = 0x5e9468;
  uVar5 = FUN_007fbfee();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  iStack_54 = unaff_EBP + -0x14;
  uStack_58 = 0x5e947a;
  iStack_54 = FUN_005ef964();
  if ((iStack_54 < 0) && (iStack_54 != -0x7fffbffe)) {
    uStack_58 = 0x5e948b;
    FUN_00878dfb();
  }
  uStack_5c = -(uint)(extraout_ECX != 0) & extraout_ECX + 4U;
  iStack_54 = extraout_ECX + 0x8c;
  iVar6 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0xc);
  *(uint *)(unaff_EBP + -0x20) = uStack_5c;
  uStack_58 = (uint)(iVar6 != 0);
  uStack_60 = 0x5e94b8;
  FUN_007fc043();
  iStack_54 = *(undefined4 *)(unaff_EBP + 8);
  uStack_58 = *(undefined4 *)(extraout_ECX + 0x9c);
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = *(undefined4 *)(extraout_ECX + 0x134);
  uStack_68 = *(undefined4 *)(extraout_ECX + 0x130);
  uStack_6c = 0;
  puStack_70 = (undefined *)0x5e94d8;
  (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))();
  *(undefined4 *)(extraout_ECX + 0x9c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x140);
  puStack_70 = (undefined *)0x5e94ef;
  uVar4 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x124) = uVar4 & 0xff;
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x10) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    puStack_70 = (undefined *)0x3b1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d86();
    puStack_70 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_70 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      FUN_00403384();
    }
    puStack_70 = (undefined *)0x3b1;
    FUN_00679d86();
    puStack_70 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_70 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      FUN_00403384();
    }
    puStack_70 = (undefined *)0x3b1;
    FUN_00679d86();
    puStack_70 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_70 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      FUN_00403384();
    }
    puStack_70 = (undefined *)0x3;
    FUN_004031b7();
    piVar8 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar8 == (int *)0x0) {
      puStack_70 = (undefined *)0x80004003;
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar6 = *piVar8;
    puStack_70 = *(undefined **)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    iVar6 = (**(code **)(iVar6 + 0xa0))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar8 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar8 == (int *)0x0) {
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + 8);
    }
    iVar6 = *piVar8;
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    iVar6 = (**(code **)(iVar6 + 100))();
    if (iVar6 < 0) {
      piStack_ac = (int *)0x5e9680;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00403191();
    piStack_c8 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piStack_c8 == (int *)0x0) {
      FUN_00878dfb();
      piStack_c8 = *(int **)(unaff_EBP + 8);
    }
    piStack_ac = *(int **)(unaff_EBP + -0x40);
    iVar6 = *piStack_c8;
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_c0 = 0;
    iStack_b4 = *(int *)(unaff_EBP + -0x28);
    iStack_c4 = 5;
    *(int **)(unaff_EBP + -0x1c) = piStack_c8;
    iStack_b0 = *(int *)(unaff_EBP + -0x24);
    piStack_cc = (int *)0x5e96f3;
    iVar6 = (**(code **)(iVar6 + 0x90))();
    if (iVar6 < 0) {
      piStack_cc = (int *)&DAT_00963de8;
      puStack_d0 = *(undefined **)(unaff_EBP + -0x1c);
      puStack_d8 = (undefined4 *)0x5e9705;
      piStack_d4 = (int *)iVar6;
      FUN_00878e09();
    }
    piStack_cc = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_d0 = (undefined *)0x5e9712;
    piStack_cc = (int *)FUN_00402bc3();
    if ((int)piStack_cc < 0) {
      puStack_d0 = (undefined *)0x5e971d;
      FUN_00878dfb();
    }
    piStack_cc = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_d0 = (undefined *)0x5e972a;
    piStack_cc = (int *)FUN_00402bc3();
    if ((int)piStack_cc < 0) {
      puStack_d0 = (undefined *)0x5e9735;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_cc = (int *)0x80004003;
      puStack_d0 = (undefined *)0x5e9745;
      FUN_00878dfb();
    }
    piStack_e0 = *(int **)(unaff_EBP + 0xc);
    piStack_cc = (int *)0x64;
    puStack_d0 = (undefined *)0x0;
    piStack_d4 = (int *)0x64;
    puStack_d8 = (undefined4 *)0x64;
    piStack_dc = *(int **)(unaff_EBP + 8);
    puStack_e4 = (undefined4 *)0x5e975c;
    iVar6 = (**(code **)(*piStack_e0 + 0x98))();
    if (iVar6 < 0) {
      puStack_e4 = (undefined4 *)&DAT_00963de8;
      FUN_00878e09();
    }
    puStack_e4 = &DAT_00980690;
    FUN_00403191();
    puStack_e4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191();
    piVar8 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar8 == (int *)0x0) {
      puStack_e4 = (undefined4 *)0x80004003;
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + 0xc);
    }
    iVar6 = *piVar8;
    puStack_e4 = *(undefined4 **)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    iVar6 = (**(code **)(iVar6 + 0x90))();
    if (iVar6 < 0) {
      puStack_70 = &DAT_00963de8;
      FUN_00878e09();
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_70 = (undefined *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      FUN_00878dfb();
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_70 = (undefined *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      FUN_00878dfb();
    }
    puStack_70 = *(undefined **)(unaff_EBP + 0xc);
    *(undefined ***)(unaff_EBP + -0x1c) = &puStack_70;
    FUN_00434bee();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_005ee6c0();
    FUN_005ea2cf();
    FUN_005ea2b3();
    puStack_70 = (undefined *)0x5e9847;
    FUN_004125d9();
    puStack_70 = (undefined *)0x5e984f;
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_70 = (undefined *)0x5e985b;
    FUN_004125d9();
  }
  puStack_70 = (undefined *)0x5e9865;
  uVar5 = FUN_007fbfee();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  puStack_70 = (undefined *)(unaff_EBP + -0x18);
  puStack_70 = (undefined *)FUN_005ef964();
  if (((int)puStack_70 < 0) && (puStack_70 != (undefined *)0x80004002)) {
    FUN_00878dfb();
  }
  puStack_70 = (undefined *)(extraout_ECX + 0x8c);
  FUN_007fc043();
  puStack_70 = (undefined *)0x0;
  (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_004031b7();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar9) {
    FUN_00878dfb();
  }
  piStack_ac = (int *)0x5e9907;
  puVar7 = (undefined4 *)FUN_0042a39f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd4),
             (IBinding *)*puVar7);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  iVar6 = *(int *)(extraout_ECX + 0xd4);
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  if (iVar6 == 0) {
    FUN_00878dfb();
  }
  iVar6 = **(int **)(extraout_ECX + 0xd4);
  *(int **)(unaff_EBP + 0xc) = *(int **)(extraout_ECX + 0xd4);
  iVar6 = (**(code **)(iVar6 + 100))();
  if (iVar6 < 0) {
    piStack_ac = (int *)0x5e99a1;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0xd4) == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(extraout_ECX + 0xd4);
  iVar6 = (**(code **)(*piVar8 + 0xe0))();
  if (iVar6 < 0) {
    iStack_b4 = 0x5e99f0;
    iStack_b0 = iVar6;
    piStack_ac = piVar8;
    FUN_00878e09();
  }
  FUN_005eacbe();
  FUN_005ea930();
  if (*(int *)(extraout_ECX + 0x124) != 0) {
    FUN_005ee46d();
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x48) != 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    piStack_ac = *(int **)(DAT_0097924c + 0x390);
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iStack_b0 = 0x5e9a37;
    FUN_0042517f();
    piStack_ac = (int *)(unaff_EBP + 8);
    iStack_b0 = 0x5e9a4e;
    puVar7 = (undefined4 *)FUN_00679d86();
    piStack_ac = (int *)*puVar7;
    iStack_b0 = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_b4 = 0x5e9a5f;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = extraout_ECX_00;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iVar6 = *(int *)(unaff_EBP + 8) + -0xc;
      piStack_ac = (int *)0x5e9a76;
      FUN_00403384();
    }
    piStack_ac = (int *)0xff;
    iStack_b0 = 0;
    iStack_b8 = extraout_ECX + 0xd4;
    *(int **)(unaff_EBP + -0x20) = &iStack_b4;
    uStack_bc = 0x5e9a90;
    iStack_b4 = iVar6;
    FUN_0041160e();
    iStack_c0 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x58) + 0xb4;
    uStack_bc = *(undefined4 *)(*(int *)(extraout_ECX + 0x98) + 0x54);
    iStack_c4 = extraout_ECX + 0x80;
    *(int **)(unaff_EBP + -0x1c) = &iStack_c0;
    piStack_c8 = (int *)0x5e9ab5;
    iStack_b8 = iStack_c0;
    FUN_00433bdf();
    iStack_c4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_c8 = (int *)0x5e9ac2;
    piStack_c8 = (int *)FUN_00411641();
    piStack_cc = (int *)(unaff_EBP + 8);
    puStack_d0 = (undefined *)0x5e9acc;
    puVar7 = (undefined4 *)FUN_0042e3f0();
    piStack_ac = (int *)0x5e9ade;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe8),
               (IBinding *)*puVar7);
    FUN_00412600();
    piStack_ac = (int *)0x5e9af4;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_ac = (int *)0x5e9b01;
    FUN_00403191();
    iVar6 = *(int *)(extraout_ECX + 0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar6 == 0) {
      piStack_ac = (int *)0x5e9b14;
      FUN_00878dfb();
    }
    piStack_cc = *(int **)(extraout_ECX + 0xe8);
    iStack_b4 = *(int *)(unaff_EBP + -0x30);
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x2c);
    iVar6 = *piStack_cc;
    piStack_ac = *(int **)(unaff_EBP + -0x28);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_c0 = *(int *)(unaff_EBP + -0x3c);
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x38);
    piStack_c8 = (int *)0x20;
    *(int **)(unaff_EBP + 8) = piStack_cc;
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x34);
    puStack_d0 = (undefined *)0x5e9b40;
    iVar6 = (**(code **)(iVar6 + 0x110))();
    if (iVar6 < 0) {
      puStack_d0 = &DAT_00963df8;
      piStack_d4 = *(int **)(unaff_EBP + 8);
      piStack_dc = (int *)0x5e9b52;
      puStack_d8 = (undefined4 *)iVar6;
      FUN_00878e09();
    }
    puStack_d0 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d4 = (int *)0x5e9b5f;
    puStack_d0 = (undefined *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x5e9b6a;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_d4 = (int *)0x5e9b77;
    puStack_d0 = (undefined *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x5e9b82;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0xe8) == 0) {
      puStack_d0 = (undefined *)0x80004003;
      piStack_d4 = (int *)0x5e9b9b;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(extraout_ECX + 0xe8);
    puStack_d0 = (undefined *)0x1;
    puStack_d8 = (undefined4 *)0x5e9ba8;
    piStack_d4 = piVar8;
    piStack_e0 = (int *)(**(code **)(*piVar8 + 0x118))();
    if ((int)piStack_e0 < 0) {
      puStack_d8 = (undefined4 *)&DAT_00963df8;
      puStack_e4 = (undefined4 *)0x5e9bb8;
      piStack_dc = piVar8;
      FUN_00878e09();
    }
    puStack_d8 = (undefined4 *)
                 (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x58) + *(int *)(extraout_ECX + 0x134));
    piStack_dc = (int *)(*(int *)(*(int *)(extraout_ECX + 0x98) + 0x54) +
                        *(int *)(extraout_ECX + 0x130));
    piStack_e0 = (int *)0x5e9bdd;
    FUN_0059d7f7();
    puStack_d8 = (undefined4 *)0x584;
    piStack_dc = (int *)(unaff_EBP + 8);
    piStack_e0 = (int *)0x5e9bf2;
    puVar7 = (undefined4 *)FUN_00679d86();
    piStack_e0 = (int *)*puVar7;
    piStack_dc = (int *)(extraout_ECX + 0x100);
    puStack_d8 = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_e4 = (undefined4 *)0x5e9c07;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + 8) != 0) {
      puStack_d8 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
      piStack_dc = (int *)0x5e9c1e;
      FUN_00403384();
    }
    puStack_d8 = &DAT_00980690;
    piStack_dc = (int *)0x5e9c2d;
    FUN_00403191();
    puStack_d8 = (undefined4 *)(unaff_EBP + -0x40);
    piStack_dc = (int *)0xffffffff;
    piStack_e0 = (int *)0xc;
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_e4;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0044974c();
    FUN_004503f9();
    puStack_d8 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_dc = (int *)0x5e9c6c;
    puStack_d8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d8 < 0) {
      piStack_dc = (int *)0x5e9c77;
      FUN_00878dfb();
    }
    puStack_d8 = (undefined4 *)0x3af;
    piStack_dc = (int *)(unaff_EBP + 8);
    piStack_e0 = (int *)0x5e9c87;
    piVar8 = (int *)FUN_00679e4e();
    puVar7 = (undefined4 *)*piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (puVar7 == (undefined4 *)0x0) {
      piStack_e0 = (int *)0x0;
    }
    else {
      piStack_e0 = (int *)*puVar7;
    }
    puStack_d8 = (undefined4 *)0x0;
    piVar8 = (int *)(extraout_ECX + 0xfc);
    puStack_e4 = (undefined4 *)0x5e9ca6;
    piStack_dc = piVar8;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_d8 = (undefined4 *)0x5e9cb5;
    FUN_00402fa6();
    puStack_d8 = &DAT_00980690;
    piStack_dc = (int *)0x5e9cbe;
    FUN_00403191();
    puStack_d8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_dc = (int *)0x5e9ccb;
    FUN_00403191();
    iVar6 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (iVar6 == 0) {
      puStack_d8 = (undefined4 *)0x80004003;
      piStack_dc = (int *)0x5e9cde;
      FUN_00878dfb();
    }
    puStack_e4 = *(undefined4 **)(unaff_EBP + -0x30);
    piStack_e0 = *(int **)(unaff_EBP + -0x2c);
    iVar6 = *(int *)*piVar8;
    piStack_dc = *(int **)(unaff_EBP + -0x28);
    puStack_d8 = *(undefined4 **)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + 8) = (int *)*piVar8;
    iVar6 = (**(code **)(iVar6 + 0x2c))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004031b7();
    bVar9 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (bVar9) {
      FUN_00878dfb();
    }
    piStack_118 = (int *)0x0;
    iStack_11c = 0;
    iStack_120 = unaff_EBP + 8;
    iStack_124 = 0x5e9d9a;
    puVar7 = (undefined4 *)FUN_0042a39f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe4),
               (IBinding *)*puVar7);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    cVar2 = FUN_004115ad();
    if (cVar2 == '\0') {
      FUN_0040ee87();
      iVar6 = *(int *)(extraout_ECX + 0xe4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (iVar6 == 0) {
        FUN_00878dfb();
      }
      iVar6 = **(int **)(extraout_ECX + 0xe4);
      *(int **)(unaff_EBP + 8) = *(int **)(extraout_ECX + 0xe4);
      piStack_118 = (int *)0x5e9e32;
      iVar6 = (**(code **)(iVar6 + 100))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
    }
    cVar2 = FUN_00433bfa();
    if (cVar2 == '\0') {
      FUN_0040ee87();
      iVar6 = *(int *)(extraout_ECX + 0xe4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar6 == 0) {
        FUN_00878dfb();
      }
      iVar6 = **(int **)(extraout_ECX + 0xe4);
      *(int **)(unaff_EBP + 8) = *(int **)(extraout_ECX + 0xe4);
      piStack_118 = (int *)0x5e9eb3;
      iVar6 = (**(code **)(iVar6 + 0xfc))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
    }
    piVar8 = (int *)(extraout_ECX + 0xe4);
    if (*(int *)(extraout_ECX + 0xe4) == 0) {
      FUN_00878dfb();
    }
    iVar6 = (**(code **)(*(int *)*piVar8 + 0xb4))();
    if (iVar6 < 0) {
      piStack_118 = (int *)0x5e9f13;
      FUN_00878e09();
    }
    if (*piVar8 == 0) {
      FUN_00878dfb();
    }
    piVar8 = (int *)*piVar8;
    iStack_11c = (**(code **)(*piVar8 + 0xe0))();
    if (iStack_11c < 0) {
      iStack_120 = 0x5e9f3f;
      piStack_118 = piVar8;
      FUN_00878e09();
    }
    piStack_118 = (int *)(unaff_EBP + 8);
    iStack_11c = 0x5e9f52;
    piVar8 = (int *)FUN_00679d86();
    iVar6 = *piVar8;
    piStack_118 = (int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_11c = 0x5e9f61;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iVar6 = *(int *)(unaff_EBP + 8) + -0xc;
      piStack_118 = (int *)0x5e9f77;
      FUN_00403384();
    }
    piStack_118 = (int *)0xff;
    iStack_11c = 0;
    iStack_124 = extraout_ECX + 0xd4;
    *(int **)(unaff_EBP + -0x20) = &iStack_120;
    uStack_128 = 0x5e9f93;
    iStack_120 = iVar6;
    FUN_0041160e();
    iStack_12c = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x5a;
    uStack_128 = *(undefined4 *)(*(int *)(extraout_ECX + 0x98) + 0x4c);
    *(int **)(unaff_EBP + -0x1c) = &iStack_12c;
    iStack_124 = iStack_12c;
    FUN_00433bdf(extraout_ECX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uVar5 = FUN_00411641(0);
    puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,uVar5);
    piStack_118 = (int *)0x5e9fde;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xec),
               (IBinding *)*puVar7);
    FUN_00412600();
    piStack_118 = (int *)0x5e9ff4;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_118 = (int *)0x5ea001;
    FUN_00403191();
    iVar6 = *(int *)(extraout_ECX + 0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar6 == 0) {
      piStack_118 = (int *)0x5ea014;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(extraout_ECX + 0xec);
    iStack_120 = *(int *)(unaff_EBP + -0x30);
    iStack_11c = *(undefined4 *)(unaff_EBP + -0x2c);
    iVar6 = *piVar8;
    piStack_118 = *(int **)(unaff_EBP + -0x28);
    iStack_12c = *(int *)(unaff_EBP + -0x3c);
    uStack_128 = *(undefined4 *)(unaff_EBP + -0x38);
    *(int **)(unaff_EBP + 8) = piVar8;
    iStack_124 = *(undefined4 *)(unaff_EBP + -0x34);
    iVar6 = (**(code **)(iVar6 + 0x110))(piVar8,0,*(undefined4 *)(unaff_EBP + -0x40));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_004031b7(0,3);
    bVar9 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (bVar9) {
      FUN_00878dfb(0x80004003);
    }
    puVar7 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x40,unaff_EBP + -0x30)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf0),
               (IBinding *)*puVar7);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    cVar2 = FUN_004115ad(0);
    if (cVar2 == '\0') {
      FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0x80),1);
      iVar6 = *(int *)(extraout_ECX + 0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = *(int **)(extraout_ECX + 0xf0);
      iVar6 = *piVar8;
      *(int **)(unaff_EBP + 8) = piVar8;
      iVar6 = (**(code **)(iVar6 + 100))
                        (piVar8,*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
    }
    cVar2 = FUN_00433bfa(0);
    if (cVar2 == '\0') {
      FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0xec),1);
      iVar6 = *(int *)(extraout_ECX + 0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = *(int **)(extraout_ECX + 0xf0);
      iVar6 = *piVar8;
      *(int **)(unaff_EBP + 8) = piVar8;
      iVar6 = (**(code **)(iVar6 + 0xfc))
                        (piVar8,*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x50);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
    }
    piVar8 = (int *)(extraout_ECX + 0xf0);
    if (*(int *)(extraout_ECX + 0xf0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar8;
    iVar6 = (**(code **)(*piVar1 + 0xb4))(piVar1,4);
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar1,&DAT_00963df8);
    }
    if (*piVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = (int *)*piVar8;
    iVar6 = (**(code **)(*piVar8 + 0xe0))(piVar8,0xffffffff);
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar8,&DAT_00963df8);
    }
    *(undefined4 *)(extraout_ECX + 0x104) = 0;
    *(undefined4 *)(extraout_ECX + 0x118) = 0;
    FUN_005ec979();
    FUN_0059d833();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


