/* FUN_00634e64 - 0x00634e64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00634e64(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar6;
  int iStack_a0;
  undefined4 *puStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00635815();
  puVar4 = *(undefined4 **)(unaff_EBP + -0x1c);
  uVar2 = FUN_0042459a();
  *puVar4 = uVar2;
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  uVar2 = FUN_0042459a();
  *(undefined4 *)(iVar5 + 4) = uVar2;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 8) = 0;
  uVar3 = FUN_0042452b();
  *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x10) = uVar3 & 0xff;
  *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0xc) = uVar3 & 0xff;
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  sVar1 = FUN_00424561();
  *(int *)(iVar5 + 0x14) = (int)sVar1;
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  sVar1 = FUN_00424561();
  *(int *)(iVar5 + 0x18) = (int)sVar1;
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042452b();
  *(uint *)(iVar5 + 0x40) = uVar3 & 0xff;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_48 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_4c = 0x634f17;
  puVar4 = (undefined4 *)FUN_00679d86();
  uStack_4c = *puVar4;
  iStack_48 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_50 = 0x634f28;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_48 = 0x634f3f;
    FUN_00403384();
  }
  iStack_48 = 0x634f4e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x1c) + 0x3c)
             ,*(IBinding **)(unaff_EBP + -0x10));
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x28) = 0;
  iStack_48 = *(int *)(unaff_EBP + -0x1c);
  *(int *)(iStack_48 + 0x2c) = *(int *)(unaff_EBP + -0x18) + 800;
  *(int **)(unaff_EBP + 8) = &iStack_48;
  uStack_4c = 0x634f74;
  FUN_00635848();
  uStack_4c = 0x634f7c;
  FUN_006345e0();
  iStack_48 = 0x634f8a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_48 = 0x634f97;
  FUN_00403191();
  iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar5 == 0) {
    iStack_48 = 0x634fb0;
    FUN_00878dfb();
  }
  iStack_48 = 0x634fbb;
  piStack_6c = (int *)FUN_004113e5();
  iVar5 = *piStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    iStack_48 = 0x634fcf;
    FUN_00878dfb();
  }
  piStack_6c = (int *)*piStack_6c;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar5 = *piStack_6c;
  iStack_48 = *(int *)(unaff_EBP + -0x38);
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_64 = 0;
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_68 = 0;
  *(int **)(unaff_EBP + 8) = piStack_6c;
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_70 = (undefined4 *)0x634ff7;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    puStack_70 = (undefined4 *)&DAT_00963de8;
    iStack_74 = *(undefined4 *)(unaff_EBP + 8);
    uStack_7c = 0x635009;
    iStack_78 = iVar5;
    FUN_00878e09();
  }
  puStack_70 = (undefined4 *)0x635011;
  FUN_004125d9();
  puStack_70 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_74 = 0x63501e;
  puStack_70 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_70 < 0) {
    iStack_74 = 0x635029;
    FUN_00878dfb();
  }
  puStack_70 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_74 = 0x635036;
  puStack_70 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_70 < 0) {
    iStack_74 = 0x635041;
    FUN_00878dfb();
  }
  puStack_70 = &DAT_00980690;
  iStack_74 = 0x63504e;
  FUN_00403191();
  iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar5 == 0) {
    puStack_70 = (undefined4 *)0x80004003;
    iStack_74 = 0x635068;
    FUN_00878dfb();
  }
  puStack_70 = (undefined4 *)0x63506f;
  iStack_74 = FUN_0042a378();
  iStack_74 = iStack_74 + 800;
  puStack_70 = (undefined4 *)0x3;
  iStack_78 = 0x63507f;
  FUN_004031b7();
  iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar5 == 0) {
    puStack_70 = (undefined4 *)0x80004003;
    iStack_74 = 0x635094;
    FUN_00878dfb();
  }
  puStack_70 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_74 = 0x63509f;
  piStack_98 = (int *)FUN_004113e5();
  iVar5 = *piStack_98;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar5 == 0) {
    puStack_70 = (undefined4 *)0x80004003;
    iStack_74 = 0x6350af;
    FUN_00878dfb();
  }
  piStack_98 = (int *)*piStack_98;
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_78 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar5 = *piStack_98;
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_70 = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_90 = 0xff;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_94 = 0xff;
  *(int **)(unaff_EBP + 8) = piStack_98;
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_9c = (undefined4 *)0x6350dc;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    puStack_9c = (undefined4 *)&DAT_00963de8;
    iStack_a0 = *(int *)(unaff_EBP + 8);
    FUN_00878e09(iVar5);
  }
  puStack_9c = (undefined4 *)0x6350f6;
  FUN_004125d9();
  puStack_9c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a0 = 0x635103;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x63510e;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a0 = 0x63511b;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x635126;
    FUN_00878dfb();
  }
  puStack_9c = &DAT_00980690;
  iStack_a0 = 0x635134;
  FUN_00424aee();
  puStack_9c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_a0 = 0x635141;
  FUN_00424aee();
  puStack_9c = (undefined4 *)(unaff_EBP + -0x30);
  iStack_a0 = unaff_EBP + -0x40;
  uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18);
  uVar6 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00424df4(uVar6,uVar2);
  FUN_00424f2f(uVar6,uVar2);
  puStack_9c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_a0 = 0x635172;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x63517d;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a0 = 0x63518a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_a0 = 0x635195;
    puStack_9c = (undefined4 *)iVar5;
    FUN_00878dfb();
    puStack_9c = (undefined4 *)extraout_ECX_00;
  }
  *(int **)(unaff_EBP + 8) = &iStack_a0;
  iStack_a0 = (int)puStack_9c;
  FUN_006357b4(unaff_EBP + -0x20);
  FUN_006351d2();
  puStack_9c = (undefined4 *)0x6351b5;
  FUN_004125d9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_9c = (undefined4 *)0x6351c1;
  FUN_00635865();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


