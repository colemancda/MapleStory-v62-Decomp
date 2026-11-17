/* FUN_0078b670 - 0x0078b670 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078b670(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  int unaff_EBP;
  bool bVar5;
  undefined4 uStack_124;
  int *piStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined *puStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  undefined1 auStack_ec [4];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int *piStack_d0;
  undefined *puStack_cc;
  int *piStack_c8;
  undefined *puStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  
  FUN_00879bb8();
  puStack_3c = (undefined4 *)0x0;
  uStack_40 = 100;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &local_50;
  uStack_54 = 0;
  FUN_00424e0a();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_54;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00486ada();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0043f082();
  puStack_3c = (undefined4 *)0x78b6c3;
  FUN_0078d0e5();
  puStack_3c = &DAT_00980690;
  uStack_40 = 0x78b6d0;
  FUN_00403191();
  iVar1 = extraout_ECX[0x35d];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    puStack_3c = (undefined4 *)0x80004003;
    uStack_40 = 0x78b6ef;
    FUN_00878dfb();
  }
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
  iVar1 = *(int *)extraout_ECX[0x35d];
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_3c = *(undefined4 **)(unaff_EBP + -0x2c);
  uStack_4c = 0;
  local_50 = 0;
  uStack_54 = 0;
  *(int **)(unaff_EBP + 8) = (int *)extraout_ECX[0x35d];
  iVar1 = (**(code **)(iVar1 + 0x8c))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  extraout_ECX[0x356] = extraout_ECX[0x358];
  extraout_ECX[0x357] = extraout_ECX[0x359];
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_004031b7();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (bVar5) {
    FUN_00878dfb();
  }
  puVar2 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5fc);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  iVar1 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  iVar1 = **(int **)this;
  *(int **)(unaff_EBP + 8) = *(int **)this;
  iVar1 = (**(code **)(iVar1 + 0xfc))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  iVar1 = extraout_ECX[0x5fc];
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  iVar1 = *(int *)extraout_ECX[0x5fc];
  *(int **)(unaff_EBP + 8) = (int *)extraout_ECX[0x5fc];
  iVar1 = (**(code **)(iVar1 + 100))();
  if (iVar1 < 0) {
    iStack_9c = *(undefined4 *)(unaff_EBP + 8);
    uStack_a4 = 0x78b8c6;
    iStack_a0 = iVar1;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_9c = 0x78b8d3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_9c = 0x78b8de;
    FUN_00878dfb();
  }
  iStack_9c = 0x78b8ea;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_9c = unaff_EBP + -0x38;
  iStack_a0 = 0x78b8f9;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_9c = 0x78b905;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_9c = 0x78b912;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_9c = unaff_EBP + -0x28;
  iStack_a0 = 0x78b91c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_9c = 0x78b928;
    FUN_00878dfb();
  }
  iVar1 = extraout_ECX[0x5fc];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    iStack_9c = 0x78b945;
    FUN_00878dfb();
  }
  piStack_c0 = (int *)extraout_ECX[0x5fc];
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_9c = *(undefined4 *)(unaff_EBP + -0x30);
  iVar1 = *piStack_c0;
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_b8 = 0;
  uStack_bc = 0;
  *(int **)(unaff_EBP + 8) = piStack_c0;
  puStack_c4 = (undefined *)0x78b96f;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    puStack_c4 = &DAT_00963de8;
    piStack_c8 = *(int **)(unaff_EBP + 8);
    piStack_d0 = (int *)0x78b981;
    puStack_cc = (undefined *)iVar1;
    FUN_00878e09();
  }
  puStack_c4 = (undefined *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_c8 = (int *)0x78b98e;
  puStack_c4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_c4 < 0) {
    piStack_c8 = (int *)0x78b999;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_c4 = (undefined *)(unaff_EBP + -0x38);
  piStack_c8 = (int *)0x78b9a6;
  puStack_c4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_c4 < 0) {
    piStack_c8 = (int *)0x78b9b1;
    FUN_00878dfb();
  }
  if (extraout_ECX[0x5fc] == 0) {
    puStack_c4 = (undefined *)0x80004003;
    piStack_c8 = (int *)0x78b9c9;
    FUN_00878dfb();
  }
  piVar3 = (int *)extraout_ECX[0x5fc];
  puStack_c4 = (undefined *)0xffffffff;
  puStack_cc = (undefined *)0x78b9d6;
  piStack_c8 = piVar3;
  iStack_d4 = (**(code **)(*piVar3 + 0xe0))();
  if (iStack_d4 < 0) {
    puStack_cc = &DAT_00963df8;
    uStack_d8 = 0x78b9e6;
    piStack_d0 = piVar3;
    FUN_00878e09();
  }
  puStack_cc = (undefined *)(unaff_EBP + 0xb);
  piStack_d0 = (int *)0x2;
  iStack_d4 = 0x78b9f7;
  FUN_0079e1a6();
  puStack_cc = (undefined *)0x0;
  piStack_d0 = (int *)0x0;
  iStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_e4 = 0x78ba04;
  uStack_e4 = FUN_0078bbe7();
  uStack_e8 = 1000;
  piStack_f0 = extraout_ECX + 0x35d;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_ec;
  piStack_f4 = (int *)0x78ba1c;
  FUN_00433bdf();
  *(int ***)(unaff_EBP + -0x14) = &piStack_f0;
  iStack_f8 = 0x78ba2e;
  piStack_f4 = extraout_ECX + 0x34f;
  FUN_0041160e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_f4 = (int *)0x78ba3d;
  piStack_f4 = (int *)FUN_00449713();
  iStack_f8 = 0x78ba45;
  iVar1 = FUN_00560272();
  extraout_ECX[0x78e] = iVar1;
  iStack_f8 = unaff_EBP + -0x10;
  iStack_fc = 0x78ba56;
  FUN_0079c916();
  *(undefined4 *)(unaff_EBP + -4) = 10;
  iStack_f8 = 0x78ba62;
  piVar3 = (int *)FUN_00429303();
  if (piVar3 == (int *)0x0) {
    iVar1 = -1;
    uVar4 = extraout_ECX_00;
  }
  else {
    iStack_f8 = 0x78ba6d;
    iVar1 = (**(code **)(*piVar3 + 0x1c))();
    uVar4 = extraout_ECX_01;
  }
  if ((((iVar1 == 10) || (iVar1 == 0xb)) && (*(char **)(unaff_EBP + -0x10) != (char *)0x0)) &&
     (**(char **)(unaff_EBP + -0x10) != '\0')) {
    iStack_f8 = extraout_ECX[0x5bf];
    piStack_11c = extraout_ECX + 0x35d;
    iStack_fc = extraout_ECX[0x78e];
    uStack_100 = 0;
    uStack_104 = 0;
    uStack_108 = 0;
    uStack_10c = 0;
    uStack_110 = 0;
    puStack_114 = (undefined *)0x3ed;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_118;
    piStack_120 = (int *)0x78bab0;
    uStack_118 = uVar4;
    FUN_00433bdf();
    *(int ***)(unaff_EBP + -0x14) = &piStack_11c;
    uStack_124 = 0x78babc;
    piStack_120 = extraout_ECX + 0x34f;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  else {
    if (((char *)extraout_ECX[0x360] == (char *)0x0) || (*(char *)extraout_ECX[0x360] == '\0'))
    goto LAB_0078bb44;
    uStack_100 = (uint)*(byte *)((int)extraout_ECX + 0xd8a);
    iStack_f8 = 0;
    iStack_fc = extraout_ECX[0x78e];
    uStack_104 = (uint)*(ushort *)(extraout_ECX + 0x362);
    uStack_108 = (uint)*(byte *)((int)extraout_ECX + 0xd86);
    uStack_10c = (uint)*(ushort *)(extraout_ECX + 0x361);
    uStack_110 = 0;
    puStack_114 = (undefined *)0x3ec;
    piStack_11c = extraout_ECX + 0x35d;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_118;
    piStack_120 = (int *)0x78bb1f;
    uStack_118 = uVar4;
    FUN_00433bdf();
    piStack_120 = extraout_ECX + 0x34f;
    *(int ***)(unaff_EBP + -0x14) = &piStack_11c;
    uStack_124 = 0x78bb31;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  piStack_120 = (int *)0x78bb3c;
  piStack_120 = (int *)FUN_00449713();
  uStack_124 = 0x78bb44;
  FUN_00560272();
LAB_0078bb44:
  iStack_f8 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_fc = 0x78bb54;
  FUN_0079d760();
  iStack_f8 = 0x78bb5b;
  iVar1 = FUN_0079d6ab();
  if (iVar1 != 0) {
    iStack_f8 = 0x78bb66;
    FUN_0079d33e();
  }
  iStack_f8 = 0x78bb6d;
  iVar1 = (**(code **)(*extraout_ECX + 0xc))();
  if (iVar1 == 0) {
    iVar1 = *extraout_ECX;
    iStack_f8 = 1;
    iStack_fc = 0;
    *(uint **)(unaff_EBP + 0xc) = &uStack_10c;
    uStack_110 = 0x80;
    puStack_114 = &DAT_0097bf68;
    uStack_118 = 0x78bb8d;
    FUN_006f5512();
    uStack_110 = 0x78bb92;
    (**(code **)(iVar1 + 0x18))();
    iVar1 = *extraout_ECX;
    uStack_110 = 1;
    puStack_114 = (undefined *)0x0;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_124;
    FUN_006f5512(&DAT_0097bf58,0x80);
    (**(code **)(iVar1 + 0x18))();
    iStack_f8 = 0x78bbba;
    FUN_007987ed();
    iStack_f8 = 1;
    iStack_fc = 0;
    uStack_100 = 0x78bbc4;
    FUN_00799ed9();
    extraout_ECX[0x609] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_f8 = 0x78bbd6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


