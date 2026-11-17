/* ptr_0078b8e8 - 0x0078b8e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078b8e8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int *unaff_EBX;
  int unaff_EBP;
  code *unaff_ESI;
  undefined4 uStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  undefined *puStack_3c;
  int *piStack_38;
  undefined *puStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0x78b8ea;
  (*unaff_ESI)();
  puStack_8 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_4 = &DAT_00980690;
  iStack_c = 0x78b8f9;
  puStack_4 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_4 < 0) {
    puStack_8 = (undefined4 *)0x78b905;
    FUN_00878dfb();
  }
  puStack_4 = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  puStack_8 = (undefined4 *)0x78b912;
  (*unaff_ESI)();
  iStack_c = unaff_EBP + -0x28;
  puStack_8 = &DAT_00980690;
  uStack_10 = 0x78b91c;
  puStack_8 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_8 < 0) {
    iStack_c = 0x78b928;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBX[0x5fc];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    puStack_8 = (undefined4 *)0x80004003;
    iStack_c = 0x78b945;
    FUN_00878dfb();
  }
  piStack_30 = (int *)unaff_EBX[0x5fc];
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_c = *(undefined4 *)(unaff_EBP + -0x30);
  iVar1 = *piStack_30;
  puStack_8 = *(undefined4 **)(unaff_EBP + -0x2c);
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_20 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_1c = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_28 = 0;
  uStack_2c = 0;
  *(int **)(unaff_EBP + 8) = piStack_30;
  puStack_34 = (undefined *)0x78b96f;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    puStack_34 = &DAT_00963de8;
    piStack_38 = *(int **)(unaff_EBP + 8);
    piStack_40 = (int *)0x78b981;
    puStack_3c = (undefined *)iVar1;
    FUN_00878e09();
  }
  puStack_34 = (undefined *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_38 = (int *)0x78b98e;
  puStack_34 = (undefined *)FUN_00402bc3();
  if ((int)puStack_34 < 0) {
    piStack_38 = (int *)0x78b999;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_34 = (undefined *)(unaff_EBP + -0x38);
  piStack_38 = (int *)0x78b9a6;
  puStack_34 = (undefined *)FUN_00402bc3();
  if ((int)puStack_34 < 0) {
    piStack_38 = (int *)0x78b9b1;
    FUN_00878dfb();
  }
  if (unaff_EBX[0x5fc] == 0) {
    puStack_34 = (undefined *)0x80004003;
    piStack_38 = (int *)0x78b9c9;
    FUN_00878dfb();
  }
  piVar2 = (int *)unaff_EBX[0x5fc];
  puStack_34 = (undefined *)0xffffffff;
  puStack_3c = (undefined *)0x78b9d6;
  piStack_38 = piVar2;
  iStack_44 = (**(code **)(*piVar2 + 0xe0))();
  if (iStack_44 < 0) {
    puStack_3c = &DAT_00963df8;
    uStack_48 = 0x78b9e6;
    piStack_40 = piVar2;
    FUN_00878e09();
  }
  puStack_3c = (undefined *)(unaff_EBP + 0xb);
  piStack_40 = (int *)0x2;
  iStack_44 = 0x78b9f7;
  FUN_0079e1a6();
  puStack_3c = (undefined *)0x0;
  piStack_40 = (int *)0x0;
  iStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0x78ba04;
  uStack_54 = FUN_0078bbe7();
  uStack_58 = 1000;
  piStack_60 = unaff_EBX + 0x35d;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_5c;
  piStack_64 = (int *)0x78ba1c;
  FUN_00433bdf();
  *(int ***)(unaff_EBP + -0x14) = &piStack_60;
  iStack_68 = 0x78ba2e;
  piStack_64 = unaff_EBX + 0x34f;
  FUN_0041160e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_64 = (int *)0x78ba3d;
  piStack_64 = (int *)FUN_00449713();
  iStack_68 = 0x78ba45;
  iVar1 = FUN_00560272();
  unaff_EBX[0x78e] = iVar1;
  iStack_68 = unaff_EBP + -0x10;
  iStack_6c = 0x78ba56;
  FUN_0079c916();
  *(undefined4 *)(unaff_EBP + -4) = 10;
  iStack_68 = 0x78ba62;
  piVar2 = (int *)FUN_00429303();
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
    uVar3 = extraout_ECX;
  }
  else {
    iStack_68 = 0x78ba6d;
    iVar1 = (**(code **)(*piVar2 + 0x1c))();
    uVar3 = extraout_ECX_00;
  }
  if ((((iVar1 == 10) || (iVar1 == 0xb)) && (*(char **)(unaff_EBP + -0x10) != (char *)0x0)) &&
     (**(char **)(unaff_EBP + -0x10) != '\0')) {
    iStack_68 = unaff_EBX[0x5bf];
    piStack_8c = unaff_EBX + 0x35d;
    iStack_6c = unaff_EBX[0x78e];
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    puStack_84 = (undefined *)0x3ed;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_88;
    piStack_90 = (int *)0x78bab0;
    uStack_88 = uVar3;
    FUN_00433bdf();
    *(int ***)(unaff_EBP + -0x14) = &piStack_8c;
    uStack_94 = 0x78babc;
    piStack_90 = unaff_EBX + 0x34f;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  else {
    if (((char *)unaff_EBX[0x360] == (char *)0x0) || (*(char *)unaff_EBX[0x360] == '\0'))
    goto LAB_0078bb44;
    uStack_70 = (uint)*(byte *)((int)unaff_EBX + 0xd8a);
    iStack_68 = 0;
    iStack_6c = unaff_EBX[0x78e];
    uStack_74 = (uint)*(ushort *)(unaff_EBX + 0x362);
    uStack_78 = (uint)*(byte *)((int)unaff_EBX + 0xd86);
    uStack_7c = (uint)*(ushort *)(unaff_EBX + 0x361);
    uStack_80 = 0;
    puStack_84 = (undefined *)0x3ec;
    piStack_8c = unaff_EBX + 0x35d;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_88;
    piStack_90 = (int *)0x78bb1f;
    uStack_88 = uVar3;
    FUN_00433bdf();
    piStack_90 = unaff_EBX + 0x34f;
    *(int ***)(unaff_EBP + -0x14) = &piStack_8c;
    uStack_94 = 0x78bb31;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  piStack_90 = (int *)0x78bb3c;
  piStack_90 = (int *)FUN_00449713();
  uStack_94 = 0x78bb44;
  FUN_00560272();
LAB_0078bb44:
  iStack_68 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_6c = 0x78bb54;
  FUN_0079d760();
  iStack_68 = 0x78bb5b;
  iVar1 = FUN_0079d6ab();
  if (iVar1 != 0) {
    iStack_68 = 0x78bb66;
    FUN_0079d33e();
  }
  iStack_68 = 0x78bb6d;
  iVar1 = (**(code **)(*unaff_EBX + 0xc))();
  if (iVar1 == 0) {
    iVar1 = *unaff_EBX;
    iStack_68 = 1;
    iStack_6c = 0;
    *(uint **)(unaff_EBP + 0xc) = &uStack_7c;
    uStack_80 = 0x80;
    puStack_84 = &DAT_0097bf68;
    uStack_88 = 0x78bb8d;
    FUN_006f5512();
    uStack_80 = 0x78bb92;
    (**(code **)(iVar1 + 0x18))();
    iVar1 = *unaff_EBX;
    uStack_80 = 1;
    puStack_84 = (undefined *)0x0;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_94;
    FUN_006f5512(&DAT_0097bf58,0x80);
    (**(code **)(iVar1 + 0x18))();
    iStack_68 = 0x78bbba;
    FUN_007987ed();
    iStack_68 = 1;
    iStack_6c = 0;
    uStack_70 = 0x78bbc4;
    FUN_00799ed9();
    unaff_EBX[0x609] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x78bbd6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


