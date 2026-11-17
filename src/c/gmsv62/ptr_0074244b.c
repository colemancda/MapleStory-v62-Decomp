/* ptr_0074244b - 0x0074244b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ptr_0074244b(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  double dVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int iVar6;
  float10 fVar7;
  undefined8 uVar8;
  int iStack_c0;
  undefined1 *puStack_bc;
  undefined8 uStack_b8;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uStack_10 = 0x742453;
  uStack_c._4_4_ = param_2;
  uStack_c = __allmul();
  uStack_10 = 0x742460;
  uVar8 = __alldiv();
  iVar6 = unaff_ESI - (uint)uVar8;
  *(int *)(unaff_EBP + -0x8c) = iVar6;
  *(uint *)(unaff_EBP + -0x88) = -(uint)(unaff_ESI < (uint)uVar8) - (int)((ulonglong)uVar8 >> 0x20);
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x43;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  *(int *)(unaff_EBP + -0x24) = iVar6;
  if (iVar6 <= unaff_EBX) {
    *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb40) == unaff_EBX) {
    FUN_00878dfb();
  }
  piStack_28 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xb40);
  *(int **)(unaff_EBP + -0x1c) = piStack_28;
  uStack_c._0_4_ = *(undefined4 *)(unaff_EBP + -0x9c);
  uStack_c._4_4_ = *(undefined4 *)(unaff_EBP + -0x98);
  uStack_1c = *(undefined4 *)(unaff_EBP + -100);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x60);
  iStack_24 = 0x22c - *(int *)(unaff_EBP + -0x24);
  uStack_20 = 0x245;
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_2c = (undefined4 *)0x7424f7;
  iVar6 = (**(code **)(*piStack_28 + 0x90))();
  if (iVar6 < unaff_EBX) {
    puStack_2c = (undefined4 *)&DAT_00963de8;
    uStack_30 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_38 = 0x742509;
    iStack_34 = iVar6;
    FUN_00878e09();
  }
  puStack_2c = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  uStack_30 = 0x742516;
  puStack_2c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2c < unaff_EBX) {
    uStack_30 = 0x742521;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_2c = (undefined4 *)(unaff_EBP + -0x9c);
  uStack_30 = 0x742531;
  puStack_2c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2c < unaff_EBX) {
    uStack_30 = 0x74253c;
    FUN_00878dfb();
  }
  puStack_2c = &DAT_00980690;
  uStack_30 = 0x74254a;
  FUN_00403191();
  puStack_2c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0x45;
  uStack_30 = 0x74255d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x8c);
  if (*(int *)(unaff_EBP + -0x8c) <= unaff_EBX) {
    *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb40) == unaff_EBX) {
    puStack_2c = (undefined4 *)0x80004003;
    uStack_30 = 0x74258c;
    FUN_00878dfb();
  }
  puStack_2c = (undefined4 *)(unaff_EBP + -0x10);
  uStack_30 = 0x742597;
  piStack_54 = (int *)FUN_0042bc90();
  iVar6 = *piStack_54;
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  if (iVar6 == unaff_EBX) {
    puStack_2c = (undefined4 *)0x80004003;
    uStack_30 = 0x7425ab;
    FUN_00878dfb();
  }
  piStack_54 = (int *)*piStack_54;
  *(int **)(unaff_EBP + -0x1c) = piStack_54;
  uStack_38 = *(undefined4 *)(unaff_EBP + -100);
  iStack_34 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_30 = *(undefined4 *)(unaff_EBP + -0x5c);
  puStack_2c = *(undefined4 **)(unaff_EBP + -0x58);
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x9c);
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x98);
  uStack_4c = 0xf;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x94);
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x90);
  puStack_58 = (undefined *)0x7425d9;
  iVar6 = (**(code **)(*piStack_54 + 0x90))();
  if (iVar6 < unaff_EBX) {
    puStack_58 = &DAT_00963de8;
    uStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_64 = 0x7425eb;
    iStack_60 = iVar6;
    FUN_00878e09();
  }
  puStack_58 = (undefined *)0x7425f3;
  FUN_004125d9();
  puStack_58 = (undefined *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  uStack_5c = 0x742603;
  puStack_58 = (undefined *)FUN_00402bc3();
  if ((int)puStack_58 < unaff_EBX) {
    uStack_5c = 0x74260e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_58 = (undefined *)(unaff_EBP + -100);
  uStack_5c = 0x74261b;
  puStack_58 = (undefined *)FUN_00402bc3();
  if ((int)puStack_58 < unaff_EBX) {
    uStack_5c = 0x742626;
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xb44);
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb44) == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x742641;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)(unaff_EBP + -0x1c);
  uStack_5c = 0x74264c;
  piVar3 = (int *)FUN_0042fb5e();
  iVar6 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0x48;
  if (iVar6 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x742663;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)0x74266a;
  uVar4 = FUN_00424ee1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  puStack_58 = (undefined *)0x742679;
  FUN_004125d9();
  if (*piVar5 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x742687;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)(unaff_EBP + -0x1c);
  uStack_5c = 0x742692;
  piVar3 = (int *)FUN_0042fb5e();
  iVar6 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0x49;
  if (iVar6 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x7426a9;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)0x7426b0;
  uVar4 = FUN_00424f08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  puStack_58 = (undefined *)0x7426bf;
  FUN_004125d9();
  if (*piVar5 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x7426cd;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)(unaff_EBP + -0x1c);
  uStack_5c = 0x7426d8;
  piVar3 = (int *)FUN_0042fb5e();
  iVar6 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0x4a;
  if (iVar6 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x7426ef;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)(unaff_EBP + -100);
  uStack_5c = 0x7426fa;
  FUN_004308ad();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  puStack_58 = (undefined *)0x742706;
  FUN_004125d9();
  if (*piVar5 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x742714;
    FUN_00878dfb();
  }
  puStack_58 = (undefined *)(unaff_EBP + -0x14);
  uStack_5c = 0x742721;
  piStack_68 = (int *)FUN_0042fb5e();
  iVar6 = *piStack_68;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  if (iVar6 == unaff_EBX) {
    puStack_58 = (undefined *)0x80004003;
    uStack_5c = 0x742735;
    FUN_00878dfb();
  }
  piStack_68 = (int *)*piStack_68;
  *(undefined4 *)(unaff_EBP + -0x54) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x50) = DAT_0097bb34;
  *(undefined4 *)(unaff_EBP + -0x4c) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x48) = DAT_0097bb3c;
  *(int **)(unaff_EBP + -0x10) = piStack_68;
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_58 = *(undefined **)(unaff_EBP + -0x48);
  puStack_6c = (undefined *)0x742758;
  iVar6 = (**(code **)(*piStack_68 + 100))();
  if (iVar6 < unaff_EBX) {
    puStack_6c = &DAT_00963de8;
    uStack_70 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_78 = 0x74276a;
    iStack_74 = iVar6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  puStack_6c = (undefined *)0x742776;
  FUN_004125d9();
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb44) == unaff_EBX) {
    puStack_6c = (undefined *)0x80004003;
    uStack_70 = 0x742791;
    FUN_00878dfb();
  }
  puStack_6c = (undefined *)(unaff_EBP + -0x14);
  uStack_70 = 0x74279c;
  piStack_7c = (int *)FUN_0042fb5e();
  iVar6 = *piStack_7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (iVar6 == unaff_EBX) {
    puStack_6c = (undefined *)0x80004003;
    uStack_70 = 0x7427b0;
    FUN_00878dfb();
  }
  piStack_7c = (int *)*piStack_7c;
  *(int **)(unaff_EBP + -0x10) = piStack_7c;
  uStack_78 = *(undefined4 *)(unaff_EBP + -100);
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x5c);
  puStack_6c = *(undefined **)(unaff_EBP + -0x58);
  puStack_80 = (undefined4 *)0x7427c7;
  iVar6 = (**(code **)(*piStack_7c + 100))();
  if (iVar6 < unaff_EBX) {
    puStack_80 = (undefined4 *)&DAT_00963de8;
    uStack_84 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_8c = 0x7427d9;
    iStack_88 = iVar6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  puStack_80 = (undefined4 *)0x7427e5;
  FUN_004125d9();
  puStack_80 = &DAT_00980690;
  uStack_84 = 0x7427f3;
  FUN_00403191();
  puStack_80 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  uStack_84 = 0x742803;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb44) == unaff_EBX) {
    puStack_80 = (undefined4 *)0x80004003;
    uStack_84 = 0x74281e;
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(unaff_EBP + -0x14);
  uStack_84 = 0x742829;
  piStack_a8 = (int *)FUN_0042fb5e();
  iVar6 = *piStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (iVar6 == unaff_EBX) {
    puStack_80 = (undefined4 *)0x80004003;
    uStack_84 = 0x74283d;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)*piStack_a8;
  *(int **)(unaff_EBP + -0x10) = piStack_a8;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_80 = *(undefined4 **)(unaff_EBP + -0x38);
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x9c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x98);
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x94);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x90);
  iVar6 = (**(code **)(*piStack_a8 + 0x90))();
  if (iVar6 < unaff_EBX) {
    uStack_b8 = CONCAT44(iVar6,0x74287e);
    FUN_00878e09();
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xb44);
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xb44) == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar3 = (int *)FUN_0042bc90();
  iVar6 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (iVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  uVar4 = FUN_00424ee1();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_004125d9();
  if (*piVar5 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar3 = (int *)FUN_0042bc90();
  iVar6 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  if (iVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  uVar4 = FUN_00424f08();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_004125d9();
  if (*piVar5 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar5 = (int *)FUN_0042bc90();
  iVar6 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (iVar6 == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004308ad();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_004dec0e();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_004125d9();
  FUN_00424e27();
  FUN_0042bc90();
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  FUN_00424df4();
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_004125d9();
  FUN_00424e27();
  FUN_0042bc90();
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  FUN_00424df4();
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_004125d9();
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  FUN_00424e27();
  FUN_0042bc90();
  uStack_b8 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x30));
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  puStack_bc = (undefined1 *)0x742a6e;
  FUN_00424df4();
  puStack_bc = (undefined1 *)0x742a75;
  FUN_00424f2f();
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x1c) < *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x20)) {
    iVar6 = *(int *)(unaff_EBP + 0x1c) - *(int *)(unaff_EBP + 0x18);
  }
  else {
    iVar6 = *(int *)(unaff_EBP + 0x20);
  }
  uStack_b8 = (longlong)iVar6;
  puStack_bc = (undefined1 *)0x742aea;
  uStack_b8 = __allmul();
  puStack_bc = (undefined1 *)0x742af7;
  uVar8 = __alldiv();
  *(undefined8 *)(unaff_EBP + -0x7c) = uVar8;
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0x5b;
  FUN_00424aee();
  iVar6 = *(int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x5c;
  if (iVar6 <= unaff_EBX) {
    iVar6 = 0;
  }
  uStack_b8 = CONCAT44(0x245,0x22c - iVar6);
  puStack_bc = (undefined1 *)0x742b48;
  FUN_00424e27();
  puStack_bc = (undefined1 *)0x742b4f;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0x5d;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  if (unaff_EBX < *(int *)(unaff_EBP + -0x7c)) {
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x7c);
  }
  else {
    *(int *)(unaff_EBP + 0x20) = unaff_EBX;
  }
  FUN_00424e27();
  FUN_0042bc90();
  uStack_b8 = CONCAT44(0xf,*(undefined4 *)(unaff_EBP + 0x20));
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  puStack_bc = (undefined1 *)0x742bdf;
  FUN_00424df4();
  puStack_bc = (undefined1 *)0x742be6;
  FUN_00424f2f();
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  dVar2 = ((double)*(int *)(unaff_EBP + 0x18) * _DAT_008e9978) / (double)*(int *)(unaff_EBP + 0x1c);
  if (_DAT_008f1050 <= dVar2) {
    dVar2 = _DAT_008f1050;
  }
  *(double *)(*(int *)(unaff_EBP + -0x18) + 0xb48) = dVar2;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0x60;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  FUN_00424aee();
  uStack_b8 = CONCAT44(unaff_EBP + -0x9c,unaff_EBP + -0x44);
  *(undefined1 ***)(unaff_EBP + 0x20) = &puStack_bc;
  iStack_c0 = 0x952;
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  FUN_00679e4e(&puStack_bc);
  iStack_c0 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 100;
  uStack_b8 = CONCAT44(0x742cc1,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
  FUN_0048bb05();
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x66;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x69;
  FUN_00424aee();
  uStack_b8 = CONCAT44(unaff_EBP + -0x74,unaff_EBP + -100);
  *(undefined1 ***)(unaff_EBP + 0x1c) = &puStack_bc;
  iStack_c0 = 0x953;
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  FUN_00679e4e(&puStack_bc);
  iStack_c0 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x6c;
  uStack_b8 = CONCAT44(0x742d7e,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar4;
  FUN_004251a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x70;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00424aee();
  uStack_b8 = 0x220000000da;
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  puStack_bc = (undefined1 *)0x742e01;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x742e08;
  FUN_00470739();
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  uStack_b8 = CONCAT44(&piStack_a8,*(undefined4 *)(unaff_EBP + 0x18));
  puStack_bc = (undefined1 *)0x742e37;
  FUN_0087b818();
  uStack_b8 = CONCAT44(0x742e43,(undefined *)uStack_b8);
  FUN_0045f0f3();
  if (*(int *)(unaff_EBP + -0x34) == unaff_EBX) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x34) + -4);
  }
  *(int *)(unaff_EBP + 0x18) = iVar6 * 6;
  *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x742e6a);
  FUN_00424dbc();
  uStack_b8._0_4_ = (undefined *)(unaff_EBP + -0x34);
  *(int *)(unaff_EBP + -0x1c) = (int)&uStack_b8 + 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x73;
  puStack_bc = (undefined1 *)0x742e7d;
  uStack_b8._4_4_ = extraout_ECX;
  FUN_00450368();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x225);
  puStack_bc = (undefined1 *)0x1d2;
  *(int **)(unaff_EBP + 0x1c) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_007d2fea();
  uStack_b8 = CONCAT44(0x742eb3,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x10) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x954;
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  iStack_c0 = 0x742ecf;
  uStack_b8._4_4_ = extraout_ECX_00;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  puStack_bc = (undefined1 *)0x742edf;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x742ee6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x76;
  uStack_b8 = CONCAT44(0x742ef1,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x224,*(int *)(unaff_EBP + 0x18) + 0x1d2);
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  puStack_bc = (undefined1 *)0x742f21;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x742f28;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_b8 = CONCAT44(0x742f73,(undefined *)uStack_b8);
  fVar7 = (float10)FUN_0087c217();
  fVar1 = (float10)_DAT_008ecb38;
  *(undefined4 *)(unaff_EBP + 0x1c) = 6;
  if (fVar7 < fVar1) {
    *(int *)(unaff_EBP + 0x1c) = unaff_EBX;
  }
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x742f9b);
  FUN_00424dbc();
  uStack_b8 = *(undefined8 *)(*(int *)(unaff_EBP + -0x18) + 0xb48);
  puStack_bc = (undefined1 *)0x742fae;
  FUN_0087c217();
  uStack_b8 = CONCAT44(0x742fb5,(undefined *)uStack_b8);
  uVar4 = __ftol();
  uStack_b8 = CONCAT44(uVar4,0x225);
  puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x18) + 0x1d6);
  *(int **)(unaff_EBP + -0x1c) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  FUN_007d3201();
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  uStack_b8 = CONCAT44(0x743015,(undefined *)uStack_b8);
  uVar4 = FUN_00449749();
  uStack_b8 = CONCAT44(uVar4,extraout_ECX_01);
  *(undefined8 **)(unaff_EBP + -0x1c) = &uStack_b8;
  puStack_bc = &DAT_0096b6c8;
  iStack_c0 = 0x743026;
  FUN_004033a1();
  iStack_c0 = *(int *)(unaff_EBP + 0x1c) + 6 + *(int *)(unaff_EBP + 0x18);
  *(int *)(unaff_EBP + 0x18) = iStack_c0;
  puStack_bc = (undefined1 *)0x220;
  iStack_c0 = iStack_c0 + 0x1d6;
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_b8 = CONCAT44(0x743097,(undefined *)uStack_b8);
  FUN_0087c217();
  iVar6 = __ftol();
  if (iVar6 < 10) {
    uStack_b8 = CONCAT44(0x7430c1,(undefined *)uStack_b8);
    FUN_004295f1();
    *(int *)(unaff_EBP + -0x10) = (int)&uStack_b8 + 4;
    uStack_b8._0_4_ = &DAT_00964310;
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    puStack_bc = (undefined1 *)0x7430d7;
    uStack_b8._4_4_ = extraout_ECX_02;
    FUN_004033a1();
    uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    puStack_bc = (undefined1 *)0x7430e7;
    FUN_0040263d();
    puStack_bc = (undefined1 *)0x7430ee;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    uStack_b8 = CONCAT44(0x7430f9,(undefined *)uStack_b8);
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
    FUN_0048bb05();
    uStack_b8 = CONCAT44(0x225,*(int *)(unaff_EBP + 0x18) + 0x1da);
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    puStack_bc = (undefined1 *)0x743125;
    FUN_004115d9();
    puStack_bc = (undefined1 *)0x74312c;
    FUN_00470739();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    iVar6 = FUN_00402bc3();
    if (iVar6 < unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x72;
    iVar6 = FUN_00402bc3();
    if (iVar6 < unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xffffff50;
    uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x743175);
    FUN_00424dbc();
    uStack_b8 = *(undefined8 *)(*(int *)(unaff_EBP + -0x18) + 0xb48);
    puStack_bc = (undefined1 *)0x743188;
    FUN_0087c217();
    uStack_b8 = CONCAT44(0x74319e,(undefined *)uStack_b8);
    uVar4 = __ftol();
    puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x18) + 0x1e0);
    *(int **)(unaff_EBP + 0x1c) = &iStack_c0;
  }
  else {
    *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xffffff50;
    uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x7431c2);
    FUN_00424dbc();
    uStack_b8 = *(undefined8 *)(*(int *)(unaff_EBP + -0x18) + 0xb48);
    puStack_bc = (undefined1 *)0x7431d5;
    FUN_0087c217();
    uStack_b8 = CONCAT44(0x7431eb,(undefined *)uStack_b8);
    uVar4 = __ftol();
    puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x18) + 0x1da);
    *(int **)(unaff_EBP + 0x1c) = &iStack_c0;
  }
  uStack_b8 = CONCAT44(uVar4,0x225);
  FUN_0046fc23(unaff_EBP + -0x20);
  FUN_007d3201();
  uStack_b8 = CONCAT44(0x743218,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x10) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x956;
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  iStack_c0 = 0x743234;
  uStack_b8._4_4_ = extraout_ECX_03;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  puStack_bc = (undefined1 *)0x743244;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x74324b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  uStack_b8 = CONCAT44(0x743256,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x225,*(int *)(unaff_EBP + 0x18) + 0x1e6);
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  puStack_bc = (undefined1 *)0x743282;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x743289;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_b8 = CONCAT44(0x7432cc,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x10) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x955;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iStack_c0 = 0x7432e8;
  uStack_b8._4_4_ = extraout_ECX_04;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  puStack_bc = (undefined1 *)0x7432f8;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x7432ff;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x85;
  uStack_b8 = CONCAT44(0x74330a,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x224,*(int *)(unaff_EBP + 0x18) + 0x1ee);
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  puStack_bc = (undefined1 *)0x74333a;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x743341;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_b8 = CONCAT44(0x743384,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x1c) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x954;
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iStack_c0 = 0x7433a0;
  uStack_b8._4_4_ = extraout_ECX_05;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  puStack_bc = (undefined1 *)0x7433b0;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x7433b7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  uStack_b8 = CONCAT44(0x7433c2,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
  FUN_0048bb05();
  uStack_b8 = 0x224000000ed;
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  puStack_bc = (undefined1 *)0x7433ee;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x7433f5;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  uStack_b8 = CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x743442);
  FUN_0087b818();
  uStack_b8 = CONCAT44(0x743450,(undefined *)uStack_b8);
  FUN_00414edd();
  if (*(int *)(unaff_EBP + -0x34) == unaff_EBX) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x34) + -4);
  }
  *(int *)(unaff_EBP + 0x18) = iVar6 * 6;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x743477);
  FUN_00424dbc();
  uStack_b8._0_4_ = (undefined *)(unaff_EBP + -0x34);
  *(int *)(unaff_EBP + 0x1c) = (int)&uStack_b8 + 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  puStack_bc = (undefined1 *)0x74348a;
  uStack_b8._4_4_ = extraout_ECX_06;
  FUN_00450368();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x225);
  puStack_bc = (undefined1 *)0xf1;
  *(int **)(unaff_EBP + 8) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_007d2fea();
  uStack_b8 = CONCAT44(0x7434b6,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x1c) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x957;
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  iStack_c0 = 0x7434d2;
  uStack_b8._4_4_ = extraout_ECX_07;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  puStack_bc = (undefined1 *)0x7434e2;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x7434e9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x8e;
  uStack_b8 = CONCAT44(0x7434f4,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x225,*(int *)(unaff_EBP + 0x18) + 0xf1);
  *(undefined1 *)(unaff_EBP + -4) = 0x8f;
  puStack_bc = (undefined1 *)0x743520;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x743527;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  uStack_b8 = CONCAT44(*(undefined4 *)(unaff_EBP + 0xc),0x743574);
  FUN_0087b818();
  uStack_b8 = CONCAT44(0x743582,(undefined *)uStack_b8);
  FUN_00414edd();
  if (*(int *)(unaff_EBP + -0x34) == unaff_EBX) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x34) + -4);
  }
  *(int *)(unaff_EBP + 8) = iVar6 * 6;
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x7435a9);
  FUN_00424dbc();
  uStack_b8._0_4_ = (undefined *)(unaff_EBP + -0x34);
  *(int *)(unaff_EBP + 0x1c) = (int)&uStack_b8 + 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  puStack_bc = (undefined1 *)0x7435bc;
  uStack_b8._4_4_ = extraout_ECX_08;
  FUN_00450368();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x225);
  puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x18) + 0xf9);
  *(int **)(unaff_EBP + 0xc) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_007d2fea();
  uStack_b8 = CONCAT44(0x7435ec,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + -0x1c) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x955;
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  iStack_c0 = 0x743608;
  uStack_b8._4_4_ = extraout_ECX_09;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  puStack_bc = (undefined1 *)0x743618;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x74361f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x93;
  uStack_b8 = CONCAT44(0x74362a,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x224,*(int *)(unaff_EBP + 8) + 0xfa + *(int *)(unaff_EBP + 0x18));
  *(undefined1 *)(unaff_EBP + -4) = 0x94;
  puStack_bc = (undefined1 *)0x74365f;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x743666;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_b8 = CONCAT44(0x7436a9,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + 0xc) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x954;
  *(undefined1 *)(unaff_EBP + -4) = 0x95;
  iStack_c0 = 0x7436c5;
  uStack_b8._4_4_ = extraout_ECX_10;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x95;
  puStack_bc = (undefined1 *)0x7436d5;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x7436dc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  uStack_b8 = CONCAT44(0x7436e7,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  FUN_0048bb05();
  uStack_b8 = 0x2240000015d;
  *(undefined1 *)(unaff_EBP + -4) = 0x98;
  puStack_bc = (undefined1 *)0x743713;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x74371a;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x95;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  uStack_b8 = CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),0x743767);
  FUN_0087b818();
  uStack_b8 = CONCAT44(0x743775,(undefined *)uStack_b8);
  FUN_00414edd();
  if (*(int *)(unaff_EBP + -0x34) == unaff_EBX) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x34) + -4);
  }
  *(int *)(unaff_EBP + 0x18) = iVar6 * 6;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x74379c);
  FUN_00424dbc();
  uStack_b8._0_4_ = (undefined *)(unaff_EBP + -0x34);
  *(int *)(unaff_EBP + 0x10) = (int)&uStack_b8 + 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  puStack_bc = (undefined1 *)0x7437af;
  uStack_b8._4_4_ = extraout_ECX_11;
  FUN_00450368();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x225);
  puStack_bc = (undefined1 *)0x161;
  *(int **)(unaff_EBP + 8) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_007d2fea();
  uStack_b8 = CONCAT44(0x7437db,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + 0xc) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x957;
  *(undefined1 *)(unaff_EBP + -4) = 0x9a;
  iStack_c0 = 0x7437f7;
  uStack_b8._4_4_ = extraout_ECX_12;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x9a;
  puStack_bc = (undefined1 *)0x743807;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x74380e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9c;
  uStack_b8 = CONCAT44(0x743819,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x225,*(int *)(unaff_EBP + 0x18) + 0x161);
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  puStack_bc = (undefined1 *)0x743845;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x74384c;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x9a;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  uStack_b8 = CONCAT44(*(undefined4 *)(unaff_EBP + 0x14),0x743899);
  FUN_0087b818();
  uStack_b8 = CONCAT44(0x7438a7,(undefined *)uStack_b8);
  FUN_00414edd();
  if (*(int *)(unaff_EBP + -0x34) == unaff_EBX) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x34) + -4);
  }
  *(int *)(unaff_EBP + 8) = iVar6 * 6;
  *(undefined1 **)(unaff_EBP + 0x10) = &stack0xffffff50;
  uStack_b8 = CONCAT44(unaff_EBP + -0x2c,0x7438ce);
  FUN_00424dbc();
  uStack_b8._0_4_ = (undefined *)(unaff_EBP + -0x34);
  *(int *)(unaff_EBP + 0xc) = (int)&uStack_b8 + 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x9e;
  puStack_bc = (undefined1 *)0x7438e1;
  uStack_b8._4_4_ = extraout_ECX_13;
  FUN_00450368();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x225);
  iVar6 = *(int *)(unaff_EBP + 0x18);
  puStack_bc = (undefined1 *)(iVar6 + 0x169);
  *(int **)(unaff_EBP + 0x10) = &iStack_c0;
  FUN_0046fc23(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_007d2fea();
  uStack_b8 = CONCAT44(0x743912,(undefined *)uStack_b8);
  FUN_004295f1();
  puStack_bc = (undefined1 *)((int)&uStack_b8 + 4);
  *(int *)(unaff_EBP + 0xc) = (int)&uStack_b8 + 4;
  uStack_b8._0_4_ = (undefined *)0x955;
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  iStack_c0 = 0x74392e;
  uStack_b8._4_4_ = extraout_ECX_14;
  FUN_00679e4e();
  uStack_b8 = CONCAT44(uStack_b8._4_4_,unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  puStack_bc = (undefined1 *)0x743941;
  FUN_0040263d();
  puStack_bc = (undefined1 *)0x743948;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa1;
  uStack_b8 = CONCAT44(0x743953,(undefined *)uStack_b8);
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
  FUN_0048bb05();
  uStack_b8 = CONCAT44(0x224,*(int *)(unaff_EBP + 8) + 0x16a + iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0xa2;
  puStack_bc = (undefined1 *)0x743985;
  FUN_004115d9();
  puStack_bc = (undefined1 *)0x74398c;
  FUN_00470739();
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar6 = FUN_00402bc3();
  if (iVar6 < unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  FUN_00414ebb();
  FUN_004027eb();
  FUN_004125e6();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


